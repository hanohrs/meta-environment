package metastudio.graph;

import aterm.*;
import java.io.InputStream;
import java.io.IOException;

abstract public class PolygonImpl extends MetaGraphConstructor
{
  protected PolygonImpl(MetaGraphFactory factory) {
     super(factory);
  }
  protected void init(int hashCode, aterm.ATermList annos, aterm.AFun fun,	aterm.ATerm[] args) {
    super.init(hashCode, annos, fun, args);
  }
  protected void initHashCode(aterm.ATermList annos, aterm.AFun fun, aterm.ATerm[] i_args) {
  	super.initHashCode(annos, fun, i_args);
  }
  public boolean isEqual(Polygon peer)
  {
    return term.isEqual(peer.toTerm());
  }
  public boolean isSortPolygon()  {
    return true;
  }

  public boolean isEmpty()
  {
    return false;
  }

  public boolean isMulti()
  {
    return false;
  }

  public boolean hasHead()
  {
    return false;
  }

  public boolean hasTail()
  {
    return false;
  }

  public Point getHead()
  {
     throw new RuntimeException("This Polygon has no Head");
  }

  public Polygon setHead(Point _head)
  {
     throw new RuntimeException("This Polygon has no Head");
  }

  public Polygon getTail()
  {
     throw new RuntimeException("This Polygon has no Tail");
  }

  public Polygon setTail(Polygon _tail)
  {
     throw new RuntimeException("This Polygon has no Tail");
  }

}

