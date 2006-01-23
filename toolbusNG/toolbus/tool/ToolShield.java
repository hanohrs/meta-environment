package toolbus.tool;

import java.io.IOException;
import java.nio.channels.SocketChannel;
import java.util.LinkedList;

import toolbus.TBTerm;
import aterm.ATerm;
import aterm.ATermFactory;

/**
 * @author paulk, Jul 31, 2002
 * 
 * ToolShield is a general encapsulation of tool execution that is specialized for various
 * kinds of tools. The general picture (in case of a Java tool) is:
 * 		ToolInstance -> ToolShield -> JavaToolShield -> class implementing the tool
 * For a classic ToolBus tool it is:
 *  	ToolInstance -> ToolShield --> ClassicToolShield -- TCP/IP connection --> external executable
 */

public abstract class ToolShield extends Thread {
	
	private ToolInstance toolInstance;		// Backward link to ToolInstance that created this ToolShield
	private LinkedList requestsForTool;	// Requests to be executed by the tool
	private boolean running = false;
	

	public ToolShield(ToolInstance ti) {
		requestsForTool = new LinkedList();
		toolInstance = ti;
	}

	public ToolInstance getToolInstance() {
		return toolInstance;
	}

	/**
	 * Provide the current ATermfactory.
	 */
	public ATermFactory getFactory() {
		return TBTerm.factory;
	}
	
	abstract public void connect(SocketChannel channel) throws IOException;

	protected Object[] getNextRequestForTool() {
		Object request[] = (Object[]) requestsForTool.getFirst();
		requestsForTool.removeFirst();
		return request;
	}

	abstract protected void handleRequestToTool();

	/**
	 * Add a request to the internal request list
	 */

	public synchronized void addRequestToTool(Object[] request){
		//System.err.println("addRequestToTool: " + request);
		requestsForTool.add(request);
		/*
		if(operation == ToolInstance.TERMINATE){
			requestsForTool.addFirst(new Object[] { operation, m, actuals });
		} else
			requestsForTool.add(new Object[] { operation, m, actuals });
			*/
	}
	
	/**
	 * sndRequestToTool sends a request to the tool
	 * @param operation to be performed
	 * @param call ATerm denoting the actual request
	 */

	abstract public void sndRequestToTool(Integer operation,
			ATerm call);

	/**
	 * Send an event to our ToolInstance (and hence to the ToolBus)
	 */

	public void sndEventToToolBus(ATerm trm) {
		toolInstance.addEventFromTool(trm);
	}
	
	public synchronized boolean isRunning(){
		return running;
	}
	
	protected synchronized void setRunning(boolean state)  {
		running = state;
	}
	
	public void stopRunning() {
		setRunning(false);
	}
	
	/**
	 * initRun gives subclasses a chance to do specific initialization
	 */
	public void initRun(){
	}

	/**
	 * The run method for this thread
	 */

	public void run() {
		this.setName(toolInstance.getToolName());
		initRun();
		//System.err.println("run of ToolShield " + toolInstance.getToolId() + " called");
		while (running) {
			//System.err.println("ToolShield.run; 1 "+ toolInstance.getToolId());
			//System.err.println("running = " + running);
			//System.err.println("requestsForTool.isEmpty() = " + requestsForTool.isEmpty());
			while (!requestsForTool.isEmpty() && running){
				//System.err.println("ToolShield.run; 2 "+ toolInstance.getToolId() + " nr of requests = " + requestsForTool.size());
				handleRequestToTool();
			}
			//System.err.println("ToolShield.run; 3 "+ toolInstance.getToolId());
			if(running){
				//System.err.println("now yielding the thread");
				try {
					sleep(100);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		}
		//System.err.println("ToolShield.run; 4 "+ toolInstance.getToolId());
	}
	
	/**
	 * Terminate execution of this tool
	 */

	abstract public void terminate(ATerm msg) ;
}