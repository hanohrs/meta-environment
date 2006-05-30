package nl.cwi.term.serializable;

/**
 * Represents a serializable string term.
 * 
 * @author Arnold Lankamp
 */
public class SerializableStringTerm extends AbstractTerm{
	private final static String SIGNATURE = "string()";
	private final static String TYPE = "string";

	/**
	 * Default constructor.
	 */
	public SerializableStringTerm(){
		super();
	}

	/**
	 * Constructor.
	 * 
	 * @param content
	 *            The content of this term (String).
	 */
	public SerializableStringTerm(String content){
		super(content);
	}

	/**
	 * Returns the content of this serializable string term.
	 * 
	 * @return The content of this serializable string term.
	 */
	public String getContent(){
		String content = new String(getContent(getKey()));
		// If there is no content, set it to null.
		if(!hasContent()) content = null;

		return content;
	}

	/**
	 * @see AbstractTerm#getSignature()
	 */
	public String getSignature(){
		return SIGNATURE;
	}

	/**
	 * @see AbstractTerm#getType()
	 */
	public String getType(){
		return TYPE;
	}

	/**
	 * @see AbstractTerm#match(String)
	 */
	public boolean match(String signature){
		return signature.equals(getSignature());
	}
}
