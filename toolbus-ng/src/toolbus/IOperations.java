package toolbus;

/**
 * This interface holds all the operation codes that are used to identify the request / response
 * types.
 * 
 * @author Arnold Lankamp
 */
public interface IOperations{
	// From Tool to ToolBus.
	public final static byte CONNECT = 1;
	public final static byte DISCONNECT = 2;
	public final static byte EVENT = 3;
	public final static byte VALUE = 4;
	public final static byte ACKDO = 5;
	public final static byte RESPONSE = 6;

	// From ToolBus to Tool.
	public final static byte ACKEVENT = 11;
	public final static byte EVAL = 12;
	public final static byte DO = 13;
	public final static byte TERMINATE = 14;
	public final static byte REQUEST = 15;
	
	// Stats
	public final static byte PERFORMANCESTATS = 21;
	public final static byte DEBUGPERFORMANCESTATS = 22;
	
	// Generic.
	public final static byte UNDEFINED = -1;
	public final static byte END = 127;
}
