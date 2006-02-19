/**
 * @author paulk, Jul 22, 2002
 */

package toolbus.process;

import java.util.Stack;

import toolbus.State;
import toolbus.StateElement;
import toolbus.TBTermFactory;
import toolbus.environment.Environment;
import toolbus.exceptions.ToolBusException;
import aterm.ATerm;
import aterm.ATermAppl;
import aterm.ATermList;

public class ProcessCall extends ProcessExpression implements StateElement {
	private String name;

	protected ATermList actuals;

	private ATermList formals;

	private ProcessDefinition definition;

	protected ProcessExpression PE;

	protected ProcessInstance processInstance;

	private boolean evalArgs = true;

	private State firstState;

	private boolean uninitialized = true;

	private boolean isStaticCall = true;

	public ProcessCall(String name, ATermList actuals, TBTermFactory tbfactory) {
		super(tbfactory);
		this.name = name;
		this.actuals = actuals;
		firstState = new State();
		firstState.addElement(this);
	}

	public ProcessCall(ATerm call, TBTermFactory tbfactory) {
		this(((ATermAppl) call).getName(), ((ATermAppl) call).getArguments(),
				tbfactory);
	}

	public ProcessCall(String name, ATermList actuals, boolean evalArgs,
			TBTermFactory tbfactory) {
		this(name, actuals, tbfactory);
		this.evalArgs = evalArgs;
	}

	public void setEvalArgs(boolean b) {
		evalArgs = b;
	}

	public ProcessExpression copy() {
		return new ProcessCall(name, actuals, evalArgs, tbfactory);
	}

	public void computeFirst() {
		//System.err.println("ProcessCall.computeFirst: " + firstState);
		setFirst(firstState);
	}
	
	public void replaceFormals(Environment env) throws ToolBusException {
		//System.err.println("ProcessCall.replaceFormals(" + name + "): " + env);
		if(isStaticCall){
			actuals = (ATermList) tbfactory.replaceFormals(actuals,env);
		}
	}

	public void compile(ProcessInstance P, Stack<String> calls,
			Environment env, State follows) throws ToolBusException {

		processInstance = P;
		env = env.copy();
		if (env.isDeclaredAsStringVar(name)) { // A dynamic call?
			System.err.println("yes dynamic!");
			isStaticCall = false;
		} else {
			if (calls.contains(name)) {
				throw new ToolBusException("recursive call of " + name);
			}

			definition = P.getToolBus().getProcessDefinition(name);
			calls.push(name);
			PE = definition.getProcessExpression(actuals);
			//System.err.println("ProcessCall.compile(" + name + ", " + P + "," + PE + ")");
			setFollow(follows);
			formals = definition.getFormals();
			actuals = (ATermList) tbfactory.resolveVarTypes(actuals, env);
			
			env.introduceBindings(formals, actuals, evalArgs);
			actuals = (ATermList) tbfactory.replaceFormals(actuals,env);

			//System.err.println("ProcessCall.compile(" + name + "): " + env);
			//System.err.println("actuals = " + actuals);
			PE.computeFirst();
			PE.replaceFormals(env);
			PE.compile(P, calls, env, follows);
			firstState = PE.getStartState();
			env.removeBindings(formals);
			calls.pop();			
		}
	}



	public State getFirst() {
		//System.err.println("ProcessCall.getFirst: " + firstState);
		return firstState; //PE.getFirst();

	}

	public State getStartState() {
		return firstState;
	}

	public State getFollow() {
		return PE.getFollow();
	}

	public State getAtoms() {
		return PE.getAtoms();
	}

	public String getName() {
		return name;
	}

	public String toString() {
		return "ProcessCall(" + name + ", " + actuals + ")";
	}

	private void initDynamicCall() {
		if (uninitialized) {
			uninitialized = false;
			//try {
			//	//expand(processInstance, new Stack());
			//	super.compile(processInstance,null,env, follows);
			//} catch (ToolBusException e) {
			//	// TODO Auto-generated catch block
			//	e.printStackTrace();
			//}		
		}
	}

	// Implementation of the StateElement interface

	public boolean contains(StateElement a) {
		if (isStaticCall) {
			return getFirst().contains(a);
		} else {
			initDynamicCall();
			return false;
		}

	}

	public ProcessInstance getProcess() {
		return processInstance;
	}

	public void setTest(ATerm test, Environment env) throws ToolBusException {
		//System.err.println("ProcessCall.setTest" + test);
		if (isStaticCall) {
			firstState.setTest(test, env);
		}
	}

	public boolean isEnabled() {
		if (isStaticCall) {
			return getFirst().isEnabled();
		} else {
			return false;
		}
	}

	public State getNextState() {
		if (isStaticCall) {
			return getFirst().getNextState();
		} else {
			return firstState;
		}
	}

	public State getNextState(StateElement se) {
		if (isStaticCall) {
			return getFirst().getNextState(se);
		} else {
			return firstState;
		}
	}

	public void addPartners(State s) throws ToolBusException {
	}

	public void delPartners(State s) throws ToolBusException {

	}

	public void addNotePartners(State s) {

	}

	public void delNotePartners(State s) {

	}

	public void activate() {
		if (isStaticCall) {
			//System.err.println("ProcessCall.activate");
			firstState = PE.getFirst();
			firstState.activate();
		} else {
		}
	}

	public boolean execute() throws ToolBusException {
		if (isStaticCall) {
			//System.err.println("ProcessCall.execute");
			return PE.getFirst().execute();
		} else {
			return false;
		}
	}
}