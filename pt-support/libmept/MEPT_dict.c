/*
 * Generated at Tue May 15 11:45:19 2001
 */

#include "MEPT_dict.h"

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
AFun PT_afun38;
AFun PT_afun39;
AFun PT_afun40;
AFun PT_afun41;
AFun PT_afun42;
AFun PT_afun43;
AFun PT_afun44;

ATerm PT_patternCharRangesEmpty = NULL;
ATerm PT_patternCharRangesList = NULL;
ATerm PT_patternCharRangeRange = NULL;
ATerm PT_patternCharRangeCharacter = NULL;
ATerm PT_patternSymbolsEmpty = NULL;
ATerm PT_patternSymbolsList = NULL;
ATerm PT_patternSymbolCharClass = NULL;
ATerm PT_patternSymbolLayout = NULL;
ATerm PT_patternSymbolVarSym = NULL;
ATerm PT_patternSymbolFunc = NULL;
ATerm PT_patternSymbolSet = NULL;
ATerm PT_patternSymbolPerm = NULL;
ATerm PT_patternSymbolIterSepN = NULL;
ATerm PT_patternSymbolIterN = NULL;
ATerm PT_patternSymbolIterStarSep = NULL;
ATerm PT_patternSymbolIterPlusSep = NULL;
ATerm PT_patternSymbolIterStar = NULL;
ATerm PT_patternSymbolIterPlus = NULL;
ATerm PT_patternSymbolSort = NULL;
ATerm PT_patternSymbolPair = NULL;
ATerm PT_patternSymbolAlt = NULL;
ATerm PT_patternSymbolOpt = NULL;
ATerm PT_patternSymbolSeq = NULL;
ATerm PT_patternSymbolEmpty = NULL;
ATerm PT_patternSymbolLex = NULL;
ATerm PT_patternSymbolCf = NULL;
ATerm PT_patternSymbolLit = NULL;
ATerm PT_patternArgsEmpty = NULL;
ATerm PT_patternArgsList = NULL;
ATerm PT_patternATermTraverse = NULL;
ATerm PT_patternATermConstructor = NULL;
ATerm PT_patternATermAvoid = NULL;
ATerm PT_patternATermPrefer = NULL;
ATerm PT_patternATermReject = NULL;
ATerm PT_patternATermMemo = NULL;
ATerm PT_patternATermNonAssoc = NULL;
ATerm PT_patternATermAssoc = NULL;
ATerm PT_patternATermRight = NULL;
ATerm PT_patternATermLeft = NULL;
ATerm PT_patternATermBracket = NULL;
ATerm PT_patternAttrAterm = NULL;
ATerm PT_patternAttrId = NULL;
ATerm PT_patternAttrCons = NULL;
ATerm PT_patternAttrsSingle = NULL;
ATerm PT_patternAttrsMany = NULL;
ATerm PT_patternAttributesAttrs = NULL;
ATerm PT_patternAttributesNoAttrs = NULL;
ATerm PT_patternProductionList = NULL;
ATerm PT_patternProductionDefault = NULL;
ATerm PT_patternTreeAmb = NULL;
ATerm PT_patternTreeFlatLayout = NULL;
ATerm PT_patternTreeLit = NULL;
ATerm PT_patternTreeChar = NULL;
ATerm PT_patternTreeAppl = NULL;
ATerm PT_patternParseTreeTree = NULL;

/*
 * PT_afun0 = parsetree(x,x)
 * PT_afun1 = appl(x,x)
 * PT_afun2 = prod(x,x,x)
 * PT_afun3 = sort(x)
 * PT_afun4 = "<START>"
 * PT_afun5 = no-attrs
 * PT_afun6 = lit(x)
 * PT_afun7 = flatlayout(x)
 * PT_afun8 = amb(x)
 * PT_afun9 = list(x)
 * PT_afun10 = attrs(x)
 * PT_afun11 = cons(x)
 * PT_afun12 = id(x)
 * PT_afun13 = atr(x)
 * PT_afun14 = "bracket"
 * PT_afun15 = "left"
 * PT_afun16 = "right"
 * PT_afun17 = "assoc"
 * PT_afun18 = "non-assoc"
 * PT_afun19 = "memo"
 * PT_afun20 = "reject"
 * PT_afun21 = "prefer"
 * PT_afun22 = "avoid"
 * PT_afun23 = "constructor"
 * PT_afun24 = "traverse"
 * PT_afun25 = cf(x)
 * PT_afun26 = lex(x)
 * PT_afun27 = empty
 * PT_afun28 = seq(x)
 * PT_afun29 = opt(x)
 * PT_afun30 = alt(x,x)
 * PT_afun31 = pair(x,x)
 * PT_afun32 = iter(x)
 * PT_afun33 = iter-star(x)
 * PT_afun34 = iter-sep(x,x)
 * PT_afun35 = iter-star-sep(x,x)
 * PT_afun36 = iter-n(x,x)
 * PT_afun37 = iter-sep-n(x,x,x)
 * PT_afun38 = perm(x)
 * PT_afun39 = set(x)
 * PT_afun40 = func(x,x)
 * PT_afun41 = varsym(x)
 * PT_afun42 = layout
 * PT_afun43 = char-class(x)
 * PT_afun44 = range(x,x)
 *
 * PT_patternCharRangesEmpty = []
 * PT_patternCharRangesList = [<term>,<list>]
 * PT_patternCharRangeRange = range(<int>,<int>)
 * PT_patternCharRangeCharacter = <int>
 * PT_patternSymbolsEmpty = []
 * PT_patternSymbolsList = [<term>,<list>]
 * PT_patternSymbolCharClass = char-class(<term>)
 * PT_patternSymbolLayout = layout
 * PT_patternSymbolVarSym = varsym(<term>)
 * PT_patternSymbolFunc = func(<term>,<term>)
 * PT_patternSymbolSet = set(<term>)
 * PT_patternSymbolPerm = perm(<term>)
 * PT_patternSymbolIterSepN = iter-sep-n(<term>,<term>,<int>)
 * PT_patternSymbolIterN = iter-n(<term>,<int>)
 * PT_patternSymbolIterStarSep = iter-star-sep(<term>,<term>)
 * PT_patternSymbolIterPlusSep = iter-sep(<term>,<term>)
 * PT_patternSymbolIterStar = iter-star(<term>)
 * PT_patternSymbolIterPlus = iter(<term>)
 * PT_patternSymbolSort = sort(<str>)
 * PT_patternSymbolPair = pair(<term>,<term>)
 * PT_patternSymbolAlt = alt(<term>,<term>)
 * PT_patternSymbolOpt = opt(<term>)
 * PT_patternSymbolSeq = seq(<term>)
 * PT_patternSymbolEmpty = empty
 * PT_patternSymbolLex = lex(<term>)
 * PT_patternSymbolCf = cf(<term>)
 * PT_patternSymbolLit = lit(<str>)
 * PT_patternArgsEmpty = []
 * PT_patternArgsList = [<term>,<list>]
 * PT_patternATermTraverse = "traverse"
 * PT_patternATermConstructor = "constructor"
 * PT_patternATermAvoid = "avoid"
 * PT_patternATermPrefer = "prefer"
 * PT_patternATermReject = "reject"
 * PT_patternATermMemo = "memo"
 * PT_patternATermNonAssoc = "non-assoc"
 * PT_patternATermAssoc = "assoc"
 * PT_patternATermRight = "right"
 * PT_patternATermLeft = "left"
 * PT_patternATermBracket = "bracket"
 * PT_patternAttrAterm = atr(<term>)
 * PT_patternAttrId = id(<str>)
 * PT_patternAttrCons = cons(<str>)
 * PT_patternAttrsSingle = [<term>]
 * PT_patternAttrsMany = [<term>,<list>]
 * PT_patternAttributesAttrs = attrs(<term>)
 * PT_patternAttributesNoAttrs = no-attrs
 * PT_patternProductionList = list(<term>)
 * PT_patternProductionDefault = prod(<term>,<term>,<term>)
 * PT_patternTreeAmb = amb(<term>)
 * PT_patternTreeFlatLayout = flatlayout(<str>)
 * PT_patternTreeLit = lit(<str>)
 * PT_patternTreeChar = <int>
 * PT_patternTreeAppl = appl(<term>,<term>)
 * PT_patternParseTreeTree = parsetree(appl(prod(<term>,sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 *
 */

static ATermList _MEPT_dict = NULL;

#define _MEPT_dict_LEN 951

static char _MEPT_dict_baf[_MEPT_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x35,0x80,0xC3,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x04,0x04,
0x04,0x03,0x05,0x06,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x6B,0x30,0x02,0x01,
0x00,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,
0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,
0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x02,0x01,
0x02,0x02,0x5B,0x5D,0x00,0x00,0x01,0x03,0x69,0x6E,0x74,0x00,0x00,0x01,0x03,0x73,
0x74,0x72,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,0x65,
0x72,0x6D,0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,0x09,0x70,0x61,0x72,0x73,0x65,
0x74,0x72,0x65,0x65,0x02,0x00,0x02,0x02,0x09,0x07,0x02,0x00,0x07,0x04,0x61,0x70,
0x70,0x6C,0x02,0x00,0x03,0x03,0x0A,0x00,0x07,0x03,0x01,0x00,0x07,0x04,0x70,0x72,
0x6F,0x64,0x03,0x00,0x03,0x02,0x00,0x07,0x03,0x0B,0x00,0x07,0x03,0x0D,0x00,0x07,
0x04,0x73,0x6F,0x72,0x74,0x01,0x00,0x03,0x03,0x0C,0x00,0x07,0x07,0x3C,0x53,0x54,
0x41,0x52,0x54,0x3E,0x00,0x01,0x01,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,0x72,0x73,
0x00,0x00,0x01,0x03,0x6C,0x69,0x74,0x01,0x00,0x02,0x02,0x00,0x07,0x0A,0x66,0x6C,
0x61,0x74,0x6C,0x61,0x79,0x6F,0x75,0x74,0x01,0x00,0x02,0x02,0x00,0x07,0x03,0x61,
0x6D,0x62,0x01,0x00,0x02,0x02,0x00,0x07,0x04,0x6C,0x69,0x73,0x74,0x01,0x00,0x02,
0x02,0x00,0x07,0x05,0x61,0x74,0x74,0x72,0x73,0x01,0x00,0x02,0x02,0x00,0x07,0x04,
0x63,0x6F,0x6E,0x73,0x01,0x00,0x02,0x02,0x00,0x07,0x02,0x69,0x64,0x01,0x00,0x02,
0x02,0x00,0x07,0x03,0x61,0x74,0x72,0x01,0x00,0x02,0x02,0x00,0x07,0x07,0x62,0x72,
0x61,0x63,0x6B,0x65,0x74,0x00,0x01,0x01,0x04,0x6C,0x65,0x66,0x74,0x00,0x01,0x01,
0x05,0x72,0x69,0x67,0x68,0x74,0x00,0x01,0x01,0x05,0x61,0x73,0x73,0x6F,0x63,0x00,
0x01,0x01,0x09,0x6E,0x6F,0x6E,0x2D,0x61,0x73,0x73,0x6F,0x63,0x00,0x01,0x01,0x04,
0x6D,0x65,0x6D,0x6F,0x00,0x01,0x01,0x06,0x72,0x65,0x6A,0x65,0x63,0x74,0x00,0x01,
0x01,0x06,0x70,0x72,0x65,0x66,0x65,0x72,0x00,0x01,0x01,0x05,0x61,0x76,0x6F,0x69,
0x64,0x00,0x01,0x01,0x0B,0x63,0x6F,0x6E,0x73,0x74,0x72,0x75,0x63,0x74,0x6F,0x72,
0x00,0x01,0x01,0x08,0x74,0x72,0x61,0x76,0x65,0x72,0x73,0x65,0x00,0x01,0x01,0x02,
0x63,0x66,0x01,0x00,0x02,0x02,0x00,0x07,0x03,0x6C,0x65,0x78,0x01,0x00,0x02,0x02,
0x00,0x07,0x05,0x65,0x6D,0x70,0x74,0x79,0x00,0x00,0x01,0x03,0x73,0x65,0x71,0x01,
0x00,0x02,0x02,0x00,0x07,0x03,0x6F,0x70,0x74,0x01,0x00,0x02,0x02,0x00,0x07,0x03,
0x61,0x6C,0x74,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x04,0x70,0x61,0x69,
0x72,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x04,0x69,0x74,0x65,0x72,0x01,
0x00,0x02,0x02,0x00,0x07,0x09,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x01,
0x00,0x02,0x02,0x00,0x07,0x08,0x69,0x74,0x65,0x72,0x2D,0x73,0x65,0x70,0x02,0x00,
0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x0D,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,
0x72,0x2D,0x73,0x65,0x70,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x06,0x69,
0x74,0x65,0x72,0x2D,0x6E,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x0A,0x69,
0x74,0x65,0x72,0x2D,0x73,0x65,0x70,0x2D,0x6E,0x03,0x00,0x02,0x02,0x00,0x07,0x02,
0x00,0x07,0x02,0x00,0x07,0x04,0x70,0x65,0x72,0x6D,0x01,0x00,0x02,0x02,0x00,0x07,
0x03,0x73,0x65,0x74,0x01,0x00,0x02,0x02,0x00,0x07,0x04,0x66,0x75,0x6E,0x63,0x02,
0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x06,0x76,0x61,0x72,0x73,0x79,0x6D,0x01,
0x00,0x02,0x02,0x00,0x07,0x06,0x6C,0x61,0x79,0x6F,0x75,0x74,0x00,0x00,0x01,0x0A,
0x63,0x68,0x61,0x72,0x2D,0x63,0x6C,0x61,0x73,0x73,0x01,0x00,0x02,0x02,0x00,0x07,
0x05,0x72,0x61,0x6E,0x67,0x65,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x01,
0x80,0xD6,0x05,0x1A,0x88,0x14,0x55,0x41,0x29,0x29,0x81,0x05,0x70,0x72,0x10,0x65,
0x21,0x14,0x94,0x20,0x96,0x84,0x62,0x30,0x84,0x56,0x11,0x09,0xC2,0x01,0x78,0x47,
0xC0,0x88,0x79,0x11,0x71,0x20,0xE6,0x46,0xC2,0x85,0x95,0x13,0x1A,0x06,0x74,0x74,
0x18,0x69,0x31,0x51,0x60,0xA6,0xC6,0x43,0x88,0x49,0x71,0x11,0x1E,0x02,0x7C,0x47,
0x80,0x48,0x71,0x09,0x45,0x84,0x4A,0x0C,0x62,0x46,0x82,0x48,0x51,0x49,0x44,0x86,
0x4A,0x04,0x72,0x51,0xC0,0x52,0xA1,0x84,0xA4,0x50,0x54,0x82,0x1A,0x94,0x60,0x34,
0x84,0x16,0x90,0x1D,0x20,0x07,0xA5,0x44,0xB8,0x05,0x80,0x73,0x81,0xD2,0x03,0x16,
0x90,0x8A,0x19,0xFB,0x0A,0x08,0xA6,0x82,0x09,0x80,0x63,0x81,0xD0,0x8D,0xD8,0x04,
0x3B,0x40,0x66,0xC0,0x3E,0xEB,0x00,0x03,0xD5,0x60,0x17,0x65,0x80,0x1D,0x16,0x00,
0x04,0x6D,0xE6,0x00,0x85,0xAC,0xC0,0x01,0x36,0x98,0x00,0x06,0x93,0x00,0xEB,0x8C,
0x01,0xAB,0x15,0x81,0x55,0x18,0x00,0x0A,0xC3,0x00,0x06,0x50,0x60,0x09,0x7E,0x80,
0x45,0x78,0x0B,0x74,0x03,0xC9,0xD0,0x07,0x32,0x46,0x2C,0x80,0x19,0x81,0xD1,0xA7,
0x61,0x4A,0xC4,0x99,0x81,0x23,0x1C,0x7A,0x18,0xB4,0x51,0xA8,0x22,0x51,0x87,0x21,
0x0A,0x44,0x18,0x80,0x21,0x40,0x3F,0x79,0x18,0x7C,0xE4,0x62,0xF4,0x1E,0x90,0x10,
0x7A,0x07,0x46,0xEB,0x20,0x0B,0x84,0x27,0x19,0x00,0x1D,0x44,0x08,0x40,0xED,0xA4,
0x01,0xB2,0x91,0x8A,0xD2,0x41,0x64,0x11,0x98,0x8A,0x10,0x13,0x61,0x08,0x80,0x40,
0x8C,0x80,0x03,0x20,0x0F,0x42,0xA0
};

void init_MEPT_dict()
{
  ATermList afuns, terms;

  _MEPT_dict = (ATermList)ATreadFromBinaryString(_MEPT_dict_baf, _MEPT_dict_LEN);

  ATprotect((ATerm *)&_MEPT_dict);

  afuns = (ATermList)ATelementAt(_MEPT_dict, 0);

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
  PT_afun38 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun39 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun40 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun41 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun42 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun43 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PT_afun44 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt(_MEPT_dict, 1);

  PT_patternCharRangesEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternCharRangesList = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternCharRangeRange = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternCharRangeCharacter = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolsEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolsList = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolCharClass = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolLayout = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolVarSym = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolFunc = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolSet = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolPerm = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterSepN = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterN = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterStarSep = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterPlusSep = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterStar = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterPlus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolSort = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolPair = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolAlt = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolOpt = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolSeq = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolLex = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolCf = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolLit = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternArgsEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternArgsList = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermTraverse = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermConstructor = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermAvoid = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermPrefer = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermReject = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermMemo = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermNonAssoc = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermAssoc = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermRight = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermLeft = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternATermBracket = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrAterm = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternAttrId = ATgetFirst(terms);
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
  PT_patternProductionList = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternProductionDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeAmb = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeFlatLayout = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeLit = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeChar = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeAppl = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternParseTreeTree = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
