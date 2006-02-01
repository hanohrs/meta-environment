package toolbus.test;

import junit.framework.TestCase;
import toolbus.Environment;
import toolbus.TBTermFactory;
import toolbus.TBTermVar;
import toolbus.ToolBusException;
import aterm.ATerm;
import aterm.ATermList;
import aterm.pure.PureFactory;

public class EnvironmentTest extends TestCase {
  private PureFactory factory;

  public EnvironmentTest(String name) {
    super(name);
    factory = new PureFactory();
    TBTermFactory.init(factory);
  }

  /**
   * Declare and use two different variables
   */

  public void testEnv1() throws ToolBusException {
  	Environment env = new Environment();
    ATerm intType = TBTermFactory.make("int");
    ATerm strType = TBTermFactory.make("str");
    TBTermVar varX = TBTermFactory.makeTBTermVar("X", intType);
    TBTermVar varY = TBTermFactory.makeTBTermVar("Y", strType);

    ATerm intVal = factory.make("123");
    ATerm strVal = factory.make("abc");

    ATermList vars = factory.makeList(varY);
    vars = factory.makeList(varX, vars);

    env.introduceVars(vars);
/*
    try {
      assertEquals(env.getValue(varX), varX);
      assertEquals(env.getValue(varY), varY);
      fail();
    } catch (ToolBusException e) {
    }
    */

    env.assignVar(varX, intVal);
    System.err.println("value = " + env.getValue(varX));
    assertEquals(env.getValue(varX), intVal);
    /*
    try {
      assertEquals(env.getValue(varY), null);
      fail();
    } catch (ToolBusException e) {
    }
    */

    env.assignVar(varY, strVal);
    assertEquals(env.getValue(varX), intVal);
    assertEquals(env.getValue(varY), strVal);

  }

  /**
   * Declare and use variable with the same name
   */

  public void testEnv2() throws ToolBusException {
    Environment env = new Environment();
    
    ATerm intType = TBTermFactory.make("int");
    ATerm strType = TBTermFactory.make("str");
    TBTermVar varX1 = TBTermFactory.makeTBTermVar("X", intType);
    TBTermVar varX2 = TBTermFactory.makeTBTermVar("X", strType);

    ATermList vars = factory.makeList(varX2);
    vars = factory.makeList(varX1, vars);

    env.introduceVars(vars);

  }

  /**
   * Variables and bindings
   *      variable X
   *      formal Y -> actual X
   *
   */

  public void testEnv3() throws ToolBusException {
    Environment env = new Environment();
    ATerm intType = TBTermFactory.make("int");
    ATerm strType = TBTermFactory.make("str");
    
    TBTermVar varX = TBTermFactory.makeTBTermVar("X", intType);
    TBTermVar varY = TBTermFactory.makeTBTermVar("Y", intType); 
    
    ATerm int3 = factory.make("3");
    ATerm int4 = factory.make("4");

    ATermList declX = factory.makeList(varX);

    env.introduceVars(declX);

    ATermList actuals = factory.makeList(varX);
    ATermList formals = factory.makeList(varY);

    env.introduceBindings(formals, actuals, true);

    env.assignVar(varX, int3);
    env.assignVar(varY, int4);

    assertEquals(env.getValue(varX), int3);
    assertEquals(env.getValue(varY), int4);
  }

  /**
  * Result variables and bindings
  *      variable X
  *      formal Y? -> actual X?
  *      formal Z? -> actual Y?
  * 
  * (X, Y, and are thus aliases for a single variable)
  *
  */

  public void testEnv4() throws ToolBusException {
    Environment env = new Environment();
    
    ATerm intType = TBTermFactory.make("int");
    ATerm strType = TBTermFactory.make("str");
    
    TBTermVar varX = TBTermFactory.makeTBTermVar("X", intType);
    TBTermVar varY = TBTermFactory.makeTBTermVar("Y", intType);  
    TBTermVar varZ = TBTermFactory.makeTBTermVar("Z", intType);  
    
    assertTrue(TBTermFactory.isVar(varX));
    
    TBTermVar rvarX = TBTermFactory.makeTBTermResVar("X", intType);
    TBTermVar rvarY = TBTermFactory.makeTBTermResVar("Y", intType);  
    TBTermVar rvarZ = TBTermFactory.makeTBTermResVar("Z", intType);  
    
    assertTrue(TBTermFactory.isResVar(rvarX));

    ATermList declX = factory.makeList(varX);
    env.introduceVars(declX);
    System.err.println("env = " + env);

    ATermList formals1 = factory.makeList(rvarY);
    ATermList actuals1 = factory.makeList(rvarX);
    env.introduceBindings(formals1, actuals1, true);
    System.err.println("env = " + env);

    ATermList formals2 = factory.makeList(rvarZ);
    ATermList actuals2 = factory.makeList(rvarY);
    env.introduceBindings(formals2, actuals2, true);
    System.err.println("env = " + env);

    ATerm int3 = factory.make("3");
    ATerm int4 = factory.make("4");
    ATerm int5 = factory.make("5");
    ATerm int6 = factory.make("6");

    env.assignVar(varX, int3);

    assertEquals(env.getValue(varX), int3);
    assertEquals(env.getValue(varY), int3);
    assertEquals(env.getValue(varZ), int3);

    env.assignVar(varX, int4);

    assertEquals(env.getValue(varY), int4);
    assertEquals(env.getValue(varZ), int4);

    env.assignVar(rvarY, int5);
    assertEquals(env.getValue(varX), int5);
    assertEquals(env.getValue(varY), int5);
    assertEquals(env.getValue(varZ), int5);

    env.assignVar(rvarZ, int6);
    assertEquals(env.getValue(varX), int6);
    assertEquals(env.getValue(varY), int6);
    assertEquals(env.getValue(varZ), int6);
  }

}
