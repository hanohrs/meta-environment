package toolbus.atom;
import toolbus.ToolBusException;
import toolbus.process.ProcessInstance;
import toolbus.tool.ToolInstance;

import aterm.ATerm;
/**
 * @author paulk, Jul 31, 2002
 */
public class SndEval extends ToolAtom {

	
	public SndEval(ATerm toolvar, ATerm trm){
		super(toolvar, trm);
	}
	
	public SndEval(){
		super();
	}
	
	public void compile(ProcessInstance P, AtomSet follow)
	throws ToolBusException
	{
		super.compile(P, follow, "snd-eval", "rec-eval");
	}
	
	public boolean execute() throws ToolBusException
	{
		if(!isEnabled())
			return false;
		ToolInstance ti = getTB().getTool(getEnv().getVar(getToolvar()));
		ti.sndEvalToTool(getSubstitutedArg());
		return true;
	}

}
