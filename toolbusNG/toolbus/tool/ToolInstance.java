 package toolbus.tool;

import java.util.Hashtable;
import java.util.LinkedList;
import java.util.List;

import toolbus.Environment;
import toolbus.TBTerm;
import toolbus.ToolBusException;
import aterm.AFun;
import aterm.ATerm;
import aterm.ATermAppl;
import aterm.ATermList;

/**
 * @author paulk, Jul 29, 2002
 * 
 * Tool Instance creates the environment for running an arbitrary tool.
 * This includes:
 * - creating a ToolShield to run the actual tool.
 * - managing the Tool Control Protocol
 */

public class ToolInstance {
 
  private static int toolCount = 0; // global counter of tool instances
  private ATerm toolId;				// id of current tool: toolname(<int>)
  
  private LinkedList valuesFromTool;
  private LinkedList eventsFromTool;
  private LinkedList pendingEvents;
  
  private ToolShield toolShield;     // The ToolShield that handles this tool

  public static final Integer EVAL = new Integer(1);
  public static final Integer DO = new Integer(2);
  public static final Integer ACK = new Integer(3);
  public static final Integer TERMINATE = new Integer(4);
  public static final String[] OperatorForTool = {"dummy", "rec-eval", "rec-do", "rec-ack-event", "rec-terminate"};
  
  public final int a_snd_connect = 0;
  public final int a_snd_disconnect = 1;
  public final int a_rec_terminate = 2;
  
  public final int a_rec_eval = 3;
  public final int a_snd_value = 4;
  public final int a_rec_cancel = 5;
  
  public final int a_rec_do = 6;
  public final int a_snd_void = 7;
  
  public final int a_snd_continue = 8;
  public final int a_snd_event = 9;
  public final int a_rec_ack_event = 10;
  
  String [] toolRequestAtoms = {
  		"connect", "disconnect", "terminate",
		"eval", "value", "cancel",
		"do", "void",
		"event", "ack_event",	
  };
  
  Hashtable reverseRole = new Hashtable();
  Hashtable toolRequestIndex = new Hashtable();
  
  ATerm termSndVoid;

  /**
   * Construct a ToolInstance. 
   * 
   * @param toolDefinition definition of the tool
   */

  public ToolInstance(ToolDefinition toolDef) throws ToolBusException {
    System.err.println("ToolInstance");
    valuesFromTool = new LinkedList();
    eventsFromTool = new LinkedList();
    pendingEvents = new LinkedList();
    
	for(int i = 0; i < toolRequestAtoms.length; i++){
		String s = toolRequestAtoms[i];
		reverseRole.put( "snd-" + s, "rec-" + s);
		reverseRole.put( "rec-" + s, "snd-" + s);
	}
	toolRequestIndex.put("snd-connect", new Integer(a_snd_connect));
	toolRequestIndex.put("snd-disconnect", new Integer(a_snd_disconnect));
	toolRequestIndex.put("rec-terminate", new Integer(a_rec_terminate));
	
	toolRequestIndex.put("rec-eval", new Integer(a_rec_eval));
	toolRequestIndex.put("snd-value", new Integer(a_snd_value));
	toolRequestIndex.put("rec-cancel", new Integer(a_rec_cancel));
	
	toolRequestIndex.put("rec-do", new Integer(a_rec_do));
	toolRequestIndex.put("snd-void", new Integer(a_snd_void));

	toolRequestIndex.put("snd-continue", new Integer(a_snd_continue));
	toolRequestIndex.put("snd-event", new Integer(a_snd_event));
	toolRequestIndex.put("rec-ack-event", new Integer(a_rec_ack_event));
	
	termSndVoid = TBTerm.factory.parse("snd-void");
	
    AFun afun = TBTerm.factory.makeAFun(toolDef.getName(), 1, false);
    toolId = TBTerm.factory.makeAppl(afun, TBTerm.factory.makeInt(toolCount++));

    toolShield = toolDef.makeToolShield(this);
    toolShield.start();
    while(!toolShield.isRunning()){ //TODO Maybe another solution to force the completion of the tool connection?
    	try{
  	      Thread.sleep(100);
  	      }
  	      catch(InterruptedException e){
  	      System.out.println("Sleep Interrupted");
  	      }
    }
  }

  public ATerm getToolId(){
  	return toolId;
  }
  
  public int getToolCount(){
  	return toolCount;
  }
  
  /**
   * Handle any term that comes from the tool.
   * @param t 
   */
  public synchronized void handleTermFromTool(ATerm t) {	
		System.err.println("tool " + toolId + " handling term from tool: " + t);
		
		if(t.isEqual(termSndVoid)){
			TCPtransition(a_snd_void, null, true);
			return;
		}
		
		List matches = t.match("snd-value(<term>)"); //TODO; more args
		if (matches != null) {
			addValueFromTool(matches.get(0)); 
			return;
		}
		
		List matches1 = t.match("snd-event(<term>)");
		if (matches1 != null) {
			ATerm t1 = (ATerm) matches1.get(0);
			addEventFromTool(TBTerm.factory.makeList(t1));
			return;
		}
		List matches2 = t.match("snd-event(<term>,<term>)"); //TODO: more than 2 args
		if (matches2 != null) {
			ATerm t1 = (ATerm) matches2.get(0);
			ATerm t2 = (ATerm) matches2.get(1);
			
			addEventFromTool(TBTerm.factory.makeList(t1, TBTerm.factory.makeList(t2)));
			return;
		}
		// connect
		// disconnect
		System.err.println("tool " + toolId + " not handled!");
}
  /*
   * Implementation of Eval
   * 
   */
  
  /**
   * ToolBus sends an evaluation request to the tool when evaluating the SndEval atom.
   * The answer will be returned by the ToolShield using addValueFromTool.
   * @return boolean
   */

  synchronized public boolean sndEvalToTool(ATermAppl call) {
  	if (TCP_goEvalDo()){
  		System.err.println("sndEvalToTool: true case");
  		toolShield.sndRequestToTool(EVAL, call);
  		return true;
  	} else {
  		System.err.println("sndEvalToTool: false case");
  		return false;
  	}
  }
  
  /**
   * addValueFromTool is called by ToolShield to add a value returned by the tool 
   * to valuesFromTool. It is eventually passed on to the ToolBus, when evaluation
   * of the RecValue atom calls getValueFromTool.
   * @param res the tresult returned by the tool
   */

  synchronized public void addValueFromTool(Object res) {
    valuesFromTool.addLast(res);
    System.err.println("ToolInstance.addValue: " + toolId + " res = " + res);
  }
  
  /**
   * ToolBus retrieves a value obtained from the tool while evaluating
   * the RecValue atom.
   * @param trm the term returned by the tool
   * @param env the local environment of the RecValue atom
   */

  synchronized public boolean getValueFromTool(ATerm trm, Environment env)
  throws ToolBusException {
  	//System.err.println("getValueFromTool " + toolId + ": " + trm);
  	if (valuesFromTool.isEmpty()) {
  		return false;
  	} else {
  		ATerm result = (ATerm) valuesFromTool.getFirst();
  		boolean matches = TBTerm.match(trm, env, result, new Environment());
  		if (matches) {
  			if (TCP_goConnected()){
  				valuesFromTool.removeFirst();
  				return true;
  			} else {
  				return false;
  			}
  		} else {
  			return false;
  		}
  	}
  }
  
  /*
  * Implementation of Do
  */

  /**
   * ToolBus sends a do request to the tool while evaluating the SndDo atom.
   * The answer (SndVoid) will be returned by the ToolShield using addValueFromTool.
   * @return TODO
   */

  synchronized public boolean sndDoToTool(ATermAppl call) {
 	if (TCP_goEvalDo()){
 		//System.err.println("sndDoToTool: true case");
 		toolShield.sndRequestToTool(DO, call);
 		return true;
 	} else {
		//System.err.println("sndDoToTool: false case");
 		return false;
 	}
  }
  
  /*
   * Implementation of Events
   */
  
  /**
   * ToolBus receives an event while evaluating the RecEvent atom.
   * 
   * @see toolbus.tool.ToolInstance#getEventFromTool(ATerm, Environment)
   */

  synchronized public boolean getEventFromTool(ATermList alist, Environment env) {
    //System.err.println("getEventFromTool: " + " " + trm);
    for (int i = 0; i < eventsFromTool.size(); i++) {
      try {
        ATermList eventArgs = (ATermList) eventsFromTool.get(i);
        boolean matches = TBTerm.match(alist, env, eventArgs, new Environment());
        System.err.println(matches + " " + eventArgs);
        if (matches) {
          if(ackWaiting(eventArgs.getFirst())){
          	return false;
          } else {
          	eventsFromTool.remove(i);
          	pendingEvents.addLast(eventArgs);
            System.err.println("pendingEvents.size = " + pendingEvents.size());
          	return true;
          }
        }
      } catch (ToolBusException e) {
        System.err.println("getEventFromTool: cannot happen :-)");
      }
    }
    //System.err.println("getEventFromTool returns false");
    return false;
  }
  
  private boolean ackWaiting(ATerm key){
    for (int i = 0; i < pendingEvents.size(); i++) {
        ATermList eventArgs = (ATermList) pendingEvents.get(i);
        ATerm keyEvent = eventArgs.getFirst();
        if(key == keyEvent)
        	return true;
    }
    return false;
  }
  
  private boolean ackPossible(ATerm key){
    for (int i = 0; i < pendingEvents.size(); i++) {
        ATermList eventArgs = (ATermList) pendingEvents.get(i);
        ATerm keyEvent = eventArgs.getFirst();
        System.err.println("eventArgs " + eventArgs);
        if(key == keyEvent){
        	pendingEvents.remove(i);
        	return true;
        }
    }
    return false;
  }
  
  /** 
   * addEventFromTool adds an event generated by the tool to the the eventsFromTool list
   * @param obj generated by tool
   */

  synchronized public void addEventFromTool(Object obj) {
    eventsFromTool.addLast(obj);
    System.err.println("ToolInstance.addEvenFromTool: obj = " + obj);
  }
 
  /**
   * ToolBus sends an acknowledgement to a previous event while executing the AckEvent atom.
   */

  synchronized public boolean sndAckToTool(ATerm eventTerm) throws ToolBusException {
    System.err.println("sndAckToTool:" + eventTerm);
    if (!ackPossible(eventTerm)) {
      return false;
    }
    toolShield.sndRequestToTool(ACK, eventTerm);
    return true;
  }

  /**
   * ToolBus terminates the execution of this tool while executing the Terminate atom.
   * @see toolbus.tool.ToolInstance#terminate(String)
   */
  public void terminate(String msg){
  	System.err.println("ToolInstance.terminate: " + toolId);
  	toolShield.terminate(msg);
  }
  
  /**
   * Transition functions for the Tool Control Protocol, the protocol that governs 
   * the ToolBus/tool communications (Not to be confused with the TCP/IP protocol!)
   * 
   * Note that the protocol is defined from the perspective of the *tool*, i.e., 
   * we use snd_value rather than rec_value.
   * event: the event 
   * update: true => update toolinstance, false => leave toolinstance unchanged
   * 
   * Returns: PHASE1, PHASE2, PHASE3 when legal transition -1 for illegal
   * transition
   * 
   * Note there is one deviation from the "official" TCP protocol. Similar to
   * the rec-eval/snd-value pair we introduce a new message snd-void to form the
   * pair rec-do/snd-void. Motivation: to avoid buffer overflow in the operating
   * system's kernel when *many* do's are being sent to the same tool.
   */
  
  
  private int phase = PHASE1;
  
  private static final int PHASE1 = 1; // unconnected
  private static final int PHASE2 = 2; // connected, start state
  private static final int PHASE3 = 3; // snd-eval received;
  
  public boolean unConnected() {
  	return phase == PHASE1;
  }
  
  public boolean TCP_goConnected(){
  	if(phase == 1 || phase == 3){
  		phase = PHASE2;
  		return true;
  	} else {
  		return false;
  	}
  }
  
  public boolean TCP_goEvalDo(){
  	if(phase == PHASE2){
  		phase = PHASE3;
  		return true;
  	} else {
  		return false;
  	}
  }
}

