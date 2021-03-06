package argusviewer.toolbus.sync;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import toolbus.StateElement;
import toolbus.process.ProcessDefinition;
import toolbus.process.ProcessInstance;
import toolbus.viewer.DebugToolBus;
import argusviewer.ExceptionReporter;
import argusviewer.view.listeners.IBreakPointHitListener;
import argusviewer.view.listeners.IFileBreakPointListener;
import argusviewer.view.listeners.IProcessInstanceBreakPointListener;

/**
 * This class keeps track of and manages all breakpoints.
 * 
 * @author Tim Van Laer
 * @author M. van Beest
 */
public class BreakpointSync{
	private final List<ProcessInstance> m_breakPointsProcInst;
	private final Map<String, List<Integer>> m_breakPointsFileNameLineNum;

	private final DebugToolBus m_debugToolbus;

	private final ArrayList<IFileBreakPointListener> m_fileListeners;
	private final ArrayList<IProcessInstanceBreakPointListener> m_processInstanceListeners;
	private final ArrayList<IBreakPointHitListener> m_hitListeners;
	private final Map<String, Integer> m_breakpoints;

	/**
	 * constructor of the breakpoint synchronizer
	 * 
	 * @param debugToolbus
	 *            the toolbus instance
	 */
	public BreakpointSync(DebugToolBus debugToolbus){
		super();
		
		m_debugToolbus = debugToolbus;

		m_breakPointsProcInst = new ArrayList<ProcessInstance>();
		m_breakPointsFileNameLineNum = new HashMap<String, List<Integer>>();

		m_fileListeners = new ArrayList<IFileBreakPointListener>();
		m_processInstanceListeners = new ArrayList<IProcessInstanceBreakPointListener>();
		m_hitListeners = new ArrayList<IBreakPointHitListener>();
		m_breakpoints = new HashMap<String, Integer>();
	}


	/**
     * add breakpoint for a specific processInstance
     * 
     * @param processInstance the processinstance 
     */
	public void addBreakpoint(ProcessInstance processInstance){
		synchronized(m_breakPointsProcInst){
			if(!m_breakPointsProcInst.contains(processInstance)){
				m_debugToolbus.addProcessInstanceBreakPoint(processInstance.getProcessId());
	
				m_breakPointsProcInst.add(processInstance);
				
				synchronized(m_processInstanceListeners){
					for(IProcessInstanceBreakPointListener processInstanceBreakPointLstr : m_processInstanceListeners){
						processInstanceBreakPointLstr.addBreakpoint(processInstance);
					}
				}
			}else{
				ExceptionReporter.report("Could not add breakpoint: already added.");		
			}
		}
	}

	/**
     * add breakpoint at a specific line in a file
     * 
     * @param fileName the relative filename
     * @param lineNumber the line number where the breakpoint should be placed.
     */
	public void addBreakpoint(String fileName, int lineNumber){
		synchronized(m_breakPointsFileNameLineNum){
			if(m_breakPointsFileNameLineNum.containsKey(fileName) && m_breakPointsFileNameLineNum.get(fileName).contains(Integer.valueOf(lineNumber))){
				ExceptionReporter.report("Could not add breakpoint: already added.");
			}else{
				m_debugToolbus.addSourceCodeBreakPoint(fileName, lineNumber);
				String processName = getProcessName(fileName, lineNumber);
				if(processName == null) return; // Not a valid breakpoint location.
				addSourceCodeBreakpoint(processName);
	
				if(m_breakPointsFileNameLineNum.containsKey(fileName)){
					m_breakPointsFileNameLineNum.get(fileName).add(Integer.valueOf(lineNumber));
				}else{
					ArrayList<Integer> lineNumbers = new ArrayList<Integer>();
					lineNumbers.add(Integer.valueOf(lineNumber));
					m_breakPointsFileNameLineNum.put(fileName, lineNumbers);
				}
	
				synchronized(m_fileListeners){
					for(IFileBreakPointListener breakPointLstr : m_fileListeners){
						breakPointLstr.addBreakpoint(fileName, lineNumber);
					}
				}
			}
		}
	}
	
	private String getProcessName(String fileName, int lineNumber){
		List <ProcessDefinition> list = m_debugToolbus.getProcessDefinitions();
		ProcessDefinition nearest = null;
		
		for(ProcessDefinition procDef : list){
			if(!procDef.getPosInfo().getFileName().equals(fileName) || procDef.getPosInfo().getBeginLine() > lineNumber){
				continue;
			}
			
			if(nearest == null){
				nearest = procDef;				
			}else if(procDef.getPosInfo().getBeginLine() > nearest.getPosInfo().getBeginLine()){
				nearest = procDef;
			}
		}
		
		if(nearest == null) return null;
		
		return nearest.getName();
	}
	
	private void addSourceCodeBreakpoint(String processname){
		synchronized(m_breakpoints){
			//How many breakpoints are there?
			int numBreakpoints = 0;
			if(m_breakpoints.containsKey(processname)){
				numBreakpoints = m_breakpoints.get(processname).intValue();
			}
			
			//Add one breakpoint
			numBreakpoints++;
			
			m_breakpoints.put(processname, Integer.valueOf(numBreakpoints));
		}
	}
	
	private void removeSourceCodeBreakpoint(String processname){
		synchronized(m_breakpoints){
			//How many breakpoints are there?	
			int numBreakpoints = m_breakpoints.get(processname).intValue();
			
			//Remove one breakpoint
			numBreakpoints--;
			
			if(numBreakpoints == 0){
				m_breakpoints.remove(processname);
			}else{
				m_breakpoints.put(processname, Integer.valueOf(numBreakpoints));
			}
		}
	}

	/**
	 * Return all source code breakpoints
	 * @return all source code breakpoints
	 */
	public Map<String, Integer> getSourceCodeBreakpoints(){
		return m_breakpoints;
	}
	
	/**
     * remove breakpoint for a specific processInstance
     * @param processInstance the processintance
     */
	public void removeBreakpoint(ProcessInstance processInstance){
		synchronized(m_breakPointsProcInst){
			if(m_breakPointsProcInst.contains(processInstance)){
				m_debugToolbus.removeProcessInstanceBreakPoint(processInstance.getProcessId());
	
				m_breakPointsProcInst.remove(processInstance);
				
				synchronized(m_processInstanceListeners){
					for(IProcessInstanceBreakPointListener processInstanceBreakPointLstr : m_processInstanceListeners){
						processInstanceBreakPointLstr.removeBreakpoint(processInstance);
					}
				}
			}else{
				ExceptionReporter.report("Could not remove breakpoint: not present.");
			}
		}
	}

	/**
     * remove breakpoint for a linenumber in a file.
     * @param fileName the filename wherefore the breakpoint should be removed.
     * @param lineNumber the linenumber where the breakpoint should be removed.      * 
     */
	public void removeBreakpoint(String fileName, int lineNumber){
		synchronized(m_breakPointsFileNameLineNum){
			if(m_breakPointsFileNameLineNum.containsKey(fileName) && m_breakPointsFileNameLineNum.get(fileName).contains(Integer.valueOf(lineNumber))){
				if(m_breakPointsFileNameLineNum.containsKey(fileName)){
					m_breakPointsFileNameLineNum.get(fileName).remove(Integer.valueOf(lineNumber));
	
					m_debugToolbus.removeSourceCodeBreakPoint(fileName, lineNumber);
					String processName = getProcessName(fileName, lineNumber);
					if(processName == null) return; // Not a valid breakpoint location.
					removeSourceCodeBreakpoint(processName);
					
					if(m_breakPointsFileNameLineNum.get(fileName).isEmpty()){
						m_breakPointsFileNameLineNum.remove(fileName);
					}
	
					synchronized(m_fileListeners){
						for(IFileBreakPointListener breakPointLstr : m_fileListeners){
							breakPointLstr.removeBreakpoint(fileName, lineNumber);
						}
					}
				}
			}
		}
	}

	/**
     * get all breakpoints for a specific file.
     * @param fileName the relative filename
     * @return List with breakpoints.
     */
	public List<Integer> getBreakPoints(String fileName){
		synchronized(m_breakPointsFileNameLineNum){
			return m_breakPointsFileNameLineNum.get(fileName);
		}
	}

	/** The toolbus has reached a set breakpoint.
     * @param processInstance The current processInstance with the breakpoint.
     */
	public void hitBreakpoint(ProcessInstance processInstance){
		synchronized(m_hitListeners){
			for(IBreakPointHitListener breakPointHitLstr : m_hitListeners){
				breakPointHitLstr.hitBreakpoint(processInstance);
			}
		}
	}

	/**
     * The toolbus has reached a set breakpoint.
     * @param stateElement The current stateElement with the breakpoint.
     */
	public void hitBreakpoint(StateElement stateElement){
		synchronized(m_hitListeners){
			for(IBreakPointHitListener breakPointHitLstr : m_hitListeners){
				breakPointHitLstr.hitBreakpoint(stateElement);
			}
		}
	}

	/**
	 * Add IBreakPointListener, the listener will be notified for breakpoint adds and removals.
	 * 
	 * @param listener the IBreakPointListener
	 */
	public void register(IFileBreakPointListener listener){
		synchronized(m_fileListeners){
			m_fileListeners.add(listener);
		}
	}
	
	/**
	 * Add IBreakPointHitListener, the listener will be notified for breakpoint hits.
	 * 
	 * @param hitListener the IBreakPointHitListener
	 */
	public void register(IBreakPointHitListener hitListener){
		synchronized(m_hitListeners){
			m_hitListeners.add(hitListener);
		}
	}
	
	/**
	 * Add IProcessInstanceBreakPointListener, the listener will be notified for breakpoint hits.
	 * 
	 * @param processInstanceListener the IProcessInstanceBreakPointListener
	 */
	public void register(IProcessInstanceBreakPointListener processInstanceListener){
		synchronized(m_processInstanceListeners){
			m_processInstanceListeners.add(processInstanceListener);
		}
	}
}
