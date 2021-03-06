package org.autocode.generator.java.plugin;

//{{{ imports

import org.autocode.*;
import org.autocode.property.*;
import org.autocode.generator.*;
import org.autocode.generator.repository.*;
import org.autocode.generator.java.*;
import org.autocode.generator.java.repository.*;

import java.util.*;

//}}}

public class Equality
  extends JavaGeneratorPlugin
{
  //{{{ public void generateEquals(generator, typeContext, operationContext)

  public void generateEquals(JavaGenerator generator,
			     PropertyContext typeContext,
			     PropertyContext operationContext)
  {
    CodeBlock body = new CodeBlock();

    JavaMethod method
      = createMethod(operationContext, "equals", "boolean", body);
    FormalParameter peerParam = new FormalParameter("peerObject", "Object");
    peerParam.setDescription("the peer object to test for equality");
    method.addFormalParameter(peerParam);
    
    body.addLine("if (!(peerObject instanceof " + typeContext.getName()
		 + ")) {");
    body.addLine("  return false;");
    body.addLine("}");
    body.addLine("");
    body.addLine(typeContext.getName() + " peer = (" +
		 typeContext.getName() + ")peerObject;");
    body.addLine("");

    //{{{ Add field equality checks

    Iterator iter = typeContext.getValueSet("field").iterator();
    while (iter.hasNext()) {
      String fieldName = (String)iter.next();
      PropertyContext fieldContext
	= new PropertyContext(typeContext, "field", fieldName);

      PropertyContext fieldTypeContext
	= new PropertyContext(fieldContext, "type");

      String getter = fieldContext.getString("getter");
      if (getter == null) {
	throw new RuntimeException("operation 'equals' requires that a "
				   + "getter is defined for field "
				   + fieldName);
      }
      if (fieldTypeContext.getBoolean("reference-type")) {
	body.addLine("if (!peer." + getter + "().equals("
		     + getter + "())) {");
	body.addLine("  return false;");
	body.addLine("}");
      } else {
	body.addLine("if (peer." + getter + "() != " + getter + "()) {");
	body.addLine("  return false;");
	body.addLine("}");
      }
    }
    body.addLine("");
    if (operationContext.getBoolean("call-super")) {
      body.addLine("return super.equals(peer);");
    } else {
      body.addLine("return true;");
    }

    //}}}

    String typeName = generator.typeName(typeContext.getName());
    StringBuffer desc = new StringBuffer();
    desc.append("compares this object to the specified object.");
    desc.append(" The result is true if and only if the argument is not null");
    desc.append(" and is an instance of " + typeName + " that contains ");
    desc.append(" the same attribute values as this object.");
    method.setDescription(desc.toString());

    generator.getCompilationUnit().addMethod(method);
  }

  //}}}
  //{{{ public void generateHashCode(generator, typeContext, operationContext)

  public void generateHashCode(JavaGenerator generator,
			       PropertyContext typeContext,
			       PropertyContext operationContext)
  {
    CodeBlock body = new CodeBlock();

    JavaMethod method
      = createMethod(operationContext, "hashCode", "int", body);
    
    body.addLine("int code = 0;");
    body.addLine("");

    //{{{ Add field equality checks

    Iterator iter = typeContext.getValueSet("field").iterator();
    while (iter.hasNext()) {
      String fieldName = (String)iter.next();
      PropertyContext fieldContext
	= new PropertyContext(typeContext, "field", fieldName);
      PropertyContext fieldTypeContext
	= new PropertyContext(fieldContext, "type");

      if (fieldContext.getBoolean("hash")) {
	String getter = fieldContext.getString("getter");
	if (getter == null) {
	  throw new RuntimeException("operation 'equals' requires that a "
				     + "getter is defined for field "
				     + fieldName);
	}
	String expr;
	if (fieldTypeContext.getBoolean("reference-type")) {
	  expr = getter + "().hashCode()";
	} else {
	  String impl = fieldTypeContext.getString("implementation");
	  if ("boolean".equals(impl)) {
	    // Constants as specified in JDK-1.4 API documentation
	    expr = "(" + getter + "() ? 1231 : 1237)";
	  } else if ("int".equals(impl)) {
	    expr = getter + "()";
	  } else if ("float".equals(impl)) {
	    expr = "new Float("+ getter + "()).hashCode()";
	  } else if ("double".equals(impl)) {
	    expr = "new Double("+ getter + "()).hashCode()";
	  } else if ("char".equals(impl)) {
	    expr = "(int)" + getter + "()";
	  } else if ("long".equals(impl)) {
	    expr = "(int)(" + getter + "() ^ " + getter + "()>>>32)";
	  } else {
	    throw new RuntimeException("illegal non-reference type: "
				       + impl);
	  }
	}
	body.addLine("code = (code<<1) ^ " + expr + ";");
      }
    }

    //}}}

    body.addLine("");
    body.addLine("return code;");

    String typeName = generator.typeName(typeContext.getName());
    StringBuffer desc = new StringBuffer();
    desc.append("returns a hash code for this " + typeName + " object.");
    desc.append(" The hash code value is based on the hash code values");
    desc.append(" of the attributes of this object.");
    method.setDescription(desc.toString());
    generator.getCompilationUnit().addMethod(method);
  }

  //}}}
}
