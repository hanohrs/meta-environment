/*
 * Generated at Mon Jun 18 15:45:09 2001
 */

#include "PT_dict.h"

AFun PT_afun0;
AFun PT_afun1;
AFun PT_afun2;
AFun PT_afun3;
AFun PT_afun4;
AFun PT_afun5;
AFun PT_afun6;
AFun PT_afun7;
AFun PT_afun8;
AFun PT_afun9;
AFun PT_afun10;
AFun PT_afun11;
AFun PT_afun12;
AFun PT_afun13;
AFun PT_afun14;
AFun PT_afun15;
AFun PT_afun16;
AFun PT_afun17;
AFun PT_afun18;
AFun PT_afun19;
AFun PT_afun20;
AFun PT_afun21;
AFun PT_afun22;
AFun PT_afun23;
AFun PT_afun24;
AFun PT_afun25;
AFun PT_afun26;
AFun PT_afun27;
AFun PT_afun28;
AFun PT_afun29;
AFun PT_afun30;
AFun PT_afun31;
AFun PT_afun32;
AFun PT_afun33;
AFun PT_afun34;
AFun PT_afun35;
AFun PT_afun36;
AFun PT_afun37;

ATerm PT_patternSymbolsEmpty = NULL;
ATerm PT_patternSymbolsList = NULL;
ATerm PT_patternArgsEmpty = NULL;
ATerm PT_patternArgsList = NULL;
ATerm PT_patternSymbolQuotedLiteral = NULL;
ATerm PT_patternSymbolUnquotedLiteral = NULL;
ATerm PT_patternSymbolSort = NULL;
ATerm PT_patternSymbolEmptyLayout = NULL;
ATerm PT_patternSymbolIterPlusSep = NULL;
ATerm PT_patternSymbolIterStarSep = NULL;
ATerm PT_patternSymbolIterPlus = NULL;
ATerm PT_patternSymbolIterStar = NULL;
ATerm PT_patternAttrNonAssoc = NULL;
ATerm PT_patternAttrAssoc = NULL;
ATerm PT_patternAttrRight = NULL;
ATerm PT_patternAttrLeft = NULL;
ATerm PT_patternAttrId = NULL;
ATerm PT_patternAttrConstructor = NULL;
ATerm PT_patternAttrAvoid = NULL;
ATerm PT_patternAttrPrefer = NULL;
ATerm PT_patternAttrReject = NULL;
ATerm PT_patternAttrMemo = NULL;
ATerm PT_patternAttrTraverse = NULL;
ATerm PT_patternAttrBracket = NULL;
ATerm PT_patternAttrCons = NULL;
ATerm PT_patternAttrsSingle = NULL;
ATerm PT_patternAttrsMany = NULL;
ATerm PT_patternAttributesAttrs = NULL;
ATerm PT_patternAttributesNoAttrs = NULL;
ATerm PT_patternProductionDefault = NULL;
ATerm PT_patternTreeVar = NULL;
ATerm PT_patternTreeLayout = NULL;
ATerm PT_patternTreeSeparator = NULL;
ATerm PT_patternTreeQuotedLiteral = NULL;
ATerm PT_patternTreeUnquotedLiteral = NULL;
ATerm PT_patternTreeLexical = NULL;
ATerm PT_patternTreeList = NULL;
ATerm PT_patternTreeAppl = NULL;
ATerm PT_patternModuleNameDefault = NULL;
ATerm PT_patternParseTreeTree = NULL;

/*
 * PT_afun0 = term(x,x,x,x,x,x,x,x,x)
 * PT_afun1 = l(x)
 * PT_afun2 = "term"
 * PT_afun3 = w(x)
 * PT_afun4 = ""
 * PT_afun5 = "X"
 * PT_afun6 = id(x)
 * PT_afun7 = no-abbreviations
 * PT_afun8 = appl(x,x,x)
 * PT_afun9 = list(x,x,x)
 * PT_afun10 = lex(x,x)
 * PT_afun11 = ql(x)
 * PT_afun12 = sep(x)
 * PT_afun13 = var(x,x)
 * PT_afun14 = prod(x,x,x,x,x,x,x,x,x)
 * PT_afun15 = "->"
 * PT_afun16 = no-attrs
 * PT_afun17 = attrs(x,x,x,x,x)
 * PT_afun18 = "{"
 * PT_afun19 = "}"
 * PT_afun20 = ","
 * PT_afun21 = cons(x)
 * PT_afun22 = "bracket"
 * PT_afun23 = "traverse"
 * PT_afun24 = "memo"
 * PT_afun25 = "reject"
 * PT_afun26 = "prefer"
 * PT_afun27 = "avoid"
 * PT_afun28 = "constructor"
 * PT_afun29 = "left"
 * PT_afun30 = "right"
 * PT_afun31 = "assoc"
 * PT_afun32 = "non-assoc"
 * PT_afun33 = iter(x,x,x)
 * PT_afun34 = "*"
 * PT_afun35 = "+"
 * PT_afun36 = iter-sep(x,x,x,x,x,x,x,x,x)
 * PT_afun37 = sort(x)
 *
 * PT_patternSymbolsEmpty = []
 * PT_patternSymbolsList = [<term>,<list>]
 * PT_patternArgsEmpty = []
 * PT_patternArgsList = [<term>,<list>]
 * PT_patternSymbolQuotedLiteral = ql(<str>)
 * PT_patternSymbolUnquotedLiteral = l(<str>)
 * PT_patternSymbolSort = sort(<str>)
 * PT_patternSymbolEmptyLayout = w("")
 * PT_patternSymbolIterPlusSep = iter-sep(l("{"),w(""),<term>,w(""),ql(<str>),w(""),l("}"),w(""),l("+"))
 * PT_patternSymbolIterStarSep = iter-sep(l("{"),w(""),<term>,w(""),ql(<str>),w(""),l("}"),w(""),l("*"))
 * PT_patternSymbolIterPlus = iter(<term>,w(""),l("+"))
 * PT_patternSymbolIterStar = iter(<term>,w(""),l("*"))
 * PT_patternAttrNonAssoc = l("non-assoc")
 * PT_patternAttrAssoc = l("assoc")
 * PT_patternAttrRight = l("right")
 * PT_patternAttrLeft = l("left")
 * PT_patternAttrId = id(<str>)
 * PT_patternAttrConstructor = l("constructor")
 * PT_patternAttrAvoid = l("avoid")
 * PT_patternAttrPrefer = l("prefer")
 * PT_patternAttrReject = l("reject")
 * PT_patternAttrMemo = l("memo")
 * PT_patternAttrTraverse = l("traverse")
 * PT_patternAttrBracket = l("bracket")
 * PT_patternAttrCons = cons(<str>)
 * PT_patternAttrsSingle = [<term>]
 * PT_patternAttrsMany = [<term>,w(""),sep(","),w(""),<list>]
 * PT_patternAttributesAttrs = attrs(l("{"),w(""),<term>,w(""),l("}"))
 * PT_patternAttributesNoAttrs = no-attrs
 * PT_patternProductionDefault = prod(id(<str>),w(""),<term>,w(""),l("->"),w(""),<term>,w(""),<term>)
 * PT_patternTreeVar = var(<str>,<term>)
 * PT_patternTreeLayout = w(<str>)
 * PT_patternTreeSeparator = sep(<str>)
 * PT_patternTreeQuotedLiteral = ql(<str>)
 * PT_patternTreeUnquotedLiteral = l(<str>)
 * PT_patternTreeLexical = lex(<str>,<term>)
 * PT_patternTreeList = list(<term>,w(""),<term>)
 * PT_patternTreeAppl = appl(<term>,w(""),<term>)
 * PT_patternModuleNameDefault = id(<str>)
 * PT_patternParseTreeTree = term(l("term"),w(""),l("X"),w(""),id("X"),w(<str>),<term>,w(<str>),no-abbreviations)
 *
 */

static ATermList _PT_dict = NULL;

#define _PT_dict_LEN 846

static char _PT_dict_baf[_PT_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x2D,0x80,0xAC,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x03,0x03,
0x03,0x04,0x05,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x57,0x29,0x02,0x01,0x00,
0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,
0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,
0x27,0x28,0x29,0x2A,0x2B,0x2C,0x02,0x01,0x02,0x02,0x5B,0x5D,0x00,0x00,0x01,0x03,
0x73,0x74,0x72,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,
0x65,0x72,0x6D,0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,
0x09,0x00,0x02,0x02,0x08,0x06,0x02,0x0A,0x06,0x02,0x08,0x06,0x02,0x0A,0x06,0x02,
0x0D,0x06,0x02,0x0A,0x06,0x02,0x00,0x06,0x02,0x0A,0x06,0x02,0x0E,0x06,0x01,0x6C,
0x01,0x00,0x14,0x14,0x0C,0x09,0x16,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,
0x26,0x27,0x29,0x2A,0x1A,0x19,0x00,0x06,0x04,0x74,0x65,0x72,0x6D,0x00,0x01,0x01,
0x01,0x77,0x01,0x00,0x03,0x03,0x00,0x0B,0x06,0x00,0x00,0x01,0x01,0x01,0x58,0x00,
0x01,0x01,0x02,0x69,0x64,0x01,0x00,0x03,0x03,0x0C,0x00,0x06,0x10,0x6E,0x6F,0x2D,
0x61,0x62,0x62,0x72,0x65,0x76,0x69,0x61,0x74,0x69,0x6F,0x6E,0x73,0x00,0x00,0x01,
0x04,0x61,0x70,0x70,0x6C,0x03,0x00,0x02,0x02,0x00,0x06,0x02,0x0A,0x06,0x02,0x00,
0x06,0x04,0x6C,0x69,0x73,0x74,0x03,0x00,0x02,0x02,0x00,0x06,0x02,0x0A,0x06,0x02,
0x00,0x06,0x03,0x6C,0x65,0x78,0x02,0x00,0x02,0x02,0x00,0x06,0x02,0x00,0x06,0x02,
0x71,0x6C,0x01,0x00,0x02,0x02,0x00,0x06,0x03,0x73,0x65,0x70,0x01,0x00,0x03,0x03,
0x00,0x1B,0x06,0x03,0x76,0x61,0x72,0x02,0x00,0x02,0x02,0x00,0x06,0x02,0x00,0x06,
0x04,0x70,0x72,0x6F,0x64,0x09,0x00,0x02,0x02,0x0D,0x06,0x02,0x0A,0x06,0x02,0x00,
0x06,0x02,0x0A,0x06,0x02,0x08,0x06,0x02,0x0A,0x06,0x02,0x00,0x06,0x02,0x0A,0x06,
0x02,0x00,0x06,0x02,0x2D,0x3E,0x00,0x01,0x01,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,
0x72,0x73,0x00,0x00,0x01,0x05,0x61,0x74,0x74,0x72,0x73,0x05,0x00,0x02,0x02,0x08,
0x06,0x02,0x0A,0x06,0x02,0x00,0x06,0x02,0x0A,0x06,0x02,0x08,0x06,0x01,0x7B,0x00,
0x01,0x01,0x01,0x7D,0x00,0x01,0x01,0x01,0x2C,0x00,0x01,0x01,0x04,0x63,0x6F,0x6E,
0x73,0x01,0x00,0x02,0x02,0x00,0x06,0x07,0x62,0x72,0x61,0x63,0x6B,0x65,0x74,0x00,
0x01,0x01,0x08,0x74,0x72,0x61,0x76,0x65,0x72,0x73,0x65,0x00,0x01,0x01,0x04,0x6D,
0x65,0x6D,0x6F,0x00,0x01,0x01,0x06,0x72,0x65,0x6A,0x65,0x63,0x74,0x00,0x01,0x01,
0x06,0x70,0x72,0x65,0x66,0x65,0x72,0x00,0x01,0x01,0x05,0x61,0x76,0x6F,0x69,0x64,
0x00,0x01,0x01,0x0B,0x63,0x6F,0x6E,0x73,0x74,0x72,0x75,0x63,0x74,0x6F,0x72,0x00,
0x01,0x01,0x04,0x6C,0x65,0x66,0x74,0x00,0x01,0x01,0x05,0x72,0x69,0x67,0x68,0x74,
0x00,0x01,0x01,0x05,0x61,0x73,0x73,0x6F,0x63,0x00,0x01,0x01,0x09,0x6E,0x6F,0x6E,
0x2D,0x61,0x73,0x73,0x6F,0x63,0x00,0x01,0x01,0x04,0x69,0x74,0x65,0x72,0x03,0x00,
0x03,0x02,0x00,0x06,0x02,0x0A,0x06,0x02,0x08,0x06,0x01,0x2A,0x00,0x01,0x01,0x01,
0x2B,0x00,0x01,0x01,0x08,0x69,0x74,0x65,0x72,0x2D,0x73,0x65,0x70,0x09,0x00,0x03,
0x02,0x08,0x06,0x02,0x0A,0x06,0x02,0x00,0x06,0x02,0x0A,0x06,0x02,0x12,0x06,0x02,
0x0A,0x06,0x02,0x08,0x06,0x02,0x0A,0x06,0x02,0x08,0x06,0x04,0x73,0x6F,0x72,0x74,
0x01,0x00,0x02,0x02,0x00,0x06,0x01,0x82,0x96,0x05,0x55,0x54,0x12,0x20,0x19,0x31,
0x50,0x22,0x60,0x48,0x5C,0x00,0x84,0x3E,0x48,0x23,0xC5,0x0B,0x9A,0x15,0x07,0x0C,
0x2A,0x36,0x58,0x50,0xB1,0xC2,0x26,0x78,0x20,0xC0,0x8A,0x3A,0x44,0x55,0x55,0x43,
0x44,0x8A,0x99,0x05,0x0A,0x2A,0xA3,0x25,0x42,0x46,0x88,0x9D,0x01,0x06,0x23,0xC4,
0xC3,0x85,0x8B,0x1B,0x06,0x0E,0x34,0x5C,0x28,0x78,0x91,0xF0,0x20,0x13,0x84,0x23,
0x04,0x4A,0x18,0x84,0x09,0x2A,0x30,0x52,0x20,0x64,0x81,0xC9,0x55,0x55,0x00,0x05,
0x28,0xAB,0x01,0x50,0x0C,0xB0,0x72,0x40,0x46,0x48,0x54,0x25,0x00,0x8B,0x07,0x20,
0x2B,0x90,0x87,0x92,0x20,0x94,0x72,0x2C,0x25,0x96,0x28,0x33,0xCC,0x22,0x24,0x04,
0x44,0x60,0x24,0x13,0xC6,0x9E,0x51,0x04,0x04,0x44,0x60,0x8A,0x38,0x52,0x4C,0x04,
0x10,0x92,0x4A,0x04,0x50,0x12,0x43,0x2C,0x71,0x23,0x86,0x18,0x90,0x2D,0x14,0x48,
0x92,0x82,0x32,0x52,0x61,0x21,0x52,0x10,0x91,0xA1,0x10,0x48,0x37,0x00,0x24,0x59,
0x87,0xE2,0x1D,0x41,0xF1,0x1E,0x21,0x78,0x80,0xE0,0x3C,0x34,0x26,0xE8,0x05,0x20,
0x42,0xE8,0x0D,0x20,0x1A,0x98,0x85,0x5E,0x51,0x29,0x88,0x64,0x4E,0x2A,0x10,0x40,
0x46,0x01,0xD9,0x1D,0xA2,0x88,0x80,0x88,0xA0,0x80,0x80,0x6C,0x14,0x20,0x56,0x61,
0x10,0xB7,0x88,0x99,0x9C,0x84,0xC4,0x40,0x8D,0x64,0x20,0x06,0x32,0x02,0x03,0xD6,
0x90,0x10,0x0E,0xA4,0x8B,0x58,0x42,0x60,0x46,0x40,0x42,0x08,0x09,0x40
};

void init_PT_dict()
{
  ATermList afuns, terms;

  _PT_dict = (ATermList)ATreadFromBinaryString(_PT_dict_baf, _PT_dict_LEN);

  ATprotect((ATerm *)&_PT_dict);

  afuns = (ATermList)ATelementAt(_PT_dict, 0);

  PT_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun37 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt(_PT_dict, 1);

  PT_patternSymbolsEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolsList = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternArgsEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternArgsList = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolQuotedLiteral = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolUnquotedLiteral = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolSort = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolEmptyLayout = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterPlusSep = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterStarSep = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterPlus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterStar = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrNonAssoc = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrAssoc = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrRight = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrLeft = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrId = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrConstructor = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrAvoid = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrPrefer = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrReject = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrMemo = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrTraverse = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrBracket = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrCons = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrsSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrsMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttributesAttrs = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttributesNoAttrs = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternProductionDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeVar = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeLayout = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeSeparator = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeQuotedLiteral = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeUnquotedLiteral = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeLexical = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeList = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeAppl = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternModuleNameDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternParseTreeTree = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
