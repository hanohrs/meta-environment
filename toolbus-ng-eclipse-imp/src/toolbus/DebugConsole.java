package toolbus;

import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.WindowConstants;

public class DebugConsole{
	private final ToolBus toolbus;
	
	private final ButtonListener buttonListener;
	
	private final JFrame frame;
	
	private final JButton unhandledMessages;
	private final JButton performanceStats;
	private final JButton toolsStatus;
	private final JButton queuedMessages;
	private final JButton toolbusState;
	private final JButton partnerlessStuff;
	private final JButton shutdown;
	
	public DebugConsole(ToolBus toolbus){
		super();
		
		this.toolbus = toolbus;
		
		buttonListener = new ButtonListener();
		
		frame = new JFrame();
		
		unhandledMessages = new JButton("Unhandled Messages");
		performanceStats = new JButton("Performance Stats");
		toolsStatus = new JButton("Tools Status");
		queuedMessages = new JButton("Queued Messages");
		toolbusState = new JButton("Toolbus State");
		partnerlessStuff = new JButton("Partnerless Stuff");
		shutdown = new JButton("Shut Down & Die");
		
		layout();
	}
	
	private void layout(){
		JPanel buttonPanel = new JPanel();
		buttonPanel.setLayout(new GridLayout(2, 3));
		unhandledMessages.addActionListener(buttonListener);
		buttonPanel.add(unhandledMessages);
		performanceStats.addActionListener(buttonListener);
		buttonPanel.add(performanceStats);
		toolsStatus.addActionListener(buttonListener);
		buttonPanel.add(toolsStatus);
		queuedMessages.addActionListener(buttonListener);
		buttonPanel.add(queuedMessages);
		toolbusState.addActionListener(buttonListener);
		buttonPanel.add(toolbusState);
		partnerlessStuff.addActionListener(buttonListener);
		buttonPanel.add(partnerlessStuff);
		
		Container frameContent = frame.getContentPane();
		frameContent.setLayout(new BorderLayout());
		
		frameContent.add(buttonPanel, BorderLayout.CENTER);
		shutdown.addActionListener(buttonListener);
		frameContent.add(shutdown, BorderLayout.SOUTH);
		
		frame.setSize(600, 400);
		frame.setDefaultCloseOperation(WindowConstants.DISPOSE_ON_CLOSE);
	}
	
	public void show(){
		frame.setVisible(true);
	}
	
	private class ButtonListener implements ActionListener{
		
		public ButtonListener(){
			super();
		}
		
		public void actionPerformed(ActionEvent e){
			Object source = e.getSource();
			if(source == unhandledMessages){
				toolbus.dumpUnhandledMessages();
			}else if(source == performanceStats){
				toolbus.dumpPerformanceStats();
			}else if(source == toolsStatus){
				toolbus.getToolInstanceManager().showStatus();
			}else if(source == queuedMessages){
				toolbus.getToolInstanceManager().printQueueTerms();
			}else if(source == toolbusState){
				toolbus.showStatus();
			}else if(source == partnerlessStuff){
				toolbus.getMatchStore().printPartnerlessCommunicationAtoms();
			}else if(source == shutdown){
				toolbus.shutdown(toolbus.getTBTermFactory().makeList());
				System.exit(0);
			}
		}
	}
}
