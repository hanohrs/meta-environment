package metastudio;

/*{{{  imports */

import metastudio.graph.*;

import java.util.*;
import java.util.List;
import java.io.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import javax.swing.text.*;

import aterm.*;

/*}}}  */

public class MetaStudio
  extends JFrame
  implements UserInterfaceTif, Runnable, ModuleSelectionListener
{
  //{{{ constants

  private static final String PREF_TREEPANE_BACKGROUND = "treepane.background";
  private static final String PREF_MSGPANE_BACKGROUND = "messagepane.background";
  private static final String PREF_MSGPANE_STATUS = "messagepane.status";
  private static final String PREF_GRAPHPANE_BACKGROUND = "graphpane.background";
  private static final String PREF_GRAPHPANE_SCALES = "graphpane.scales";
  private static final String PREF_STATUSPANE_BACKGROUND = "statuspane.background";

  private static final String PREF_TOOLBAR_OPEN_MODULE = "toolbar.open-module";
  private static final String PREF_TOOLBAR_NEW_MODULE = "toolbar.new-module";
  private static final String PREF_TOOLBAR_SAVE_ALL = "toolbar.save-all";
  private static final String PREF_TOOLBAR_CLEAR_ALL = "toolbar.clear-all";
  private static final String PREF_TOOLBAR_QUIT = "toolbar.quit";

  private static final String PREF_TOOLBAR_TIDE = "toolbar.tide";

  private static final int STATUS_MESSAGE = 0;
  private static final int STATUS_ERROR   = 1;

  private static final int NODE_BORDER_WIDTH = 5;
  private static final int NODE_BORDER_HEIGHT = 5;

  private static final Color[] STATUS_COLOR =
  {
    Color.black,
    Color.red
  };

  //}}}

  public static ATermFactory factory;

  private int prefix = 0;

  private UserInterfaceBridge bridge;

  //{{{ UI components

  //private JLabel msgLabel;
  private JMenuBar menuBar;
  private JMenu    fileMenu;
  private JToolBar toolBar;
  private List moduleActions;
  private JList moduleList;
  private JScrollPane graphPane;
  private JPopupMenu modulePopup;

  private JScrollPane historyPane;

  private StyleContext historyStyles;
  private DefaultStyledDocument historyDoc;
  private JTextPane history;
  private Style styleError;
  private Style styleWarning;
  private Style styleMessage;
  private JLabel statusBar;
  private JCheckBox statusLog;
  private List statusMessages;

  private Action actionOpenModule;
  private Action actionNewModule;
  private Action actionSaveAll;
  private Action actionClearAll;
  private Action actionQuit;

  private Graph graph;
  private GraphPanel graphPanel;

  private ModuleStatusPanel moduleStatus;

  private JCheckBox tideBox;
  private JComboBox scaleBox;

  //}}}

  private String currentModule;
  private ModuleManager moduleManager;

  //{{{ public static final void main(String[] args)

  public static final void main(String[] args)
    throws IOException
  {
    MetaStudio studio = new MetaStudio(args);
    studio.bridge.run();
    System.out.println("Thank you for using MetaStudio");
  }

  //}}}
  
  //{{{ private static final Integer[] intObjectArray(int[] input)

  private static final Integer[] intObjectArray(int[] input)
  {
    Integer[] result = new Integer[input.length];
    for (int i=0; i<input.length; i++) {
      result[i] = new Integer(input[i]);
    }

    return result;
  }

  //}}}

  //{{{ public MetaStudio(String[] args)

  public MetaStudio(String[] args) throws IOException
  {
    Color color;

    factory = new aterm.pure.PureFactory();
    moduleManager = new ModuleManager();
    statusMessages = new LinkedList();

    //{{{ Read preferences

    InputStream propertyStream
      = getClass().getResourceAsStream("/META-INF/default.properties");
    Properties properties = new Properties();
    properties.load(propertyStream);
    Preferences.initialize("MetaStudio Preferences", properties);
    try {
      File file = new File(System.getProperty("user.home"), ".metarc");
      propertyStream = new FileInputStream(file);
      Preferences.load(propertyStream);
    } catch (IOException e) {
      // No .metarc file
      //warning("No ~/.metarc found");
    }

    //}}}

    //{{{ Create ToolBus bridge

    bridge = new UserInterfaceBridge(factory, this);
    bridge.init(args);
    bridge.connect();
    bridge.setLockObject(getTreeLock());

    //}}}
    //{{{ Handle 'close' requests

    addWindowListener(new WindowAdapter() {
       public void windowClosing(WindowEvent ev) {
         doQuit();
       }
    });

    //}}}
    //{{{ Create actions

    actionNewModule =
      new AbstractAction(Preferences.getString(PREF_TOOLBAR_NEW_MODULE
					       + ".text"),
			 Preferences.getIcon(PREF_TOOLBAR_NEW_MODULE
					     + ".icon"))
      {
	public void actionPerformed(ActionEvent event)
	{
	  doOpenModule(true);
	}
      };

    actionOpenModule =
      new AbstractAction(Preferences.getString(PREF_TOOLBAR_OPEN_MODULE
					       + ".text"),
			 Preferences.getIcon(PREF_TOOLBAR_OPEN_MODULE
					     + ".icon"))
      {
	public void actionPerformed(ActionEvent event)
	{
	  doOpenModule(false);
	}
      };

    actionSaveAll =
      new AbstractAction(Preferences.getString(PREF_TOOLBAR_SAVE_ALL
					       + ".text"),
			 Preferences.getIcon(PREF_TOOLBAR_SAVE_ALL
					     + ".icon"))
      {
	public void actionPerformed(ActionEvent event)
	{
	  doSaveAll();
	}
      };

    actionClearAll =
      new AbstractAction(Preferences.getString(PREF_TOOLBAR_CLEAR_ALL
					       + ".text"),
			 Preferences.getIcon(PREF_TOOLBAR_CLEAR_ALL
					     + ".icon"))
      {
	public void actionPerformed(ActionEvent event)
	{
	  doClearAll();
	}
      };


    actionQuit =
      new AbstractAction(Preferences.getString(PREF_TOOLBAR_QUIT
					       + ".text"),
			 Preferences.getIcon(PREF_TOOLBAR_QUIT
					     + ".icon"))
      {
	public void actionPerformed(ActionEvent event)
	{
	  doQuit();
	}
      };


    //}}}
    //{{{ Create module menu

    modulePopup = new JPopupMenu("Module Menu");

    modulePopup.addPopupMenuListener(new PopupMenuListener()
      {
	public void popupMenuCanceled(PopupMenuEvent event)
	{
	}

	public void popupMenuWillBecomeVisible(PopupMenuEvent event)
	{
	  graphPanel.setDragEnabled(false);
	}

	public void popupMenuWillBecomeInvisible(PopupMenuEvent event)
	{
	  graphPanel.setDragEnabled(true);
	}
      });

    modulePopup.add(new AbstractAction("Edit Syntax")
      {
	public void actionPerformed(ActionEvent event)
	{
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    bridge.postEvent(factory.make("edit-module(<str>)", (String)values[i]));
	  }
	}
      });

    modulePopup.add(new AbstractAction("Edit Equations")
      {
	public void actionPerformed(ActionEvent event)
	{
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    bridge.postEvent(factory.make("edit-eqs-module(<str>)", (String)values[i]));
	  }
	}
      });


    modulePopup.add(new AbstractAction("Edit Term")
      {
	public void actionPerformed(ActionEvent event)
	{
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    doEditTerm((String)values[i]);
	  }
	}
      });

    modulePopup.addSeparator();

    modulePopup.add(new AbstractAction("Save Module")
      {
        public void actionPerformed(ActionEvent event)
        {
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    bridge.postEvent(factory.make("save-module(<str>)", (String)values[i]));
	  }
        }
      });

    modulePopup.add(new AbstractAction("Revert Module")
      {
        public void actionPerformed(ActionEvent event)
        {
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    bridge.postEvent(factory.make("revert-module(<str>)", (String)values[i]));
	  }
        }
      });

    modulePopup.add(new AbstractAction("Delete Module")
      {
        public void actionPerformed(ActionEvent event)
        {
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    bridge.postEvent(factory.make("delete-module(<str>)", (String)values[i]));
	  }
        }
      });

    modulePopup.addSeparator();

    modulePopup.add(new AbstractAction("Compile Module")
      {
        public void actionPerformed(ActionEvent event)
        {
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    bridge.postEvent(factory.make("compile-module(<str>)", (String)values[i]));
	  }
        }
      });

    modulePopup.add(new AbstractAction("Dump Equations")
      {
        public void actionPerformed(ActionEvent event)
        {
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    bridge.postEvent(factory.make("dump-equations(<str>)", (String)values[i]));
	  }
        }
      });

    modulePopup.add(new AbstractAction("Dump Parse Table")
      {
        public void actionPerformed(ActionEvent event)
        {
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    bridge.postEvent(factory.make("dump-parse-table(<str>)", (String)values[i]));
	  }
        }
      });

    modulePopup.addSeparator();

    modulePopup.add(new AbstractAction("Rename Module")
      {
        public void actionPerformed(ActionEvent event)
        {
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    doRenameModule((String)values[i]);
	  }
        }
      });

    modulePopup.add(new AbstractAction("Print Module")
      {
        public void actionPerformed(ActionEvent event)
        {
	  Object[] values = moduleList.getSelectedValues();
	  for (int i=0; i<values.length; i++) {
	    bridge.postEvent(factory.make("print-module(<str>)", (String)values[i]));
	  }
        }
      });

    //}}}
    //{{{ Create menubar

    menuBar = new JMenuBar();

    fileMenu = new JMenu("File");
    fileMenu.add(actionOpenModule).setIcon(null);
    fileMenu.add(actionNewModule).setIcon(null);
    fileMenu.add(actionSaveAll).setIcon(null);
    fileMenu.addSeparator();
    fileMenu.add(actionClearAll).setIcon(null);
    fileMenu.addSeparator();
    fileMenu.add(actionQuit).setIcon(null);


    menuBar.add(fileMenu);
    setJMenuBar(menuBar);

    //}}}
    //{{{ Create toolbar

    toolBar = new JToolBar();
    //MyToolbar.setClientProperty("JToolBar.isRollover", Boolean.TRUE);

    addTool(actionNewModule, PREF_TOOLBAR_NEW_MODULE);
    addTool(actionOpenModule, PREF_TOOLBAR_OPEN_MODULE);
    addTool(actionSaveAll, PREF_TOOLBAR_SAVE_ALL);
    toolBar.addSeparator();
    addTool(actionClearAll, PREF_TOOLBAR_CLEAR_ALL);
    toolBar.addSeparator();
    addTool(actionQuit, PREF_TOOLBAR_QUIT);

    toolBar.add(Box.createHorizontalGlue());


    tideBox = new JCheckBox(Preferences.getIcon(PREF_TOOLBAR_TIDE
						+ ".off.icon"));
    tideBox.setSelectedIcon(Preferences.getIcon(PREF_TOOLBAR_TIDE
						+ ".on.icon"));
    toolBar.add(tideBox);
    tideBox.addActionListener(new ActionListener() {
	public void actionPerformed(ActionEvent event)
	{
	  toggleTide();
	}
    });

    /*
    if ("true".equals(System.getProperty("tide.enabled"))) {
      tideBox.setToolTipText("Toggle tide debugger when rewriting");
    } else {
      tideBox.setEnabled(false);
      tideBox.setToolTipText("Tide support disabled (configure with --with-tide=...)");
    }
    */

    String scaleList = Preferences.getString(PREF_GRAPHPANE_SCALES);
    Vector scales = new Vector();
    StringTokenizer t = new StringTokenizer(scaleList, ",");
    while (t.hasMoreTokens()) {
      String scale = t.nextToken();
      scales.add(scale);
    }

    scaleBox = new JComboBox(scales) {
      public Dimension getMaximumSize() {
	return getPreferredSize();
      }
    };
    scaleBox.setSelectedItem(Preferences.getString(PREF_GRAPHPANE_SCALES+".default"));

    //scaleBox.setEditable(true);
    ActionListener listener = new ActionListener() {
      public void actionPerformed(ActionEvent event)
      {
	String value = scaleBox.getSelectedItem().toString();
	// Strip off '%' sign
	if (value.charAt(value.length()-1) == '%') {
	  value = value.substring(0, value.length()-1);
	}
	int percentage = Integer.parseInt(value);
	graphPanel.setScale(percentage);
      }
    };

    scaleBox.addActionListener(listener);

    toolBar.add(scaleBox);

    //}}}
    //{{{ Create module list

    moduleList = new JList();
    moduleList.setModel(moduleManager.getListModel());
    ListSelectionListener moduleListListener
      = new ListSelectionListener()
      {
	public void valueChanged(ListSelectionEvent event)
	{
	  /*
	  int index = event.getLastIndex();
	  String selectedModule
	    = (String)moduleList.getModel().getElementAt(index);
	    */
	  String selectedModule = (String)moduleList.getSelectedValue();
	  moduleManager.selectModule(moduleManager.getModule(selectedModule));
	}
      };
    moduleList.addListSelectionListener(moduleListListener);

    moduleList.addMouseListener(new MouseAdapter() {
				  public void mousePressed(MouseEvent e) {
				    checkModulePopup(e);
				  }
				  public void mouseClicked(MouseEvent e) {
				    checkModulePopup(e);
				  }
				}
			       );

    JScrollPane listPane = new JScrollPane(moduleList);

    color = Preferences.getColor(PREF_TREEPANE_BACKGROUND);
    moduleList.setBackground(color);

    //}}}
    //{{{ Create module graph

    resetGraph();

    graphPanel = new ModuleGraphPanel(moduleManager);


    graphPanel.addMouseListener(new MouseAdapter() {
				  public void mousePressed(MouseEvent e) {
				    checkModulePopup(e);
				  }
				  public void mouseClicked(MouseEvent e) {
				    checkModulePopup(e);
				  }
				}
			       );


    graphPane = new JScrollPane(graphPanel);

    color = Preferences.getColor(PREF_GRAPHPANE_BACKGROUND);
    graphPanel.setBackground(color);

    //graphPane.setViewportView(graphPanel);

    //}}}
    //{{{ Create message history

    historyStyles = new StyleContext();
    styleMessage = initStyle("messagepane.message");
    styleWarning = initStyle("messagepane.warning");
    styleError = initStyle("messagepane.error");

    historyDoc = new DefaultStyledDocument(historyStyles);
    history = new JTextPane(historyDoc);
    history.setEditable(false);

    color = Preferences.getColor(PREF_MSGPANE_BACKGROUND);
    history.setBackground(color);

    statusBar = new JLabel("idle");
    statusLog = new JCheckBox("Log Status");
    statusLog.setSelected(Preferences.getBoolean(PREF_MSGPANE_STATUS + ".log"));

    //}}}
    //{{{ Create module status panel

    moduleStatus = new ModuleStatusPanel(moduleManager);
    color = Preferences.getColor(PREF_STATUSPANE_BACKGROUND);
    moduleStatus.setBackground(color);

    //}}}

    //msgLabel = new JLabel("Welcome to MetaStudio!");
    moduleManager.addModuleSelectionListener(this);

    //{{{ Glue UI components

    JPanel treePanel    = new JPanel();

    historyPane = new JScrollPane(history);

    JPanel historyPanel = new JPanel();
    historyPanel.setLayout(new BorderLayout());
    JPanel statusBarPanel = new JPanel();
    statusBarPanel.setLayout(new BorderLayout());

    color = Preferences.getColor(PREF_MSGPANE_STATUS + ".background");
    //statusBar.setBackground(color);
    statusLog.setBackground(color);
    statusBarPanel.setBackground(color);
    color = Preferences.getColor(PREF_MSGPANE_STATUS + ".foreground");
    //statusBar.setForeground(color);
    statusLog.setForeground(color);
    statusBarPanel.setForeground(color);
    Font font = Preferences.getFont(PREF_MSGPANE_STATUS + ".font");
    statusBar.setFont(font);
    statusLog.setFont(font);
    //statusBarPanel.setFont(font);

    statusBarPanel.add(statusBar, BorderLayout.CENTER);
    statusBarPanel.add(statusLog, BorderLayout.EAST);
    historyPanel.add(historyPane, BorderLayout.CENTER);
    historyPanel.add(statusBarPanel, BorderLayout.SOUTH);

    //historyPane.setMinimumSize(new Dimension(50, 100));

    Container content = getContentPane();

    treePanel.setLayout(new BorderLayout());
    treePanel.add(listPane, BorderLayout.CENTER);

    JSplitPane leftPanel = new JSplitPane(JSplitPane.VERTICAL_SPLIT,
					  treePanel, moduleStatus);
    leftPanel.setResizeWeight(0.8);

    JSplitPane rightPanel = new JSplitPane(JSplitPane.VERTICAL_SPLIT,
					   graphPane, historyPanel);
    rightPanel.setResizeWeight(0.8);

    JSplitPane mainPanel = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT,
					  leftPanel, rightPanel);


    content.setLayout(new BorderLayout());
    content.add(toolBar, BorderLayout.NORTH);
    content.add(mainPanel, BorderLayout.CENTER);

    //content.add(msgLabel, BorderLayout.SOUTH);

    //}}}

    //{{{ Actually show this JFrame

    Dimension screenSize = getToolkit().getScreenSize();
    int width = 800;
    int height = 600;
    int x = (screenSize.width-width)/2;
    int y = (screenSize.height-height)/2;

    setSize(width, height);
    setLocation(x, y);

    setVisible(true);

    mainPanel.setDividerLocation(0.3);
    leftPanel.setDividerLocation(0.65);
    rightPanel.setDividerLocation(0.8);

    //}}}
  }

  //}}}
  //{{{ private void initStyles()

  private Style initStyle(String prop)
  {
    Style style = historyStyles.addStyle(null, null);

    Font font = Preferences.getFont(prop + ".font");

    StyleConstants.setFontFamily(style, font.getFamily());
    StyleConstants.setFontSize(style, font.getSize());
    StyleConstants.setItalic(style, font.isItalic());
    StyleConstants.setBold(style, font.isBold());

    Color background = Preferences.getColor(prop + ".background");
    StyleConstants.setBackground(style, background);
    Color foreground = Preferences.getColor(prop + ".foreground");
    StyleConstants.setForeground(style, foreground);

    return style;
  }

  //}}}

  //{{{ private void addTool(Action action, String prefKey)

  private void addTool(Action action, String prefKey)
  {
    JButton button = toolBar.add(action);
    String tip = Preferences.getString(prefKey + ".text");
    button.setToolTipText(tip);
  }

  //}}}

  //{{{ private void resetGraph()

  private void resetGraph()
  {
    graph = new Graph(factory.parse("graph([],[])"));
  }

  //}}}
  //{{{ public void run()

  public void run()
  {
    layoutGraph();
  }

  //}}}

  //{{{ public void finishedOpeningModules(ATerm module)

  public void finishedOpeningModules(ATerm module)
  {
    String moduleName = ((ATermAppl)module).getName();
    addMessage(styleMessage, null, "Module " + moduleName + " opened.");
  }

  //}}}
  //{{{ public void moduleInfo(String module, ATerm info)

  public void moduleInfo(String module, ATerm info)
  {
    ATermList pairs = (ATermList)info;
    List entries = new LinkedList();

    while (!pairs.isEmpty()) {
      ATermList pair = (ATermList)pairs.getFirst();

      String name = pair.getFirst().toString();
      
      String value;
      ATerm valueTerm = pair.getNext().getFirst();
      if (valueTerm.getType() == ATerm.APPL) {
	value = ((ATermAppl)valueTerm).getName();
      } else {
	value = valueTerm.toString();
      }
      String[] entry = { name, value };
      entries.add(entry);

      pairs = pairs.getNext();
    }

    moduleStatus.setModuleInfo(module, entries);
  }

  //}}}

  //{{{ void addMessage(Style style, String id, String message)

  void addMessage(Style style, String id, String message)
  {
    Object lock = history.getTreeLock();
    synchronized (lock) {
      try {
	historyDoc.insertString(historyDoc.getLength(),
				message + "\n", style);
	int start = historyDoc.getLength();
	Rectangle rect = history.modelToView(start);
	if (rect != null) {
	  JViewport viewport = historyPane.getViewport();

	  // Make rectangle relative to viewport
	  rect.x -= viewport.getViewPosition().x;
	  rect.y -= viewport.getViewPosition().y;
	  viewport.scrollRectToVisible(rect);
	}
      } catch (BadLocationException e) {
	System.out.println("bad location: " + e.getMessage());
      }
    }
  }

  //}}}
  //{{{ void clearStatus(String id)

  void clearStatus(String id)
  {
    ListIterator iter = statusMessages.listIterator();
    while (iter.hasNext()) {
      String[] pair = (String[])iter.next();
      if (pair[0].equals(id)) {
	iter.remove();
      }
    }

    if (statusMessages.size() == 0) {
      statusBar.setText("idle");
    } else {
      statusBar.setText(((String[])statusMessages.get(0))[1]);
    }
  }

  //}}}
  //{{{ String formatString(String format, ATermList args)

  String formatString(String format, ATermList args)
  {
    int index;
    String prefix = "";
    String postfix = format;
    while ((index = postfix.indexOf("%s")) != -1) {
      prefix += postfix.substring(0, index);
      switch (postfix.charAt(index+1)) {
	case 'd':
	  prefix += args.getFirst().toString();
	  break;
	case 's':
	  prefix += ((ATermAppl)args.getFirst()).getName();
	  break;
      }
      postfix = postfix.substring(index+2);
      args = args.getNext();
    }
    return prefix + postfix;
  }

  //}}}

  //{{{ public void addStatus(ATerm id, String message)

  public void addStatus(ATerm id, String message)
  {
    String ids = id.toString();
    if (statusLog.isSelected()) {
      addMessage(styleMessage, ids, message);
    }
    statusBar.setText(message);
    String[] pair = { ids, message };
    statusMessages.add(pair);
  }

  //}}}
  //{{{ public void addStatusf(ATerm id, String format, ATerm args)

  public void addStatusf(ATerm id, String format, ATerm args)
  {
    String message = formatString(format, (ATermList)args);
    addStatus(id, message);
  }

  //}}}
  //{{{ public void endStatus(ATerm id)

  public void endStatus(ATerm id)
  {
    clearStatus(id.toString());
  }

  //}}}

  //{{{ public void errorf(String format, ATerm args)

  public void errorf(String format, ATerm args)
  {
    String message = formatString(format, (ATermList)args);
    addMessage(styleError, null, message);
  }

  //}}}
  //{{{ public void error(String message)

  public void error(String message)
  {
    addMessage(styleError, null, message);
  }

  //}}}
  //{{{ public void warning(String message)

  public void warning(String message)
  {
    addMessage(styleWarning, null, message);
  }

  //}}}

  //{{{ private Module addModule(String name)

  private Module addModule(String name)
  {
    Module module = moduleManager.getModule(name);
    if (module == null) {
      module = new Module(name);
      moduleManager.addModule(module);
    }

    //moduleManager.selectModule(module);
    return module;
  }

  //}}}
  //{{{ private void setModules(ATermList moduleList)

  private void setModules(ATermList moduleList)
  {
    moduleManager.clearModules();

    while (!moduleList.isEmpty()) {
      ATermAppl moduleTerm = (ATermAppl)moduleList.getFirst();
      moduleList = moduleList.getNext();
      String name = moduleTerm.getName();
      addModule(name);
    }
  }

  //}}}
  //{{{ private void setImports(ATermList importList)

  private void setImports(ATermList importList)
  {
    while (!importList.isEmpty()) {
      ATermList edge = (ATermList)importList.getFirst();
      importList = importList.getNext();

      ATermAppl fromTerm = (ATermAppl)edge.getFirst();
      String from = fromTerm.getName();
      Module moduleFrom = moduleManager.getModule(from);
      if (moduleFrom == null) {
	moduleFrom = addModule(from);
      }

      ATermAppl toTerm = (ATermAppl)edge.elementAt(1);
      String to = toTerm.getName();
      Module moduleTo = moduleManager.getModule(to);
      if (moduleTo == null) {
	moduleTo = addModule(to);
      }

      moduleFrom.addChild(to);
      moduleTo.addParent(from);
    }
  }

  //}}}
  //{{{ public void deleteModule(String module)

  public void deleteModule(String name)
  {
    Module module = moduleManager.getModule(name);
    if (module != null) {
      moduleManager.removeModule(name);
      graph.deleteNode(name);
      layoutGraph();
      moduleManager.selectModule(currentModule);
    }
  }

  //}}}
  //{{{ public void newGraph(ATerm moduleList, ATerm importRelations)

  public void newGraph(ATerm moduleList, ATerm importRelations)
  {
    setModules((ATermList)moduleList);
    setImports((ATermList)importRelations);

    graph = Graph.fromImportList((ATermList)moduleList,
				 (ATermList)importRelations);
    layoutGraph();
  }

  //}}}
  //{{{ public void layoutGraph()

  public void layoutGraph()
  {
    final FontMetrics metrics =
      graphPanel.getFontMetrics(Preferences.getFont(GraphPanel.PREF_NODE_FONT));

    NodeSizer sizer =
      new NodeSizer() {
	public int getWidth(Node node) {
	  return metrics.stringWidth(node.getName()) + NODE_BORDER_WIDTH*2;
	}
	public int getHeight(Node node) {
	  return metrics.getHeight() + NODE_BORDER_HEIGHT*2;
	}
      };

    graph.sizeNodes(sizer);

    bridge.postEvent(factory.make("layout-graph(<term>)", graph.toTerm()));
  }

  //}}}

  //{{{ public void graphLayouted(ATerm graphTerm)

  public void graphLayouted(ATerm graphTerm)
  {
    graph = new Graph(graphTerm);
    graphPanel.setGraph(graph);
    repaint();
  }

  //}}}

  //{{{ public void moduleSelected(Module module)

  public void moduleSelected(Module module)
  {
    if (module == null) {
      moduleList.clearSelection();
    } else {
      moduleList.setSelectedValue(module.getName(), true);
      bridge.postEvent(factory.make("get-module-info(<str>)",
				    module.getName()));
    }
    //System.out.println("MetaStudio: moduleSelected " + module.getName());
  }

  //}}}

  //{{{ public void recAckEvent(ATerm event)

  public void recAckEvent(ATerm event)
  {
  }

  //}}}
  //{{{ public void recTerminate(ATerm t0)

  public void recTerminate(ATerm t0)
  {
    System.exit(0);
  }

  //}}}

  //{{{ void checkModulePopup(MouseEvent e)

  void checkModulePopup(MouseEvent e)
  {
    if (e.isPopupTrigger()) {
      if (e.getSource() == moduleList) {
	currentModule = (String)moduleList.getSelectedValue();
	if (currentModule != null) {
	  modulePopup.show(moduleList, e.getX(), e.getY());
	}
      } else if (e.getSource() == graphPanel) {
	int x = e.getX();
	int y = e.getY();
	Node node = graphPanel.getNodeAt(x, y);
	if (node != null) {
	  Module module = moduleManager.getModule(node.getName());
	  moduleManager.selectModule(module);
	  if (module != null) {
	    modulePopup.show(graphPanel, x, y);
	  }
	}
      }
    }
  }

  //}}}

  //{{{ void doOpenModule(boolean isnew)

  void doOpenModule(boolean isnew)
  {
    String extension = Preferences.getString("module.extension");
    String[] exts = { extension };
    String description = Preferences.getString("module.extension.description");
    JFileChooser chooser = new JFileChooser(System.getProperty("user.dir"));
    chooser.setFileFilter(new ExtensionFilter(exts, description));
    String label;
    if (isnew) {
      label = Preferences.getString("text.new-module");
    } else {
      label = Preferences.getString("text.open-module");
    }
    int option = chooser.showDialog(this, label);
    if (option == JFileChooser.APPROVE_OPTION) {
      File file = chooser.getSelectedFile();
      if (file != null) {
	String path = file.getPath();
	String module = file.getName();
	if (module.endsWith(extension)) {
	  module = module.substring(0, module.length()-extension.length());
	}
	if (path.endsWith(extension)) {
	  path = path.substring(0, path.length()-extension.length());
	}

	String func;
	if (isnew) {
	  func = "new-module";
	} else {
	  func = "open-module";
	  // With open-module, extension needs to be present?
	  path += extension;
	}

	ATerm event = factory.make(func + "(<str>,<str>)", path, module);

	bridge.postEvent(event);
      }
    }
  }

  //}}}
  //{{{ void doSaveAll()

  void doSaveAll()
  {
    bridge.sendEvent(factory.parse("save-all"));
  }

  //}}}
  //{{{ void doClearAll()

  void doClearAll()
  {
    bridge.sendEvent(factory.parse("clear-all"));
    resetGraph();
    graphPanel.setGraph(graph);
    moduleManager.clearModules();
  }

  //}}}
  //{{{ void doQuit()

  void doQuit()
  {
    bridge.sendEvent(factory.parse("quit"));
  }

  //}}}

  //{{{ void toggleTide()

  void toggleTide()
  {
    warning("Tide is not yet supported in this release of MetaStudio");
    /*
    bridge.postEvent(factory.make("debugging(<id>)",
				  tideBox.isSelected() ? "on" : "off"));
				  */
  }

  //}}}

  //{{{ void doRenameModule(String module)

  void doRenameModule(String module)
  {
    String newname = (String)JOptionPane.showInputDialog(this, "New module name:");
    if (newname != null) {
      bridge.postEvent(factory.make("rename-module(<str>,<str>)", module, newname));
    }
  }

  //}}}
  //{{{ void doEditTerm(String module)

  void doEditTerm(String module)
  {
    JFileChooser chooser = new JFileChooser(System.getProperty("user.dir"));
    chooser.setFileFilter(new ExtensionFilter(new String[] { ".trm" },
					      "Term (*.trm)"));
    int option = chooser.showOpenDialog(this);
    if (option == JFileChooser.APPROVE_OPTION) {
      File file = chooser.getSelectedFile();
      if (file != null) {
	bridge.postEvent(factory.make("edit-term(<str>,<str>)",
				      module, file.getAbsolutePath()));
      }
    }
  }

  //}}}
}

