package errorapi.types;

abstract public class Slice extends errorapi.AbstractType {
  public Slice(errorapi.Factory factory, aterm.ATermList annos, aterm.AFun fun, aterm.ATerm[] args) {
     super(factory, annos, fun, args);
  }

  public boolean isEqual(Slice peer) {
    return super.isEqual(peer);
  }

  public boolean isSortSlice()  {
    return true;
  }

  public boolean isSlice() {
    return false;
  }

  public boolean hasId() {
    return false;
  }

  public boolean hasAreas() {
    return false;
  }

  public String getId() {
     throw new UnsupportedOperationException("This Slice has no Id");
  }

  public Slice setId(String _id) {
     throw new IllegalArgumentException("Illegal argument: " + _id);
  }

  public errorapi.types.AreaAreas getAreas() {
     throw new UnsupportedOperationException("This Slice has no Areas");
  }

  public Slice setAreas(errorapi.types.AreaAreas _areas) {
     throw new IllegalArgumentException("Illegal argument: " + _areas);
  }

}

