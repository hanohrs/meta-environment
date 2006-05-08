package toolbus.process;

import java.util.LinkedList;
import java.util.Stack;

import toolbus.AtomSet;
import toolbus.State;
import toolbus.StateElement;
import toolbus.TBTermFactory;
import toolbus.ToolBus;
import toolbus.atom.Atom;
import toolbus.environment.Environment;
import toolbus.exceptions.ToolBusException;
import aterm.ATerm;
import aterm.ATermList;

/**
 * @author paulk, Jul 23, 2002
 */
public class ProcessInstance {

	private final boolean verbose = false;

	static int processCount = 0;

	static State empty = new State();

	private ProcessDefinition definition;

	private ProcessExpression call;

	private String processName;

	private int processId;

	private AtomSet elements;

	private State currentState;

	private ToolBus toolbus;

	//  private TBTermVar transactionIdVar;
	private TBTermFactory tbfactory;

	private LinkedList<ATerm> subscriptions;

	private LinkedList<ATerm> notes;
	
	int noteCnt = 0;

	private boolean running = true;

	public ProcessInstance(ToolBus TB, ProcessCall call, int processId)
			throws ToolBusException {
		toolbus = TB;
		tbfactory = TB.getTBTermFactory();
		this.call = call;
		this.processId = processId;
		subscriptions = new LinkedList<ATerm>();
		notes = new LinkedList<ATerm>();
		call.setEvalArgs(false);
		processName = call.getName();

		definition = TB.getProcessDefinition(processName);

		Environment env = new Environment(tbfactory);

		//   transactionIdVar = tbfactory.TransactionIdVar;
		//   env.introduceBinding(transactionIdVar, tbfactory.newTransactionId());

		call.computeFirst();
		call.replaceFormals(env);
		Stack<String> stack = new Stack<String>();
		stack.push("TOPLEVEL");
		call.compile(this, stack, empty);
		currentState = call.getFirst(); //getStartState();
		currentState.activate();
		
		//System.err.println("ProcessInstance: " + env);

		elements = call.getAtoms();
		//System.err.println("Process " + this.getProcessName() + " elements = " + elements);
	/*	
		for (ProcessInstance P : TB.getProcesses()) {
			if (P != this) {
				//System.err.println("Process " + this.getProcessName() + " adds partners to " + P.getProcessName());
				P.addPartners(elements);
			}
		}
	*/
		addPartnersToAllProcesses(elements);
		addToAtomSignature(elements);
		if (false) {
			System.err.println(processId + ": " + call);
			System.err.println(processId + ": atoms: =" + elements);
			System.err.println(processId + ": currentState = " + currentState);
			for (Atom a : elements.getSet()){
				System.err.println(processId + ": " + a + " --> "
						+ a.getFollow());
				//System.err.println("env = " + a.getEnv());
			}
		}
	}

	public ProcessInstance(ToolBus TB, String name, ATermList actuals,
			int processId) throws ToolBusException {
		this(TB, new ProcessCall(name, actuals, false, TB.getTBTermFactory(), null),
				processId);
	}

	public TBTermFactory getTBTermFactory() {
		return tbfactory;
	}

	void info(String msg) {
		if (verbose) {
			System.err.println("[ProcessInstance " + processName + "] " + msg);
		}
	}

	//TODO: delAtomSignature
/*
	private void addAtomSignature() throws ToolBusException {
		Vector<StateElement> atoms = call.getAtoms().getElementsAsVector();
		for (int i = 0; i < atoms.size(); i++) {
			ATerm pat = ((Atom) atoms.get(i)).toATerm();
			toolbus.addToSignature(pat);
		}
	}
*/
	
	public void addToAtomSignature(AtomSet atoms)throws ToolBusException {
		for(Atom a : atoms.getSet()){
			toolbus.addToSignature(a.toATerm());
		}
	}

	public ToolBus getToolBus() {
		return toolbus;
	}

	public long getRunTime() {
		return toolbus.getRunTime();
	}

	public int getProcessId() {
		return processId;
	}

	public String getProcessName() {
		return processName;
	}

	public void terminate(ATerm msg) throws ToolBusException {
		running = false;
		for (ProcessInstance P : toolbus.getProcesses()) {
			if (P != this) {
				P.delPartners(elements);
			}
		}
	}

	public void addPartners(AtomSet atoms) throws ToolBusException {
		for (Atom e : elements.getSet()) {
			//System.err.println("ProcessInstance: " + e + " addPartners " + atoms);
			e.addPartners(atoms);
		}
	}

	public void delPartners(AtomSet atoms) throws ToolBusException {
		for (Atom e : elements.getSet()) {
			e.delPartners(atoms);
		}
	}
	
	public void addPartnersToAllProcesses(AtomSet atoms) throws ToolBusException{
		for (ProcessInstance P : toolbus.getProcesses()) {
			if (P != this) {
				//System.err.println("Process " + this.getProcessName() + " adds partners to " + P.getProcessName());
				P.addPartners(atoms);
			}
		}
	}
	
	public void delPartnersFromAllProcesses(AtomSet atoms) throws ToolBusException{
		for (ProcessInstance P : toolbus.getProcesses()) {
			if (P != this) {
				P.delPartners(atoms);
			}
		}
	}

	/*
	 * Note manipulation
	 */

	public void subscribe(ATerm pat) {
		//System.err.println("subscribe: " + pat);
		subscriptions.add(pat);
	}

	public void unsubscribe(ATerm pat) {
		subscriptions.remove(pat);
		//info("unsubscribe: after:" + subscriptions);
	}

	public boolean getNoteFromQueue(ATerm pat, Environment env)
			throws ToolBusException {
		for (ATerm note : notes) {
			if (tbfactory.match(note, env, pat, env)) {
				notes.remove();
				noteCnt--;
				return true;
			}
		}
		return false;
	}

	public boolean noNoteInQueue(ATerm pat, Environment env)
			throws ToolBusException {
		//System.err.println("noNoteinQueue: " + pat);
		for (ATerm note : notes) {
			if (tbfactory.match(note, env, pat, env)) {
				// TODO: What do we do with changes in env???
				return false;
			}
		}
		return true;
	}

	public boolean putNoteInQueue(ATerm note) throws ToolBusException {
		//System.err.println("putNoteinQueue: " + note);
		for (ATerm sub : subscriptions) {
			if (tbfactory.mightMatch(sub, note)) {
				notes.addLast(note);
				noteCnt++;
				return true;
			}
		}
		return false;
	}
	
	public boolean hasNotes(){
		return noteCnt > 0;
	}

	public State getProcessState() {
		return currentState;
	}

	public boolean contains(StateElement a) {
		return currentState.contains(a);
	}

	public State getCurrentState() {
		return currentState;
	}

	public void setCurrentState(State s) {
		currentState = s;
	}
	
	public void gotoNextStateAndActivate(){
		currentState = currentState.gotoNextStateAndActivate();
	}
	
	public void gotoNextStateAndActivate(StateElement se){
		currentState = currentState.gotoNextStateAndActivate(se);
	}

	public boolean step() throws ToolBusException {
		//System.err.println("step: " + this);
		if (running && currentState.execute()) {
			gotoNextStateAndActivate();
			return true;
		}
		return false;
	}

	public boolean isTerminated() {
		if (!running || currentState.size() == 0) {
			return true;
		}
		return false;
	}

	public String toString() {
		return "ProcessInstance(" + definition.getName() + ", " + processId
				+ ", " + currentState + ")";
	}
}
