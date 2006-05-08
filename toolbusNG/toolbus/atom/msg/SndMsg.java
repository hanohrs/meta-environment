/**
 * @author paulk, Jul 16, 2002
 */

package toolbus.atom.msg;

import java.util.Collections;
import java.util.LinkedList;

import toolbus.AtomSet;
import toolbus.StateElement;
import toolbus.TBTermFactory;
import toolbus.atom.Atom;
import toolbus.exceptions.ToolBusException;
import toolbus.process.ProcessExpression;
import toolbus.process.ProcessInstance;
import aterm.ATerm;

public class SndMsg extends MsgAtom {

	private LinkedList<RecMsg> msgPartners = new LinkedList<RecMsg>();
	// The RecMsgs in other processes with this SndMsg can communicate

	public SndMsg(ATerm msg, TBTermFactory tbfactory, ATerm posInfo) {
		super(msg, tbfactory, posInfo);
	}

	public ProcessExpression copy() {
		Atom a = new SndMsg(getMsg(), tbfactory, getPosInfo());
		a.copyAtomAttributes(this);
		return a;
	}

	public boolean canCommunicate(RecMsg a) throws ToolBusException {
		return tbfactory.mightMatch(getMsg(), a.getMsg());

	}

	public void addMsgPartner(RecMsg a) {
		msgPartners.add(a);
	}

	public void delMsgPartner(StateElement a) {
		msgPartners.remove(a);
	}

	public void addPartners(AtomSet atoms) throws ToolBusException {
		for (Atom b : atoms.getSet()) {
			if (b instanceof RecMsg) {
				RecMsg cb = (RecMsg) b;
				if (this.canCommunicate(cb)) {
					addMsgPartner(cb);
				}
			}
		}
	}

	public boolean execute() throws ToolBusException {
		if (isEnabled()) {
			Collections.rotate(msgPartners, 1);
			for (RecMsg b : msgPartners) {
				ProcessInstance pb = b.getProcess();

				if (pb.contains(b) && b.isEnabled() && matchesPartner(b)) {
					pb.gotoNextStateAndActivate(b);
					return true;
				}
			}
		}
		return false;
	}
}