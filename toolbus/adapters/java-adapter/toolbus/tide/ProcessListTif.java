// Java tool interface class ProcessListTif
// This file is generated automatically, please do not edit!
// generation time: 10-Apr-97 7:18:31 PM

package toolbus.tide;
import toolbus.aterm.*;
import toolbus.tool.ToolException;
import java.net.UnknownHostException;
import java.net.InetAddress;
import java.util.Hashtable;


abstract public class ProcessListTif extends toolbus.tool.Tool
{
  // This table will hold the complete input signature
  private Hashtable sigTable = new Hashtable();

  // Declare the patterns that are used to match against incoming terms
  private ATermPattern PdapDisconnected0;
  private ATermPattern Pwatchpoint0;
  private ATermPattern PdapConnected0;
  private ATermPattern PlistProcesses0;
  private ATermPattern PrecTerminate0;

  // Mimic the three constructors from the Tool class
  protected ProcessListTif(String name) throws UnknownHostException { super(name); init(); }
  protected ProcessListTif(String name, InetAddress address, int port) throws UnknownHostException  { super(name, address, port); initSigTable(); }
  protected ProcessListTif(String[] args) throws UnknownHostException { super(args); init(); }

  // Initializations common to all constructors
  private void init() { initSigTable(); initPatterns(); }

  // This method initializes the table with input signatures
  private void initSigTable()
  {
    try { sigTable.put(ATermParser.makeSimple("rec-terminate(<debug-adapter>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-terminate(<master-control>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-terminate(<source-viewer>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-terminate(<rule-viewer>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-terminate(<watchpoint-viewer>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-terminate(<process-list>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-ack-event(<master-control>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<master-control>,dap-disconnected(<debug-adapter>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<master-control>,dap-connected(<debug-adapter>,<list>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<master-control>,new-tool(<str>,<term>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-ack-event(<watchpoint-viewer>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<watchpoint-viewer>,watchpoint(<debug-adapter>,<term>,<int>,<list>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<watchpoint-viewer>,rule-destroyed(<debug-adapter>,<term>,<int>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<watchpoint-viewer>,rule-modified(<debug-adapter>,<term>,<int>,<term>,<term>,<term>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<watchpoint-viewer>,rule-created(<debug-adapter>,<term>,<int>,<term>,<term>,<term>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<watchpoint-viewer>,dap-disconnected(<debug-adapter>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<watchpoint-viewer>,dap-connected(<debug-adapter>,<list>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<watchpoint-viewer>,view-watchpoint(<debug-adapter>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<process-list>,watchpoint(<debug-adapter>,<term>,<int>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<process-list>,dap-disconnected(<debug-adapter>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<process-list>,dap-connected(<debug-adapter>,<list>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<process-list>,list-processes(<debug-adapter>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-ack-event(<rule-viewer>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<rule-viewer>,current-port(<debug-adapter>,<term>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<rule-viewer>,watchpoint(<debug-adapter>,<term>,<int>,<list>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<rule-viewer>,rule-destroyed(<debug-adapter>,<term>,<int>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<rule-viewer>,rule-modified(<debug-adapter>,<term>,<int>,<term>,<term>,<term>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<rule-viewer>,rule-created(<debug-adapter>,<term>,<int>,<term>,<term>,<term>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<rule-viewer>,dap-disconnected(<debug-adapter>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<rule-viewer>,dap-connected(<debug-adapter>,<list>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<rule-viewer>,view-rules(<debug-adapter>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-ack-event(<source-viewer>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<source-viewer>,current-port(<debug-adapter>,<term>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<source-viewer>,watchpoint(<debug-adapter>,<term>,<int>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<source-viewer>,rule-destroyed(<debug-adapter>,<term>,<int>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<source-viewer>,rule-modified(<debug-adapter>,<term>,<int>,<term>,<term>,<term>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<source-viewer>,rule-created(<debug-adapter>,<term>,<int>,<term>,<term>,<term>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<source-viewer>,dap-disconnected(<debug-adapter>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<source-viewer>,dap-connected(<debug-adapter>,<list>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<source-viewer>,view-source(<debug-adapter>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-ack-event(<debug-adapter>,<term>)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<debug-adapter>,destroy-rule(<term>,<int>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-do(<debug-adapter>,modify-rule(<int>,<term>,<term>,<term>,<list>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-eval(<debug-adapter>,create-rule(<term>,<term>,<term>,<list>,<term>))"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-eval(<debug-adapter>,get-processes)"), new Boolean(true)); } catch (ParseError e) { }
    try { sigTable.put(ATermParser.makeSimple("rec-eval(<debug-adapter>,get-info)"), new Boolean(true)); } catch (ParseError e) { }
  }

  // Initialize the patterns that are used to match against incoming terms
  private void initPatterns()
  {
    try {
      PdapDisconnected0 = new ATermPattern("rec-do(dap-disconnected(<debug-adapter>))");
      Pwatchpoint0 = new ATermPattern("rec-do(watchpoint(<debug-adapter>,<term>,<int>,<term>))");
      PdapConnected0 = new ATermPattern("rec-do(dap-connected(<debug-adapter>,<list>,<term>))");
      PlistProcesses0 = new ATermPattern("rec-do(list-processes(<debug-adapter>))");
      PrecTerminate0 = new ATermPattern("rec-terminate(<term>)");
    } catch (ParseError e) {}
  }


  // Override these abstract methods to handle incoming ToolBus terms
  abstract void dapDisconnected(ATermApplRef a0) throws ToolException;
  abstract void watchpoint(ATermApplRef a0, ATermRef t1, int i2, ATermRef t3) throws ToolException;
  abstract void dapConnected(ATermApplRef a0, ATermListRef l1, ATermRef t2) throws ToolException;
  abstract void listProcesses(ATermApplRef a0) throws ToolException;
  abstract void recTerminate(ATermRef t0) throws ToolException;

  // The generic handler calls the specific handlers
  protected ATermRef handler(ATermRef term)
	throws ToolException
  {
    if(PdapDisconnected0.match(term)) {
      ATermPattern P = PdapDisconnected0;
      dapDisconnected((ATermApplRef)P.elementAt(0));
    } else if(Pwatchpoint0.match(term)) {
      ATermPattern P = Pwatchpoint0;
      watchpoint((ATermApplRef)P.elementAt(0), (ATermRef)P.elementAt(1), ((Integer)P.elementAt(2)).intValue(), (ATermRef)P.elementAt(3));
    } else if(PdapConnected0.match(term)) {
      ATermPattern P = PdapConnected0;
      dapConnected((ATermApplRef)P.elementAt(0), (ATermListRef)P.elementAt(1), (ATermRef)P.elementAt(2));
    } else if(PlistProcesses0.match(term)) {
      ATermPattern P = PlistProcesses0;
      listProcesses((ATermApplRef)P.elementAt(0));
    } else if(PrecTerminate0.match(term)) {
      ATermPattern P = PrecTerminate0;
      recTerminate((ATermRef)P.elementAt(0));
    } else 
      notInInputSignature(term);
    return null;
  }

  // Check the input signature
  protected void checkInputSignature(ATermListRef list)
         throws ToolException
  {
    ATermsRef sigs = list.getATerms();
    while(sigs != null) {
      ATermApplRef sig = (ATermApplRef)sigs.getFirst();
      sigs = sigs.getNext();
      if(!sigTable.containsKey(sig)) {
        // Sorry, but the term is not in the input signature!
        notInInputSignature(sig);
      }
    }
  }

  // This function is called when an input term
  // was not in the input signature.
  void notInInputSignature(ATermRef t)
        throws ToolException
  {
    throw new ToolException(this, "term not in input signature", t);
  }
}

