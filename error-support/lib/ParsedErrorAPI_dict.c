#include "ParsedErrorAPI_dict.h"

AFun PERR_afun39;
AFun PERR_afun17;
AFun PERR_afun22;
AFun PERR_afun3;
AFun PERR_afun9;
AFun PERR_afun34;
AFun PERR_afun19;
AFun PERR_afun26;
AFun PERR_afun37;
AFun PERR_afun2;
AFun PERR_afun41;
AFun PERR_afun12;
AFun PERR_afun42;
AFun PERR_afun15;
AFun PERR_afun25;
AFun PERR_afun18;
AFun PERR_afun20;
AFun PERR_afun31;
AFun PERR_afun8;
AFun PERR_afun28;
AFun PERR_afun21;
AFun PERR_afun32;
AFun PERR_afun0;
AFun PERR_afun11;
AFun PERR_afun5;
AFun PERR_afun27;
AFun PERR_afun33;
AFun PERR_afun38;
AFun PERR_afun16;
AFun PERR_afun10;
AFun PERR_afun13;
AFun PERR_afun4;
AFun PERR_afun14;
AFun PERR_afun40;
AFun PERR_afun23;
AFun PERR_afun30;
AFun PERR_afun7;
AFun PERR_afun36;
AFun PERR_afun24;
AFun PERR_afun35;
AFun PERR_afun29;
AFun PERR_afun1;
AFun PERR_afun6;

ATerm PERR_patternOptLayoutPresent = NULL;
ATerm PERR_patternOptLayoutAbsent = NULL;
ATerm PERR_patternStartStrCon = NULL;
ATerm PERR_patternStartNormal = NULL;
ATerm PERR_patternStartEscaped = NULL;
ATerm PERR_patternStartNatCon = NULL;
ATerm PERR_patternStartSummary = NULL;
ATerm PERR_patternStartFeedback = NULL;
ATerm PERR_patternStartSubject = NULL;
ATerm PERR_patternStartLocation = NULL;
ATerm PERR_patternStartArea = NULL;
ATerm PERR_patternAreaNoArea = NULL;
ATerm PERR_patternAreaArea = NULL;
ATerm PERR_patternLocationNoLocation = NULL;
ATerm PERR_patternLocationLocation = NULL;
ATerm PERR_patternSubjectSubject = NULL;
ATerm PERR_patternSubjectListMany = NULL;
ATerm PERR_patternSubjectListSingle = NULL;
ATerm PERR_patternSubjectListEmpty = NULL;
ATerm PERR_patternFeedbackFatalError = NULL;
ATerm PERR_patternFeedbackError = NULL;
ATerm PERR_patternFeedbackWarning = NULL;
ATerm PERR_patternFeedbackInfo = NULL;
ATerm PERR_patternFeedbackListMany = NULL;
ATerm PERR_patternFeedbackListSingle = NULL;
ATerm PERR_patternFeedbackListEmpty = NULL;
ATerm PERR_patternSummaryFeedback = NULL;
ATerm PERR_patternNatConDefault = NULL;
ATerm PERR_patternStrConDefault = NULL;
ATerm PERR_patternEscapedOctal = NULL;
ATerm PERR_patternEscapedSpecialCharacter = NULL;
ATerm PERR_patternNormalDefault = NULL;

/*
 * PERR_afun39 = "area"
 * PERR_afun17 = layout
 * PERR_afun22 = "["
 * PERR_afun3 = sort(x)
 * PERR_afun9 = char-class(x)
 * PERR_afun34 = "Location"
 * PERR_afun19 = iter-star-sep(x,x)
 * PERR_afun26 = attrs(x)
 * PERR_afun37 = "location"
 * PERR_afun2 = lex(x)
 * PERR_afun41 = parsetree(x,x)
 * PERR_afun12 = "StrCon"
 * PERR_afun42 = "<START>"
 * PERR_afun15 = ")"
 * PERR_afun25 = "Summary"
 * PERR_afun18 = "]"
 * PERR_afun20 = "Feedback"
 * PERR_afun31 = "warning"
 * PERR_afun8 = iter-star(x)
 * PERR_afun28 = cons(x)
 * PERR_afun21 = ","
 * PERR_afun32 = "error"
 * PERR_afun0 = appl(x,x)
 * PERR_afun11 = "Escaped"
 * PERR_afun5 = cf(x)
 * PERR_afun27 = term(x)
 * PERR_afun33 = "fatal-error"
 * PERR_afun38 = "no-location"
 * PERR_afun16 = opt(x)
 * PERR_afun10 = range(x,x)
 * PERR_afun13 = "NatCon"
 * PERR_afun4 = "Normal"
 * PERR_afun14 = lit(x)
 * PERR_afun40 = "no-area"
 * PERR_afun23 = "("
 * PERR_afun30 = "info"
 * PERR_afun7 = list(x)
 * PERR_afun36 = "Area"
 * PERR_afun24 = "feedback"
 * PERR_afun35 = "subject"
 * PERR_afun29 = "Subject"
 * PERR_afun1 = prod(x,x,x)
 * PERR_afun6 = no-attrs
 *
 * PERR_patternOptLayoutPresent = appl(prod([cf(layout)],cf(opt(layout)),no-attrs),[<list>])
 * PERR_patternOptLayoutAbsent = appl(prod([],cf(opt(layout)),no-attrs),[])
 * PERR_patternStartStrCon = parsetree(appl(prod([cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartNormal = parsetree(appl(prod([cf(opt(layout)),cf(sort("Normal")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartEscaped = parsetree(appl(prod([cf(opt(layout)),cf(sort("Escaped")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartNatCon = parsetree(appl(prod([cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartSummary = parsetree(appl(prod([cf(opt(layout)),cf(sort("Summary")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartFeedback = parsetree(appl(prod([cf(opt(layout)),cf(sort("Feedback")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartSubject = parsetree(appl(prod([cf(opt(layout)),cf(sort("Subject")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartLocation = parsetree(appl(prod([cf(opt(layout)),cf(sort("Location")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartArea = parsetree(appl(prod([cf(opt(layout)),cf(sort("Area")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternAreaNoArea = appl(prod([lit("no-area")],cf(sort("Area")),attrs([term(cons("no-area"))])),[lit("no-area")])
 * PERR_patternAreaArea = appl(prod([lit("area"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(")")],cf(sort("Area")),attrs([term(cons("area"))])),[lit("area"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(")")])
 * PERR_patternLocationNoLocation = appl(prod([lit("no-location")],cf(sort("Location")),attrs([term(cons("no-location"))])),[lit("no-location")])
 * PERR_patternLocationLocation = appl(prod([lit("location"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("Area")),cf(opt(layout)),lit(")")],cf(sort("Location")),attrs([term(cons("location"))])),[lit("location"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(")")])
 * PERR_patternSubjectSubject = appl(prod([lit("subject"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("Location")),cf(opt(layout)),lit(")")],cf(sort("Subject")),attrs([term(cons("subject"))])),[lit("subject"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(")")])
 * PERR_patternSubjectListMany = [<term>,<term>,lit(","),<term>,<list>]
 * PERR_patternSubjectListSingle = [<term>]
 * PERR_patternSubjectListEmpty = []
 * PERR_patternFeedbackFatalError = appl(prod([lit("fatal-error"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Feedback")),attrs([term(cons("fatal-error"))])),[lit("fatal-error"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PERR_patternFeedbackError = appl(prod([lit("error"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Feedback")),attrs([term(cons("error"))])),[lit("error"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PERR_patternFeedbackWarning = appl(prod([lit("warning"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Feedback")),attrs([term(cons("warning"))])),[lit("warning"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PERR_patternFeedbackInfo = appl(prod([lit("info"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Feedback")),attrs([term(cons("info"))])),[lit("info"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PERR_patternFeedbackListMany = [<term>,<term>,lit(","),<term>,<list>]
 * PERR_patternFeedbackListSingle = [<term>]
 * PERR_patternFeedbackListEmpty = []
 * PERR_patternSummaryFeedback = appl(prod([lit("feedback"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Feedback"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Summary")),attrs([term(cons("feedback"))])),[lit("feedback"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Feedback"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PERR_patternNatConDefault = appl(prod([lex(sort("NatCon"))],cf(sort("NatCon")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * PERR_patternStrConDefault = appl(prod([lex(sort("StrCon"))],cf(sort("StrCon")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * PERR_patternEscapedOctal = appl(prod([lex(sort("Escaped"))],cf(sort("Escaped")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * PERR_patternEscapedSpecialCharacter = appl(prod([lex(sort("Escaped"))],cf(sort("Escaped")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * PERR_patternNormalDefault = appl(prod([lex(sort("Normal"))],cf(sort("Normal")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 *
 */

static ATerm _ParsedErrorAPI_dict = NULL;

#define _ParsedErrorAPI_dict_LEN 1501

static char _ParsedErrorAPI_dict_baf[_ParsedErrorAPI_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x33,0x81,0xC8,0x05,0x3C,0x69,0x6E,0x74,0x3E,0x00,0x00,
0x02,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x03,0x03,0x04,0x06,0x05,0x05,0x5B,0x5F,0x2C,
0x5F,0x5D,0x02,0x00,0x81,0x04,0x2E,0x02,0x03,0x01,0x07,0x08,0x09,0x0B,0x0C,0x0D,
0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,
0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,
0x2E,0x2F,0x30,0x31,0x32,0x02,0x02,0x03,0x02,0x5B,0x5D,0x00,0x00,0x01,0x03,0x69,
0x6E,0x74,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,0x65,
0x72,0x6D,0x00,0x00,0x01,0x04,0x61,0x72,0x65,0x61,0x00,0x01,0x01,0x06,0x6C,0x61,
0x79,0x6F,0x75,0x74,0x00,0x00,0x01,0x01,0x5B,0x00,0x01,0x01,0x01,0x78,0x00,0x00,
0x01,0x04,0x73,0x6F,0x72,0x74,0x01,0x00,0x0B,0x0B,0x2D,0x0D,0x30,0x18,0x16,0x26,
0x1F,0x27,0x14,0x13,0x0A,0x0A,0x63,0x68,0x61,0x72,0x2D,0x63,0x6C,0x61,0x73,0x73,
0x01,0x00,0x02,0x02,0x02,0x0A,0x08,0x4C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x00,
0x01,0x01,0x0D,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x2D,0x73,0x65,0x70,
0x02,0x00,0x03,0x02,0x0B,0x0A,0x02,0x28,0x0A,0x05,0x61,0x74,0x74,0x72,0x73,0x01,
0x00,0x0B,0x02,0x02,0x0A,0x08,0x6C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x00,0x01,
0x01,0x03,0x6C,0x65,0x78,0x01,0x00,0x05,0x02,0x0B,0x0A,0x09,0x70,0x61,0x72,0x73,
0x65,0x74,0x72,0x65,0x65,0x02,0x00,0x0A,0x02,0x1E,0x0A,0x02,0x01,0x0A,0x06,0x53,
0x74,0x72,0x43,0x6F,0x6E,0x00,0x01,0x01,0x07,0x3C,0x53,0x54,0x41,0x52,0x54,0x3E,
0x00,0x01,0x01,0x01,0x29,0x00,0x01,0x01,0x07,0x53,0x75,0x6D,0x6D,0x61,0x72,0x79,
0x00,0x01,0x01,0x01,0x5D,0x00,0x01,0x01,0x08,0x46,0x65,0x65,0x64,0x62,0x61,0x63,
0x6B,0x00,0x01,0x01,0x07,0x77,0x61,0x72,0x6E,0x69,0x6E,0x67,0x00,0x01,0x01,0x09,
0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x01,0x00,0x02,0x02,0x0C,0x0A,0x04,
0x63,0x6F,0x6E,0x73,0x01,0x00,0x0B,0x0B,0x2E,0x2B,0x19,0x1D,0x22,0x2F,0x10,0x23,
0x07,0x29,0x0A,0x01,0x2C,0x00,0x01,0x01,0x05,0x65,0x72,0x72,0x6F,0x72,0x00,0x01,
0x01,0x04,0x61,0x70,0x70,0x6C,0x02,0x00,0x1D,0x03,0x2C,0x31,0x0A,0x04,0x01,0x03,
0x02,0x0A,0x07,0x45,0x73,0x63,0x61,0x70,0x65,0x64,0x00,0x01,0x01,0x02,0x63,0x66,
0x01,0x00,0x0E,0x05,0x0E,0x0B,0x24,0x08,0x0A,0x04,0x74,0x65,0x72,0x6D,0x01,0x00,
0x0B,0x02,0x1B,0x0A,0x0B,0x66,0x61,0x74,0x61,0x6C,0x2D,0x65,0x72,0x72,0x6F,0x72,
0x00,0x01,0x01,0x0B,0x6E,0x6F,0x2D,0x6C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x00,
0x01,0x01,0x03,0x6F,0x70,0x74,0x01,0x00,0x02,0x02,0x08,0x0A,0x05,0x72,0x61,0x6E,
0x67,0x65,0x02,0x00,0x02,0x02,0x00,0x0A,0x02,0x00,0x0A,0x06,0x4E,0x61,0x74,0x43,
0x6F,0x6E,0x00,0x01,0x01,0x06,0x4E,0x6F,0x72,0x6D,0x61,0x6C,0x00,0x01,0x01,0x03,
0x6C,0x69,0x74,0x01,0x00,0x10,0x10,0x2E,0x2B,0x19,0x1D,0x17,0x09,0x22,0x2F,0x10,
0x23,0x15,0x1C,0x2A,0x07,0x29,0x0A,0x07,0x6E,0x6F,0x2D,0x61,0x72,0x65,0x61,0x00,
0x01,0x01,0x01,0x28,0x00,0x01,0x01,0x04,0x69,0x6E,0x66,0x6F,0x00,0x01,0x01,0x04,
0x6C,0x69,0x73,0x74,0x01,0x00,0x04,0x03,0x1A,0x20,0x0A,0x04,0x41,0x72,0x65,0x61,
0x00,0x01,0x01,0x08,0x66,0x65,0x65,0x64,0x62,0x61,0x63,0x6B,0x00,0x01,0x01,0x07,
0x73,0x75,0x62,0x6A,0x65,0x63,0x74,0x00,0x01,0x01,0x07,0x53,0x75,0x62,0x6A,0x65,
0x63,0x74,0x00,0x01,0x01,0x04,0x70,0x72,0x6F,0x64,0x03,0x00,0x1A,0x03,0x03,0x02,
0x0A,0x03,0x0B,0x20,0x0A,0x03,0x0F,0x32,0x0A,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,
0x72,0x73,0x00,0x00,0x01,0x02,0x01,0x51,0x81,0x28,0x20,0x14,0x50,0x72,0x18,0x05,
0x19,0x1C,0x11,0x48,0x10,0x24,0x48,0x51,0x88,0x50,0x21,0x11,0xA1,0x08,0x30,0x40,
0x22,0xC0,0xA3,0xE0,0xE0,0xF0,0xF0,0xB8,0x04,0x1C,0x22,0x36,0x09,0x0B,0x0C,0x89,
0x81,0x40,0xC2,0xA2,0x3A,0x0D,0x02,0x8D,0x0E,0x8A,0x80,0xC1,0x42,0x60,0x38,0xC8,
0x2C,0x24,0x36,0x02,0x44,0x0E,0x08,0x08,0x5C,0x78,0x1E,0x1C,0x1F,0x11,0x60,0x04,
0xA0,0xC1,0x09,0xA0,0x44,0x50,0x62,0x0F,0x12,0x02,0x41,0x05,0x27,0x01,0x91,0x81,
0xC8,0x4A,0x00,0xA1,0x02,0x53,0x00,0xA8,0x80,0xD4,0x80,0x1A,0x05,0x40,0x05,0xB0,
0x81,0x02,0x03,0x34,0x28,0x5A,0x8D,0xA3,0x52,0x28,0x91,0xA1,0x01,0x80,0x0C,0xC8,
0x90,0x49,0x43,0xFD,0x64,0x18,0xB1,0x7A,0x36,0x41,0xD1,0xB6,0x48,0x92,0xD1,0xB2,
0x42,0x0C,0x93,0x08,0x51,0x18,0x42,0x03,0x08,0x50,0x83,0xFA,0xC4,0x09,0x12,0x2C,
0x6C,0x86,0x63,0x62,0x99,0xC5,0xA0,0x49,0x26,0x04,0xBF,0x59,0x85,0x2A,0x4D,0x8D,
0x90,0xAC,0x6D,0x50,0x98,0xB4,0x09,0x24,0xC0,0x87,0xEB,0x08,0x64,0xC8,0x71,0xB2,
0x1D,0x8D,0x9A,0x55,0x16,0x81,0x24,0x98,0x13,0x7D,0x65,0x1C,0xB9,0x2E,0x36,0x42,
0x71,0xB7,0x46,0x22,0xD0,0x24,0x93,0x02,0x2F,0xAC,0x60,0x50,0xA3,0xC6,0xC8,0x6E,
0x36,0x19,0xD8,0x5A,0x04,0x92,0x60,0x49,0xF5,0x9C,0x4A,0x94,0xF8,0xD9,0x0B,0xC6,
0xD3,0x05,0x0B,0x40,0x92,0x4C,0x08,0x3E,0xB0,0x45,0x4A,0x80,0x9B,0x21,0xF8,0xD9,
0x64,0xC1,0x68,0x12,0x49,0x81,0x3B,0xD6,0x49,0xAB,0x52,0x13,0x64,0x20,0x9B,0x6C,
0x50,0x2D,0x02,0x49,0x30,0x23,0x7A,0x63,0x46,0xB0,0x98,0xC1,0xD5,0xA4,0x04,0x43,
0xA0,0x89,0x96,0x10,0xAF,0x4D,0x6A,0xD7,0xD3,0x14,0x58,0x7A,0x6C,0x85,0xD3,0x1C,
0x18,0x3A,0x6C,0x86,0xD3,0x66,0x16,0x9B,0x21,0x34,0xC4,0x9A,0x06,0x9B,0x21,0xD4,
0xD9,0x86,0xA6,0xC8,0x55,0x31,0x20,0x54,0xD9,0x0C,0xA6,0xCC,0x25,0x36,0x42,0x29,
0x89,0x00,0xA6,0xC8,0x79,0x36,0x61,0xC9,0xB2,0x16,0x4C,0x48,0x19,0x36,0x43,0x49,
0xB3,0x0A,0x4D,0x90,0x92,0x62,0x40,0x49,0xB2,0x1C,0x4D,0x98,0x62,0x6C,0x85,0x13,
0x1A,0x2A,0xB4,0x40,0x18,0x72,0x08,0x32,0x5E,0x62,0x82,0x78,0x84,0x0F,0x31,0xC1,
0xDC,0x42,0x1B,0x88,0x45,0x71,0x08,0x2E,0x62,0x43,0x38,0x84,0x27,0x10,0x88,0xE2,
0x10,0x1C,0xC4,0x87,0xB1,0x08,0x76,0x21,0x16,0xC4,0x20,0xD9,0x89,0x0D,0x62,0x10,
0xAC,0x42,0x25,0x88,0x40,0xB3,0x12,0x1C,0xC4,0x21,0x98,0x84,0x53,0x10,0x82,0x66,
0x24,0x31,0x88,0x42,0x31,0x08,0x86,0x21,0x14,0x40,0xBD,0x33,0xA7,0x5B,0xCC,0x59,
0x2A,0x53,0x03,0xE1,0xD8,0x67,0x4B,0x78,0x67,0xA6,0xF5,0xEA,0x85,0x8F,0x04,0x10,
0xB6,0x43,0x05,0x8E,0x04,0x16,0xC8,0x40,0xB6,0xC0,0x05,0xB2,0x1F,0xCC,0x48,0x3F,
0x36,0x42,0xF9,0xB6,0x8C,0x49,0x42,0x18,0x47,0x10,0x4D,0x29,0x16,0x3C,0x04,0x48,
0x47,0x0B,0x1C,0x1C,0xC1,0x3D,0x30,0x60,0xC9,0x2C,0x45,0xC2,0x25,0xB2,0x01,0x2C,
0x70,0x78,0xB6,0x41,0xC5,0xB6,0x16,0x2D,0x90,0x31,0x62,0x43,0x45,0xB2,0x0A,0x2D,
0x94,0x62,0x52,0x51,0x92,0x3A,0x8A,0xA9,0x14,0xB1,0x10,0x22,0x23,0xC0,0x0C,0x90,
0x8E,0x92,0x10,0xD2,0xC4,0x85,0x49,0x08,0x34,0x01,0xE0,0x03,0x07,0xBA,0x01,0xDD,
0x32,0x68,0xD4,0xAC,0x64,0xC0,0x95,0xB2,0x18,0xAC,0x70,0x22,0xB6,0x42,0x15,0xB6,
0x00,0xAD,0x90,0xF9,0x62,0x41,0xE5,0xB2,0x17,0x2C,0x55,0x40,0xE5,0xB2,0x1B,0x2D,
0x8C,0x40,0x84,0x16,0x5B,0x21,0x32,0xC7,0x44,0x18,0x90,0x8C,0x32,0x8E,0x61,0x8A,
0x59,0xAC,0x64,0x26,0x90,0x88,0xD6,0x38,0x03,0x48,0x47,0xA9,0x08,0x75,0x21,0x16,
0xAC,0x48,0x1A,0x90,0x8D,0x56,0x2A,0x15,0x48,0x44,0xAA,0x68,0x92,0x31,0x02,0xA4,
0x23,0x95,0x8E,0x88,0x61,0x6E,0x9B,0x32,0x62,0xD6,0x26,0xC0,0x4A,0x84,0xE2,0xB4,
0x77,0x1D,0x92,0x6D,0x62,0x61,0x34,0x1B,0xA6,0x2D,0x9B,0xB5,0x8D,0x90,0x12,0xA1,
0x04,0x1D,0x1C,0x20,0xA4,0xA7,0x58,0xD8,0x4D,0x1A,0xE9,0xAB,0x16,0x5D,0x62,0xE8,
0x04,0xA8,0x49,0x37,0x47,0x49,0x31,0x23,0xD6,0x2E,0x13,0x42,0xB8,0x01,0x91,0x2E,
0x00,0x30,0x0B,0xA0,0x39,0xD3,0x76,0xAD,0xA6,0xC7,0xC0,0x14,0xDB,0x21,0x26,0xC7,
0x00,0x9B,0x64,0x38,0xDB,0x60,0xC6,0xD9,0x0A,0x36,0x24,0x08,0xDB,0x21,0x86,0xDB,
0x04,0x36,0xC8,0x41,0xB1,0x20,0x06,0xD9,0x0F,0xD6,0x2A,0x1F,0x5B,0x21,0x7A,0xDA,
0xC2,0x70,0x41,0x65,0x70,0xA1,0x98,0xE5,0x14,0x25,0xB6,0xC7,0xC2,0xD9,0x08,0x9B,
0x63,0x80,0x6C,0x84,0x75,0x90,0x86,0xB2,0x11,0x56,0xC4,0x81,0x59,0x08,0xCB,0x21,
0x09,0x64,0x22,0x2D,0x89,0x00,0xB2,0x11,0xE6,0xC5,0x43,0x99,0x08,0xB3,0x4C,0xD1,
0x56,0x20,0x54,0x33,0xA6,0x9C,0xD8,0xEC,0x64,0x2A,0x9A,0x4F,0x69,0x86,0x62,0x22,
0xEC,0x0C,0x00,0x00,0x00,0x00,0x05,0xFE,0x00,0x00,0x01,0x23,0x44,0x53,0xA6,0x5D,
0xDB,0xEC,0x62,0x22,0xB2,0x4F,0x60,0x9D,0x36,0xE1,0xC0,0xE3,0x30,0x55,0x52,0x7B,
0x18,0xE9,0xB6,0x23,0xA6,0x3D,0x3A,0x1C,0x61,0x32,0x8A,0x4F,0x6A
};

void init_ParsedErrorAPI_dict()
{
  ATermList afuns, terms;

  _ParsedErrorAPI_dict = ATreadFromBinaryString(_ParsedErrorAPI_dict_baf, _ParsedErrorAPI_dict_LEN);

  ATprotect(&_ParsedErrorAPI_dict);

  afuns = (ATermList)ATelementAt((ATermList)_ParsedErrorAPI_dict, 0);

  PERR_afun39 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun37 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun41 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun42 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun38 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun40 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_ParsedErrorAPI_dict, 1);

  PERR_patternOptLayoutPresent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternOptLayoutAbsent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartStrCon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartNormal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartEscaped = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartNatCon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartSummary = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartFeedback = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartSubject = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternAreaNoArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternAreaArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternLocationNoLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternLocationLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSubjectSubject = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSubjectListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSubjectListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSubjectListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternFeedbackFatalError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternFeedbackError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternFeedbackWarning = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternFeedbackInfo = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternFeedbackListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternFeedbackListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternFeedbackListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSummaryFeedback = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternNatConDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStrConDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternEscapedOctal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternEscapedSpecialCharacter = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternNormalDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
