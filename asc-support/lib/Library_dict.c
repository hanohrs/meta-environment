#include "Library_dict.h"

AFun CO_afun17;
AFun CO_afun3;
AFun CO_afun48;
AFun CO_afun34;
AFun CO_afun37;
AFun CO_afun26;
AFun CO_afun19;
AFun CO_afun2;
AFun CO_afun47;
AFun CO_afun42;
AFun CO_afun25;
AFun CO_afun15;
AFun CO_afun18;
AFun CO_afun31;
AFun CO_afun43;
AFun CO_afun54;
AFun CO_afun0;
AFun CO_afun38;
AFun CO_afun33;
AFun CO_afun16;
AFun CO_afun10;
AFun CO_afun13;
AFun CO_afun52;
AFun CO_afun40;
AFun CO_afun14;
AFun CO_afun30;
AFun CO_afun7;
AFun CO_afun35;
AFun CO_afun29;
AFun CO_afun6;
AFun CO_afun1;
AFun CO_afun39;
AFun CO_afun50;
AFun CO_afun22;
AFun CO_afun44;
AFun CO_afun9;
AFun CO_afun51;
AFun CO_afun41;
AFun CO_afun12;
AFun CO_afun53;
AFun CO_afun20;
AFun CO_afun28;
AFun CO_afun8;
AFun CO_afun21;
AFun CO_afun32;
AFun CO_afun11;
AFun CO_afun27;
AFun CO_afun5;
AFun CO_afun55;
AFun CO_afun4;
AFun CO_afun23;
AFun CO_afun49;
AFun CO_afun45;
AFun CO_afun36;
AFun CO_afun24;
AFun CO_afun46;

ATerm CO_patternOptLayoutPresent = NULL;
ATerm CO_patternOptLayoutAbsent = NULL;
ATerm CO_patternStartBoolean = NULL;
ATerm CO_patternStartStrCon = NULL;
ATerm CO_patternStartNormal = NULL;
ATerm CO_patternStartEscaped = NULL;
ATerm CO_patternStartBoolCon = NULL;
ATerm CO_patternStartMeasure = NULL;
ATerm CO_patternStartWriteResult = NULL;
ATerm CO_patternStartBytesResult = NULL;
ATerm CO_patternStartParseResult = NULL;
ATerm CO_patternWriteResultFailure = NULL;
ATerm CO_patternWriteResultSuccess = NULL;
ATerm CO_patternBytesResultFailure = NULL;
ATerm CO_patternBytesResultSuccess = NULL;
ATerm CO_patternParseResultFailure = NULL;
ATerm CO_patternParseResultSuccess = NULL;
ATerm CO_patternMeasureEqual = NULL;
ATerm CO_patternMeasureGreater = NULL;
ATerm CO_patternMeasureLess = NULL;
ATerm CO_patternBoolConFalse = NULL;
ATerm CO_patternBoolConTrue = NULL;
ATerm CO_patternStrConDefault = NULL;
ATerm CO_patternEscapedOctal = NULL;
ATerm CO_patternEscapedSpecialCharacter = NULL;
ATerm CO_patternNormalDefault = NULL;
ATerm CO_patternBooleanBracket = NULL;
ATerm CO_patternBooleanNot = NULL;
ATerm CO_patternBooleanAnd = NULL;
ATerm CO_patternBooleanOr = NULL;
ATerm CO_patternBooleanConstant = NULL;

/*
 * CO_afun17 = "&"
 * CO_afun3 = sort(x)
 * CO_afun48 = "bytes"
 * CO_afun34 = "false"
 * CO_afun37 = "greater"
 * CO_afun26 = no-attrs
 * CO_afun19 = ")"
 * CO_afun2 = cf(x)
 * CO_afun47 = "failure"
 * CO_afun42 = "parse-tree"
 * CO_afun25 = "Normal"
 * CO_afun15 = assoc(x)
 * CO_afun18 = "and"
 * CO_afun31 = "Escaped"
 * CO_afun43 = "ParseResult"
 * CO_afun54 = parsetree(x,x)
 * CO_afun0 = appl(x,x)
 * CO_afun38 = "equal"
 * CO_afun33 = "true"
 * CO_afun16 = left
 * CO_afun10 = opt(x)
 * CO_afun13 = "|"
 * CO_afun52 = "WriteResult"
 * CO_afun40 = ","
 * CO_afun14 = "or"
 * CO_afun30 = range(x,x)
 * CO_afun7 = term(x)
 * CO_afun35 = "less"
 * CO_afun29 = char-class(x)
 * CO_afun6 = attrs(x)
 * CO_afun1 = prod(x,x,x)
 * CO_afun39 = "NatCon"
 * CO_afun50 = "bytes-error"
 * CO_afun22 = "bracket"
 * CO_afun44 = "success"
 * CO_afun9 = "constant"
 * CO_afun51 = "written"
 * CO_afun41 = "Bytes"
 * CO_afun12 = lit(x)
 * CO_afun53 = "write-error"
 * CO_afun20 = "("
 * CO_afun28 = iter-star(x)
 * CO_afun8 = cons(x)
 * CO_afun21 = "not"
 * CO_afun32 = "StrCon"
 * CO_afun11 = layout
 * CO_afun27 = list(x)
 * CO_afun5 = "Boolean"
 * CO_afun55 = "<START>"
 * CO_afun4 = "BoolCon"
 * CO_afun23 = bracket
 * CO_afun49 = "BytesResult"
 * CO_afun45 = "Feedback"
 * CO_afun36 = "Measure"
 * CO_afun24 = lex(x)
 * CO_afun46 = "parse-error"
 *
 * CO_patternOptLayoutPresent = appl(prod([cf(layout)],cf(opt(layout)),no-attrs),[<list>])
 * CO_patternOptLayoutAbsent = appl(prod([],cf(opt(layout)),no-attrs),[])
 * CO_patternStartBoolean = parsetree(appl(prod([cf(opt(layout)),cf(sort("Boolean")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * CO_patternStartStrCon = parsetree(appl(prod([cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * CO_patternStartNormal = parsetree(appl(prod([cf(opt(layout)),cf(sort("Normal")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * CO_patternStartEscaped = parsetree(appl(prod([cf(opt(layout)),cf(sort("Escaped")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * CO_patternStartBoolCon = parsetree(appl(prod([cf(opt(layout)),cf(sort("BoolCon")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * CO_patternStartMeasure = parsetree(appl(prod([cf(opt(layout)),cf(sort("Measure")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * CO_patternStartWriteResult = parsetree(appl(prod([cf(opt(layout)),cf(sort("WriteResult")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * CO_patternStartBytesResult = parsetree(appl(prod([cf(opt(layout)),cf(sort("BytesResult")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * CO_patternStartParseResult = parsetree(appl(prod([cf(opt(layout)),cf(sort("ParseResult")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * CO_patternWriteResultFailure = appl(prod([lit("write-error"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("Feedback")),cf(opt(layout)),lit(")")],cf(sort("WriteResult")),attrs([term(cons("failure"))])),[lit("write-error"),<term>,lit("("),<term>,<term>,<term>,lit(")")])
 * CO_patternWriteResultSuccess = appl(prod([lit("written")],cf(sort("WriteResult")),attrs([term(cons("success"))])),[lit("written")])
 * CO_patternBytesResultFailure = appl(prod([lit("bytes-error"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("Feedback")),cf(opt(layout)),lit(")")],cf(sort("BytesResult")),attrs([term(cons("failure"))])),[lit("bytes-error"),<term>,lit("("),<term>,<term>,<term>,lit(")")])
 * CO_patternBytesResultSuccess = appl(prod([lit("bytes"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("Bytes")),cf(opt(layout)),lit(")")],cf(sort("BytesResult")),attrs([term(cons("success"))])),[lit("bytes"),<term>,lit("("),<term>,<term>,<term>,lit(")")])
 * CO_patternParseResultFailure = appl(prod([lit("parse-error"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("Feedback")),cf(opt(layout)),lit(")")],cf(sort("ParseResult")),attrs([term(cons("failure"))])),[lit("parse-error"),<term>,lit("("),<term>,<term>,<term>,lit(")")])
 * CO_patternParseResultSuccess = appl(prod([lit("parse-tree"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("Bytes")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort(<str>)),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("Bytes")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(")")],cf(sort("ParseResult")),attrs([term(cons("success"))])),[lit("parse-tree"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(")")])
 * CO_patternMeasureEqual = appl(prod([lit("equal")],cf(sort("Measure")),attrs([term(cons("equal"))])),[lit("equal")])
 * CO_patternMeasureGreater = appl(prod([lit("greater")],cf(sort("Measure")),attrs([term(cons("greater"))])),[lit("greater")])
 * CO_patternMeasureLess = appl(prod([lit("less")],cf(sort("Measure")),attrs([term(cons("less"))])),[lit("less")])
 * CO_patternBoolConFalse = appl(prod([lit("false")],cf(sort("BoolCon")),attrs([term(cons("false"))])),[lit("false")])
 * CO_patternBoolConTrue = appl(prod([lit("true")],cf(sort("BoolCon")),attrs([term(cons("true"))])),[lit("true")])
 * CO_patternStrConDefault = appl(prod([lex(sort("StrCon"))],cf(sort("StrCon")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * CO_patternEscapedOctal = appl(prod([lex(sort("Escaped"))],cf(sort("Escaped")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * CO_patternEscapedSpecialCharacter = appl(prod([lex(sort("Escaped"))],cf(sort("Escaped")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * CO_patternNormalDefault = appl(prod([lex(sort("Normal"))],cf(sort("Normal")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * CO_patternBooleanBracket = appl(prod([lit("("),cf(opt(layout)),cf(sort("Boolean")),cf(opt(layout)),lit(")")],cf(sort("Boolean")),attrs([bracket,term(cons("bracket"))])),[lit("("),<term>,<term>,<term>,lit(")")])
 * CO_patternBooleanNot = appl(prod([lit("not"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("Boolean")),cf(opt(layout)),lit(")")],cf(sort("Boolean")),attrs([term(cons("not"))])),[lit("not"),<term>,lit("("),<term>,<term>,<term>,lit(")")])
 * CO_patternBooleanAnd = appl(prod([cf(sort("Boolean")),cf(opt(layout)),lit("&"),cf(opt(layout)),cf(sort("Boolean"))],cf(sort("Boolean")),attrs([assoc(left),term(cons("and"))])),[<term>,<term>,lit("&"),<term>,<term>])
 * CO_patternBooleanOr = appl(prod([cf(sort("Boolean")),cf(opt(layout)),lit("|"),cf(opt(layout)),cf(sort("Boolean"))],cf(sort("Boolean")),attrs([assoc(left),term(cons("or"))])),[<term>,<term>,lit("|"),<term>,<term>])
 * CO_patternBooleanConstant = appl(prod([cf(sort("BoolCon"))],cf(sort("Boolean")),attrs([term(cons("constant"))])),[<term>])
 *
 */

static ATerm _Library_dict = NULL;

#define _Library_dict_LEN 1536

static char _Library_dict_baf[_Library_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x41,0x81,0xBC,0x05,0x3C,0x69,0x6E,0x74,0x3E,0x00,0x00,
0x02,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x04,0x04,0x05,0x04,0x07,0x06,0x05,0x5B,0x5F,
0x2C,0x5F,0x5D,0x02,0x00,0x80,0xD7,0x3A,0x02,0x01,0x08,0x0A,0x0B,0x0C,0x0D,0x0E,
0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,
0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,
0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,
0x3F,0x40,0x02,0x02,0x03,0x02,0x5B,0x5D,0x00,0x00,0x01,0x03,0x69,0x6E,0x74,0x00,
0x00,0x01,0x03,0x73,0x74,0x72,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,
0x01,0x04,0x74,0x65,0x72,0x6D,0x00,0x00,0x01,0x01,0x26,0x00,0x01,0x01,0x01,0x78,
0x00,0x00,0x01,0x04,0x73,0x6F,0x72,0x74,0x01,0x00,0x0F,0x0F,0x28,0x01,0x2E,0x3D,
0x17,0x3C,0x1F,0x3E,0x3A,0x16,0x13,0x35,0x39,0x38,0x09,0x05,0x62,0x79,0x74,0x65,
0x73,0x00,0x01,0x01,0x05,0x66,0x61,0x6C,0x73,0x65,0x00,0x01,0x01,0x07,0x67,0x72,
0x65,0x61,0x74,0x65,0x72,0x00,0x01,0x01,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,0x72,
0x73,0x00,0x00,0x01,0x01,0x29,0x00,0x01,0x01,0x02,0x63,0x66,0x01,0x00,0x10,0x04,
0x0A,0x1D,0x36,0x09,0x07,0x66,0x61,0x69,0x6C,0x75,0x72,0x65,0x00,0x01,0x01,0x0A,
0x70,0x61,0x72,0x73,0x65,0x2D,0x74,0x72,0x65,0x65,0x00,0x01,0x01,0x06,0x4E,0x6F,
0x72,0x6D,0x61,0x6C,0x00,0x01,0x01,0x05,0x61,0x73,0x73,0x6F,0x63,0x01,0x00,0x02,
0x02,0x1C,0x09,0x03,0x61,0x6E,0x64,0x00,0x01,0x01,0x07,0x45,0x73,0x63,0x61,0x70,
0x65,0x64,0x00,0x01,0x01,0x0B,0x50,0x61,0x72,0x73,0x65,0x52,0x65,0x73,0x75,0x6C,
0x74,0x00,0x01,0x01,0x09,0x70,0x61,0x72,0x73,0x65,0x74,0x72,0x65,0x65,0x02,0x00,
0x0A,0x02,0x19,0x09,0x02,0x01,0x09,0x04,0x61,0x70,0x70,0x6C,0x02,0x00,0x20,0x03,
0x37,0x27,0x09,0x03,0x03,0x02,0x09,0x05,0x65,0x71,0x75,0x61,0x6C,0x00,0x01,0x01,
0x04,0x74,0x72,0x75,0x65,0x00,0x01,0x01,0x04,0x6C,0x65,0x66,0x74,0x00,0x00,0x01,
0x03,0x6F,0x70,0x74,0x01,0x00,0x02,0x02,0x36,0x09,0x01,0x7C,0x00,0x01,0x01,0x0B,
0x57,0x72,0x69,0x74,0x65,0x52,0x65,0x73,0x75,0x6C,0x74,0x00,0x01,0x01,0x01,0x2C,
0x00,0x01,0x01,0x02,0x6F,0x72,0x00,0x01,0x01,0x05,0x72,0x61,0x6E,0x67,0x65,0x02,
0x00,0x02,0x02,0x00,0x09,0x02,0x00,0x09,0x04,0x74,0x65,0x72,0x6D,0x01,0x00,0x0D,
0x02,0x33,0x09,0x04,0x6C,0x65,0x73,0x73,0x00,0x01,0x01,0x0A,0x63,0x68,0x61,0x72,
0x2D,0x63,0x6C,0x61,0x73,0x73,0x01,0x00,0x02,0x02,0x02,0x09,0x05,0x61,0x74,0x74,
0x72,0x73,0x01,0x00,0x0D,0x02,0x02,0x09,0x04,0x70,0x72,0x6F,0x64,0x03,0x00,0x1F,
0x03,0x03,0x02,0x09,0x03,0x0A,0x10,0x09,0x03,0x26,0x0E,0x09,0x06,0x4E,0x61,0x74,
0x43,0x6F,0x6E,0x00,0x01,0x01,0x0B,0x62,0x79,0x74,0x65,0x73,0x2D,0x65,0x72,0x72,
0x6F,0x72,0x00,0x01,0x01,0x07,0x62,0x72,0x61,0x63,0x6B,0x65,0x74,0x00,0x01,0x01,
0x07,0x73,0x75,0x63,0x63,0x65,0x73,0x73,0x00,0x01,0x01,0x08,0x63,0x6F,0x6E,0x73,
0x74,0x61,0x6E,0x74,0x00,0x01,0x01,0x07,0x77,0x72,0x69,0x74,0x74,0x65,0x6E,0x00,
0x01,0x01,0x05,0x42,0x79,0x74,0x65,0x73,0x00,0x01,0x01,0x03,0x6C,0x69,0x74,0x01,
0x00,0x12,0x12,0x1E,0x08,0x34,0x1B,0x0C,0x24,0x0D,0x1A,0x20,0x12,0x40,0x0B,0x29,
0x2D,0x0F,0x31,0x30,0x09,0x0B,0x77,0x72,0x69,0x74,0x65,0x2D,0x65,0x72,0x72,0x6F,
0x72,0x00,0x01,0x01,0x01,0x28,0x00,0x01,0x01,0x09,0x69,0x74,0x65,0x72,0x2D,0x73,
0x74,0x61,0x72,0x01,0x00,0x02,0x02,0x25,0x09,0x04,0x63,0x6F,0x6E,0x73,0x01,0x00,
0x0D,0x0D,0x2C,0x21,0x15,0x34,0x2A,0x1B,0x0C,0x24,0x0D,0x1A,0x2B,0x11,0x09,0x03,
0x6E,0x6F,0x74,0x00,0x01,0x01,0x06,0x53,0x74,0x72,0x43,0x6F,0x6E,0x00,0x01,0x01,
0x06,0x6C,0x61,0x79,0x6F,0x75,0x74,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x01,
0x00,0x02,0x02,0x32,0x09,0x07,0x42,0x6F,0x6F,0x6C,0x65,0x61,0x6E,0x00,0x01,0x01,
0x07,0x3C,0x53,0x54,0x41,0x52,0x54,0x3E,0x00,0x01,0x01,0x07,0x42,0x6F,0x6F,0x6C,
0x43,0x6F,0x6E,0x00,0x01,0x01,0x07,0x62,0x72,0x61,0x63,0x6B,0x65,0x74,0x00,0x00,
0x01,0x0B,0x42,0x79,0x74,0x65,0x73,0x52,0x65,0x73,0x75,0x6C,0x74,0x00,0x01,0x01,
0x08,0x46,0x65,0x65,0x64,0x62,0x61,0x63,0x6B,0x00,0x01,0x01,0x07,0x4D,0x65,0x61,
0x73,0x75,0x72,0x65,0x00,0x01,0x01,0x03,0x6C,0x65,0x78,0x01,0x00,0x04,0x02,0x0A,
0x09,0x0B,0x70,0x61,0x72,0x73,0x65,0x2D,0x65,0x72,0x72,0x6F,0x72,0x00,0x01,0x01,
0x02,0x03,0xB1,0x01,0xB3,0x00,0x72,0xB0,0x80,0xB2,0x83,0x31,0x81,0x33,0x82,0x30,
0x40,0x32,0x40,0x63,0xD1,0x41,0xD3,0x42,0xD0,0xC0,0xD2,0xC2,0x35,0x1C,0x15,0x3C,
0x25,0x02,0x05,0x22,0x0A,0x39,0x12,0x01,0x46,0x4C,0x8A,0x42,0x82,0x4A,0x8C,0x46,
0x88,0x44,0xE8,0x84,0x18,0x04,0x98,0xF8,0x58,0x78,0xD8,0xA2,0xE0,0xE0,0x83,0x8B,
0x8D,0x87,0x88,0x58,0xF8,0x22,0x60,0x10,0x2A,0x0C,0x42,0x74,0x22,0x34,0x62,0x54,
0x12,0x14,0x52,0x64,0x32,0x24,0x72,0x44,0x0A,0x08,0x81,0x12,0x9E,0x0A,0x8E,0x1A,
0x91,0x60,0x68,0x18,0x61,0x69,0xA0,0xE8,0xA1,0xE9,0x20,0x19,0x02,0x11,0x9C,0x09,
0x8C,0x19,0x94,0x05,0x84,0x15,0x98,0x0D,0x88,0x1D,0x90,0x03,0x88,0x00,0x9E,0x2A,
0xC0,0x2B,0x4A,0x0A,0x10,0xE4,0x90,0x54,0x89,0x15,0x39,0x00,0xD1,0x96,0x92,0x12,
0x09,0x10,0x25,0xC5,0x06,0x16,0x23,0xC9,0x10,0x6E,0x49,0x81,0x16,0x2E,0x48,0x88,
0x43,0xAF,0xC8,0x22,0x1F,0x20,0x85,0xE4,0x12,0x14,0x22,0xE2,0x40,0x88,0x94,0x14,
0x88,0x00,0xA4,0x20,0xCD,0x17,0x04,0xAF,0xC1,0x01,0x71,0x61,0x45,0x4B,0x0A,0x44,
0x08,0x52,0x50,0x12,0x8B,0x82,0x57,0xE0,0x8F,0x38,0x88,0x62,0x65,0x45,0x22,0x02,
0x29,0x18,0x2A,0x45,0xC1,0x2B,0xF0,0x43,0x9C,0x54,0x71,0x72,0xE2,0x91,0x03,0x14,
0x9C,0x0C,0x22,0xE0,0x95,0xF8,0x22,0xCE,0x26,0x04,0x85,0x49,0x48,0x80,0x4A,0x41,
0x0E,0xE1,0x70,0x4A,0xFC,0x10,0x67,0x17,0x12,0x52,0xB4,0xA4,0x40,0xA5,0x24,0x80,
0xB0,0xB8,0x25,0x7E,0x08,0xD3,0x88,0x45,0x25,0x56,0x52,0x20,0x32,0x91,0x42,0x68,
0x5C,0x12,0xBF,0x04,0x29,0xC5,0x26,0x96,0xAF,0x29,0x10,0x39,0x49,0xA0,0xA4,0x2E,
0x09,0x5F,0x82,0x24,0xD2,0x32,0x34,0xD4,0x2C,0x02,0x55,0x48,0x80,0xA8,0x54,0x78,
0xCA,0x91,0x02,0x54,0x86,0x1B,0x84,0x54,0x88,0x02,0x85,0xC3,0xAA,0x44,0x1D,0x47,
0x41,0x1B,0x57,0x42,0xC0,0x3A,0x82,0x1B,0x42,0xA0,0x5A,0x82,0x13,0x50,0x40,0x6A,
0x08,0x05,0x02,0x69,0x59,0x5A,0x7A,0x14,0x96,0xA9,0x08,0x7D,0x1C,0x82,0x2D,0x3D,
0x1C,0x69,0x39,0x3A,0x06,0x16,0x86,0x2A,0xA5,0x11,0x43,0x0B,0x40,0xE8,0x63,0x4B,
0xCB,0xD3,0x30,0xAC,0xD1,0x4D,0x22,0x02,0x61,0x50,0x63,0x48,0x81,0x1A,0x4B,0x03,
0x42,0x2A,0x50,0x97,0x30,0xAC,0x0E,0x8A,0x34,0x82,0x83,0x0B,0x0B,0xC5,0x15,0x56,
0x88,0xA5,0x85,0xE0,0x74,0x11,0xA5,0x15,0x19,0x78,0x51,0x48,0x9E,0x91,0x00,0xF0,
0xA8,0x3B,0xA4,0x40,0xDD,0x25,0x8A,0xE9,0x10,0x17,0x0B,0x21,0x19,0xD2,0x20,0x4E,
0x91,0xC2,0xE3,0x02,0x3A,0x44,0x01,0xC2,0xC8,0xF6,0x91,0x03,0xB4,0x96,0x2D,0xA4,
0x40,0x6C,0x2C,0x8D,0x69,0x10,0x2B,0x49,0xE0,0xE0,0x45,0x5A,0x12,0x91,0x14,0x40,
0x8C,0x10,0xE1,0x15,0x03,0x0C,0x10,0xA1,0x82,0x04,0x30,0x43,0x04,0x59,0x08,0x30,
0x42,0x06,0x08,0x00,0xC1,0x0F,0xE1,0x64,0x3F,0x41,0x0B,0xE8,0x20,0x7D,0x04,0x37,
0x85,0x90,0xB4,0x61,0xA4,0x94,0x99,0x44,0x55,0x72,0x84,0x61,0xA2,0x76,0x19,0x34,
0xA2,0x21,0xA5,0x95,0x98,0xC4,0x5D,0x32,0x84,0x11,0x62,0x71,0x04,0x34,0x62,0x41,
0xA4,0x54,0x59,0xC4,0x53,0x52,0x84,0x51,0xE2,0x75,0x15,0xD4,0xE2,0x01,0xA5,0x55,
0x58,0x24,0x5B,0x12,0xB8,0x31,0x12,0x73,0x0C,0xD4,0x12,0x7E,0xA4,0xD4,0xD9,0x24,
0x57,0x62,0xB8,0x71,0x92,0x77,0x1D,0x54,0x92,0x3E,0xA4,0x35,0xD8,0xA4,0x78,0x65,
0x12,0x9A,0x52,0xE8,0x88,0x8A,0x9D,0xA0,0x00,0x00,0x00,0x00,0x2F,0xF0,0x00,0x00,
0x0A,0x9C,0x8B,0xD4,0xA6,0x87,0x74,0x8E,0x8A,0xA6,0x53,0x48,0x7A,0x94,0xC6,0xEA,
0x4B,0x53,0x86,0x47,0xC1,0x55,0x29,0xA4,0x5D,0x4B,0x69,0x76,0xC8,0xA8,0x16,0x64,
0x41,0x33,0x26,0x08,0xAB,0x00,0x97,0x25,0x87,0x27,0x08,0x25,0x5B,0x44,0xEA,0x47,
0x5B,0xBE,0x45,0xF2,0x07,0x99,0x10,0x6C,0xD8,0x24,0x05,0x3A,0x49,0xCA,0x85,0x17,
0xC1,0xD0,0x3A,0x95,0xD1,0xE6,0x59,0x30,0x52,0xC8,0x80,0x94,0x50,0xC0,0xC5,0x91,
0x02,0x2C,0x98,0xAC,0x0A,0x0A,0xD9,0x07,0x29,0xCA,0x2A,0x56,0xAC,0x10,0x55,0x82,
0x12,0xA2,0x84,0x7C,0x3B,0x52,0x7A,0xBC,0xEB,0x26,0x0B,0x59,0x10,0x1A,0x8B,0x10,
0x18,0xB6,0x0D,0x03,0x6C,0x8F,0x53,0xB4,0xD8,0xAC,0xD8,0x20,0x9B,0x04,0x23,0x45,
0x88,0xF8,0x36,0xA5,0xF4,0xF8,0xB6,0x4E,0x56,0x03,0x2B,0x4E,0x30,0xC2,0xAF,0x28
};

void init_Library_dict()
{
  ATermList afuns, terms;

  _Library_dict = ATreadFromBinaryString(_Library_dict_baf, _Library_dict_LEN);

  ATprotect(&_Library_dict);

  afuns = (ATermList)ATelementAt((ATermList)_Library_dict, 0);

  CO_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun48 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun37 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun47 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun42 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun43 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun54 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun38 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun52 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun40 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun39 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun50 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun44 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun51 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun41 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun53 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun55 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun49 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun45 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  CO_afun46 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_Library_dict, 1);

  CO_patternOptLayoutPresent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternOptLayoutAbsent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternStartBoolean = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternStartStrCon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternStartNormal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternStartEscaped = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternStartBoolCon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternStartMeasure = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternStartWriteResult = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternStartBytesResult = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternStartParseResult = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternWriteResultFailure = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternWriteResultSuccess = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternBytesResultFailure = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternBytesResultSuccess = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternParseResultFailure = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternParseResultSuccess = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternMeasureEqual = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternMeasureGreater = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternMeasureLess = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternBoolConFalse = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternBoolConTrue = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternStrConDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternEscapedOctal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternEscapedSpecialCharacter = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternNormalDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternBooleanBracket = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternBooleanNot = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternBooleanAnd = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternBooleanOr = ATgetFirst(terms);
  terms = ATgetNext(terms);
  CO_patternBooleanConstant = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
