#include "ParsedErrors_dict.h"

AFun PME_afun39;
AFun PME_afun17;
AFun PME_afun22;
AFun PME_afun3;
AFun PME_afun9;
AFun PME_afun34;
AFun PME_afun19;
AFun PME_afun26;
AFun PME_afun37;
AFun PME_afun2;
AFun PME_afun12;
AFun PME_afun15;
AFun PME_afun25;
AFun PME_afun18;
AFun PME_afun20;
AFun PME_afun31;
AFun PME_afun8;
AFun PME_afun28;
AFun PME_afun21;
AFun PME_afun32;
AFun PME_afun0;
AFun PME_afun11;
AFun PME_afun5;
AFun PME_afun27;
AFun PME_afun33;
AFun PME_afun38;
AFun PME_afun16;
AFun PME_afun10;
AFun PME_afun13;
AFun PME_afun4;
AFun PME_afun14;
AFun PME_afun23;
AFun PME_afun30;
AFun PME_afun7;
AFun PME_afun36;
AFun PME_afun24;
AFun PME_afun35;
AFun PME_afun29;
AFun PME_afun1;
AFun PME_afun6;

ATerm PME_patternStartFeedback = NULL;
ATerm PME_patternStartSubject = NULL;
ATerm PME_patternStartLocation = NULL;
ATerm PME_patternStartArea = NULL;
ATerm PME_patternOptLayoutPresent = NULL;
ATerm PME_patternOptLayoutAbsent = NULL;
ATerm PME_patternStringString = NULL;
ATerm PME_patternNatConString = NULL;
ATerm PME_patternAreaNoArea = NULL;
ATerm PME_patternAreaArea = NULL;
ATerm PME_patternLocationLocation = NULL;
ATerm PME_patternSubjectUnlocatable = NULL;
ATerm PME_patternSubjectLocatable = NULL;
ATerm PME_patternSubjectListMany = NULL;
ATerm PME_patternSubjectListSingle = NULL;
ATerm PME_patternSubjectListEmpty = NULL;
ATerm PME_patternFeedbackFatalError = NULL;
ATerm PME_patternFeedbackError = NULL;
ATerm PME_patternFeedbackWarning = NULL;
ATerm PME_patternFeedbackInfo = NULL;

/*
 * PME_afun39 = "<START>"
 * PME_afun17 = attrs(x)
 * PME_afun22 = "error"
 * PME_afun3 = ")"
 * PME_afun9 = sort(x)
 * PME_afun34 = no-attrs
 * PME_afun19 = cons(x)
 * PME_afun26 = "locatable"
 * PME_afun37 = range(x,x)
 * PME_afun2 = lit(x)
 * PME_afun12 = "["
 * PME_afun15 = "info"
 * PME_afun25 = "subject"
 * PME_afun18 = term(x)
 * PME_afun20 = list(x)
 * PME_afun31 = "area"
 * PME_afun8 = iter-star-sep(x,x)
 * PME_afun28 = "Area"
 * PME_afun21 = "warning"
 * PME_afun32 = "no-area"
 * PME_afun0 = appl(x,x)
 * PME_afun11 = ","
 * PME_afun5 = opt(x)
 * PME_afun27 = "unlocatable"
 * PME_afun33 = lex(x)
 * PME_afun38 = parsetree(x,x)
 * PME_afun16 = "Feedback"
 * PME_afun10 = "Subject"
 * PME_afun13 = "String"
 * PME_afun4 = cf(x)
 * PME_afun14 = "("
 * PME_afun23 = "fatal-error"
 * PME_afun30 = "NatCon"
 * PME_afun7 = "]"
 * PME_afun36 = char-class(x)
 * PME_afun24 = "Location"
 * PME_afun35 = iter-star(x)
 * PME_afun29 = "location"
 * PME_afun1 = prod(x,x,x)
 * PME_afun6 = layout
 *
 * PME_patternStartFeedback = parsetree(appl(prod([cf(opt(layout)),cf(sort("Feedback")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PME_patternStartSubject = parsetree(appl(prod([cf(opt(layout)),cf(sort("Subject")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PME_patternStartLocation = parsetree(appl(prod([cf(opt(layout)),cf(sort("Location")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PME_patternStartArea = parsetree(appl(prod([cf(opt(layout)),cf(sort("Area")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PME_patternOptLayoutPresent = appl(prod([cf(layout)],cf(opt(layout)),no-attrs),[<list>])
 * PME_patternOptLayoutAbsent = appl(prod([],cf(opt(layout)),no-attrs),[])
 * PME_patternStringString = appl(prod([lex(sort("String"))],cf(sort("String")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * PME_patternNatConString = appl(prod([lex(sort("NatCon"))],cf(sort("NatCon")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * PME_patternAreaNoArea = appl(prod([lit("no-area")],cf(sort("Area")),attrs([term(cons("no-area"))])),[lit("no-area")])
 * PME_patternAreaArea = appl(prod([lit("area"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(")")],cf(sort("Area")),attrs([term(cons("area"))])),[lit("area"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(")")])
 * PME_patternLocationLocation = appl(prod([lit("location"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("Area")),cf(opt(layout)),lit(")")],cf(sort("Location")),attrs([term(cons("location"))])),[lit("location"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(")")])
 * PME_patternSubjectUnlocatable = appl(prod([lit("subject"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(")")],cf(sort("Subject")),attrs([term(cons("unlocatable"))])),[lit("subject"),<term>,lit("("),<term>,<term>,<term>,lit(")")])
 * PME_patternSubjectLocatable = appl(prod([lit("subject"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("Location")),cf(opt(layout)),lit(")")],cf(sort("Subject")),attrs([term(cons("locatable"))])),[lit("subject"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(")")])
 * PME_patternSubjectListMany = [<term>,<term>,lit(","),<term>,<list>]
 * PME_patternSubjectListSingle = [<term>]
 * PME_patternSubjectListEmpty = []
 * PME_patternFeedbackFatalError = appl(prod([lit("fatal-error"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Feedback")),attrs([term(cons("fatal-error"))])),[lit("fatal-error"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PME_patternFeedbackError = appl(prod([lit("error"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Feedback")),attrs([term(cons("error"))])),[lit("error"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PME_patternFeedbackWarning = appl(prod([lit("warning"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Feedback")),attrs([term(cons("warning"))])),[lit("warning"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PME_patternFeedbackInfo = appl(prod([lit("info"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("String")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Feedback")),attrs([term(cons("info"))])),[lit("info"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 *
 */

static ATerm _ParsedErrors_dict = NULL;

#define _ParsedErrors_dict_LEN 1294

static char _ParsedErrors_dict_baf[_ParsedErrors_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x30,0x81,0x84,0x05,0x3C,0x69,0x6E,0x74,0x3E,0x00,0x00,
0x02,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x03,0x03,0x05,0x04,0x06,0x05,0x5B,0x5F,0x2C,
0x5F,0x5D,0x02,0x00,0x80,0xE9,0x2B,0x02,0x03,0x01,0x07,0x09,0x0A,0x0B,0x0C,0x0D,
0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,
0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,
0x2E,0x2F,0x02,0x02,0x03,0x02,0x5B,0x5D,0x00,0x00,0x01,0x03,0x69,0x6E,0x74,0x00,
0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,0x00,
0x00,0x01,0x07,0x3C,0x53,0x54,0x41,0x52,0x54,0x3E,0x00,0x01,0x01,0x01,0x78,0x00,
0x00,0x01,0x05,0x61,0x74,0x74,0x72,0x73,0x01,0x00,0x0A,0x02,0x02,0x08,0x05,0x65,
0x72,0x72,0x6F,0x72,0x00,0x01,0x01,0x01,0x29,0x00,0x01,0x01,0x04,0x73,0x6F,0x72,
0x74,0x01,0x00,0x08,0x08,0x28,0x24,0x19,0x2B,0x23,0x07,0x22,0x08,0x08,0x6E,0x6F,
0x2D,0x61,0x74,0x74,0x72,0x73,0x00,0x00,0x01,0x04,0x63,0x6F,0x6E,0x73,0x01,0x00,
0x0A,0x0A,0x13,0x1A,0x0A,0x27,0x0F,0x1F,0x2D,0x17,0x1B,0x08,0x09,0x6C,0x6F,0x63,
0x61,0x74,0x61,0x62,0x6C,0x65,0x00,0x01,0x01,0x05,0x72,0x61,0x6E,0x67,0x65,0x02,
0x00,0x02,0x02,0x00,0x08,0x02,0x00,0x08,0x03,0x6C,0x69,0x74,0x01,0x00,0x0E,0x0E,
0x13,0x1A,0x0A,0x29,0x12,0x27,0x14,0x2D,0x0B,0x1D,0x26,0x17,0x1B,0x08,0x01,0x5B,
0x00,0x01,0x01,0x04,0x69,0x6E,0x66,0x6F,0x00,0x01,0x01,0x07,0x73,0x75,0x62,0x6A,
0x65,0x63,0x74,0x00,0x01,0x01,0x04,0x74,0x65,0x72,0x6D,0x01,0x00,0x0A,0x02,0x0E,
0x08,0x04,0x6C,0x69,0x73,0x74,0x01,0x00,0x03,0x03,0x25,0x2C,0x08,0x04,0x61,0x72,
0x65,0x61,0x00,0x01,0x01,0x0D,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x2D,
0x73,0x65,0x70,0x02,0x00,0x02,0x02,0x0C,0x08,0x02,0x11,0x08,0x04,0x41,0x72,0x65,
0x61,0x00,0x01,0x01,0x07,0x77,0x61,0x72,0x6E,0x69,0x6E,0x67,0x00,0x01,0x01,0x07,
0x6E,0x6F,0x2D,0x61,0x72,0x65,0x61,0x00,0x01,0x01,0x04,0x61,0x70,0x70,0x6C,0x02,
0x00,0x14,0x03,0x16,0x2E,0x08,0x04,0x01,0x03,0x02,0x08,0x01,0x2C,0x00,0x01,0x01,
0x03,0x6F,0x70,0x74,0x01,0x00,0x02,0x02,0x2F,0x08,0x0B,0x75,0x6E,0x6C,0x6F,0x63,
0x61,0x74,0x61,0x62,0x6C,0x65,0x00,0x01,0x01,0x03,0x6C,0x65,0x78,0x01,0x00,0x03,
0x02,0x0C,0x08,0x09,0x70,0x61,0x72,0x73,0x65,0x74,0x72,0x65,0x65,0x02,0x00,0x05,
0x02,0x1C,0x08,0x02,0x01,0x08,0x08,0x46,0x65,0x65,0x64,0x62,0x61,0x63,0x6B,0x00,
0x01,0x01,0x07,0x53,0x75,0x62,0x6A,0x65,0x63,0x74,0x00,0x01,0x01,0x06,0x53,0x74,
0x72,0x69,0x6E,0x67,0x00,0x01,0x01,0x02,0x63,0x66,0x01,0x00,0x0A,0x05,0x18,0x2F,
0x0C,0x1E,0x08,0x01,0x28,0x00,0x01,0x01,0x0B,0x66,0x61,0x74,0x61,0x6C,0x2D,0x65,
0x72,0x72,0x6F,0x72,0x00,0x01,0x01,0x06,0x4E,0x61,0x74,0x43,0x6F,0x6E,0x00,0x01,
0x01,0x01,0x5D,0x00,0x01,0x01,0x0A,0x63,0x68,0x61,0x72,0x2D,0x63,0x6C,0x61,0x73,
0x73,0x01,0x00,0x02,0x02,0x02,0x08,0x08,0x4C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,
0x00,0x01,0x01,0x09,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x01,0x00,0x02,
0x02,0x2A,0x08,0x08,0x6C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x00,0x01,0x01,0x04,
0x70,0x72,0x6F,0x64,0x03,0x00,0x12,0x03,0x03,0x02,0x08,0x03,0x25,0x0C,0x08,0x03,
0x09,0x0D,0x08,0x06,0x6C,0x61,0x79,0x6F,0x75,0x74,0x00,0x00,0x01,0x02,0x03,0x93,
0x01,0x90,0x80,0x8A,0x4A,0x02,0x46,0x0C,0x4E,0x03,0x84,0x41,0x08,0x49,0x02,0x40,
0x45,0x0F,0x8D,0x0A,0x1E,0x0C,0x0B,0x2E,0x2C,0x0E,0x1C,0x36,0x3C,0x16,0x02,0x08,
0x98,0x88,0x41,0x84,0x8E,0x8C,0x8A,0x1A,0x0A,0x2A,0x2A,0x0A,0x1A,0x32,0x3A,0x03,
0x84,0x81,0x88,0x89,0x88,0x08,0x58,0xF0,0xD8,0x87,0x03,0x85,0x16,0x17,0x06,0x0F,
0x1A,0x1F,0x0A,0x00,0x81,0x24,0x21,0x04,0x11,0x38,0x31,0x18,0x09,0x28,0x29,0x20,
0x81,0x93,0x03,0x92,0x10,0x05,0x20,0x25,0x02,0xA0,0x02,0xB1,0xCE,0x03,0x39,0xD0,
0x85,0x09,0x50,0x18,0xD0,0x4A,0x02,0x8A,0x18,0x14,0x06,0x29,0x2A,0x56,0x88,0x08,
0x68,0x80,0x6A,0x20,0x45,0x14,0xE7,0x21,0x12,0x2F,0x40,0x60,0x74,0x07,0x16,0x10,
0x29,0x24,0xAD,0x08,0x27,0x3B,0x18,0xB1,0x46,0x03,0x00,0x60,0x24,0x8B,0x01,0x49,
0x25,0x68,0x46,0x39,0xC4,0x24,0x4B,0x30,0x18,0x13,0x01,0xA5,0x48,0x0A,0x49,0x2B,
0x42,0x11,0xFA,0xA5,0x48,0xB0,0x16,0x91,0x12,0xAC,0x41,0x22,0x1F,0xA6,0x4C,0x08,
0xA0,0x0F,0xD0,0xAE,0x4D,0x9B,0x43,0x44,0x72,0x69,0x0E,0x75,0xC2,0xA2,0x3B,0x34,
0x80,0x00,0x00,0x00,0x00,0xBF,0xC0,0x00,0x00,0x25,0x59,0x1F,0x7D,0x4A,0x15,0x39,
0xB2,0x70,0x40,0xAE,0x90,0xE0,0xF7,0xD2,0xA9,0x4B,0x86,0x41,0xC5,0x10,0x6E,0x05,
0x04,0x0C,0x97,0x0B,0xBE,0xB5,0x2A,0x6A,0x31,0x34,0xAA,0x06,0x02,0xA3,0x31,0x4C,
0xA0,0x60,0x4A,0x04,0x48,0xA0,0x60,0x0A,0x30,0xA4,0xF2,0x06,0x07,0x20,0x44,0xB2,
0x06,0x03,0x23,0x08,0xD2,0x06,0x05,0x20,0x44,0x92,0x06,0x01,0x23,0x08,0xE2,0x06,
0x06,0x20,0x44,0xA2,0x06,0x02,0x23,0x08,0xC2,0x06,0x04,0x20,0x44,0x82,0x06,0x00,
0x23,0x08,0xFC,0x06,0x07,0xC0,0x44,0xBC,0x06,0x03,0xC3,0x28,0x62,0x84,0x3A,0x82,
0x41,0x3A,0x51,0xC6,0x20,0x1C,0x80,0x7B,0x19,0x83,0xB2,0x01,0x6C,0x80,0x1B,0x20,
0x1A,0xC6,0x10,0xAC,0x80,0x4B,0x20,0x02,0xC8,0x07,0x31,0x84,0x33,0x20,0x14,0xC8,
0x01,0x32,0x01,0x8C,0x61,0x08,0xC8,0x04,0x32,0x00,0x0C,0x80,0x7D,0x18,0x43,0xD2,
0x01,0x74,0x80,0x1D,0x20,0x1B,0x46,0x10,0xB4,0x80,0x4D,0x20,0x03,0x48,0x01,0xE0,
0x77,0xD1,0xAD,0x4B,0xC6,0x37,0x13,0xC0,0xC0,0x3C,0x66,0x1D,0xC0,0xC0,0xDC,0x0F,
0x15,0xC0,0xC0,0x5C,0x61,0x19,0xC0,0xC0,0x9C,0x0D,0x17,0x81,0x18,0x6F,0x05,0x86,
0x34,0x9F,0x8C,0x62,0xF9,0x00,0x3E,0x33,0x07,0xA3,0x6F,0xAB,0x46,0xB0,0x4C,0xE6,
0x10,0x41,0x82,0x04,0xCC,0x00,0x41,0x83,0xF8,0x1E,0x2F,0x0C,0x08,0x21,0x08,0x82,
0xA9,0x70,0x99,0xC3,0x0A,0x01,0x42,0x66,0x0B,0x42,0xDF,0x4E,0xAD,0x04,0x99,0xC7,
0x88,0x30,0x38,0x99,0x85,0x88,0x30,0x18,0x83,0xC6,0x88,0x30,0x28,0x98,0x44,0x88,
0x30,0x08,0x82,0x45,0xE1,0x85,0x11,0x21,0x51,0x45,0x24,0x93,0x38,0xBE,0x26,0xC0,
0x69,0x40,0x2A,0x50,0x02,0x93,0x08,0xC9,0x40,0x2B,0x01,0xB0,0x35,0x0E,0xB8,0x06,
0xBE,0x83,0x3A,0xF5,0x30,0x68,0x75,0x06,0x0B,0x53,0x30,0x35,0x06,0x0D,0x50,0x78,
0x55,0x06,0x09,0x53,0x08,0x15,0x06,0x0E,0x50,0x78,0x65,0x06,0x0A,0x53,0x08,0x25,
0x06,0x0C,0x50,0x78,0x45,0x06,0x08,0x53,0x08,0x05,0x06,0x0F,0x90,0x78,0x79,0x06,
0x0B,0x93,0x08,0x39,0x06,0x0D,0x93,0x24,0x85,0x90,0x60,0x99,0x06,0x44,0x60,0x40,
0xC8,0x30,0x74,0x98,0xB8,0x5E,0x08,0x30,0x1A,0x13,0x0D,0x92,0x93,0x30,0x41,0x34,
0x03,0x8C,0xCC,0x18,0xD0,0x0A,0x34,0x00,0x8D,0x00,0xC3,0x30,0x84,0x34,0x02,0x0D,
0x00,0x03,0x40,0x3F,0x4C,0x21,0xF5,0x00,0xBD,0x40,0x0F,0x50,0x0D,0xD3,0x08,0x5D,
0x40,0x27,0x50,0x01,0xD4,0x03,0xB4,0xC2,0x1B,0x50,0x0A,0xD3,0x24,0x2D,0x40,0x33,
0x7A,0xF0,0x92,0x01,0x35,0x00,0x8D,0x31,0x41,0xA2,0xAF,0xA8,0xDE,0x94,0xCC,0xD4,
0x1D,0x44,0x38,0xD3,0x0B,0x8E,0x49,0x19,0x99,0xA0,0x98,0x57,0xD2,0x60,0xD6,0x66,
0x1C,0x0E,0xA2,0x02,0x39,0x84,0x20,0xC4,0xBC,0xCC,0x30,0x4C,0xCB,0xEB,0x34,0x60,
0xB3,0x2C,0x07,0x51,0x09,0x22,0xC2,0x92,0x42,0x49,0x66,0x58,0x27,0x40
};

void init_ParsedErrors_dict()
{
  ATermList afuns, terms;

  _ParsedErrors_dict = ATreadFromBinaryString(_ParsedErrors_dict_baf, _ParsedErrors_dict_LEN);

  ATprotect(&_ParsedErrors_dict);

  afuns = (ATermList)ATelementAt((ATermList)_ParsedErrors_dict, 0);

  PME_afun39 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun37 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun38 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PME_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_ParsedErrors_dict, 1);

  PME_patternStartFeedback = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternStartSubject = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternStartLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternStartArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternOptLayoutPresent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternOptLayoutAbsent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternStringString = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternNatConString = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternAreaNoArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternAreaArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternLocationLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternSubjectUnlocatable = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternSubjectLocatable = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternSubjectListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternSubjectListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternSubjectListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternFeedbackFatalError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternFeedbackError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternFeedbackWarning = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PME_patternFeedbackInfo = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
