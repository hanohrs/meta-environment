package toolbus.parser;

import java.io.IOException;
import java.util.Hashtable;

import toolbus.TBTermFactory;
import toolbus.ToolBus;
import toolbus.ToolBusException;
import toolbus.atom.AckEvent;
import toolbus.atom.Assign;
import toolbus.atom.Atom;
import toolbus.atom.Connect;
import toolbus.atom.Create;
import toolbus.atom.Delta;
import toolbus.atom.DisConnect;
import toolbus.atom.Do;
import toolbus.atom.Eval;
import toolbus.atom.Event;
import toolbus.atom.Execute;
import toolbus.atom.NoNote;
import toolbus.atom.Print;
import toolbus.atom.RecMsg;
import toolbus.atom.RecNote;
import toolbus.atom.RecVal;
import toolbus.atom.ShutDown;
import toolbus.atom.SndMsg;
import toolbus.atom.SndNote;
import toolbus.atom.Subscribe;
import toolbus.atom.Tau;
import toolbus.atom.Terminate;
import toolbus.atom.UnSubscribe;
import toolbus.process.Alternative;
import toolbus.process.Disrupt;
import toolbus.process.IfElse;
import toolbus.process.IfThen;
import toolbus.process.Iteration;
import toolbus.process.LetDefinition;
import toolbus.process.Merge;
import toolbus.process.ProcessCall;
import toolbus.process.ProcessDefinition;
import toolbus.process.ProcessExpression;
import toolbus.process.Sequence;
import toolbus.tool.ToolDefinition;
import aterm.AFun;
import aterm.ATerm;
import aterm.ATermAppl;
import aterm.ATermFactory;
import aterm.ATermList;

/*
 *  NodeBuilder: auxiliary class to represent the build function for a particular node type.
 */

abstract class NodeBuilder {
  private String name;

  /**
   * Method NodeBuilder.
 * @param name: the name of the cons attribute in the SDF definition
   */
  public NodeBuilder(String name) {
    this.name = name;
  }

  public String getName() {
    return name;
  }

  /**
   * Method build. Overridden for each build function for a particular node type.
   * @param args: the already built arguments of this build function
   * @return Object: the resulting node.
   * @throws ToolBusException
   */
  abstract public Object build(Object args[]) throws ToolBusException;
}

/**
 * Class TScriptNodeBuilders: define the build functions for Tscripts.
 */

class TScriptNodeBuilders {
  private static Hashtable<String,NodeBuilder> Builders;
  private static ATermFactory factory;
  protected static String processName = "";

  public static void init(ATermFactory fac) {
    factory = fac;
    Builders = new Hashtable<String,NodeBuilder>();
    defineBuilders();
  }

  /**
   * Method define: Define one build function.
   * @param b: description of the build function
   */
  private static void define(NodeBuilder b) {
    Builders.put(b.getName(), b);
  }

  /**
   * Method defineBuilders.
   * TODO: variable names in Tscripts that coincide with the names below cause havoc,
   * e.g., the Tscript variable Delta
   */
  protected static void defineBuilders() {
    /*
     * Variables and constants
     */
    define(new NodeBuilder("ttt-vardecl") {
      public Object build(Object args[]) {
        return TBTermFactory.mkVar((ATerm) args[0], processName, (ATerm) args[1]);
      }
    });

    define(new NodeBuilder("ttt-resvardecl") {
      public Object build(Object args[]) {
        return TBTermFactory.mkResVar((ATerm) args[0], processName, (ATerm) args[1]);
      }
    });

    define(new NodeBuilder("ttt-var") {
      public Object build(Object args[]) {
        return TBTermFactory.mkVar((ATerm) args[0], processName, TBTermFactory.make("none"));
      }
    });

    define(new NodeBuilder("ttt-resvar") {
      public Object build(Object args[]) {
        return TBTermFactory.mkResVar((ATerm) args[0], processName, TBTermFactory.make("none"));
      }
    });
    
    define(new NodeBuilder("ttt-placeholder") {
        public Object build(Object args[]) {
          return factory.makePlaceholder((ATerm) args[0]);
        }
      });

    define(new NodeBuilder("ttt-apply") {
		public Object build(Object args[]) throws ToolBusException {
			if (args.length == 0 || args.length > 2){
				for(int i = 0; i < args.length; i++){
					System.err.println("ttt-apply: arg[" + i + "]:" + args[i]);
				}
				throw new ToolBusException("ttt-apply: wrong number of args");
			}

			ATermList argList = (args.length == 2) ? (ATermList) args[1] : factory.makeList();
			AFun afun = factory.makeAFun(((ATermAppl) args[0]).getName(),
					argList.getLength(), false);

			ATerm vargs[] = new ATerm[argList.getLength()];
			for (int i = 0; i < vargs.length; i++) {
				vargs[i] = argList.elementAt(i);
			}
			return factory.makeAppl(afun, vargs);
		}
    });

    define(new NodeBuilder("ttt-natcon") {
      public Object build(Object args[]) {
        return factory.makeInt(Integer.parseInt(((ATermAppl) args[0]).getName()));
      }
    });

    define(new NodeBuilder("ttt-realcon") {
      public Object build(Object args[]) {
      	String sreal = args[0].toString() + "." + args[1].toString();
      	return factory.makeReal(new Double(sreal).doubleValue());
      }
    });

    define(new NodeBuilder("ttt-strcon") {
      public Object build(Object args[]) {
      	return args[0];
      }
    });

    /*
     *  Process constants
     */

    define(new NodeBuilder("ttt-Delta") {
      public Object build(Object args[]) {
        return new Delta();
      }
    });

    define(new NodeBuilder("ttt-Tau") {
      public Object build(Object args[]) {
        return new Tau();
      }
    });

    /*
     *  Process operators
     */

    define(new NodeBuilder("ttt-Sequence") {
      public Object build(Object args[]) {
      	//System.err.println("Sequence[0]: " + args[0]);
     	//System.err.println("Sequence[1]: " + args[1]);
        return new Sequence((ProcessExpression) args[0], (ProcessExpression) args[1]);
      }
    });

    define(new NodeBuilder("ttt-Alternative") {
      public Object build(Object args[]) {
        return new Alternative((ProcessExpression) args[0], (ProcessExpression) args[1]);
      }
    });

    define(new NodeBuilder("ttt-Iteration") {
      public Object build(Object args[]) {
        return new Iteration((ProcessExpression) args[0], (ProcessExpression) args[1]);
      }
    });

    define(new NodeBuilder("ttt-Disrupt") {
      public Object build(Object args[]) {
        return new Disrupt((ProcessExpression) args[0], (ProcessExpression) args[1]);
      }
    });

    define(new NodeBuilder("ttt-Merge") {
      public Object build(Object args[]) {
        return new Merge((ProcessExpression) args[0], (ProcessExpression) args[1]);
      }
    });

    define(new NodeBuilder("ttt-IfElse") {
      public Object build(Object args[]) {
        return new IfElse((ATerm) args[0], (ProcessExpression) args[1], (ProcessExpression) args[2]);
      }
    });

    define(new NodeBuilder("ttt-IfThen") {
      public Object build(Object args[]) {
        return new IfThen((ATerm) args[0], (ProcessExpression) args[1]);
      }
    });

    define(new NodeBuilder("ttt-LetDefinition") {
      public Object build(Object args[]) {
        return new LetDefinition((ATermList) args[0], (ProcessExpression) args[1]);
      }
    });

    /*
     * Process definition and creation
     */

    define(new NodeBuilder("ttt-ProcessCall") {
      public Object build(Object args[]) {
        return new ProcessCall(((ATerm) args[0]));
      }
    });

    define(new NodeBuilder("ttt-ProcessDefinition0") {
      public Object build(Object args[]) {
        return new ProcessDefinition(((ATermAppl) args[0]).getName(), factory.makeList(), (ProcessExpression) args[1]);
      }
    });

    define(new NodeBuilder("ttt-ProcessDefinition") {
      public Object build(Object args[]) {
        return new ProcessDefinition(((ATermAppl) args[0]).getName(), (ATermList) args[1], (ProcessExpression) args[2]);
      }
    });

    define(new NodeBuilder("ttt-Create") {
      public Object build(Object args[]) {
        return new Create((ATerm) args[0], (ATerm) args[1]);
      }
    });

    /*
     *  Messages
     */

    define(new NodeBuilder("ttt-RecMsg") {
      public Object build(Object args[]) {
        if (args.length == 1) {
          return new RecMsg((ATerm) args[0]);
        } else {
          return new RecMsg((ATerm) args[0], (ATerm) args[1]);
        }
      }
    });

    define(new NodeBuilder("ttt-SndMsg") {
      public Object build(Object args[]) {
        if (args.length == 1) {
          return new SndMsg((ATerm) args[0]);
        } else {
          return new SndMsg((ATerm) args[0], (ATerm) args[1]);
        }
      }
    });
    
    /*
     * Notes
     */
    
    define(new NodeBuilder("ttt-Subscribe") {
        public Object build(Object args[]) { 
            return new Subscribe((ATerm) args[0]);
        }
      });
    
    define(new NodeBuilder("ttt-UnSubscribe") {
        public Object build(Object args[]) { 
            return new UnSubscribe((ATerm) args[0]);
        }
      });
    
    define(new NodeBuilder("ttt-SndNote") {
        public Object build(Object args[]) { 
            return new SndNote((ATerm) args[0]);
        }
      });
    
    define(new NodeBuilder("ttt-RecNote") {
        public Object build(Object args[]) { 
            return new RecNote((ATerm) args[0]);
        }
      });
    
    define(new NodeBuilder("ttt-NoNote") {
        public Object build(Object args[]) { 
            return new NoNote((ATerm) args[0]);
        }
      });

    /*
     *  Tool related atoms
     */
    
    define(new NodeBuilder("ttt-host") {
        public Object build(Object args[]) {
          return args[0];
        }
      });
    
    define(new NodeBuilder("ttt-kind") {
        public Object build(Object args[]) {
          return args[0];
        }
      });
    
    define(new NodeBuilder("ttt-command") {
        public Object build(Object args[]) {
          return args[0];
        }
      });
    
    define(new NodeBuilder("ttt-ToolDef") {
        public Object build(Object args[]) {
 
          //System.err.println("ToolDef 0: " + ((ATermAppl) args[0]).getName());
          //System.err.println("ToolDef 1: " + ((ATermAppl) args[1]).getName());
          //System.err.println("ToolDef 2: " + ((ATermAppl) args[2]).getName());
          //System.err.println("ToolDef 3: " + ((ATermAppl) args[3]).getName());
          
          String name = ((ATermAppl) args[0]).getName();
          
          String host = ((ATermAppl) args[1]).getName();   
          host = (host == "None") ? null : ((host == "Some") ? ((ATermAppl) ((ATermAppl) args[1]).getArgument(0)).getName() : host);
          
		  String kind = ((ATermAppl) args[2]).getName();
	      kind = (kind == "None") ? null : ((kind == "Some") ? ((ATermAppl) ((ATermAppl) args[2]).getArgument(0)).getName() : kind);
	      
		  String command = ((ATermAppl) args[3]).getName();
	      command = (command == "None") ? null : ((command == "Some") ? ((ATermAppl) ((ATermAppl) args[3]).getArgument(0)).getName() : command);
		  
          return new ToolDefinition(name, host, kind, command);
        }
    });
    
    define(new NodeBuilder("ttt-Execute") {
        public Object build(Object args[]) {
          return new Execute((ATerm) args[0], (ATerm) args[1]);
        }
      });
    
    define(new NodeBuilder("ttt-SndTerminate") {
        public Object build(Object args[]) {
          return new Terminate((ATerm) args[0], (ATerm) args[1]);
        }
      });
    
    define(new NodeBuilder("ttt-RecConnect") {
        public Object build(Object args[]) {
          return new Connect((ATerm) args[0]);
        }
      });
  
    define(new NodeBuilder("ttt-RecDisConnect") {
        public Object build(Object args[]) {
          return new DisConnect((ATerm) args[0]);
        }
      });
    
    
    define(new NodeBuilder("ttt-Eval") {
      public Object build(Object args[]) {
        return new Eval((ATerm) args[0], (ATerm) args[1]);
      }
    });

    define(new NodeBuilder("ttt-RecVal") {
      public Object build(Object args[]) {
        return new RecVal((ATerm) args[0], (ATerm) args[1]);
      }
    });

    define(new NodeBuilder("ttt-Do") {
      public Object build(Object args[]) {
        return new Do((ATerm) args[0], (ATerm) args[1]);
      }
    });

    define(new NodeBuilder("ttt-Event") {
      public Object build(Object args[]) {
      	ATermList arglist = (ATermList) args[0];
      	//return new Event((ATerm) args[0], (ATerm) args[1]);
      	return new Event(arglist.getFirst(), arglist.getNext());
      }
    });

    define(new NodeBuilder("ttt-AckEvent") {
      public Object build(Object args[]) {
        return new AckEvent((ATerm) args[0], (ATerm) args[1]);
      }
    });

    /*
     * Miscellaneous atoms
     */

    define(new NodeBuilder("ttt-Assign") {
      public Object build(Object args[]) {
        return new Assign(TBTermFactory.mkVar((ATerm) args[0], processName, TBTermFactory.make("none")), (ATerm) args[1]);
      }
    });

    define(new NodeBuilder("ttt-Print") {
      public Object build(Object args[]) {
        return new Print((ATerm) args[0]);
      }
    });

    define(new NodeBuilder("ttt-ShutDown") {
      public Object build(Object args[]) {
        return new ShutDown((ATerm) args[0]);
      }
    });
      
      /*
       * Time related items
       */
    
    define(new NodeBuilder("ttt-TimeExpr") {
        public Object build(Object args[]) {
        	Atom a = (Atom) args[0];
        	a.addTimeExpr((ATerm) args[1]);
          return a;
        }
    });
  }

  /**
   * Method build traverses a given ATerm that has been produced by the parser 
   * and creates a desired structure of class instances.
   * The ATerm is traversed in a bottom-up fashion:
   * - ATerms are just rebuilt, only string quotes are stripped where relevant
   * - When an application has a function name that is defined as node builder,
   *   that node builder is applied to its arguments. Since node builders can 
   *   return arbitrary classes we have to be carefull with appropriate casting
   *   between ATerm and Object.
   * 
   * @param t: input tree as produced by the parser
   * @return Object: the resulting tree of class instances
   * @throws ToolBusException
   */
  
  public static Object build(ATerm t) throws ToolBusException {
		switch (t.getType()) {
		case ATerm.APPL:
			//System.err.println("build: " + t);
			ATermAppl ap = (ATermAppl) t;
			String name = ap.getName();
			ATerm args[] = ap.getArgumentArray();
			NodeBuilder nd = Builders.get(name);
			if (nd == null) {
				if (args.length == 0) {
					boolean isquoted = false;
					if (name.length() > 0 && name.charAt(0) == '"') {
						name = name.substring(1, name.length() - 1);
						isquoted = true;
					}
					AFun afun = factory.makeAFun(name, 0, isquoted);
					return factory.makeAppl(afun);
				} else { 
					AFun afun = factory.makeAFun(name, args.length, false);
					ATerm vargs[] = new ATerm[args.length];
					for (int i = 0; i < args.length; i++) {
						vargs[i] = (ATerm) build(args[i]);
					}
					return factory.makeAppl(afun, vargs);
				}
			} else {
				Object[] oargs = new Object[args.length];

				for (int i = 0; i < args.length; i++)
					oargs[i] = build(args[i]);
				Object res = nd.build(oargs);
				//System.err.println("build: " + res);
				return res;
			}

		case ATerm.LIST:
			ATermList lst1 = (ATermList) t;
			ATermList lst2 = factory.makeList();
			for (int i = lst1.getLength() - 1; i >= 0; i--) {
				lst2 = factory.makeList((ATerm) build(lst1.elementAt(i)), lst2);
			}
			return lst2;
		default:
			return t;
		}
  }
}

public class TScriptParser {

  private static ATermFactory factory = TBTermFactory.getPureFactory();
  private ExternalParser externalparser;

  public TScriptParser(ExternalParser ep) {
    externalparser = ep;
    factory = TBTermFactory.getPureFactory();
    TScriptNodeBuilders.init(factory);
  }

  public void parse(ToolBus toolbus, String filename) throws ToolBusException {
    ATerm interm;
    try {
      interm = externalparser.parse(filename);
    } catch (IOException e) {
      throw new ToolBusException(e.getMessage());
    }

    if (interm.getType() != ATerm.APPL || ((ATermAppl) interm).getName() != "ttt-Tscript") {
      throw new ToolBusException("ill-formed tree");
    }

    ATerm args[] = ((ATermAppl) interm).getArgumentArray();

    ATermList decls = (ATermList) args[0];
    ATermList calls = TBTermFactory.makeList();

    for (int i = 0; i < decls.getLength(); i++) {
      //System.err.println(decls.elementAt(i));
      Object elm = decls.elementAt(i);
      if(elm instanceof ATermList){
      	 ATermList toolbusArgs = (ATermList) elm;
      	 //System.err.println("adding toolbus args: " + toolbusArgs);
      	 
      	 for(int j = 0; j < toolbusArgs.getLength(); j++){
      	 	calls = calls.append(toolbusArgs.elementAt(j));
      	 }
      	 //System.err.println("calls = " + calls);
      } else {
      	Object def = TScriptNodeBuilders.build((ATerm) elm);

      	if(def instanceof ProcessDefinition){
      		String processName = ((ProcessDefinition) def).getName();
      		TScriptNodeBuilders.processName = processName;
      		// First we parse elm as a ProcessDefinition and extract the process name,
      		// next we parse again! so that we qualify all variables with that name.
      		toolbus.addProcessDefinition((ProcessDefinition) TScriptNodeBuilders.build((ATerm) elm));
      	} else if(def instanceof ToolDefinition)
    	toolbus.addToolDefinition((ToolDefinition) def);
      	else
      		throw new ToolBusException("Process or Tool definition expected");
      }
    }
    for (int j = 0; j < calls.getLength(); j++) {
        ProcessCall call = (ProcessCall) TScriptNodeBuilders.build(calls.elementAt(j));
        toolbus.addProcess(call);
      }
  }
}
