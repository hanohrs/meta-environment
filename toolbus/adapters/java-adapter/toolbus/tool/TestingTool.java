
package toolbus.tool;
import toolbus.aterm.*;
import toolbus.tool.*;
import toolbus.tool.ToolException;
import java.net.*;
import java.io.*;

public class TestingTool extends Testing
{
  public TestingTool() throws UnknownHostException { super("testing"); }
  public TestingTool(String args[]) throws UnknownHostException { super(args); }

  void testit(String s0)
  {
    System.out.println("testit called: s0=" + s0);
  }

  void testit(String s0, int i1)
  {
    System.out.println("testit-2 called: s0=" + s0 + "i1=" + i1);
  }

  void testit(String s0, ATermApplRef a1)
  {
    System.out.print("testit-3 called: s0=" + s0 + "a1=");
    a1.println(System.out);
  }

  ATermRef question(ATermApplRef a0)
  {
    ATermRef R = null;
    System.out.print("question called: a0=");
    a0.println(System.out);
    try {
      R = ATermParser.makeSimple("snd-value(answer(f(4, 3.2)))");
    } catch (ParseError e) { System.err.println("parse failure!"); }
    return R;
  }

  void recTerminate(ATermRef t0)
  {
    System.out.print("recTerminate called: ");
    t0.println(System.out);
  }

  void recAckEvent(ATermRef t0)
  {
    System.out.print("recAckEvent called: ");
    t0.println(System.out);
  }

  public static void main(String[] args) 
    throws UnknownHostException, IOException, ToolException
  {
    TestingTool T = new TestingTool(args);
    T.connect();
    T.run();
  }
}

