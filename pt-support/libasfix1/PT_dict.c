/*
 * Generated at Wed Feb 14 14:01:19 2001
 */

#include "PT_dict.h"


ATerm PT_patternSymbolsEmpty = NULL;
ATerm PT_patternSymbolsList = NULL;
ATerm PT_patternArgsEmpty = NULL;
ATerm PT_patternArgsList = NULL;
ATerm PT_patternLayoutDefault = NULL;
ATerm PT_patternSeparatorDefault = NULL;
ATerm PT_patternLexicalDefault = NULL;
ATerm PT_patternQLiteralDefault = NULL;
ATerm PT_patternLiteralDefault = NULL;
ATerm PT_patternSymbolQuotedLiteral = NULL;
ATerm PT_patternSymbolUnquotedLiteral = NULL;
ATerm PT_patternSymbolSort = NULL;
ATerm PT_patternSymbolEmptyLayout = NULL;
ATerm PT_patternSymbolIterPlusSep = NULL;
ATerm PT_patternSymbolIterStarSep = NULL;
ATerm PT_patternSymbolIterPlus = NULL;
ATerm PT_patternSymbolIterStar = NULL;
ATerm PT_patternAttrsNoAttrs = NULL;
ATerm PT_patternProductionDefault = NULL;
ATerm PT_patternVarDefault = NULL;
ATerm PT_patternTreeSeparator = NULL;
ATerm PT_patternTreeQuotedLiteral = NULL;
ATerm PT_patternTreeUnquotedLiteral = NULL;
ATerm PT_patternTreeLexical = NULL;
ATerm PT_patternTreeList = NULL;
ATerm PT_patternTreeAppl = NULL;
ATerm PT_patternTreeVar = NULL;
ATerm PT_patternTreeLayout = NULL;
ATerm PT_patternModuleNameDefault = NULL;
ATerm PT_patternParseTreeTree = NULL;

/*
 *
 * PT_patternSymbolsEmpty = []
 * PT_patternSymbolsList = [<term>,<list>]
 * PT_patternArgsEmpty = []
 * PT_patternArgsList = [<term>,<list>]
 * PT_patternLayoutDefault = w(<term>)
 * PT_patternSeparatorDefault = sep(<term>)
 * PT_patternLexicalDefault = lex(<term>,<term>)
 * PT_patternQLiteralDefault = ql(<term>)
 * PT_patternLiteralDefault = l(<term>)
 * PT_patternSymbolQuotedLiteral = <term>
 * PT_patternSymbolUnquotedLiteral = <term>
 * PT_patternSymbolSort = sort(<term>)
 * PT_patternSymbolEmptyLayout = w("")
 * PT_patternSymbolIterPlusSep = iter-sep(l("{"),w(""),<term>,w(""),<term>,w(""),l("}"),w(""),l("+"))
 * PT_patternSymbolIterStarSep = iter-sep(l("{"),w(""),<term>,w(""),<term>,w(""),l("}"),w(""),l("*"))
 * PT_patternSymbolIterPlus = iter(<term>,w(""),l("+"))
 * PT_patternSymbolIterStar = iter(<term>,w(""),l("*"))
 * PT_patternAttrsNoAttrs = no-attrs
 * PT_patternProductionDefault = prod(id(<term>),w(""),<term>,w(""),l("->"),w(""),<term>,w(""),<term>)
 * PT_patternVarDefault = var(<term>,<term>)
 * PT_patternTreeSeparator = <term>
 * PT_patternTreeQuotedLiteral = <term>
 * PT_patternTreeUnquotedLiteral = <term>
 * PT_patternTreeLexical = <term>
 * PT_patternTreeList = list(<term>,w(""),<term>)
 * PT_patternTreeAppl = appl(<term>,w(""),<term>)
 * PT_patternTreeVar = <term>
 * PT_patternTreeLayout = <term>
 * PT_patternModuleNameDefault = id(<term>)
 * PT_patternParseTreeTree = term(l("term"),w(""),l("X"),w(""),id("X"),<term>,<term>,<term>,no-abbreviations)
 *
 */

static ATermList _PT_dict = NULL;

#define _PT_dict_LEN 433

static char _PT_dict_baf[_PT_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x1D,0x4A,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x02,0x02,0x03,
0x04,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x22,0x12,0x02,0x01,0x06,0x07,0x08,
0x09,0x0A,0x05,0x0F,0x11,0x12,0x15,0x16,0x17,0x18,0x13,0x1C,0x00,0x02,0x01,0x02,
0x02,0x5B,0x5D,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,
0x65,0x72,0x6D,0x00,0x00,0x01,0x01,0x77,0x01,0x00,0x02,0x02,0x0B,0x00,0x03,0x73,
0x65,0x70,0x01,0x00,0x01,0x01,0x00,0x03,0x6C,0x65,0x78,0x02,0x00,0x01,0x01,0x00,
0x01,0x00,0x02,0x71,0x6C,0x01,0x00,0x01,0x01,0x00,0x01,0x6C,0x01,0x00,0x08,0x08,
0x1A,0x19,0x14,0x10,0x0E,0x0D,0x0C,0x00,0x04,0x73,0x6F,0x72,0x74,0x01,0x00,0x01,
0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x7B,0x00,0x01,0x01,0x01,0x7D,0x00,0x01,0x01,
0x01,0x2B,0x00,0x01,0x01,0x08,0x69,0x74,0x65,0x72,0x2D,0x73,0x65,0x70,0x09,0x00,
0x02,0x01,0x09,0x01,0x05,0x01,0x00,0x01,0x05,0x01,0x00,0x01,0x05,0x01,0x09,0x01,
0x05,0x01,0x09,0x01,0x2A,0x00,0x01,0x01,0x04,0x69,0x74,0x65,0x72,0x03,0x00,0x02,
0x01,0x00,0x01,0x05,0x01,0x09,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,0x72,0x73,0x00,
0x00,0x01,0x02,0x69,0x64,0x01,0x00,0x02,0x02,0x1A,0x00,0x02,0x2D,0x3E,0x00,0x01,
0x01,0x04,0x70,0x72,0x6F,0x64,0x09,0x00,0x01,0x01,0x13,0x01,0x05,0x01,0x00,0x01,
0x05,0x01,0x09,0x01,0x05,0x01,0x00,0x01,0x05,0x01,0x00,0x03,0x76,0x61,0x72,0x02,
0x00,0x01,0x01,0x00,0x01,0x00,0x04,0x6C,0x69,0x73,0x74,0x03,0x00,0x01,0x01,0x00,
0x01,0x05,0x01,0x00,0x04,0x61,0x70,0x70,0x6C,0x03,0x00,0x01,0x01,0x00,0x01,0x05,
0x01,0x00,0x04,0x74,0x65,0x72,0x6D,0x00,0x01,0x01,0x01,0x58,0x00,0x01,0x01,0x10,
0x6E,0x6F,0x2D,0x61,0x62,0x62,0x72,0x65,0x76,0x69,0x61,0x74,0x69,0x6F,0x6E,0x73,
0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,0x09,0x00,0x01,0x01,0x09,0x01,0x05,0x01,
0x09,0x01,0x05,0x01,0x13,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x1B,0x01,0x00,0x0C,
0x3E,0x00,0xF4,0x20,0x89,0x00,0x46,0x22,0xE0,0x07,0x42,0x03,0x6E,0x10,0x2C,0x80,
0x9B,0x00,0x0C,0x40,0xEA,0x81,0xC0,0xD4,0x42,0xA8,0x81,0x4C,0x0C,0xB9,0x02,0x42,
0x21,0xA2,0x24,0xAB,0x08,0x88,0x54,0x44,0x49,0x16,0x01,0x48,0x2C,0x3C,0x94,0x44,
0x38,0xA2,0xCD,0x11,0x15,0x24,0x40,0x61,0x80,0xD2,0x20,0xA4,0x42,0x48,0x80,0x91,
0x0E,0x2C,0x40,0xC3,0x88,0x28,0x88,0x11,0x10,0xC3,0xC0,0x80,0x5A,0x2E,0x0A,0x00,
0xA0
};

void init_PT_dict()
{
  ATermList afuns, terms;

  _PT_dict = (ATermList)ATreadFromBinaryString(_PT_dict_baf, _PT_dict_LEN);

  ATprotect((ATerm *)&_PT_dict);

  afuns = (ATermList)ATelementAt(_PT_dict, 0);


  terms = (ATermList)ATelementAt(_PT_dict, 1);

  PT_patternSymbolsEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolsList = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternArgsEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternArgsList = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternLayoutDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSeparatorDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternLexicalDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternQLiteralDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternLiteralDefault = ATgetFirst(terms);
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
  PT_patternAttrsNoAttrs = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternProductionDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternVarDefault = ATgetFirst(terms);
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
  PT_patternTreeVar = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeLayout = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternModuleNameDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternParseTreeTree = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
