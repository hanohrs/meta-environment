package nl.cwi.sen1.graph.types.style;

public class Invisible extends nl.cwi.sen1.graph.types.Style {
  public Invisible(nl.cwi.sen1.graph.Factory factory, aterm.ATermList annos, aterm.AFun fun, aterm.ATerm[] args) {
    super(factory, annos, fun, args);
  }

  public shared.SharedObject duplicate() {
    return this;
  }

  public boolean equivalent(shared.SharedObject peer) {
    if (peer instanceof Invisible) {
      return super.equivalent(peer);
    }
    return false;
  }

  protected aterm.ATermAppl make(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    return getGraphFactory().makeStyle_Invisible(fun, args, annos);
  }

  public aterm.ATerm toTerm() {
    if (term == null) {
      term = getGraphFactory().toTerm(this);
    }
    return term;
  }

  public boolean isInvisible()
  {
    return true;
  }

  public aterm.ATermAppl setArgument(aterm.ATerm arg, int i) {
      throw new RuntimeException("Invisible has no arguments");
  }

  protected int hashFunction() {
    int c = 0 + (getAnnotations().hashCode()<<8);
    int a = 0x9e3779b9;
    int b = (getAFun().hashCode()<<8);

    a -= b; a -= c; a ^= (c >> 13);
    b -= c; b -= a; b ^= (a << 8);
    c -= a; c -= b; c ^= (b >> 13);
    a -= b; a -= c; a ^= (c >> 12);
    b -= c; b -= a; b ^= (a << 16);
    c -= a; c -= b; c ^= (b >> 5);
    a -= b; a -= c; a ^= (c >> 3);
    b -= c; b -= a; b ^= (a << 10);
    c -= a; c -= b; c ^= (b >> 15);

    return c;
  }

}
