/**
 * @author paulk, Jul 21, 2002
 */

package toolbus.process;
import java.util.*;

import toolbus.*;
import toolbus.State;

import aterm.ATerm;
import aterm.ATermList;

import toolbus.atom.EndScope;

public class LetDefinition extends ProcessExpression {
  private ATermList formals;
  private ProcessExpression PEinit;
  private ProcessExpression PE;
  //private ProcessInstance processInstance;
  //private ATerm test;	
  
  public LetDefinition(ATermList formals, ProcessExpression PE) {
    this.formals = formals;
    PEinit = PE;
    this.PE = new Sequence(PE, new EndScope(formals));
  }

  public ProcessExpression copy() {
    return new LetDefinition(formals, PEinit.copy());
  }
  
 // public void expand(ProcessInstance P,  Stack calls) throws ToolBusException {
 //   PE.expand(P, calls);
  // }
  
  public void computeFirst(){
 	 PE.computeFirst();
 }

  public void compile(ProcessInstance P, Stack calls, Environment env, State follows) throws ToolBusException {
    env = env.copy();
    //System.err.println("LetDef.compile: " + env);
    env.introduceVars(formals);
    PE.compile(P, calls, env, follows);
    env.removeBindings(formals);
  }
  
  public void replaceFormals(Environment env) throws ToolBusException{
    env.introduceVars(formals);
	PE.replaceFormals(env);
	env.removeBindings(formals);
  }

  public State getFirst() {
    return PE.getFirst();
  }
  
  public State getStartState(){
    return PE.getStartState();
  }

  public State getFollow() {
    return PE.getFollow();
  }

  public State getAtoms() {
  	return PE.getAtoms();
  }

  public String toString() {
    return "LetDefinition(" + formals + ", " + PE + ")";
  }
  
  // Implementation of the StateElement interface
/*
  public boolean contains(StateElement a) {
    return startState.contains(a);
  }

  public ProcessInstance getProcess() {
    return processInstance;
  }
  
  public void setTest(ATerm test) throws ToolBusException {
  	startState.setTest(test);
  }

  public boolean execute() throws ToolBusException {
  	Environment env = processInstance.getEnv();
  	env.introduceVars(formals);
  	if(PE.getStartState().execute()){
  		return true;
  	} else {
  		env.removeBindings(formals);
  		return false;
  	}	
  }
  */
}
