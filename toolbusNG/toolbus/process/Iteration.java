package toolbus.process;
/**
 * @author paulk
 */

import java.util.Stack;

import toolbus.Environment;
import toolbus.State;
import toolbus.TBTermFactory;
import toolbus.ToolBusException;

public class Iteration extends ProcessExpression {
  private ProcessExpression left, right;

  public Iteration(ProcessExpression left, ProcessExpression right, TBTermFactory tbfactory) {
	super(tbfactory);
    this.left = left;
    this.right = right;
  }

  public ProcessExpression copy() {
    return new Iteration(left.copy(), right.copy(), tbfactory);
  }

  public String toString() {
    return "Iter(" + left.toString() + ", " + right.toString() + ")";
  }

 // public void expand(ProcessInstance P, Stack calls) throws ToolBusException {
  //  left.expand(P, calls);
 //   right.expand(P, calls);
  //  setFirst(left.getFirst().union(right.getFirst()));
 // }
  
  public void computeFirst(){
 	 left.computeFirst();
 	 right.computeFirst();
 	 setFirst(left.getFirst().union(right.getFirst()));
 }

  public void compile(ProcessInstance P, Stack calls, Environment env, State follow) throws ToolBusException {
    left.compile(P, calls, env, getFirst());
    right.compile(P, calls, env, follow);
 
    setFollow(follow);
  }
  
  public void replaceFormals(Environment env) throws ToolBusException{
	left.replaceFormals(env);
	right.replaceFormals(env);
  }

  public State getAtoms() {
    return left.getAtoms().union(right.getAtoms());
  }

}
