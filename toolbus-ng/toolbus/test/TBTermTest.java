package toolbus.test;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;

import junit.framework.Test;
import junit.framework.TestCase;
import junit.framework.TestSuite;
import toolbus.Environment;
import toolbus.Functions;
import toolbus.TBTermFactory;
import toolbus.TBTermVar;
import toolbus.ToolBusException;
import aterm.ATerm;
import aterm.ATermBlob;
import aterm.ATermList;
import aterm.pure.PureFactory;

public class TBTermTest extends TestCase {
  private PureFactory factory;

  public TBTermTest(String arg0) {
    super(arg0);
    factory = new PureFactory();
    TBTermFactory.init(factory);
  }

  public void testVars() {
	TBTermVar var = TBTermFactory.makeTBTermVar("X", factory.make("int"));
    TBTermVar rvar = TBTermFactory.makeTBTermResVar("X", factory.make("int"));
    assertTrue(TBTermFactory.isVar(var));
    assertTrue(!TBTermFactory.isResVar(var));
    
    assertTrue(TBTermFactory.isResVar(rvar));
    assertTrue(!TBTermFactory.isVar(rvar));
  }

  public void testBooleans() {
    assertTrue(TBTermFactory.isBoolean(TBTermFactory.True));
    assertTrue(TBTermFactory.isBoolean(TBTermFactory.False));
  }

  public void testConstants() {
    //assertEquals(TBTermFactory.True.getFactory(), factory);
    assertEquals(TBTermFactory.True, TBTermFactory.make("true"));
    assertEquals(TBTermFactory.False, TBTermFactory.make("false"));
    assertEquals(TBTermFactory.BoolType, TBTermFactory.make("bool"));
    assertEquals(TBTermFactory.IntType, TBTermFactory.make("int"));
    assertEquals(TBTermFactory.RealType, TBTermFactory.make("real"));
    assertEquals(TBTermFactory.StrType, TBTermFactory.make("str"));
    assertEquals(TBTermFactory.TermType, TBTermFactory.make("term"));
    assertEquals(TBTermFactory.ListType, TBTermFactory.make("list"));

    assertEquals(TBTermFactory.VoidType, TBTermFactory.make("void"));

    assertEquals(TBTermFactory.BoolPlaceholder, TBTermFactory.makePlaceholder(TBTermFactory.BoolType));
    assertEquals(TBTermFactory.IntPlaceholder, TBTermFactory.makePlaceholder(TBTermFactory.IntType));
    assertEquals(TBTermFactory.RealPlaceholder, TBTermFactory.makePlaceholder(TBTermFactory.RealType));

    assertEquals(TBTermFactory.StrPlaceholder, TBTermFactory.makePlaceholder(TBTermFactory.StrType));
    assertEquals(TBTermFactory.TermPlaceholder, TBTermFactory.makePlaceholder(TBTermFactory.TermType));
    assertEquals(TBTermFactory.ListPlaceholder, TBTermFactory.makePlaceholder(TBTermFactory.ListType));
    assertEquals(TBTermFactory.IntPlaceholder, TBTermFactory.make("<int>"));
   
  }

  boolean doMatch(String s1, String s2) {
    Environment e1 = new Environment();
    Environment e2 = new Environment();
    try {
      return TBTermFactory.match(TBTermFactory.make(s1), e1, TBTermFactory.make(s2), e2);
    } catch (ToolBusException e) {
      fail(e.getMessage());
    }
    return false;
  }

  public void testMatch() {
    assertTrue(doMatch("1", "1"));
    assertTrue(!doMatch("1", "2"));

    assertTrue(doMatch("1.5", "1.5"));
    assertTrue(!doMatch("1.5", "2.5"));

    assertTrue(doMatch("\"\"", "\"\""));
    assertTrue(doMatch("\"abc\"", "\"abc\""));
    assertTrue(!doMatch("\"\"", "\"def\""));
    assertTrue(!doMatch("\"abc\"", "\"\""));
    assertTrue(!doMatch("\"abc\"", "\"def\""));

    assertTrue(doMatch("[]", "[]"));
    assertTrue(doMatch("[1]", "[1]"));
    assertTrue(doMatch("[1, 2]", "[1, 2]"));
    assertTrue(!doMatch("[]", "[1, 2]"));
    assertTrue(!doMatch("[1, 2]", "[]"));
    assertTrue(!doMatch("[1]", "[1, 2]"));
    assertTrue(!doMatch("[1, 2]", "[1]"));

    assertTrue(doMatch("f", "f"));
    assertTrue(!doMatch("f", "g"));
    assertTrue(doMatch("f(1)", "f(1)"));
    assertTrue(doMatch("f(1,2)", "f(1,2)"));
    assertTrue(!doMatch("f(1)", "f(1,2)"));
    assertTrue(!doMatch("f(1,2)", "f(1)"));

    assertTrue(doMatch("<int>", "1"));
    assertTrue(doMatch("1", "<int>"));
    assertTrue(!doMatch("<int>", "1.5"));
    assertTrue(!doMatch("1.5", "<int>"));
    assertTrue(!doMatch("1.5", "<int>"));

    assertTrue(doMatch("<real>", "1.5"));
    assertTrue(doMatch("1.5", "<real>"));

    assertTrue(doMatch("<str>", "\"abc\""));
    assertTrue(doMatch("\"abc\"", "<str>"));

    assertTrue(doMatch("<term>", "f(1,2,3)"));
    assertTrue(doMatch("f(1,2,3)", "<term>"));

    assertTrue(doMatch("<list>", "[1,2,3]"));
    assertTrue(doMatch("[1,2,3]", "<list>"));

    assertTrue(!doMatch("<list>", "f(1,2,3)"));
    assertTrue(!doMatch("f(1,2,3)", "<list>"));
  }
  
  boolean doMatch(String s1, Environment e1, String s2, Environment e2) {
    try {
      return TBTermFactory.match(TBTermFactory.make(s1), e1, TBTermFactory.make(s2), e2);
    } catch (ToolBusException e) {
      fail(e.getMessage());
    }
    return false;
  }
  boolean doMatch(ATerm t1, Environment e1, ATerm t2, Environment e2) {
	    try {
	      return TBTermFactory.match(t1, e1, t2, e2);
	    } catch (ToolBusException e) {
	      fail(e.getMessage());
	    }
	    return false;
	  }
  
  boolean doSubst(String s1, Environment e, String s2) throws ToolBusException{
  	return TBTermFactory.substitute(TBTermFactory.make(s1), e).isEqual(TBTermFactory.make(s2));
  }
  
  boolean doSubst(ATerm t1, Environment e, ATerm t2) throws ToolBusException{
	  	return TBTermFactory.substitute(t1, e).isEqual(t2);
	  }
  
  public void testSubstitute() throws ToolBusException {
 	Environment env1 = new Environment();
    TBTermVar varX = TBTermFactory.makeTBTermVar("X", TBTermFactory.make("int"));	
    TBTermVar rvarX = TBTermFactory.makeTBTermResVar("X", TBTermFactory.make("int"));	
    ATerm int3 = TBTermFactory.make("3");
    ATermList declX = TBTermFactory.makeList(varX);
    env1.introduceVars(declX);
    env1.assignVar(varX, int3);
    
    ATerm f3 = TBTermFactory.make("f(3)");
    ATerm fvarX = TBTermFactory.make("f(<term>)", varX);
    ATerm frvarX = TBTermFactory.make("f(<term>)", rvarX);
    
    System.err.println("f3 = " + f3);
    System.err.println("fvarX = " + fvarX);
    System.err.println("frvarX = " + frvarX);
    
    assertTrue(doSubst("1", env1, "1"));
    assertTrue(doSubst(varX, env1, int3));
    System.err.println("after subs: " + TBTermFactory.substitute(fvarX,env1));
    assertTrue(doSubst(fvarX, env1, f3));
    assertTrue(doSubst(rvarX, env1, rvarX));
    assertTrue(doSubst(frvarX, env1, frvarX));  
  }
  
  public void testMatchVar() throws ToolBusException {
  	Environment env1 = new Environment();
  	Environment env2 = new Environment();
  	
    TBTermVar varX = TBTermFactory.makeTBTermVar("X", TBTermFactory.make("int"));	
    TBTermVar rvarX = TBTermFactory.makeTBTermResVar("X", TBTermFactory.make("int"));	
    TBTermVar varY = TBTermFactory.makeTBTermVar("Y", TBTermFactory.make("int"));
    TBTermVar rvarY = TBTermFactory.makeTBTermResVar("Y", TBTermFactory.make("int"));
    TBTermVar varB = TBTermFactory.makeTBTermVar("B", TBTermFactory.make("str"));	
  
    ATerm int3 = TBTermFactory.make("3");
    ATerm int4 = TBTermFactory.make("4");
    ATerm int5 = TBTermFactory.make("5");
    ATerm int6 = TBTermFactory.make("6");
    
    ATermList declX = TBTermFactory.makeList(varX);
    env1.introduceVars(declX);
    env1.assignVar(varX, int3);
    
    ATermList declY = TBTermFactory.makeList(varY);
    env2.introduceVars(declY);
    env2.assignVar(varY, int4);
    
    assertTrue(doMatch(varX, env1, int3, env2));
    assertTrue(!doMatch(varX, env1, int4, env2));
    assertTrue(doMatch(int4, env1, varY, env2));
    assertTrue(!doMatch(int3, env1, varY, env2));
    
    ATerm f3 = TBTermFactory.make("f(3)");
    ATerm f4 = TBTermFactory.make("f(4)");
    ATerm f6 = TBTermFactory.make("f(6)");
    ATerm gf6 = TBTermFactory.make("g(f(6))");
    ATerm fvarX = TBTermFactory.make("f(<term>)", varX);
    ATerm fvarY = TBTermFactory.make("f(<term>)", varY);
    ATerm frvarX = TBTermFactory.make("f(<term>)", rvarX);
    ATerm gvarX = TBTermFactory.make("g(<term>)", varX);
    
    assertTrue(doMatch(fvarX, env1, f3, env2));
    assertTrue(!doMatch(fvarX, env1, f4, env2));
    assertTrue(doMatch(f4, env1, fvarY, env2));
    assertTrue(!doMatch(f3, env1, fvarY, env2));
    
    assertTrue(doMatch(rvarX, env1, int5, env2)); 
    assertEquals(env1.getValue(varX), int5);
    assertTrue(doMatch(varX, env1, int5, env2)); 
    
    assertTrue(doMatch(int6, env1, rvarY, env2)); 
    assertEquals(env2.getValue(varY), int6);
    assertTrue(doMatch(int6, env1, varY, env2)); 
    
    assertTrue(doMatch(rvarX, env1, fvarY, env2));
    assertEquals(env1.getValue(varX), f6);
    
    assertTrue(doMatch(gvarX, env1, rvarY, env2));
    assertEquals(env2.getValue(varY), gf6);
/*    
    ATermBlob b1 = factory.makeBlob(new byte[]{'a', 'b', 'c'});
    ATermBlob b2 = factory.makeBlob(new byte[]{'a', 'b', 'c'});
    
    ATermList declB = factory.makeList(varB);
    env1.introduceVars(declB);
    env1.assignVar(varB, b1);  
    
    assertTrue(doMatch(b1.toString(), env1, b1.toString(), env2));
    assertTrue(doMatch(b1.toString(), env1, b2.toString(), env2));
    assertTrue(doMatch(b1.toString(), env1, "<str>", env2));
    assertTrue(doMatch("<str>", env1, b1.toString(), env2));
    
    assertTrue(doMatch("var(str,B)", env1, b1.toString(), env2));
    */
  }

  public ATerm check(String s) throws ToolBusException {
    Environment e = new Environment();
    return Functions.checkType(TBTermFactory.make(s), e, false);
  }

  public void testStaticCheck() throws ToolBusException {
    assertEquals(check("1"), TBTermFactory.IntType);
    assertEquals(check("1.5"), TBTermFactory.RealType);
    assertEquals(check("\"abc\""), TBTermFactory.StrType);
    assertEquals(check("true"), TBTermFactory.BoolType);
    assertEquals(check("false"), TBTermFactory.BoolType);

    assertEquals(check("add(1,2)"), TBTermFactory.IntType);
    assertEquals(check("greater(1,2)"), TBTermFactory.BoolType);
  }

  public boolean compatible(String s1, String s2) throws ToolBusException {
    return Functions.compatibleTypes(TBTermFactory.make(s1), TBTermFactory.make(s2));
  }

  public void testCompatible() throws ToolBusException {
    assertTrue(compatible("int", "int"));
    assertTrue(!compatible("int", "real"));

    assertTrue(compatible("term", "int"));
    assertTrue(compatible("int", "term"));

    assertTrue(compatible("f", "f"));
    assertTrue(!compatible("f", "g"));
    assertTrue(compatible("f(int)", "f(int)"));
    assertTrue(compatible("f", "f(int)"));
    assertTrue(compatible("f(int)", "f()"));

    assertTrue(compatible("[]", "[]"));
    assertTrue(compatible("[int]", "[int]"));
    assertTrue(!compatible("[int]", "[]"));
    assertTrue(!compatible("[int,int]", "[int]"));
    assertTrue(!compatible("[int]", "[int,int]"));

    assertTrue(compatible("list", "[int,int]"));
    assertTrue(!compatible("list", "int"));

    assertTrue(compatible("list(int)", "[int, int, int]"));
    assertTrue(!compatible("list(int)", "[int, real, int]"));
 
    assertTrue(compatible("<int>", "13"));
    assertTrue(compatible("f(<int>)", "f(13)"));
    assertTrue(compatible("f(<int>,14)", "f(13,<int>)"));
    assertTrue(compatible("[<int>,14]", "[13,<int>]"));
    
    assertTrue(compatible("13", "<int>"));
    assertTrue(compatible( "f(13)", "f(<int>)"));
    assertTrue(compatible("f(13,<int>)", "f(<int>,14)"));
    assertTrue(compatible("[13,<int>]", "[<int>,14]"));
    
    assertTrue(compatible("<real>", "13.5"));
    assertTrue(compatible("f(<real>)", "f(13.5)"));
    assertTrue(compatible("f(<real>,14.5)", "f(13.5,<real>)"));
    assertTrue(compatible("[<real>,14.5]", "[1.5,<real>]"));
    
    assertTrue(compatible("13.5", "<real>"));
    assertTrue(compatible("f(13.5)", "f(<real>)"));
    assertTrue(compatible("f(13.5,<real>)", "f(<real>,14.5)"));
    assertTrue(compatible("[1.5,<real>]", "[<real>,14.5]"));
    
    assertTrue(compatible("<str>", "\"abc\""));
    assertTrue(!compatible("<str>", "f(1)"));
    assertTrue(!compatible("<str>", "f"));
    
    assertTrue(compatible("\"abc\"", "<str>"));
    assertTrue(!compatible("f(1)", "<str>"));
    assertTrue(!compatible("f", "<str>"));
    
  }
  
  ATerm writeRead(ATerm term) {
	File f = new File("tmp");
	FileOutputStream os;
	try {
		os = new FileOutputStream(f);
		term.writeToTextFile(os);
		os.close();
		FileReader is = new FileReader(f);
		ATerm t = factory.readFromTextFile(is);
		//System.err.println("writeRead: " + term + " => " + t);
		return t;
	} catch (FileNotFoundException e1) {
		// TODO Auto-generated catch block
		e1.printStackTrace();
	} catch (Exception ex) {
		// TODO Auto-generated catch block
		ex.printStackTrace();
	}
	return null;
  }
  
  public void xxtestBlob() {
  	ATermBlob b = factory.makeBlob(new byte[]{'a', 'b', 'c'});
  	/*
  	byte data[] = b.getBlobData();
  	assertTrue(data[0] == 'a');
  	assertTrue(data[1] == 'b');
  	assertTrue(data[2] == 'c');
 	System.err.println(b.toString());
  	ATermBlob c = (ATermBlob) factory.make(b.toString());
  	data = c.getBlobData();
 
 	assertTrue(data[0] == 'a');
  	assertTrue(data[1] == 'b');
  	assertTrue(data[2] == 'c'); 	
  	
	ATermBlob d = factory.makeBlob(new byte[]{'a', -128, -3});
  	data = d.getBlobData();
  	assertTrue(data[0] == 'a');
  	assertTrue(data[1] == -128);
  	assertTrue(data[2] == -3);
 	System.err.println(d.toString());
  	ATermBlob e = (ATermBlob) factory.make(d.toString());
  	data = e.getBlobData();
 
 	assertTrue(data[0] == 'a');
  	assertTrue(data[1] == -128);
  	assertTrue(data[2] == -3); 	
  	
  	assertTrue(b.isEqual(b));
  	*/
 //	ATermBlob b2 = factory.makeBlob(new byte[]{'a', 'b', 'c'});
 //	assertTrue(b.isEqual(b2));
 	//assertTrue(!b.isEqual(d));
 	
 //	System.err.println("b = " + b);
	System.err.println("writeRead(b) = " + writeRead(b));
	
//	assertTrue(writeRead(b).isEqual(b));
/*
	assertTrue(writeRead(d).isEqual(d));
	assertTrue(writeRead(d).isEqual(e));
	assertTrue(writeRead(e).isEqual(d));
	
	ATerm f1 = factory.make("f(<term>)", b);
	ATerm f2 = factory.make("f(<term>)", c);
	assertTrue(f1.isEqual(f1));
	assertTrue(f2.isEqual(f2));
	//assertTrue(f1.isEqual(f2));  // No equality on blobs yet!
	 */
  }
  
  public static Test suite() {
    return new TestSuite(TBTermTest.class);
  }

  public static void main(String args[]) {
    junit.textui.TestRunner.run(suite());
  }

}

