/*
 * Generated at Mon Jun 18 14:25:36 2001
 */

#include "ASFME_dict.h"

AFun ASF_afun0;
AFun ASF_afun1;
AFun ASF_afun2;
AFun ASF_afun3;
AFun ASF_afun4;
AFun ASF_afun5;
AFun ASF_afun6;
AFun ASF_afun7;
AFun ASF_afun8;
AFun ASF_afun9;
AFun ASF_afun10;
AFun ASF_afun11;
AFun ASF_afun12;
AFun ASF_afun13;
AFun ASF_afun14;
AFun ASF_afun15;
AFun ASF_afun16;
AFun ASF_afun17;
AFun ASF_afun18;
AFun ASF_afun19;
AFun ASF_afun20;
AFun ASF_afun21;
AFun ASF_afun22;
AFun ASF_afun23;
AFun ASF_afun24;
AFun ASF_afun25;
AFun ASF_afun26;
AFun ASF_afun27;
AFun ASF_afun28;
AFun ASF_afun29;
AFun ASF_afun30;
AFun ASF_afun31;
AFun ASF_afun32;
AFun ASF_afun33;
AFun ASF_afun34;
AFun ASF_afun35;

ATerm ASF_patternCHARLexToCf = NULL;
ATerm ASF_patternConditionNegative = NULL;
ATerm ASF_patternConditionPositive = NULL;
ATerm ASF_patternEquationDefault = NULL;
ATerm ASF_patternCHARListMany = NULL;
ATerm ASF_patternCHARListSingle = NULL;
ATerm ASF_patternCHARListEmpty = NULL;
ATerm ASF_patternTreeLexicalConstructor = NULL;
ATerm ASF_patternTagNotEmpty = NULL;
ATerm ASF_patternTagEmpty = NULL;
ATerm ASF_patternCondEquationWhen = NULL;
ATerm ASF_patternCondEquationImplies = NULL;
ATerm ASF_patternCondEquationSimple = NULL;
ATerm ASF_patternCondEquationListMany = NULL;
ATerm ASF_patternCondEquationListSingle = NULL;
ATerm ASF_patternCondEquationListEmpty = NULL;
ATerm ASF_patternEquationsPresent = NULL;
ATerm ASF_patternEquationsAbsent = NULL;
ATerm ASF_patternConditionListMany = NULL;
ATerm ASF_patternConditionListSingle = NULL;
ATerm ASF_patternConditionsDefault = NULL;
ATerm ASF_patternTagIdLexToCf = NULL;
ATerm ASF_patternImpliesLexToCf = NULL;
ATerm ASF_patternProductionLexicalConstructor = NULL;

/*
 * ASF_afun0 = prod(x,x,x)
 * ASF_afun1 = lit(x)
 * ASF_afun2 = ")"
 * ASF_afun3 = cf(x)
 * ASF_afun4 = opt(x)
 * ASF_afun5 = layout
 * ASF_afun6 = iter-star(x)
 * ASF_afun7 = sort(x)
 * ASF_afun8 = "CHAR"
 * ASF_afun9 = "("
 * ASF_afun10 = attrs(x)
 * ASF_afun11 = id(x)
 * ASF_afun12 = "GEN-LexConsFuncs"
 * ASF_afun13 = appl(x,x)
 * ASF_afun14 = lex(x)
 * ASF_afun15 = "Implies"
 * ASF_afun16 = no-attrs
 * ASF_afun17 = "TagId"
 * ASF_afun18 = atr(x)
 * ASF_afun19 = "avoid"
 * ASF_afun20 = iter-sep(x,x)
 * ASF_afun21 = "Condition"
 * ASF_afun22 = ","
 * ASF_afun23 = "Conditions"
 * ASF_afun24 = "Equations"
 * ASF_afun25 = list(x)
 * ASF_afun26 = "CondEquation"
 * ASF_afun27 = "equations"
 * ASF_afun28 = "Equation"
 * ASF_afun29 = "Tag"
 * ASF_afun30 = "when"
 * ASF_afun31 = "]"
 * ASF_afun32 = "["
 * ASF_afun33 = "="
 * ASF_afun34 = "GEN-Equations"
 * ASF_afun35 = "!="
 *
 * ASF_patternCHARLexToCf = appl(prod([lex(sort("CHAR"))],cf(sort("CHAR")),no-attrs),[<term>])
 * ASF_patternConditionNegative = appl(prod([<term>,cf(opt(layout)),lit("!="),cf(opt(layout)),<term>],cf(sort("Condition")),attrs([id("GEN-Equations")])),[<term>,<term>,lit("!="),<term>,<term>])
 * ASF_patternConditionPositive = appl(prod([<term>,cf(opt(layout)),lit("="),cf(opt(layout)),<term>],cf(sort("Condition")),attrs([id("GEN-Equations")])),[<term>,<term>,lit("="),<term>,<term>])
 * ASF_patternEquationDefault = appl(prod([<term>,cf(opt(layout)),lit("="),cf(opt(layout)),<term>],cf(sort("Equation")),attrs([id("GEN-Equations")])),[<term>,<term>,lit("="),<term>,<term>])
 * ASF_patternCHARListMany = [<term>,<term>,<list>]
 * ASF_patternCHARListSingle = [<term>]
 * ASF_patternCHARListEmpty = []
 * ASF_patternTreeLexicalConstructor = appl(prod([lit(<str>),cf(opt(layout)),lit("("),cf(opt(layout)),cf(iter-star(sort("CHAR"))),cf(opt(layout)),lit(")")],<term>,attrs([id("GEN-LexConsFuncs")])),[<term>,<term>,lit("("),<term>,appl(list(cf(iter-star(sort("CHAR")))),<term>),<term>,lit(")")])
 * ASF_patternTagNotEmpty = appl(prod([lit("["),cf(opt(layout)),cf(sort("TagId")),cf(opt(layout)),lit("]")],cf(sort("Tag")),attrs([id("Equations")])),[lit("["),<term>,<term>,<term>,lit("]")])
 * ASF_patternTagEmpty = appl(prod([lit("["),cf(opt(layout)),lit("]")],cf(sort("Tag")),attrs([id("Equations")])),[lit("["),<term>,lit("]")])
 * ASF_patternCondEquationWhen = appl(prod([cf(sort("Tag")),cf(opt(layout)),cf(sort("Equation")),cf(opt(layout)),lit("when"),cf(opt(layout)),cf(sort("Conditions"))],cf(sort("CondEquation")),attrs([id("Equations")])),[<term>,<term>,<term>,<term>,lit("when"),<term>,<term>])
 * ASF_patternCondEquationImplies = appl(prod([cf(sort("Tag")),cf(opt(layout)),cf(sort("Conditions")),cf(opt(layout)),cf(sort("Implies")),cf(opt(layout)),cf(sort("Equation"))],cf(sort("CondEquation")),attrs([id("Equations")])),[<term>,<term>,<term>,<term>,<term>,<term>,<term>])
 * ASF_patternCondEquationSimple = appl(prod([cf(sort("Tag")),cf(opt(layout)),cf(sort("Equation"))],cf(sort("CondEquation")),attrs([id("Equations")])),[<term>,<term>,<term>])
 * ASF_patternCondEquationListMany = [<term>,<term>,<list>]
 * ASF_patternCondEquationListSingle = [<term>]
 * ASF_patternCondEquationListEmpty = []
 * ASF_patternEquationsPresent = appl(prod([lit("equations"),cf(opt(layout)),cf(iter-star(sort("CondEquation")))],cf(sort("Equations")),attrs([id("Equations")])),[lit("equations"),<term>,appl(list(cf(iter-star(sort("CondEquation")))),<term>)])
 * ASF_patternEquationsAbsent = appl(prod([],cf(sort("Equations")),attrs([id("Equations")])),[])
 * ASF_patternConditionListMany = [<term>,<term>,lit(<str>),<term>,<list>]
 * ASF_patternConditionListSingle = [<term>]
 * ASF_patternConditionsDefault = appl(prod([cf(iter-sep(sort("Condition"),lit(",")))],cf(sort("Conditions")),attrs([id("Equations")])),[appl(list(cf(iter-sep(sort("Condition"),lit(",")))),<term>)])
 * ASF_patternTagIdLexToCf = appl(prod([lex(sort("TagId"))],cf(sort("TagId")),attrs([atr("avoid")])),[<term>])
 * ASF_patternImpliesLexToCf = appl(prod([lex(sort("Implies"))],cf(sort("Implies")),no-attrs),[<term>])
 * ASF_patternProductionLexicalConstructor = prod([lit(<str>),cf(opt(layout)),lit("("),cf(opt(layout)),cf(iter-star(sort("CHAR"))),cf(opt(layout)),lit(")")],<term>,attrs([id("GEN-LexConsFuncs")]))
 *
 */

static ATermList _ASFME_dict = NULL;

#define _ASFME_dict_LEN 966

static char _ASFME_dict_baf[_ASFME_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x2B,0x81,0x12,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x03,0x03,
0x03,0x04,0x05,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x80,0x93,0x27,0x02,0x01,
0x00,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,
0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,
0x26,0x27,0x28,0x29,0x2A,0x02,0x01,0x02,0x02,0x5B,0x5D,0x00,0x00,0x01,0x03,0x73,
0x74,0x72,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,0x65,
0x72,0x6D,0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,0x04,0x70,0x72,0x6F,0x64,0x03,
0x00,0x10,0x03,0x02,0x01,0x06,0x03,0x00,0x0A,0x06,0x03,0x11,0x17,0x06,0x03,0x6C,
0x69,0x74,0x01,0x00,0x0B,0x0B,0x1D,0x22,0x25,0x26,0x27,0x09,0x10,0x00,0x28,0x2A,
0x06,0x01,0x29,0x00,0x01,0x01,0x02,0x63,0x66,0x01,0x00,0x0E,0x05,0x1B,0x0D,0x0B,
0x0E,0x06,0x03,0x6F,0x70,0x74,0x01,0x00,0x02,0x02,0x0C,0x06,0x06,0x6C,0x61,0x79,
0x6F,0x75,0x74,0x00,0x00,0x01,0x09,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,
0x01,0x00,0x03,0x02,0x0E,0x06,0x04,0x73,0x6F,0x72,0x74,0x01,0x00,0x0A,0x0A,0x1F,
0x16,0x21,0x1E,0x24,0x18,0x23,0x1C,0x0F,0x06,0x04,0x43,0x48,0x41,0x52,0x00,0x01,
0x01,0x01,0x28,0x00,0x01,0x01,0x05,0x61,0x74,0x74,0x72,0x73,0x01,0x00,0x05,0x02,
0x01,0x06,0x02,0x69,0x64,0x01,0x00,0x04,0x04,0x1F,0x13,0x29,0x06,0x10,0x47,0x45,
0x4E,0x2D,0x4C,0x65,0x78,0x43,0x6F,0x6E,0x73,0x46,0x75,0x6E,0x63,0x73,0x00,0x01,
0x01,0x04,0x61,0x70,0x70,0x6C,0x02,0x00,0x13,0x03,0x20,0x07,0x06,0x04,0x02,0x00,
0x01,0x06,0x03,0x6C,0x65,0x78,0x01,0x00,0x04,0x02,0x0E,0x06,0x07,0x49,0x6D,0x70,
0x6C,0x69,0x65,0x73,0x00,0x01,0x01,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,0x72,0x73,
0x00,0x00,0x01,0x05,0x54,0x61,0x67,0x49,0x64,0x00,0x01,0x01,0x03,0x61,0x74,0x72,
0x01,0x00,0x02,0x02,0x1A,0x06,0x05,0x61,0x76,0x6F,0x69,0x64,0x00,0x01,0x01,0x08,
0x69,0x74,0x65,0x72,0x2D,0x73,0x65,0x70,0x02,0x00,0x02,0x02,0x0E,0x06,0x02,0x08,
0x06,0x09,0x43,0x6F,0x6E,0x64,0x69,0x74,0x69,0x6F,0x6E,0x00,0x01,0x01,0x01,0x2C,
0x00,0x01,0x01,0x0A,0x43,0x6F,0x6E,0x64,0x69,0x74,0x69,0x6F,0x6E,0x73,0x00,0x01,
0x01,0x09,0x45,0x71,0x75,0x61,0x74,0x69,0x6F,0x6E,0x73,0x00,0x01,0x01,0x04,0x6C,
0x69,0x73,0x74,0x01,0x00,0x04,0x02,0x0A,0x06,0x0C,0x43,0x6F,0x6E,0x64,0x45,0x71,
0x75,0x61,0x74,0x69,0x6F,0x6E,0x00,0x01,0x01,0x09,0x65,0x71,0x75,0x61,0x74,0x69,
0x6F,0x6E,0x73,0x00,0x01,0x01,0x08,0x45,0x71,0x75,0x61,0x74,0x69,0x6F,0x6E,0x00,
0x01,0x01,0x03,0x54,0x61,0x67,0x00,0x01,0x01,0x04,0x77,0x68,0x65,0x6E,0x00,0x01,
0x01,0x01,0x5D,0x00,0x01,0x01,0x01,0x5B,0x00,0x01,0x01,0x01,0x3D,0x00,0x01,0x01,
0x0D,0x47,0x45,0x4E,0x2D,0x45,0x71,0x75,0x61,0x74,0x69,0x6F,0x6E,0x73,0x00,0x01,
0x01,0x02,0x21,0x3D,0x00,0x01,0x01,0x01,0x83,0x13,0x00,0x2A,0x22,0x10,0x0A,0x42,
0x50,0x02,0x30,0x04,0xF8,0xE0,0x87,0x81,0x0B,0x89,0x08,0x38,0x50,0x24,0xD8,0xD0,
0x58,0x30,0x98,0xB0,0x40,0xC3,0x83,0x1D,0x1E,0x0D,0x01,0x01,0xC5,0x44,0x42,0x0A,
0x12,0x32,0x32,0x12,0x0A,0x22,0x2A,0x20,0x21,0xA3,0xC3,0xA2,0x87,0x01,0x8B,0x09,
0x83,0x05,0x8D,0x0D,0x85,0x03,0x84,0x48,0x5C,0x08,0x3C,0x70,0x7C,0x30,0x02,0x50,
0x42,0x10,0x22,0x60,0x62,0x20,0x12,0x40,0x52,0x00,0x33,0x11,0x30,0x04,0x85,0x0A,
0x11,0x24,0x50,0x81,0xA8,0xD1,0x2A,0x44,0x06,0x3C,0x42,0x44,0x8A,0x51,0x00,0x14,
0x61,0x14,0x1C,0x84,0x44,0x8C,0x8C,0x21,0x49,0x66,0x4E,0x20,0xA8,0xE4,0x52,0x74,
0x40,0x2D,0x10,0x03,0x42,0x20,0xD4,0x40,0x29,0x07,0x10,0xB1,0x62,0x8C,0x40,0x03,
0x18,0x43,0xD0,0x84,0x11,0x92,0xC2,0x22,0xC4,0x03,0x31,0x00,0x4C,0x21,0x0D,0x42,
0xC4,0x22,0x44,0xA3,0x22,0xD8,0xC4,0x45,0x81,0x8C,0x1D,0x88,0x03,0x62,0x01,0x58,
0x85,0x46,0x8C,0x14,0x82,0x88,0x04,0x88,0x4C,0xA9,0x3E,0x11,0x9C,0x85,0xE3,0x08,
0x1E,0x10,0x4C,0x6E,0x30,0x82,0xE3,0x15,0x22,0x09,0xC6,0x10,0x1C,0x22,0xAA,0x01,
0x1F,0x8E,0x29,0x2A,0x24,0x00,0x89,0x00,0xC2,0x20,0x84,0x24,0x02,0x08,0x2A,0x10,
0xA8,0x00,0x48,0x00,0xE0,0x22,0x17,0x26,0x4A,0x44,0x31,0x12,0x4C,0x20,0x24,0xC3,
0x62,0xA3,0x89,0x84,0x18,0x88,0xEC,0xAE,0xD4,0x46,0x34,0x9C,0xC2,0x5E,0x44,0x30,
0xE4,0x80,0x59,0x20,0x06,0x48,0x03,0x11,0xC2,0x10,0xAE,0x41,0x44,0x31,0xC5,0x71,
0x94,0x51,0x0C,0x19,0x0C,0x21,0x4A,0x14,0x34,0xC7,0x1D,0x4C,0x20,0xD4,0xC1,0x15,
0x4C,0x20,0x54,0x40,0xA1,0x94,0xC2,0x09,0x4C,0x0E,0x6C,0xA9,0xDC,0x86,0x57,0x48,
0x01,0xD2,0x01,0xB4,0x80,0x2D,0x20,0x13,0x44,0x09,0xA8,0x50,0x84,0xAA,0x51,0x33,
0x1C,0x63,0x30,0x82,0x33,0x02,0x43,0x30,0x80,0x33,0x0B,0x86,0x0F,0xA6,0x10,0x7A,
0x60,0xAA,0x4C,0xA5,0x90,0x01,0x64,0x03,0x99,0x00,0x66,0x40,0x29,0x90,0x0D,0x40,
0x84,0x2D,0x4A,0x95,0x98,0xE3,0xEA,0x93,0x2A,0x63,0x06,0x0E,0xC1,0x06,0x0A,0x42,
0x04,0x00,0x04,0x2B,0x5A,0xAD,0x88,0x98,0x0D,0x98,0x43,0x59,0x8D,0x89,0xD4,0x7A,
0x40,0xC8,0x38,0x89,0x3D,0x90,0x07,0x60,0x8C,0x23,0x61,0x1F,0xC1,0x3A,0x31,0x19,
0x80,0xFD,0x06,0x72,0x00,0x9C,0x80,0x47,0x11,0x83,0x61,0x7D,0x05,0x20,0x7C,0x10,
0x6B,0x45,0xCC,0x58,0x84,0x14,0x28,0x4C,0xAB,0x82,0xF1,0x8B,0x84,0x6F,0x05,0x19,
0xD3,0x74,0x48,0x2A,0x60,0x9D,0xD5,0x44,0xA9,0x05,0xE0,0x93,0x7A,0x1E,0x8B,0x03,
0x4B,0x2A,0x42,0x7B,0x0A,0x50
};

void init_ASFME_dict()
{
  ATermList afuns, terms;

  _ASFME_dict = (ATermList)ATreadFromBinaryString(_ASFME_dict_baf, _ASFME_dict_LEN);

  ATprotect((ATerm *)&_ASFME_dict);

  afuns = (ATermList)ATelementAt(_ASFME_dict, 0);

  ASF_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ASF_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt(_ASFME_dict, 1);

  ASF_patternCHARLexToCf = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternConditionNegative = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternConditionPositive = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternEquationDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternCHARListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternCHARListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternCHARListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternTreeLexicalConstructor = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternTagNotEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternTagEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternCondEquationWhen = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternCondEquationImplies = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternCondEquationSimple = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternCondEquationListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternCondEquationListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternCondEquationListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternEquationsPresent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternEquationsAbsent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternConditionListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternConditionListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternConditionsDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternTagIdLexToCf = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternImpliesLexToCf = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ASF_patternProductionLexicalConstructor = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
