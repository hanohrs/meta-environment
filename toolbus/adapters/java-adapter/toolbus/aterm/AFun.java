// $Id$
package toolbus.aterm;

import toolbus.tool.*;

/** This class defines the AFun as a subclass of the ATermAppl. It also defines a number of AsFix initialization functions for specific AFuns. This class is only used in conjunction with the class AsFix.
@see AsFix
*/
public class AFun extends ATermAppl {
  public AFun(World world, String af) {
    super(world, af);
  }
  /** init defines AsFix terms. It initializes terms with a well-defined value. See specification for details.
<p>

So far the following AFuns are defined:
<ul> <li> prod <li> appl <li> list </ul>
*/

  public ATermAppl init() {
    String af = this.getFun();
    ATermAppl result = null;
    try {
    if (af.equals("prod")) {
      result = (ATermAppl) world.makeSimple("prod(module-name,w(\"\"),syms,w(\"\"),l(\"->\"),w(\"\"),sym,w(\"\"),attrs)");
    } else if (af.equals("appl")) {
      result = (ATermAppl) world.makeSimple("appl(prod,w(\"\"),args)");
    } else if (af.equals("list")) {
      result = (ATermAppl) world.makeSimple("list(sym,w(\"\"),elems)");
      //    } else {
      //      throw new Exception("Undefined AFun being initialized: "+af);
    } else if (af.equals("lex")) {
	result = (ATermAppl) world.makeSimple("lex(name,sym)");
    } else if (af.equals("term")) {
	result = (ATermAppl) world.makeSimple("term(l(\"term\"),w(\"\"),name,w(\"\"),module-name,w-left,term,w-right,abbrevs)");
    } else {
	System.err.println("AFun.init: Tried to init undefined afun");
	System.exit(1);
    }
    }
    catch (ParseError e) {
	System.err.println(e);
	System.exit(1);
    }
    return result;
  }
      
}	
