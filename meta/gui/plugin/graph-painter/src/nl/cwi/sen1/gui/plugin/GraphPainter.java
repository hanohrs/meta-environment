package nl.cwi.sen1.gui.plugin;

import java.awt.FontMetrics;
import java.awt.event.ActionEvent;
import java.awt.event.MouseEvent;
import java.util.HashMap;
import java.util.Map;

import javax.swing.AbstractAction;
import javax.swing.ButtonGroup;
import javax.swing.JCheckBoxMenuItem;
import javax.swing.JMenu;
import javax.swing.JMenuItem;
import javax.swing.JRadioButtonMenuItem;
import javax.swing.JSeparator;

import nl.cwi.sen.api.graph.graph.Factory;
import nl.cwi.sen.api.graph.graph.types.Graph;
import nl.cwi.sen1.gui.Studio;
import nl.cwi.sen1.gui.StudioComponentAdapter;
import nl.cwi.sen1.gui.StudioPlugin;
import nl.cwi.sen1.util.PopupHandler;
import nl.cwi.sen1.util.Preferences;
import nl.cwi.sen1.util.StudioPopupMenu;
import aterm.ATerm;
import aterm.ATermList;
import aterm.pure.PureFactory;

public class GraphPainter implements StudioPlugin, GraphPainterTif {
	private static final String TOOL_NAME = "graph-painter";

	private static final String RESOURCE_DIR = "/resources";

	private Studio studio;

	private Factory graphFactory;

	private Map graphs;

	private Map forcePanels;

	private Preferences preferences;

	private GraphPainterBridge bridge;

	private MouseEvent popupEvent;

	public GraphPainter() {
		String propertyPath = new String(RESOURCE_DIR + '/' + TOOL_NAME
				+ ".properties");
		this.preferences = new Preferences(getClass().getResourceAsStream(
				propertyPath));
		this.graphs = new HashMap();
		this.forcePanels = new HashMap();
	}

	public void initStudioPlugin(Studio studio) {
		this.studio = studio;
		graphFactory = new Factory((PureFactory) studio.getATermFactory());
		bridge = new GraphPainterBridge(studio.getATermFactory(), this);
		bridge.setLockObject(this);
		studio.connect(getName(), bridge);
	}

	public void displayGraph(String id, ATerm graphTerm) {
		GraphPanel panel = getPanel(id);
		if (panel != null) {
			Graph graph = graphFactory.GraphFromTerm(graphTerm);
			panel.setGraph(new nl.cwi.sen1.gui.plugin.GraphAdapter(graph));
		} else {
			System.err.println("panel not found");
		}
	}

	private GraphPanel createPanel(final String id) {
		GraphPanel panel = getPanel(id);

		if (panel == null) {
			panel = new GraphPanel(id, preferences);
			StudioComponentAdapter comp = new StudioComponentAdapter(id, panel);
			panel.setGraphPanelListener(new GraphPanelListener() {
				public void nodeSelected(String nodeId) {
					bridge.postEvent(studio.getATermFactory().make(
							"node-selected(<str>,<str>)", id, nodeId));
				}

				public void popupRequested(String nodeId, MouseEvent e) {
					popupEvent = e;
					bridge.postEvent(studio.getATermFactory().make(
							"request-popup-event(<str>,<str>)", id, nodeId));
				}
			});
			graphs.put(id, panel);
			studio.addComponent(comp);
			studio.addComponentMenu(comp, createGraphMenu(panel, "Dot"));
			panel.setLayout("Dot");
		}

		return panel;
	}

	private JMenu createGraphMenu(final GraphPanel panel, String initialLayout) {
		JMenu graph = new JMenu("Graph");
		JMenu layouts = createLayoutMenu(graph, panel, initialLayout);
		graph.add(new JSeparator());
		JMenu toggles = createTogglesMenu(graph, panel);

		graph.add(layouts);
		graph.add(toggles);
		return graph;
	}

	private JMenu createTogglesMenu(JMenu menu, final GraphPanel panel) {
		JMenuItem item;
		ButtonGroup edge = new ButtonGroup();

		item = new JRadioButtonMenuItem("Curved edges");
		item.addActionListener(new AbstractAction() {
			public void actionPerformed(ActionEvent e) {
				panel.setCurvedEdges();
			}
		});
		edge.add(item);
		menu.add(item);

		item = new JRadioButtonMenuItem("Straight edges");
		item.addActionListener(new AbstractAction() {
			public void actionPerformed(ActionEvent e) {
				panel.setStraightEdges();
			}
		});
		item.setSelected(true);
		edge.add(item);
		menu.add(item);

		menu.add(new JSeparator());

		ButtonGroup animation = new ButtonGroup();
		item = new JRadioButtonMenuItem("Linear animation");
		item.addActionListener(new AbstractAction() {
			public void actionPerformed(ActionEvent e) {
				panel.setLinearAnimation();
			}
		});
		animation.add(item);
		menu.add(item);

		item = new JRadioButtonMenuItem("Polar animation");
		item.addActionListener(new AbstractAction() {
			public void actionPerformed(ActionEvent e) {
				panel.setPolarAnimation();
			}
		});
		animation.add(item);
		item.setSelected(true);
		menu.add(item);

		item = new JRadioButtonMenuItem("No animation");
		item.addActionListener(new AbstractAction() {
			public void actionPerformed(ActionEvent e) {
				panel.setNoAnimation();
			}
		});
		animation.add(item);
		menu.add(item);

		menu.add(new JSeparator());

		item = new JCheckBoxMenuItem("Show force panel");
		item.addActionListener(new AbstractAction() {
			public void actionPerformed(ActionEvent e) {
				JCheckBoxMenuItem item = (JCheckBoxMenuItem) e.getSource();
				if (item.isSelected()) {
					showForcePanel(panel.getId(), true);
				} else {
					showForcePanel(panel.getId(), false);
				}
			}
		});
		item.setSelected(false);
		menu.add(item);

		return menu;
	}

	protected void showForcePanel(String id, boolean show) {
		if (show) {
			GraphPanel graphPanel = (GraphPanel) graphs.get(id);
			GraphForcePanel forcePanel = new GraphForcePanel(graphPanel
					.getForceSimulator(), preferences);
			StudioComponentAdapter adapter = new StudioComponentAdapter(
					"Forces for " + id, forcePanel);
			studio.addComponent(adapter);
			forcePanels.put(id, adapter);
		} else {
			StudioComponentAdapter adapter = (StudioComponentAdapter) forcePanels
					.get(id);
			if (adapter != null) {
				studio.removeComponent(adapter);
				forcePanels.remove(id);
			}
		}
	}

	private JMenu createLayoutMenu(JMenu menu, final GraphPanel panel,
			String initial) {
		ButtonGroup group = new ButtonGroup();

		final Object[] layouts = panel.getLayouts();

		for (int i = 0; i < layouts.length; i++) {
			final String name = (String) layouts[i];
			JRadioButtonMenuItem random = new JRadioButtonMenuItem(name);
			random.addActionListener(new AbstractAction() {
				public void actionPerformed(ActionEvent e) {
					panel.setLayout(name);
				}
			});

			if (initial.equals(name)) {
				random.setSelected(true);
			}
			group.add(random);
			menu.add(random);
		}

		return menu;
	}

	private GraphPanel getPanel(String id) {
		return (GraphPanel) graphs.get(id);
	}

	public String getName() {
		return TOOL_NAME;
	}

	public void recTerminate(ATerm t0) {
	}

	public void recAckEvent(ATerm t0) {
	}

	public void selectNode(String graphId, String nodeId) {
		GraphPanel panel = getPanel(graphId);
		if (panel != null) {
			panel.setSelectedNode(nodeId);
		}
	}

	public void showPopup(final String graphId, final String nodeId, ATerm menu) {
		StudioPopupMenu popup = new StudioPopupMenu((ATermList) menu);
		popup.setPopupHandler(new PopupHandler() {
			public void popupSelected(ATerm action) {
				bridge.postEvent(studio.getATermFactory().make(
						"popup-menu-event(<str>,<str>,<term>)", graphId,
						nodeId, action));
			}
		});
		popup.show(popupEvent.getComponent(), popupEvent.getX(), popupEvent
				.getY());
	}

	public ATerm sizeGraph(String id, ATerm graphTerm) {
		GraphPanel panel = createPanel(id);
		Graph graph = graphFactory.GraphFromTerm(graphTerm);
		FontMetrics metrics = panel.getFontMetrics(preferences
				.getFont("graph.node.font"));
		graph = GraphAdapter.sizeGraph(metrics, preferences, graph);
		return graphFactory.getPureFactory().make(
				"snd-value(sized-graph(<term>))", graph.toTerm());
	}
}
