/*
 * Generated at Thu Dec 13 17:19:15 2001
 */

#include "MuASF_dict.h"

AFun MA_afun0;
AFun MA_afun1;
AFun MA_afun2;
AFun MA_afun3;
AFun MA_afun4;
AFun MA_afun5;
AFun MA_afun6;
AFun MA_afun7;
AFun MA_afun8;
AFun MA_afun9;
AFun MA_afun10;
AFun MA_afun11;
AFun MA_afun12;
AFun MA_afun13;
AFun MA_afun14;
AFun MA_afun15;
AFun MA_afun16;
AFun MA_afun17;
AFun MA_afun18;
AFun MA_afun19;
AFun MA_afun20;
AFun MA_afun21;
AFun MA_afun22;
AFun MA_afun23;
AFun MA_afun24;
AFun MA_afun25;
AFun MA_afun26;
AFun MA_afun27;
AFun MA_afun28;
AFun MA_afun29;
AFun MA_afun30;
AFun MA_afun31;
AFun MA_afun32;
AFun MA_afun33;
AFun MA_afun34;
AFun MA_afun35;
AFun MA_afun36;
AFun MA_afun37;
AFun MA_afun38;
AFun MA_afun39;
AFun MA_afun40;
AFun MA_afun41;
AFun MA_afun42;
AFun MA_afun43;
AFun MA_afun44;
AFun MA_afun45;
AFun MA_afun46;
AFun MA_afun47;
AFun MA_afun48;
AFun MA_afun49;
AFun MA_afun50;
AFun MA_afun51;
AFun MA_afun52;
AFun MA_afun53;
AFun MA_afun54;
AFun MA_afun55;
AFun MA_afun56;
AFun MA_afun57;
AFun MA_afun58;
AFun MA_afun59;
AFun MA_afun60;
AFun MA_afun61;
AFun MA_afun62;

ATerm MA_patternPropIdLexToCf = NULL;
ATerm MA_patternModIdLexToCf = NULL;
ATerm MA_patternVarIdLexToCf = NULL;
ATerm MA_patternFunIdLexToCf = NULL;
ATerm MA_patternQCharLexToCf = NULL;
ATerm MA_patternEscCharLexToCf = NULL;
ATerm MA_patternModuleModule = NULL;
ATerm MA_patternRulesOptPresent = NULL;
ATerm MA_patternRulesOptAbsent = NULL;
ATerm MA_patternSignatureOptPresent = NULL;
ATerm MA_patternSignatureOptAbsent = NULL;
ATerm MA_patternCondUnequal = NULL;
ATerm MA_patternCondEqual = NULL;
ATerm MA_patternCondAssign = NULL;
ATerm MA_patternCondElemsMany = NULL;
ATerm MA_patternCondElemsSingle = NULL;
ATerm MA_patternCondElemsEmpty = NULL;
ATerm MA_patternCondListDefault = NULL;
ATerm MA_patternRuleElemsMany = NULL;
ATerm MA_patternRuleElemsSingle = NULL;
ATerm MA_patternRuleElemsEmpty = NULL;
ATerm MA_patternRuleListDefault = NULL;
ATerm MA_patternRuleWithConds = NULL;
ATerm MA_patternRuleDefaultWithConds = NULL;
ATerm MA_patternRuleDefaultNoConds = NULL;
ATerm MA_patternRuleNoConds = NULL;
ATerm MA_patternFuncDefElemsMany = NULL;
ATerm MA_patternFuncDefElemsSingle = NULL;
ATerm MA_patternFuncDefElemsEmpty = NULL;
ATerm MA_patternFuncDefListDefault = NULL;
ATerm MA_patternSigArgListDefault = NULL;
ATerm MA_patternTermTermsMany = NULL;
ATerm MA_patternTermTermsSingle = NULL;
ATerm MA_patternAnnotationsDefault = NULL;
ATerm MA_patternSigArgElemsMany = NULL;
ATerm MA_patternSigArgElemsSingle = NULL;
ATerm MA_patternFuncDefFuncWithAnnos = NULL;
ATerm MA_patternFuncDefFuncNoAnnos = NULL;
ATerm MA_patternFuncDefConstantWithAnnos = NULL;
ATerm MA_patternFuncDefConstantNoAnnos = NULL;
ATerm MA_patternSigArgPlus = NULL;
ATerm MA_patternSigArgStar = NULL;
ATerm MA_patternSigArgNormal = NULL;
ATerm MA_patternTermElemsMany = NULL;
ATerm MA_patternTermElemsSingle = NULL;
ATerm MA_patternTermElemsEmpty = NULL;
ATerm MA_patternTermListDefault = NULL;
ATerm MA_patternTermArgsMany = NULL;
ATerm MA_patternTermArgsSingle = NULL;
ATerm MA_patternTermTyped = NULL;
ATerm MA_patternTermFunc = NULL;
ATerm MA_patternTermInt = NULL;
ATerm MA_patternTermConstant = NULL;
ATerm MA_patternTermVar = NULL;
ATerm MA_patternVarPlus = NULL;
ATerm MA_patternVarStar = NULL;
ATerm MA_patternVarNormal = NULL;
ATerm MA_patternNatConAbs = NULL;
ATerm MA_patternIntConNeg = NULL;
ATerm MA_patternIntConPos = NULL;
ATerm MA_patternIntConNat = NULL;
ATerm MA_patternIntConCon = NULL;
ATerm MA_patternIntPlus = NULL;
ATerm MA_patternIntCon = NULL;

/*
 * MA_afun0 = appl(x,x)
 * MA_afun1 = prod(x,x,x)
 * MA_afun2 = cf(x)
 * MA_afun3 = sort(x)
 * MA_afun4 = "IntCon"
 * MA_afun5 = "Int"
 * MA_afun6 = no-attrs
 * MA_afun7 = opt(x)
 * MA_afun8 = layout
 * MA_afun9 = lit(x)
 * MA_afun10 = "+"
 * MA_afun11 = attrs(x)
 * MA_afun12 = assoc(x)
 * MA_afun13 = left
 * MA_afun14 = ")"
 * MA_afun15 = "("
 * MA_afun16 = "con"
 * MA_afun17 = "NatCon"
 * MA_afun18 = "-"
 * MA_afun19 = "abs"
 * MA_afun20 = "VarId"
 * MA_afun21 = "Var"
 * MA_afun22 = "*"
 * MA_afun23 = "Term"
 * MA_afun24 = "FunId"
 * MA_afun25 = iter-sep(x,x)
 * MA_afun26 = ","
 * MA_afun27 = list(x)
 * MA_afun28 = ":"
 * MA_afun29 = assoc
 * MA_afun30 = iter-star-sep(x,x)
 * MA_afun31 = "TermList"
 * MA_afun32 = "_"
 * MA_afun33 = "SigArg"
 * MA_afun34 = "FuncDef"
 * MA_afun35 = "Annotations"
 * MA_afun36 = "}"
 * MA_afun37 = "{"
 * MA_afun38 = "SigArgList"
 * MA_afun39 = ";"
 * MA_afun40 = "FuncDefList"
 * MA_afun41 = "="
 * MA_afun42 = "Rule"
 * MA_afun43 = "default:"
 * MA_afun44 = "==>"
 * MA_afun45 = "CondList"
 * MA_afun46 = "RuleList"
 * MA_afun47 = "Cond"
 * MA_afun48 = "&"
 * MA_afun49 = "=:"
 * MA_afun50 = "=="
 * MA_afun51 = "!="
 * MA_afun52 = "SignatureOpt"
 * MA_afun53 = "signature"
 * MA_afun54 = "RulesOpt"
 * MA_afun55 = "rules"
 * MA_afun56 = "ModId"
 * MA_afun57 = "module"
 * MA_afun58 = "Module"
 * MA_afun59 = lex(x)
 * MA_afun60 = "EscChar"
 * MA_afun61 = "QChar"
 * MA_afun62 = "PropId"
 *
 * MA_patternPropIdLexToCf = appl(prod([lex(sort("PropId"))],cf(sort("PropId")),no-attrs),[<term>])
 * MA_patternModIdLexToCf = appl(prod([lex(sort("ModId"))],cf(sort("ModId")),no-attrs),[<term>])
 * MA_patternVarIdLexToCf = appl(prod([lex(sort("VarId"))],cf(sort("VarId")),no-attrs),[<term>])
 * MA_patternFunIdLexToCf = appl(prod([lex(sort("FunId"))],cf(sort("FunId")),no-attrs),[<term>])
 * MA_patternQCharLexToCf = appl(prod([lex(sort("QChar"))],cf(sort("QChar")),no-attrs),[<term>])
 * MA_patternEscCharLexToCf = appl(prod([lex(sort("EscChar"))],cf(sort("EscChar")),no-attrs),[<term>])
 * MA_patternModuleModule = appl(prod([lit("module"),cf(opt(layout)),cf(sort("ModId")),cf(opt(layout)),cf(sort("SignatureOpt")),cf(opt(layout)),cf(sort("RulesOpt"))],cf(sort("Module")),no-attrs),[lit("module"),<term>,<term>,<term>,<term>,<term>,<term>])
 * MA_patternRulesOptPresent = appl(prod([lit("rules"),cf(opt(layout)),cf(sort("RuleList"))],cf(sort("RulesOpt")),no-attrs),[lit("rules"),<term>,<term>])
 * MA_patternRulesOptAbsent = appl(prod([],cf(sort("RulesOpt")),no-attrs),[])
 * MA_patternSignatureOptPresent = appl(prod([lit("signature"),cf(opt(layout)),cf(sort("FuncDefList"))],cf(sort("SignatureOpt")),no-attrs),[lit("signature"),<term>,<term>])
 * MA_patternSignatureOptAbsent = appl(prod([],cf(sort("SignatureOpt")),no-attrs),[])
 * MA_patternCondUnequal = appl(prod([cf(sort("Term")),cf(opt(layout)),lit("!="),cf(opt(layout)),cf(sort("Term"))],cf(sort("Cond")),no-attrs),[<term>,<term>,lit("!="),<term>,<term>])
 * MA_patternCondEqual = appl(prod([cf(sort("Term")),cf(opt(layout)),lit("=="),cf(opt(layout)),cf(sort("Term"))],cf(sort("Cond")),no-attrs),[<term>,<term>,lit("=="),<term>,<term>])
 * MA_patternCondAssign = appl(prod([cf(sort("Term")),cf(opt(layout)),lit("=:"),cf(opt(layout)),cf(sort("Term"))],cf(sort("Cond")),no-attrs),[<term>,<term>,lit("=:"),<term>,<term>])
 * MA_patternCondElemsMany = [<term>,<term>,lit(<str>),<term>,<list>]
 * MA_patternCondElemsSingle = [<term>]
 * MA_patternCondElemsEmpty = []
 * MA_patternCondListDefault = appl(prod([cf(iter-star-sep(sort("Cond"),lit("&")))],cf(sort("CondList")),no-attrs),[appl(list(cf(iter-star-sep(sort("Cond"),lit("&")))),<term>)])
 * MA_patternRuleElemsMany = [<term>,<term>,lit(<str>),<term>,<list>]
 * MA_patternRuleElemsSingle = [<term>]
 * MA_patternRuleElemsEmpty = []
 * MA_patternRuleListDefault = appl(prod([cf(iter-star-sep(sort("Rule"),lit(";")))],cf(sort("RuleList")),no-attrs),[appl(list(cf(iter-star-sep(sort("Rule"),lit(";")))),<term>)])
 * MA_patternRuleWithConds = appl(prod([cf(sort("CondList")),cf(opt(layout)),lit("==>"),cf(opt(layout)),cf(sort("Term")),cf(opt(layout)),lit("="),cf(opt(layout)),cf(sort("Term"))],cf(sort("Rule")),no-attrs),[<term>,<term>,lit("==>"),<term>,<term>,<term>,lit("="),<term>,<term>])
 * MA_patternRuleDefaultWithConds = appl(prod([lit("default:"),cf(opt(layout)),cf(sort("CondList")),cf(opt(layout)),lit("==>"),cf(opt(layout)),cf(sort("Term")),cf(opt(layout)),lit("="),cf(opt(layout)),cf(sort("Term"))],cf(sort("Rule")),no-attrs),[lit("default:"),<term>,<term>,<term>,lit("==>"),<term>,<term>,<term>,lit("="),<term>,<term>])
 * MA_patternRuleDefaultNoConds = appl(prod([lit("default:"),cf(opt(layout)),cf(sort("Term")),cf(opt(layout)),lit("="),cf(opt(layout)),cf(sort("Term"))],cf(sort("Rule")),no-attrs),[lit("default:"),<term>,<term>,<term>,lit("="),<term>,<term>])
 * MA_patternRuleNoConds = appl(prod([cf(sort("Term")),cf(opt(layout)),lit("="),cf(opt(layout)),cf(sort("Term"))],cf(sort("Rule")),no-attrs),[<term>,<term>,lit("="),<term>,<term>])
 * MA_patternFuncDefElemsMany = [<term>,<term>,lit(<str>),<term>,<list>]
 * MA_patternFuncDefElemsSingle = [<term>]
 * MA_patternFuncDefElemsEmpty = []
 * MA_patternFuncDefListDefault = appl(prod([cf(iter-star-sep(sort("FuncDef"),lit(";")))],cf(sort("FuncDefList")),no-attrs),[appl(list(cf(iter-star-sep(sort("FuncDef"),lit(";")))),<term>)])
 * MA_patternSigArgListDefault = appl(prod([cf(iter-sep(sort("SigArg"),lit(",")))],cf(sort("SigArgList")),no-attrs),[appl(list(cf(iter-sep(sort("SigArg"),lit(",")))),<term>)])
 * MA_patternTermTermsMany = [<term>,<term>,lit(<str>),<term>,<list>]
 * MA_patternTermTermsSingle = [<term>]
 * MA_patternAnnotationsDefault = appl(prod([lit("{"),cf(opt(layout)),cf(iter-sep(sort("Term"),lit(","))),cf(opt(layout)),lit("}")],cf(sort("Annotations")),no-attrs),[lit("{"),<term>,appl(list(cf(iter-sep(sort("Term"),lit(",")))),<term>),<term>,lit("}")])
 * MA_patternSigArgElemsMany = [<term>,<term>,lit(<str>),<term>,<list>]
 * MA_patternSigArgElemsSingle = [<term>]
 * MA_patternFuncDefFuncWithAnnos = appl(prod([cf(sort("FunId")),cf(opt(layout)),lit("("),cf(opt(layout)),cf(iter-sep(sort("SigArg"),lit(","))),cf(opt(layout)),lit(")"),cf(opt(layout)),cf(sort("Annotations"))],cf(sort("FuncDef")),no-attrs),[<term>,<term>,lit("("),<term>,appl(list(cf(iter-sep(sort("SigArg"),lit(",")))),<term>),<term>,lit(")"),<term>,<term>])
 * MA_patternFuncDefFuncNoAnnos = appl(prod([cf(sort("FunId")),cf(opt(layout)),lit("("),cf(opt(layout)),cf(iter-sep(sort("SigArg"),lit(","))),cf(opt(layout)),lit(")")],cf(sort("FuncDef")),no-attrs),[<term>,<term>,lit("("),<term>,appl(list(cf(iter-sep(sort("SigArg"),lit(",")))),<term>),<term>,lit(")")])
 * MA_patternFuncDefConstantWithAnnos = appl(prod([cf(sort("FunId")),cf(opt(layout)),cf(sort("Annotations"))],cf(sort("FuncDef")),no-attrs),[<term>,<term>,<term>])
 * MA_patternFuncDefConstantNoAnnos = appl(prod([cf(sort("FunId"))],cf(sort("FuncDef")),no-attrs),[<term>])
 * MA_patternSigArgPlus = appl(prod([lit("_"),cf(opt(layout)),lit("+")],cf(sort("SigArg")),no-attrs),[lit("_"),<term>,lit("+")])
 * MA_patternSigArgStar = appl(prod([lit("_"),cf(opt(layout)),lit("*")],cf(sort("SigArg")),no-attrs),[lit("_"),<term>,lit("*")])
 * MA_patternSigArgNormal = appl(prod([lit("_")],cf(sort("SigArg")),no-attrs),[lit("_")])
 * MA_patternTermElemsMany = [<term>,<term>,lit(<str>),<term>,<list>]
 * MA_patternTermElemsSingle = [<term>]
 * MA_patternTermElemsEmpty = []
 * MA_patternTermListDefault = appl(prod([cf(iter-star-sep(sort("Term"),lit(",")))],cf(sort("TermList")),no-attrs),[appl(list(cf(iter-star-sep(sort("Term"),lit(",")))),<term>)])
 * MA_patternTermArgsMany = [<term>,<term>,lit(<str>),<term>,<list>]
 * MA_patternTermArgsSingle = [<term>]
 * MA_patternTermTyped = appl(prod([cf(sort("Term")),cf(opt(layout)),lit(":"),cf(opt(layout)),cf(sort("Term"))],cf(sort("Term")),attrs([assoc(assoc)])),[<term>,<term>,lit(":"),<term>,<term>])
 * MA_patternTermFunc = appl(prod([cf(sort("FunId")),cf(opt(layout)),lit("("),cf(opt(layout)),cf(iter-sep(sort("Term"),lit(","))),cf(opt(layout)),lit(")")],cf(sort("Term")),no-attrs),[<term>,<term>,lit("("),<term>,appl(list(cf(iter-sep(sort("Term"),lit(",")))),<term>),<term>,lit(")")])
 * MA_patternTermInt = appl(prod([cf(sort("Int"))],cf(sort("Term")),no-attrs),[<term>])
 * MA_patternTermConstant = appl(prod([cf(sort("FunId"))],cf(sort("Term")),no-attrs),[<term>])
 * MA_patternTermVar = appl(prod([cf(sort("Var"))],cf(sort("Term")),no-attrs),[<term>])
 * MA_patternVarPlus = appl(prod([lit("+"),cf(opt(layout)),cf(sort("VarId"))],cf(sort("Var")),no-attrs),[lit("+"),<term>,<term>])
 * MA_patternVarStar = appl(prod([lit("*"),cf(opt(layout)),cf(sort("VarId"))],cf(sort("Var")),no-attrs),[lit("*"),<term>,<term>])
 * MA_patternVarNormal = appl(prod([cf(sort("VarId"))],cf(sort("Var")),no-attrs),[<term>])
 * MA_patternNatConAbs = appl(prod([lit("abs"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("Int")),cf(opt(layout)),lit(")")],cf(sort("NatCon")),no-attrs),[lit("abs"),<term>,lit("("),<term>,<term>,<term>,lit(")")])
 * MA_patternIntConNeg = appl(prod([lit("-"),cf(opt(layout)),cf(sort("NatCon"))],cf(sort("IntCon")),no-attrs),[lit("-"),<term>,<term>])
 * MA_patternIntConPos = appl(prod([lit("+"),cf(opt(layout)),cf(sort("NatCon"))],cf(sort("IntCon")),no-attrs),[lit("+"),<term>,<term>])
 * MA_patternIntConNat = appl(prod([cf(sort("NatCon"))],cf(sort("IntCon")),no-attrs),[<term>])
 * MA_patternIntConCon = appl(prod([lit("con"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("Int")),cf(opt(layout)),lit(")")],cf(sort("IntCon")),no-attrs),[lit("con"),<term>,lit("("),<term>,<term>,<term>,lit(")")])
 * MA_patternIntPlus = appl(prod([cf(sort("Int")),cf(opt(layout)),lit("+"),cf(opt(layout)),cf(sort("Int"))],cf(sort("Int")),attrs([assoc(left)])),[<term>,<term>,lit("+"),<term>,<term>])
 * MA_patternIntCon = appl(prod([cf(sort("IntCon"))],cf(sort("Int")),no-attrs),[<term>])
 *
 */

static ATermList _MuASF_dict = NULL;

#define _MuASF_dict_LEN 1941

static char _MuASF_dict_baf[_MuASF_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x46,0x82,0x48,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x03,0x03,
0x04,0x03,0x05,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x81,0x39,0x42,0x02,0x01,
0x00,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,
0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,
0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x35,
0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,0x3F,0x40,0x41,0x42,0x43,0x44,0x45,
0x02,0x01,0x02,0x02,0x5B,0x5D,0x00,0x00,0x01,0x03,0x73,0x74,0x72,0x00,0x00,0x01,
0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,0x00,0x00,0x01,
0x01,0x78,0x00,0x00,0x01,0x04,0x61,0x70,0x70,0x6C,0x02,0x00,0x35,0x03,0x22,0x08,
0x06,0x04,0x00,0x02,0x01,0x06,0x04,0x70,0x72,0x6F,0x64,0x03,0x00,0x2F,0x03,0x02,
0x01,0x06,0x02,0x09,0x06,0x03,0x12,0x0D,0x06,0x02,0x63,0x66,0x01,0x00,0x20,0x05,
0x20,0x25,0x0E,0x0A,0x06,0x04,0x73,0x6F,0x72,0x74,0x01,0x00,0x19,0x19,0x0B,0x18,
0x1C,0x0C,0x26,0x2A,0x2D,0x28,0x29,0x31,0x34,0x36,0x1E,0x2F,0x35,0x41,0x3D,0x3B,
0x43,0x44,0x1F,0x1B,0x3F,0x45,0x06,0x06,0x49,0x6E,0x74,0x43,0x6F,0x6E,0x00,0x01,
0x01,0x03,0x49,0x6E,0x74,0x00,0x01,0x01,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,0x72,
0x73,0x00,0x00,0x01,0x03,0x6F,0x70,0x74,0x01,0x00,0x02,0x02,0x0F,0x06,0x06,0x6C,
0x61,0x79,0x6F,0x75,0x74,0x00,0x00,0x01,0x03,0x6C,0x69,0x74,0x01,0x00,0x19,0x19,
0x17,0x19,0x1A,0x23,0x1D,0x11,0x27,0x15,0x16,0x2B,0x2C,0x21,0x32,0x30,0x33,0x2E,
0x37,0x00,0x38,0x39,0x3A,0x3C,0x3E,0x40,0x06,0x01,0x2B,0x00,0x01,0x01,0x05,0x61,
0x74,0x74,0x72,0x73,0x01,0x00,0x03,0x02,0x01,0x06,0x05,0x61,0x73,0x73,0x6F,0x63,
0x01,0x00,0x03,0x03,0x14,0x24,0x06,0x04,0x6C,0x65,0x66,0x74,0x00,0x00,0x01,0x01,
0x29,0x00,0x01,0x01,0x01,0x28,0x00,0x01,0x01,0x03,0x63,0x6F,0x6E,0x00,0x01,0x01,
0x06,0x4E,0x61,0x74,0x43,0x6F,0x6E,0x00,0x01,0x01,0x01,0x2D,0x00,0x01,0x01,0x03,
0x61,0x62,0x73,0x00,0x01,0x01,0x05,0x56,0x61,0x72,0x49,0x64,0x00,0x01,0x01,0x03,
0x56,0x61,0x72,0x00,0x01,0x01,0x01,0x2A,0x00,0x01,0x01,0x04,0x54,0x65,0x72,0x6D,
0x00,0x01,0x01,0x05,0x46,0x75,0x6E,0x49,0x64,0x00,0x01,0x01,0x08,0x69,0x74,0x65,
0x72,0x2D,0x73,0x65,0x70,0x02,0x00,0x03,0x02,0x0A,0x06,0x02,0x10,0x06,0x01,0x2C,
0x00,0x01,0x01,0x04,0x6C,0x69,0x73,0x74,0x01,0x00,0x07,0x02,0x09,0x06,0x01,0x3A,
0x00,0x01,0x01,0x05,0x61,0x73,0x73,0x6F,0x63,0x00,0x00,0x01,0x0D,0x69,0x74,0x65,
0x72,0x2D,0x73,0x74,0x61,0x72,0x2D,0x73,0x65,0x70,0x02,0x00,0x05,0x02,0x0A,0x06,
0x02,0x10,0x06,0x08,0x54,0x65,0x72,0x6D,0x4C,0x69,0x73,0x74,0x00,0x01,0x01,0x01,
0x5F,0x00,0x01,0x01,0x06,0x53,0x69,0x67,0x41,0x72,0x67,0x00,0x01,0x01,0x07,0x46,
0x75,0x6E,0x63,0x44,0x65,0x66,0x00,0x01,0x01,0x0B,0x41,0x6E,0x6E,0x6F,0x74,0x61,
0x74,0x69,0x6F,0x6E,0x73,0x00,0x01,0x01,0x01,0x7D,0x00,0x01,0x01,0x01,0x7B,0x00,
0x01,0x01,0x0A,0x53,0x69,0x67,0x41,0x72,0x67,0x4C,0x69,0x73,0x74,0x00,0x01,0x01,
0x01,0x3B,0x00,0x01,0x01,0x0B,0x46,0x75,0x6E,0x63,0x44,0x65,0x66,0x4C,0x69,0x73,
0x74,0x00,0x01,0x01,0x01,0x3D,0x00,0x01,0x01,0x04,0x52,0x75,0x6C,0x65,0x00,0x01,
0x01,0x08,0x64,0x65,0x66,0x61,0x75,0x6C,0x74,0x3A,0x00,0x01,0x01,0x03,0x3D,0x3D,
0x3E,0x00,0x01,0x01,0x08,0x43,0x6F,0x6E,0x64,0x4C,0x69,0x73,0x74,0x00,0x01,0x01,
0x08,0x52,0x75,0x6C,0x65,0x4C,0x69,0x73,0x74,0x00,0x01,0x01,0x04,0x43,0x6F,0x6E,
0x64,0x00,0x01,0x01,0x01,0x26,0x00,0x01,0x01,0x02,0x3D,0x3A,0x00,0x01,0x01,0x02,
0x3D,0x3D,0x00,0x01,0x01,0x02,0x21,0x3D,0x00,0x01,0x01,0x0C,0x53,0x69,0x67,0x6E,
0x61,0x74,0x75,0x72,0x65,0x4F,0x70,0x74,0x00,0x01,0x01,0x09,0x73,0x69,0x67,0x6E,
0x61,0x74,0x75,0x72,0x65,0x00,0x01,0x01,0x08,0x52,0x75,0x6C,0x65,0x73,0x4F,0x70,
0x74,0x00,0x01,0x01,0x05,0x72,0x75,0x6C,0x65,0x73,0x00,0x01,0x01,0x05,0x4D,0x6F,
0x64,0x49,0x64,0x00,0x01,0x01,0x06,0x6D,0x6F,0x64,0x75,0x6C,0x65,0x00,0x01,0x01,
0x06,0x4D,0x6F,0x64,0x75,0x6C,0x65,0x00,0x01,0x01,0x03,0x6C,0x65,0x78,0x01,0x00,
0x07,0x02,0x0A,0x06,0x07,0x45,0x73,0x63,0x43,0x68,0x61,0x72,0x00,0x01,0x01,0x05,
0x51,0x43,0x68,0x61,0x72,0x00,0x01,0x01,0x06,0x50,0x72,0x6F,0x70,0x49,0x64,0x00,
0x01,0x01,0x01,0x80,0xF8,0xC0,0x03,0x8B,0xC1,0x00,0x19,0x0F,0x14,0x00,0x26,0xE1,
0x80,0x06,0x2E,0x38,0x13,0x81,0x00,0xE2,0x41,0xD8,0x50,0x43,0x63,0x41,0x58,0x30,
0x01,0x85,0x8B,0x06,0x61,0xC1,0x09,0x8F,0x02,0x46,0x02,0x01,0x88,0x87,0xA1,0x20,
0xE8,0xC8,0x5A,0x0A,0x06,0x8A,0x86,0xA1,0xA0,0xA8,0xE8,0x4A,0x06,0x02,0x89,0x87,
0x21,0x60,0xC8,0xD8,0x52,0x0E,0x14,0x12,0x2E,0x18,0x87,0x82,0x11,0x1F,0x08,0x40,
0x20,0x11,0x08,0x51,0xF0,0x44,0x3C,0x31,0x17,0x02,0x41,0xC2,0x91,0xB0,0x64,0x2C,
0x39,0x13,0x01,0x40,0xC2,0x51,0xD0,0x54,0x34,0x35,0x15,0x03,0x41,0x42,0xD1,0x90,
0x74,0x24,0x3D,0x11,0x00,0xC0,0x42,0x31,0xE0,0x4C,0x38,0x33,0x16,0x02,0xC1,0x82,
0xB1,0xA0,0x6C,0x28,0x3B,0x12,0x01,0xC0,0x82,0x71,0xC0,0x5C,0x30,0x37,0x14,0x03,
0xC1,0x02,0xF1,0x80,0x7C,0x21,0x01,0xF8,0x80,0x01,0x00,0x10,0x63,0xB3,0x01,0xB3,
0x82,0x0A,0x0B,0xF0,0xFA,0x10,0xEC,0x41,0xA1,0x20,0x22,0x01,0x8A,0xCE,0x04,0x24,
0x28,0x23,0xE4,0x21,0xB0,0x86,0x44,0x80,0x81,0x67,0x06,0x16,0x12,0x11,0xF6,0x31,
0x58,0xC3,0x62,0x40,0x43,0x33,0x80,0x88,0x8B,0x08,0xF8,0x84,0x2C,0x11,0x89,0x20,
0x20,0x99,0xC1,0x45,0x44,0x44,0x7D,0x4A,0x66,0x28,0xD4,0x90,0x10,0x8C,0xE0,0x62,
0x62,0xA2,0x3E,0x63,0x13,0x0C,0x66,0x48,0x08,0x06,0x70,0x71,0x71,0x19,0x0C,0x43,
0xA6,0x92,0x87,0x0A,0x05,0x25,0x04,0x09,0x25,0x0E,0x01,0x25,0x01,0x37,0x22,0x71,
0x28,0x70,0x31,0x28,0x49,0x84,0x18,0x53,0x4B,0xD2,0x4A,0x18,0x81,0x14,0x40,0x01,
0x44,0x01,0xE4,0x40,0x0E,0x44,0x01,0x64,0x40,0x00,0x43,0xD3,0x80,0x48,0x4A,0xA8,
0x61,0x0D,0x0A,0x94,0x38,0x32,0x94,0x34,0xCA,0x74,0x49,0x26,0xA1,0x84,0x16,0x41,
0xD3,0x82,0x4A,0x40,0x92,0x85,0xA7,0x02,0x92,0x94,0xD0,0xC6,0x2A,0x0D,0x28,0x70,
0x75,0x28,0x19,0xB5,0x68,0x12,0x4B,0x43,0x18,0x2C,0x81,0xA7,0x06,0x96,0x80,0x25,
0x0D,0x4E,0x03,0x23,0x2F,0xA5,0x0B,0x31,0x8C,0x3D,0x28,0x70,0x5D,0x0C,0x10,0xA1,
0xD2,0x87,0x06,0xD2,0x85,0x90,0xE6,0xB6,0xA4,0x8C,0x40,0x10,0xC4,0x00,0x0C,0x30,
0x42,0xC8,0x2A,0x70,0x59,0x59,0x53,0x28,0x58,0x13,0x28,0x70,0x63,0x0C,0x53,0x21,
0xD0,0x72,0x42,0xC4,0x01,0xCC,0x40,0x0C,0xC3,0x14,0x2C,0x84,0xA7,0x03,0x93,0x96,
0xB2,0x85,0x82,0xB2,0x87,0x04,0xB0,0xC3,0x12,0x1D,0x07,0x24,0xEC,0x40,0x16,0xC4,
0x00,0x6C,0x30,0xC2,0xC8,0x0A,0x60,0x67,0x10,0x02,0x71,0x00,0x47,0x0C,0x72,0x34,
0x07,0x10,0x07,0xB1,0x02,0x47,0x26,0x00,0x10,0x64,0x80,0x29,0x38,0x02,0xBC,0x8B,
0x94,0x3C,0x90,0xB0,0x20,0xC0,0x59,0xCA,0x95,0x73,0x07,0x84,0x3C,0x04,0x12,0x60,
0x67,0x0C,0x4C,0x00,0x20,0x89,0x00,0x42,0x70,0x25,0x05,0x37,0x28,0x45,0x11,0xE9,
0x12,0xF4,0x69,0x2E,0xE6,0x08,0x84,0x44,0x08,0x04,0xE0,0xCA,0x8A,0x7E,0x50,0x08,
0xBE,0x50,0xE0,0x3E,0x18,0x53,0x8D,0xE5,0x0E,0x05,0xE5,0x0B,0x09,0xE5,0x0E,0x01,
0xE1,0x8D,0x58,0x3A,0x09,0x6F,0x4A,0x84,0x80,0x08,0x48,0x03,0x04,0x61,0x42,0x09,
0x00,0x40,0x90,0x00,0x09,0x00,0x7F,0x0C,0x68,0xB2,0x1F,0x1C,0x05,0x49,0x5C,0x23,
0x06,0x30,0xC2,0xA1,0xC0,0xFC,0x12,0x94,0x88,0xC1,0x81,0x12,0x00,0xA1,0x0F,0x1C,
0x15,0x59,0x4A,0x23,0x06,0x37,0x82,0x52,0xD1,0x18,0x30,0x82,0x2E,0x38,0x1A,0x8A,
0x97,0x82,0x52,0x81,0x07,0x18,0x19,0xC3,0x63,0x00,0x08,0x2C,0x40,0x13,0x1C,0x03,
0x55,0x46,0x2A,0x19,0x4C,0x04,0x44,0xA0,0xC9,0x58,0xB0,0x74,0x63,0x20,0x40,0xC7,
0x02,0xD3,0x53,0x8A,0x81,0x42,0x23,0xC2,0xDA,0x8A,0xB2,0x59,0x2F,0x16,0x09,0x82,
0x14,0x08,0xE8,0xC0,0xCE,0x0D,0x18,0x00,0x42,0xA3,0x80,0xEB,0xA8,0xA4,0x61,0xCA,
0x32,0x54,0x38,0x12,0x54,0x1A,0x08,0x62,0xC4,0x4A,0x87,0x00,0x48,0xC7,0xA5,0x1D,
0x6C,0xD2,0x43,0x23,0x0E,0x3A,0x48,0x01,0xA5,0x83,0x62,0x8D,0x00,0xA9,0x20,0x00,
0x90,0x51,0x81,0x9C,0x32,0x30,0x00,0x82,0x47,0x05,0xD0,0xD4,0x2A,0x81,0x00,0x2A,
0x87,0x07,0xC8,0xC0,0x44,0x3C,0xA8,0x70,0x5C,0xA8,0x14,0x1C,0xA8,0x70,0x6C,0x8C,
0x47,0x82,0xCA,0x87,0x04,0xCA,0x87,0x50,0x36,0x0C,0x85,0x48,0x03,0x94,0x80,0x19,
0x46,0x02,0x52,0x90,0x01,0x2B,0x04,0xC6,0x29,0x00,0x22,0x8C,0x44,0xB2,0x11,0x1C,
0x0F,0x53,0x5E,0xAA,0x04,0x0E,0xAA,0x1C,0x16,0xA3,0x01,0x0D,0x54,0x38,0x35,0x54,
0x0A,0x15,0x54,0x38,0x25,0x46,0x23,0x03,0x4A,0xB4,0x80,0x0B,0x48,0x03,0x34,0x60,
0x22,0x69,0x00,0x46,0xB0,0x4C,0x06,0x90,0x04,0xA8,0x08,0xE0,0xFA,0x5A,0x6D,0x50,
0x20,0x59,0x03,0x49,0xC8,0x78,0x70,0x03,0x6D,0x76,0xA8,0x11,0x03,0x48,0x08,0x38,
0x70,0x43,0x1D,0x2E,0x8C,0x25,0x84,0xEA,0x87,0x00,0xE8,0xC6,0x69,0x13,0x68,0xC8,
0xF4,0x61,0x26,0xE9,0x00,0x0E,0x8B,0x0E,0x04,0x6B,0xAF,0xD1,0x84,0x8F,0xAA,0x1C,
0x17,0xA3,0x05,0x24,0x4D,0x28,0x31,0x84,0x80,0x64,0x01,0x7A,0x0C,0x38,0x31,0x9E,
0x90,0xC6,0x13,0x13,0x49,0x0C,0x68,0x60,0x67,0x05,0x0C,0x00,0x21,0x21,0x00,0x08,
0x70,0x53,0x7D,0x61,0xA8,0x2D,0x08,0x62,0xD1,0xB6,0x29,0x24,0x46,0xC0,0x48,0xC5,
0x81,0x1C,0x18,0x19,0xC1,0x83,0x00,0x08,0x50,0x70,0x33,0x03,0x71,0xA8,0x58,0x31,
0xA8,0x70,0x51,0x8C,0x57,0x01,0xD0,0xB0,0x81,0x37,0x8A,0x96,0x99,0x00,0x29,0x90,
0x04,0x98,0xC5,0x4B,0x20,0x41,0xC1,0xCD,0x0C,0x16,0xA0,0x41,0xE6,0xA1,0xC0,0xE6,
0x30,0x12,0xCD,0x43,0x80,0xCD,0x41,0xA1,0x54,0x59,0x2A,0xB2,0x00,0x2B,0x20,0x0C,
0xB1,0x80,0x89,0x64,0x01,0x16,0xC1,0xB0,0x1A,0x30,0x38,0x05,0x91,0x9A,0xD4,0x0E,
0xD5,0xC4,0x59,0x20,0x20,0x81,0xC1,0x2D,0x8D,0xDA,0x2C,0x90,0x10,0x80,0xE0,0x56,
0x26,0xEB,0x50,0xBB,0x35,0x11,0x64,0x80,0x80,0x07,0x06,0xB5,0x32,0xD8,0xC6,0x49,
0xB5,0x0E,0x01,0xB5,0x0C,0x22,0xE9,0x6D,0x8C,0x64,0xB2,0x1F,0xEC,0x06,0xCC,0xC7,
0x63,0x05,0x26,0xC5,0xD2,0xBB,0x18,0x29,0x64,0x1F,0xD8,0x2D,0xB9,0x86,0xC5,0xD2,
0x02,0x17,0xEC,0x0E,0xC2,0xC8,0xE3,0x0D,0x41,0x0E,0xA1,0xC0,0x0E,0x30,0x13,0xED,
0x43,0x81,0xED,0x40,0xE1,0x54,0x3D,0xBB,0x09,0x73,0x8C,0x34,0x67,0x20,0x0A,0x71,
0x80,0x84,0xE4,0x01,0x8E,0x40,0x01,0xA0,0xFD,0x83,0xDA,0x59,0x5C,0x63,0xB0,0x25,
0xD4,0x38,0x05,0xD4,0x1E,0x8F,0xB0,0xC1,0x2D,0x71,0x8E,0x96,0x43,0x7D,0x80,0x39,
0x58,0xDC,0x63,0x24,0xB8,0xFA,0x5B,0x61,0x7D,0x82,0x3B,0x58,0x5C,0x7D,0x20,0x21,
0x3E,0xC0,0x9C,0x6D,0x6E,0x30,0x30,0x10,0xE3,0xE9,0x3B,0x8C,0x0C,0x67,0x03,0xEC,
0x19,0xD6,0xC9,0xEA,0x07,0x11,0xEA,0x1C,0x01,0xE3,0x19,0x3D,0xD4,0x38,0x1A,0xC1,
0xC2,0x67,0xBC,0x24,0xAB,0xC8,0x00,0xBC,0x80,0x36,0xC7,0x7B,0x01,0x73,0xB3,0x7A,
0x87,0xD0,0x74,0x80,0x94
};

void init_MuASF_dict()
{
  ATermList afuns, terms;

  _MuASF_dict = (ATermList)ATreadFromBinaryString(_MuASF_dict_baf, _MuASF_dict_LEN);

  ATprotect((ATerm *)&_MuASF_dict);

  afuns = (ATermList)ATelementAt(_MuASF_dict, 0);

  MA_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun37 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun38 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun39 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun40 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun41 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun42 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun43 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun44 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun45 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun46 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun47 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun48 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun49 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun50 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun51 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun52 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun53 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun54 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun55 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun56 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun57 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun58 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun59 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun60 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun61 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  MA_afun62 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt(_MuASF_dict, 1);

  MA_patternPropIdLexToCf = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternModIdLexToCf = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternVarIdLexToCf = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternFunIdLexToCf = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternQCharLexToCf = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternEscCharLexToCf = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternModuleModule = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternRulesOptPresent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternRulesOptAbsent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternSignatureOptPresent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternSignatureOptAbsent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternCondUnequal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternCondEqual = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternCondAssign = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternCondElemsMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternCondElemsSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternCondElemsEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternCondListDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternRuleElemsMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternRuleElemsSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternRuleElemsEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternRuleListDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternRuleWithConds = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternRuleDefaultWithConds = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternRuleDefaultNoConds = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternRuleNoConds = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternFuncDefElemsMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternFuncDefElemsSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternFuncDefElemsEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternFuncDefListDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternSigArgListDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermTermsMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermTermsSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternAnnotationsDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternSigArgElemsMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternSigArgElemsSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternFuncDefFuncWithAnnos = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternFuncDefFuncNoAnnos = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternFuncDefConstantWithAnnos = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternFuncDefConstantNoAnnos = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternSigArgPlus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternSigArgStar = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternSigArgNormal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermElemsMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermElemsSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermElemsEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermListDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermArgsMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermArgsSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermTyped = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermFunc = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermInt = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermConstant = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternTermVar = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternVarPlus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternVarStar = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternVarNormal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternNatConAbs = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternIntConNeg = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternIntConPos = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternIntConNat = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternIntConCon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternIntPlus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  MA_patternIntCon = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
