package toolbus.atom;
import toolbus.MatchResult;
import toolbus.ToolBusException;
import toolbus.process.ProcessInstance;
import toolbus.tool.ToolInstance;

import aterm.ATerm;

/**
 * @author paulk, Aug 1, 2002
 */

public class RecVal extends ToolAtom {

	public RecVal(ATerm toolvar, ATerm trm) {
		super(toolvar, trm);
	}

	public RecVal() {
		super();
	}

	public void compile(ProcessInstance P, AtomSet follow)
		throws ToolBusException {
		super.compile(P, follow, "rec-value", "snd-value");
	}

	public boolean execute() throws ToolBusException {
		if (!isEnabled())
			return false;
		ToolInstance ti = getTB().getTool(getEnv().getVar(getToolvar()));
		MatchResult mr = ti.getValueFromTool(getToolarg(), getEnv());
		if (mr.matches()) {
			mr.getLeft().update(getEnv());
			return true;
		} else
			return false;
	}

}