#ifndef _LIBRARY_H
#define _LIBRARY_H

/*{{{  includes */

#include <stdlib.h>
#include <string.h>
#include <aterm1.h>
#include "Library_dict.h"

/*}}}  */

/*{{{  typedefs */

typedef struct _CO_OptLayout *CO_OptLayout;
typedef struct _CO_Layout *CO_Layout;
typedef struct _CO_LexLayoutList *CO_LexLayoutList;
typedef struct _CO_LexLayout *CO_LexLayout;
typedef struct _CO_Boolean *CO_Boolean;
typedef struct _CO_Start *CO_Start;
typedef struct _CO_LexStrChar *CO_LexStrChar;
typedef struct _CO_StrChar *CO_StrChar;
typedef struct _CO_LexStrCon *CO_LexStrCon;
typedef struct _CO_StrCon *CO_StrCon;
typedef struct _CO_LexStrCharLine *CO_LexStrCharLine;
typedef struct _CO_BoolCon *CO_BoolCon;
typedef struct _CO_LexNatCon *CO_LexNatCon;
typedef struct _CO_NatCon *CO_NatCon;
typedef struct _CO_LexByte *CO_LexByte;
typedef struct _CO_Byte *CO_Byte;
typedef struct _CO_LexBytes *CO_LexBytes;
typedef struct _CO_Bytes *CO_Bytes;
typedef struct _CO_LexByteList *CO_LexByteList;
typedef struct _CO_Subject *CO_Subject;
typedef struct _CO_Error *CO_Error;
typedef struct _CO_Summary *CO_Summary;
typedef struct _CO_SubjectList *CO_SubjectList;
typedef struct _CO_ErrorList *CO_ErrorList;
typedef struct _CO_Location *CO_Location;
typedef struct _CO_Area *CO_Area;
typedef struct _CO_Read *CO_Read;
typedef struct _CO_Write *CO_Write;
typedef struct _CO_ParsetreeX *CO_ParsetreeX;
typedef struct _CO_X *CO_X;

/*}}}  */

void CO_initLibraryApi(void);

/*{{{  protect functions */

void CO_protectOptLayout(CO_OptLayout *arg);
void CO_protectLayout(CO_Layout *arg);
void CO_protectLexLayoutList(CO_LexLayoutList *arg);
void CO_protectLexLayout(CO_LexLayout *arg);
void CO_protectBoolean(CO_Boolean *arg);
void CO_protectStart(CO_Start *arg);
void CO_protectLexStrChar(CO_LexStrChar *arg);
void CO_protectStrChar(CO_StrChar *arg);
void CO_protectLexStrCon(CO_LexStrCon *arg);
void CO_protectStrCon(CO_StrCon *arg);
void CO_protectLexStrCharLine(CO_LexStrCharLine *arg);
void CO_protectBoolCon(CO_BoolCon *arg);
void CO_protectLexNatCon(CO_LexNatCon *arg);
void CO_protectNatCon(CO_NatCon *arg);
void CO_protectLexByte(CO_LexByte *arg);
void CO_protectByte(CO_Byte *arg);
void CO_protectLexBytes(CO_LexBytes *arg);
void CO_protectBytes(CO_Bytes *arg);
void CO_protectLexByteList(CO_LexByteList *arg);
void CO_protectSubject(CO_Subject *arg);
void CO_protectError(CO_Error *arg);
void CO_protectSummary(CO_Summary *arg);
void CO_protectSubjectList(CO_SubjectList *arg);
void CO_protectErrorList(CO_ErrorList *arg);
void CO_protectLocation(CO_Location *arg);
void CO_protectArea(CO_Area *arg);
void CO_protectRead(CO_Read *arg);
void CO_protectWrite(CO_Write *arg);
void CO_protectParsetreeX(CO_ParsetreeX *arg);
void CO_protectX(CO_X *arg);

/*}}}  */
/*{{{  term conversion functions */

CO_OptLayout CO_OptLayoutFromTerm(ATerm t);
ATerm CO_OptLayoutToTerm(CO_OptLayout arg);
CO_Layout CO_LayoutFromTerm(ATerm t);
ATerm CO_LayoutToTerm(CO_Layout arg);
CO_LexLayoutList CO_LexLayoutListFromTerm(ATerm t);
ATerm CO_LexLayoutListToTerm(CO_LexLayoutList arg);
CO_LexLayout CO_LexLayoutFromTerm(ATerm t);
ATerm CO_LexLayoutToTerm(CO_LexLayout arg);
CO_Boolean CO_BooleanFromTerm(ATerm t);
ATerm CO_BooleanToTerm(CO_Boolean arg);
CO_Start CO_StartFromTerm(ATerm t);
ATerm CO_StartToTerm(CO_Start arg);
CO_LexStrChar CO_LexStrCharFromTerm(ATerm t);
ATerm CO_LexStrCharToTerm(CO_LexStrChar arg);
CO_StrChar CO_StrCharFromTerm(ATerm t);
ATerm CO_StrCharToTerm(CO_StrChar arg);
CO_LexStrCon CO_LexStrConFromTerm(ATerm t);
ATerm CO_LexStrConToTerm(CO_LexStrCon arg);
CO_StrCon CO_StrConFromTerm(ATerm t);
ATerm CO_StrConToTerm(CO_StrCon arg);
CO_LexStrCharLine CO_LexStrCharLineFromTerm(ATerm t);
ATerm CO_LexStrCharLineToTerm(CO_LexStrCharLine arg);
CO_BoolCon CO_BoolConFromTerm(ATerm t);
ATerm CO_BoolConToTerm(CO_BoolCon arg);
CO_LexNatCon CO_LexNatConFromTerm(ATerm t);
ATerm CO_LexNatConToTerm(CO_LexNatCon arg);
CO_NatCon CO_NatConFromTerm(ATerm t);
ATerm CO_NatConToTerm(CO_NatCon arg);
CO_LexByte CO_LexByteFromTerm(ATerm t);
ATerm CO_LexByteToTerm(CO_LexByte arg);
CO_Byte CO_ByteFromTerm(ATerm t);
ATerm CO_ByteToTerm(CO_Byte arg);
CO_LexBytes CO_LexBytesFromTerm(ATerm t);
ATerm CO_LexBytesToTerm(CO_LexBytes arg);
CO_Bytes CO_BytesFromTerm(ATerm t);
ATerm CO_BytesToTerm(CO_Bytes arg);
CO_LexByteList CO_LexByteListFromTerm(ATerm t);
ATerm CO_LexByteListToTerm(CO_LexByteList arg);
CO_Subject CO_SubjectFromTerm(ATerm t);
ATerm CO_SubjectToTerm(CO_Subject arg);
CO_Error CO_ErrorFromTerm(ATerm t);
ATerm CO_ErrorToTerm(CO_Error arg);
CO_Summary CO_SummaryFromTerm(ATerm t);
ATerm CO_SummaryToTerm(CO_Summary arg);
CO_SubjectList CO_SubjectListFromTerm(ATerm t);
ATerm CO_SubjectListToTerm(CO_SubjectList arg);
CO_ErrorList CO_ErrorListFromTerm(ATerm t);
ATerm CO_ErrorListToTerm(CO_ErrorList arg);
CO_Location CO_LocationFromTerm(ATerm t);
ATerm CO_LocationToTerm(CO_Location arg);
CO_Area CO_AreaFromTerm(ATerm t);
ATerm CO_AreaToTerm(CO_Area arg);
CO_Read CO_ReadFromTerm(ATerm t);
ATerm CO_ReadToTerm(CO_Read arg);
CO_Write CO_WriteFromTerm(ATerm t);
ATerm CO_WriteToTerm(CO_Write arg);
CO_ParsetreeX CO_ParsetreeXFromTerm(ATerm t);
ATerm CO_ParsetreeXToTerm(CO_ParsetreeX arg);
CO_X CO_XFromTerm(ATerm t);
ATerm CO_XToTerm(CO_X arg);

/*}}}  */
/*{{{  list functions */

int CO_getLexLayoutListLength (CO_LexLayoutList arg);
CO_LexLayoutList CO_reverseLexLayoutList(CO_LexLayoutList arg);
CO_LexLayoutList CO_appendLexLayoutList(CO_LexLayoutList arg, CO_LexLayout elem);
CO_LexLayoutList CO_concatLexLayoutList(CO_LexLayoutList arg0, CO_LexLayoutList arg1);
CO_LexLayoutList CO_sliceLexLayoutList(CO_LexLayoutList arg, int start, int end);
CO_LexLayout CO_getLexLayoutListLexLayoutAt(CO_LexLayoutList arg, int index);
CO_LexLayoutList CO_replaceLexLayoutListLexLayoutAt(CO_LexLayoutList arg, CO_LexLayout elem, int index);
CO_LexLayoutList CO_makeLexLayoutList2(CO_LexLayout elem1, CO_LexLayout elem2);
CO_LexLayoutList CO_makeLexLayoutList3(CO_LexLayout elem1, CO_LexLayout elem2, CO_LexLayout elem3);
CO_LexLayoutList CO_makeLexLayoutList4(CO_LexLayout elem1, CO_LexLayout elem2, CO_LexLayout elem3, CO_LexLayout elem4);
CO_LexLayoutList CO_makeLexLayoutList5(CO_LexLayout elem1, CO_LexLayout elem2, CO_LexLayout elem3, CO_LexLayout elem4, CO_LexLayout elem5);
CO_LexLayoutList CO_makeLexLayoutList6(CO_LexLayout elem1, CO_LexLayout elem2, CO_LexLayout elem3, CO_LexLayout elem4, CO_LexLayout elem5, CO_LexLayout elem6);
int CO_getLexStrCharLineLength (CO_LexStrCharLine arg);
CO_LexStrCharLine CO_reverseLexStrCharLine(CO_LexStrCharLine arg);
CO_LexStrCharLine CO_appendLexStrCharLine(CO_LexStrCharLine arg, CO_LexStrChar elem);
CO_LexStrCharLine CO_concatLexStrCharLine(CO_LexStrCharLine arg0, CO_LexStrCharLine arg1);
CO_LexStrCharLine CO_sliceLexStrCharLine(CO_LexStrCharLine arg, int start, int end);
CO_LexStrChar CO_getLexStrCharLineLexStrCharAt(CO_LexStrCharLine arg, int index);
CO_LexStrCharLine CO_replaceLexStrCharLineLexStrCharAt(CO_LexStrCharLine arg, CO_LexStrChar elem, int index);
CO_LexStrCharLine CO_makeLexStrCharLine2(CO_LexStrChar elem1, CO_LexStrChar elem2);
CO_LexStrCharLine CO_makeLexStrCharLine3(CO_LexStrChar elem1, CO_LexStrChar elem2, CO_LexStrChar elem3);
CO_LexStrCharLine CO_makeLexStrCharLine4(CO_LexStrChar elem1, CO_LexStrChar elem2, CO_LexStrChar elem3, CO_LexStrChar elem4);
CO_LexStrCharLine CO_makeLexStrCharLine5(CO_LexStrChar elem1, CO_LexStrChar elem2, CO_LexStrChar elem3, CO_LexStrChar elem4, CO_LexStrChar elem5);
CO_LexStrCharLine CO_makeLexStrCharLine6(CO_LexStrChar elem1, CO_LexStrChar elem2, CO_LexStrChar elem3, CO_LexStrChar elem4, CO_LexStrChar elem5, CO_LexStrChar elem6);
int CO_getLexByteListLength (CO_LexByteList arg);
CO_LexByteList CO_reverseLexByteList(CO_LexByteList arg);
CO_LexByteList CO_appendLexByteList(CO_LexByteList arg, CO_LexByte elem);
CO_LexByteList CO_concatLexByteList(CO_LexByteList arg0, CO_LexByteList arg1);
CO_LexByteList CO_sliceLexByteList(CO_LexByteList arg, int start, int end);
CO_LexByte CO_getLexByteListLexByteAt(CO_LexByteList arg, int index);
CO_LexByteList CO_replaceLexByteListLexByteAt(CO_LexByteList arg, CO_LexByte elem, int index);
CO_LexByteList CO_makeLexByteList2(CO_LexByte elem1, CO_LexByte elem2);
CO_LexByteList CO_makeLexByteList3(CO_LexByte elem1, CO_LexByte elem2, CO_LexByte elem3);
CO_LexByteList CO_makeLexByteList4(CO_LexByte elem1, CO_LexByte elem2, CO_LexByte elem3, CO_LexByte elem4);
CO_LexByteList CO_makeLexByteList5(CO_LexByte elem1, CO_LexByte elem2, CO_LexByte elem3, CO_LexByte elem4, CO_LexByte elem5);
CO_LexByteList CO_makeLexByteList6(CO_LexByte elem1, CO_LexByte elem2, CO_LexByte elem3, CO_LexByte elem4, CO_LexByte elem5, CO_LexByte elem6);
int CO_getSubjectListLength (CO_SubjectList arg);
CO_SubjectList CO_reverseSubjectList(CO_SubjectList arg);
CO_SubjectList CO_appendSubjectList(CO_SubjectList arg0, CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Subject arg1);
CO_SubjectList CO_concatSubjectList(CO_SubjectList arg0, CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_SubjectList arg1);
CO_SubjectList CO_sliceSubjectList(CO_SubjectList arg, int start, int end);
CO_Subject CO_getSubjectListSubjectAt(CO_SubjectList arg, int index);
CO_SubjectList CO_replaceSubjectListSubjectAt(CO_SubjectList arg, CO_Subject elem, int index);
CO_SubjectList CO_makeSubjectList2(CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Subject elem1, CO_Subject elem2);
CO_SubjectList CO_makeSubjectList3(CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Subject elem1, CO_Subject elem2, CO_Subject elem3);
CO_SubjectList CO_makeSubjectList4(CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Subject elem1, CO_Subject elem2, CO_Subject elem3, CO_Subject elem4);
CO_SubjectList CO_makeSubjectList5(CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Subject elem1, CO_Subject elem2, CO_Subject elem3, CO_Subject elem4, CO_Subject elem5);
CO_SubjectList CO_makeSubjectList6(CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Subject elem1, CO_Subject elem2, CO_Subject elem3, CO_Subject elem4, CO_Subject elem5, CO_Subject elem6);
int CO_getErrorListLength (CO_ErrorList arg);
CO_ErrorList CO_reverseErrorList(CO_ErrorList arg);
CO_ErrorList CO_appendErrorList(CO_ErrorList arg0, CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Error arg1);
CO_ErrorList CO_concatErrorList(CO_ErrorList arg0, CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_ErrorList arg1);
CO_ErrorList CO_sliceErrorList(CO_ErrorList arg, int start, int end);
CO_Error CO_getErrorListErrorAt(CO_ErrorList arg, int index);
CO_ErrorList CO_replaceErrorListErrorAt(CO_ErrorList arg, CO_Error elem, int index);
CO_ErrorList CO_makeErrorList2(CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Error elem1, CO_Error elem2);
CO_ErrorList CO_makeErrorList3(CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Error elem1, CO_Error elem2, CO_Error elem3);
CO_ErrorList CO_makeErrorList4(CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Error elem1, CO_Error elem2, CO_Error elem3, CO_Error elem4);
CO_ErrorList CO_makeErrorList5(CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Error elem1, CO_Error elem2, CO_Error elem3, CO_Error elem4, CO_Error elem5);
CO_ErrorList CO_makeErrorList6(CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_Error elem1, CO_Error elem2, CO_Error elem3, CO_Error elem4, CO_Error elem5, CO_Error elem6);

/*}}}  */
/*{{{  constructors */

CO_OptLayout CO_makeOptLayoutAbsent(void);
CO_OptLayout CO_makeOptLayoutPresent(CO_Layout layout);
CO_Layout CO_makeLayoutLexToCf(CO_LexLayoutList list);
CO_LexLayoutList CO_makeLexLayoutListEmpty(void);
CO_LexLayoutList CO_makeLexLayoutListSingle(CO_LexLayout head);
CO_LexLayoutList CO_makeLexLayoutListMany(CO_LexLayout head, CO_LexLayoutList tail);
CO_LexLayout CO_makeLexLayoutWhitespace(char ch);
CO_Boolean CO_makeBooleanConstant(CO_BoolCon BoolCon);
CO_Boolean CO_makeBooleanOr(CO_Boolean lhs, CO_OptLayout wsAfterLhs, CO_OptLayout wsAfterBar, CO_Boolean rhs);
CO_Boolean CO_makeBooleanAnd(CO_Boolean lhs, CO_OptLayout wsAfterLhs, CO_OptLayout wsAfterAmp, CO_Boolean rhs);
CO_Boolean CO_makeBooleanNot(CO_OptLayout wsAfterNot, CO_OptLayout wsAfterParenOpen, CO_Boolean Boolean, CO_OptLayout wsAfterBoolean);
CO_Boolean CO_makeBooleanBracket(CO_OptLayout wsAfterParenOpen, CO_Boolean Boolean, CO_OptLayout wsAfterBoolean);
CO_Start CO_makeStartBoolean(CO_OptLayout wsBefore, CO_Boolean topBoolean, CO_OptLayout wsAfter, int ambCnt);
CO_Start CO_makeStartStrCon(CO_OptLayout wsBefore, CO_StrCon topStrCon, CO_OptLayout wsAfter, int ambCnt);
CO_Start CO_makeStartBoolCon(CO_OptLayout wsBefore, CO_BoolCon topBoolCon, CO_OptLayout wsAfter, int ambCnt);
CO_Start CO_makeStartSummary(CO_OptLayout wsBefore, CO_Summary topSummary, CO_OptLayout wsAfter, int ambCnt);
CO_Start CO_makeStartError(CO_OptLayout wsBefore, CO_Error topError, CO_OptLayout wsAfter, int ambCnt);
CO_LexStrChar CO_makeLexStrCharNewline(void);
CO_LexStrChar CO_makeLexStrCharTab(void);
CO_LexStrChar CO_makeLexStrCharQuote(void);
CO_LexStrChar CO_makeLexStrCharBackslash(void);
CO_LexStrChar CO_makeLexStrCharOctal(char a, char b, char c);
CO_LexStrChar CO_makeLexStrCharNormal(char ch);
CO_StrChar CO_makeStrCharLexToCf(CO_LexStrChar StrChar);
CO_LexStrCon CO_makeLexStrConDefault(CO_LexStrCharLine line);
CO_StrCon CO_makeStrConLexToCf(CO_LexStrCon StrCon);
CO_LexStrCharLine CO_makeLexStrCharLineEmpty(void);
CO_LexStrCharLine CO_makeLexStrCharLineSingle(CO_LexStrChar head);
CO_LexStrCharLine CO_makeLexStrCharLineMany(CO_LexStrChar head, CO_LexStrCharLine tail);
CO_BoolCon CO_makeBoolConTrue(void);
CO_BoolCon CO_makeBoolConFalse(void);
CO_LexNatCon CO_makeLexNatConDefault(const char* list);
CO_NatCon CO_makeNatConLexToCf(CO_LexNatCon NatCon);
CO_LexByte CO_makeLexByteByte(char ch);
CO_Byte CO_makeByteLexToCf(CO_LexByte Byte);
CO_LexBytes CO_makeLexBytesBytes(CO_LexByteList list);
CO_Bytes CO_makeBytesLexToCf(CO_LexBytes Bytes);
CO_LexByteList CO_makeLexByteListEmpty(void);
CO_LexByteList CO_makeLexByteListSingle(CO_LexByte head);
CO_LexByteList CO_makeLexByteListMany(CO_LexByte head, CO_LexByteList tail);
CO_Subject CO_makeSubjectSubject(CO_OptLayout wsAfterSubject, CO_OptLayout wsAfterParenOpen, CO_StrCon description, CO_OptLayout wsAfterDescription);
CO_Subject CO_makeSubjectLocalized(CO_OptLayout wsAfterLocalized, CO_OptLayout wsAfterParenOpen, CO_StrCon description, CO_OptLayout wsAfterDescription, CO_OptLayout wsAfterComma, CO_Location Location, CO_OptLayout wsAfterLocation);
CO_Error CO_makeErrorInfo(CO_OptLayout wsAfterInfo, CO_OptLayout wsAfterParenOpen, CO_StrCon description, CO_OptLayout wsAfterDescription, CO_OptLayout wsAfterComma, CO_OptLayout wsAfterBracketOpen, CO_SubjectList list, CO_OptLayout wsAfterList, CO_OptLayout wsAfterBracketClose);
CO_Error CO_makeErrorWarning(CO_OptLayout wsAfterWarning, CO_OptLayout wsAfterParenOpen, CO_StrCon description, CO_OptLayout wsAfterDescription, CO_OptLayout wsAfterComma, CO_OptLayout wsAfterBracketOpen, CO_SubjectList list, CO_OptLayout wsAfterList, CO_OptLayout wsAfterBracketClose);
CO_Error CO_makeErrorError(CO_OptLayout wsAfterError, CO_OptLayout wsAfterParenOpen, CO_StrCon description, CO_OptLayout wsAfterDescription, CO_OptLayout wsAfterComma, CO_OptLayout wsAfterBracketOpen, CO_SubjectList list, CO_OptLayout wsAfterList, CO_OptLayout wsAfterBracketClose);
CO_Error CO_makeErrorFatal(CO_OptLayout wsAfterFatal, CO_OptLayout wsAfterParenOpen, CO_StrCon description, CO_OptLayout wsAfterDescription, CO_OptLayout wsAfterComma, CO_OptLayout wsAfterBracketOpen, CO_SubjectList list, CO_OptLayout wsAfterList, CO_OptLayout wsAfterBracketClose);
CO_Summary CO_makeSummarySummary(CO_OptLayout wsAfterSummary, CO_OptLayout wsAfterParenOpen, CO_StrCon producer, CO_OptLayout wsAfterProducer, CO_OptLayout wsAfterComma, CO_StrCon id, CO_OptLayout wsAfterId, CO_OptLayout wsAfterComma1, CO_OptLayout wsAfterBracketOpen, CO_ErrorList list, CO_OptLayout wsAfterList, CO_OptLayout wsAfterBracketClose);
CO_SubjectList CO_makeSubjectListEmpty(void);
CO_SubjectList CO_makeSubjectListSingle(CO_Subject head);
CO_SubjectList CO_makeSubjectListMany(CO_Subject head, CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_SubjectList tail);
CO_ErrorList CO_makeErrorListEmpty(void);
CO_ErrorList CO_makeErrorListSingle(CO_Error head);
CO_ErrorList CO_makeErrorListMany(CO_Error head, CO_OptLayout wsAfterHead, CO_OptLayout wsAfterSep, CO_ErrorList tail);
CO_Location CO_makeLocationFile(CO_OptLayout wsAfterFile, CO_OptLayout wsAfterParenOpen, CO_StrCon filename, CO_OptLayout wsAfterFilename);
CO_Location CO_makeLocationArea(CO_OptLayout wsAfterA, CO_OptLayout wsAfterParenOpen, CO_Area Area, CO_OptLayout wsAfterArea);
CO_Location CO_makeLocationAreaInFile(CO_OptLayout wsAfterAreaInFile, CO_OptLayout wsAfterParenOpen, CO_StrCon filename, CO_OptLayout wsAfterFilename, CO_OptLayout wsAfterComma, CO_Area Area, CO_OptLayout wsAfterArea);
CO_Area CO_makeAreaArea(CO_OptLayout wsAfterArea, CO_OptLayout wsAfterParenOpen, CO_NatCon beginLine, CO_OptLayout wsAfterBeginLine, CO_OptLayout wsAfterComma, CO_NatCon beginColumn, CO_OptLayout wsAfterBeginColumn, CO_OptLayout wsAfterComma1, CO_NatCon endLine, CO_OptLayout wsAfterEndLine, CO_OptLayout wsAfterComma2, CO_NatCon endColumn, CO_OptLayout wsAfterEndColumn, CO_OptLayout wsAfterComma3, CO_NatCon offset, CO_OptLayout wsAfterOffset, CO_OptLayout wsAfterComma4, CO_NatCon length, CO_OptLayout wsAfterLength);
CO_Read CO_makeReadSuccess(CO_OptLayout wsAfterRead, CO_OptLayout wsAfterParenOpen, CO_Bytes value, CO_OptLayout wsAfterValue);
CO_Read CO_makeReadFailure(CO_OptLayout wsAfterReadError, CO_OptLayout wsAfterParenOpen, CO_Summary Summary, CO_OptLayout wsAfterSummary);
CO_Write CO_makeWriteSuccess(void);
CO_Write CO_makeWriteFailure(CO_OptLayout wsAfterWriteError, CO_OptLayout wsAfterParenOpen, CO_Summary Summary, CO_OptLayout wsAfterSummary);
CO_ParsetreeX CO_makeParsetreeXSuccess(ATerm typeOfTree, ATerm typeOfX, CO_OptLayout wsAfterParseTree, CO_OptLayout wsAfterParenOpen, CO_Bytes leftLayout, CO_OptLayout wsAfterLeftLayout, CO_OptLayout wsAfterComma, CO_X tree, CO_OptLayout wsAfterTree, CO_OptLayout wsAfterComma1, CO_Bytes rightLayout, CO_OptLayout wsAfterRightLayout, CO_OptLayout wsAfterComma2, CO_NatCon ambCnt, CO_OptLayout wsAfterAmbCnt);
CO_ParsetreeX CO_makeParsetreeXFailure(ATerm typeOfX, CO_OptLayout wsAfterParseError, CO_OptLayout wsAfterParenOpen, CO_Summary Summary, CO_OptLayout wsAfterSummary);
CO_X CO_makeXCast(ATerm X);

/*}}}  */
/*{{{  equality functions */

ATbool CO_isEqualOptLayout(CO_OptLayout arg0, CO_OptLayout arg1);
ATbool CO_isEqualLayout(CO_Layout arg0, CO_Layout arg1);
ATbool CO_isEqualLexLayoutList(CO_LexLayoutList arg0, CO_LexLayoutList arg1);
ATbool CO_isEqualLexLayout(CO_LexLayout arg0, CO_LexLayout arg1);
ATbool CO_isEqualBoolean(CO_Boolean arg0, CO_Boolean arg1);
ATbool CO_isEqualStart(CO_Start arg0, CO_Start arg1);
ATbool CO_isEqualLexStrChar(CO_LexStrChar arg0, CO_LexStrChar arg1);
ATbool CO_isEqualStrChar(CO_StrChar arg0, CO_StrChar arg1);
ATbool CO_isEqualLexStrCon(CO_LexStrCon arg0, CO_LexStrCon arg1);
ATbool CO_isEqualStrCon(CO_StrCon arg0, CO_StrCon arg1);
ATbool CO_isEqualLexStrCharLine(CO_LexStrCharLine arg0, CO_LexStrCharLine arg1);
ATbool CO_isEqualBoolCon(CO_BoolCon arg0, CO_BoolCon arg1);
ATbool CO_isEqualLexNatCon(CO_LexNatCon arg0, CO_LexNatCon arg1);
ATbool CO_isEqualNatCon(CO_NatCon arg0, CO_NatCon arg1);
ATbool CO_isEqualLexByte(CO_LexByte arg0, CO_LexByte arg1);
ATbool CO_isEqualByte(CO_Byte arg0, CO_Byte arg1);
ATbool CO_isEqualLexBytes(CO_LexBytes arg0, CO_LexBytes arg1);
ATbool CO_isEqualBytes(CO_Bytes arg0, CO_Bytes arg1);
ATbool CO_isEqualLexByteList(CO_LexByteList arg0, CO_LexByteList arg1);
ATbool CO_isEqualSubject(CO_Subject arg0, CO_Subject arg1);
ATbool CO_isEqualError(CO_Error arg0, CO_Error arg1);
ATbool CO_isEqualSummary(CO_Summary arg0, CO_Summary arg1);
ATbool CO_isEqualSubjectList(CO_SubjectList arg0, CO_SubjectList arg1);
ATbool CO_isEqualErrorList(CO_ErrorList arg0, CO_ErrorList arg1);
ATbool CO_isEqualLocation(CO_Location arg0, CO_Location arg1);
ATbool CO_isEqualArea(CO_Area arg0, CO_Area arg1);
ATbool CO_isEqualRead(CO_Read arg0, CO_Read arg1);
ATbool CO_isEqualWrite(CO_Write arg0, CO_Write arg1);
ATbool CO_isEqualParsetreeX(CO_ParsetreeX arg0, CO_ParsetreeX arg1);
ATbool CO_isEqualX(CO_X arg0, CO_X arg1);

/*}}}  */
/*{{{  CO_OptLayout accessors */

ATbool CO_isValidOptLayout(CO_OptLayout arg);
inline ATbool CO_isOptLayoutAbsent(CO_OptLayout arg);
inline ATbool CO_isOptLayoutPresent(CO_OptLayout arg);
ATbool CO_hasOptLayoutLayout(CO_OptLayout arg);
CO_Layout CO_getOptLayoutLayout(CO_OptLayout arg);
CO_OptLayout CO_setOptLayoutLayout(CO_OptLayout arg, CO_Layout layout);

/*}}}  */
/*{{{  CO_Layout accessors */

ATbool CO_isValidLayout(CO_Layout arg);
inline ATbool CO_isLayoutLexToCf(CO_Layout arg);
ATbool CO_hasLayoutList(CO_Layout arg);
CO_LexLayoutList CO_getLayoutList(CO_Layout arg);
CO_Layout CO_setLayoutList(CO_Layout arg, CO_LexLayoutList list);

/*}}}  */
/*{{{  CO_LexLayoutList accessors */

ATbool CO_isValidLexLayoutList(CO_LexLayoutList arg);
inline ATbool CO_isLexLayoutListEmpty(CO_LexLayoutList arg);
inline ATbool CO_isLexLayoutListSingle(CO_LexLayoutList arg);
inline ATbool CO_isLexLayoutListMany(CO_LexLayoutList arg);
ATbool CO_hasLexLayoutListHead(CO_LexLayoutList arg);
ATbool CO_hasLexLayoutListTail(CO_LexLayoutList arg);
CO_LexLayout CO_getLexLayoutListHead(CO_LexLayoutList arg);
CO_LexLayoutList CO_getLexLayoutListTail(CO_LexLayoutList arg);
CO_LexLayoutList CO_setLexLayoutListHead(CO_LexLayoutList arg, CO_LexLayout head);
CO_LexLayoutList CO_setLexLayoutListTail(CO_LexLayoutList arg, CO_LexLayoutList tail);

/*}}}  */
/*{{{  CO_LexLayout accessors */

ATbool CO_isValidLexLayout(CO_LexLayout arg);
inline ATbool CO_isLexLayoutWhitespace(CO_LexLayout arg);
ATbool CO_hasLexLayoutCh(CO_LexLayout arg);
char CO_getLexLayoutCh(CO_LexLayout arg);
CO_LexLayout CO_setLexLayoutCh(CO_LexLayout arg, char ch);

/*}}}  */
/*{{{  CO_Boolean accessors */

ATbool CO_isValidBoolean(CO_Boolean arg);
inline ATbool CO_isBooleanConstant(CO_Boolean arg);
inline ATbool CO_isBooleanOr(CO_Boolean arg);
inline ATbool CO_isBooleanAnd(CO_Boolean arg);
inline ATbool CO_isBooleanNot(CO_Boolean arg);
inline ATbool CO_isBooleanBracket(CO_Boolean arg);
ATbool CO_hasBooleanBoolCon(CO_Boolean arg);
ATbool CO_hasBooleanLhs(CO_Boolean arg);
ATbool CO_hasBooleanWsAfterLhs(CO_Boolean arg);
ATbool CO_hasBooleanWsAfterBar(CO_Boolean arg);
ATbool CO_hasBooleanRhs(CO_Boolean arg);
ATbool CO_hasBooleanWsAfterAmp(CO_Boolean arg);
ATbool CO_hasBooleanWsAfterNot(CO_Boolean arg);
ATbool CO_hasBooleanWsAfterParenOpen(CO_Boolean arg);
ATbool CO_hasBooleanBoolean(CO_Boolean arg);
ATbool CO_hasBooleanWsAfterBoolean(CO_Boolean arg);
CO_BoolCon CO_getBooleanBoolCon(CO_Boolean arg);
CO_Boolean CO_getBooleanLhs(CO_Boolean arg);
CO_OptLayout CO_getBooleanWsAfterLhs(CO_Boolean arg);
CO_OptLayout CO_getBooleanWsAfterBar(CO_Boolean arg);
CO_Boolean CO_getBooleanRhs(CO_Boolean arg);
CO_OptLayout CO_getBooleanWsAfterAmp(CO_Boolean arg);
CO_OptLayout CO_getBooleanWsAfterNot(CO_Boolean arg);
CO_OptLayout CO_getBooleanWsAfterParenOpen(CO_Boolean arg);
CO_Boolean CO_getBooleanBoolean(CO_Boolean arg);
CO_OptLayout CO_getBooleanWsAfterBoolean(CO_Boolean arg);
CO_Boolean CO_setBooleanBoolCon(CO_Boolean arg, CO_BoolCon BoolCon);
CO_Boolean CO_setBooleanLhs(CO_Boolean arg, CO_Boolean lhs);
CO_Boolean CO_setBooleanWsAfterLhs(CO_Boolean arg, CO_OptLayout wsAfterLhs);
CO_Boolean CO_setBooleanWsAfterBar(CO_Boolean arg, CO_OptLayout wsAfterBar);
CO_Boolean CO_setBooleanRhs(CO_Boolean arg, CO_Boolean rhs);
CO_Boolean CO_setBooleanWsAfterAmp(CO_Boolean arg, CO_OptLayout wsAfterAmp);
CO_Boolean CO_setBooleanWsAfterNot(CO_Boolean arg, CO_OptLayout wsAfterNot);
CO_Boolean CO_setBooleanWsAfterParenOpen(CO_Boolean arg, CO_OptLayout wsAfterParenOpen);
CO_Boolean CO_setBooleanBoolean(CO_Boolean arg, CO_Boolean Boolean);
CO_Boolean CO_setBooleanWsAfterBoolean(CO_Boolean arg, CO_OptLayout wsAfterBoolean);

/*}}}  */
/*{{{  CO_Start accessors */

ATbool CO_isValidStart(CO_Start arg);
inline ATbool CO_isStartBoolean(CO_Start arg);
inline ATbool CO_isStartStrCon(CO_Start arg);
inline ATbool CO_isStartBoolCon(CO_Start arg);
inline ATbool CO_isStartSummary(CO_Start arg);
inline ATbool CO_isStartError(CO_Start arg);
ATbool CO_hasStartWsBefore(CO_Start arg);
ATbool CO_hasStartTopBoolean(CO_Start arg);
ATbool CO_hasStartWsAfter(CO_Start arg);
ATbool CO_hasStartAmbCnt(CO_Start arg);
ATbool CO_hasStartTopStrCon(CO_Start arg);
ATbool CO_hasStartTopBoolCon(CO_Start arg);
ATbool CO_hasStartTopSummary(CO_Start arg);
ATbool CO_hasStartTopError(CO_Start arg);
CO_OptLayout CO_getStartWsBefore(CO_Start arg);
CO_Boolean CO_getStartTopBoolean(CO_Start arg);
CO_OptLayout CO_getStartWsAfter(CO_Start arg);
int CO_getStartAmbCnt(CO_Start arg);
CO_StrCon CO_getStartTopStrCon(CO_Start arg);
CO_BoolCon CO_getStartTopBoolCon(CO_Start arg);
CO_Summary CO_getStartTopSummary(CO_Start arg);
CO_Error CO_getStartTopError(CO_Start arg);
CO_Start CO_setStartWsBefore(CO_Start arg, CO_OptLayout wsBefore);
CO_Start CO_setStartTopBoolean(CO_Start arg, CO_Boolean topBoolean);
CO_Start CO_setStartWsAfter(CO_Start arg, CO_OptLayout wsAfter);
CO_Start CO_setStartAmbCnt(CO_Start arg, int ambCnt);
CO_Start CO_setStartTopStrCon(CO_Start arg, CO_StrCon topStrCon);
CO_Start CO_setStartTopBoolCon(CO_Start arg, CO_BoolCon topBoolCon);
CO_Start CO_setStartTopSummary(CO_Start arg, CO_Summary topSummary);
CO_Start CO_setStartTopError(CO_Start arg, CO_Error topError);

/*}}}  */
/*{{{  CO_LexStrChar accessors */

ATbool CO_isValidLexStrChar(CO_LexStrChar arg);
inline ATbool CO_isLexStrCharNewline(CO_LexStrChar arg);
inline ATbool CO_isLexStrCharTab(CO_LexStrChar arg);
inline ATbool CO_isLexStrCharQuote(CO_LexStrChar arg);
inline ATbool CO_isLexStrCharBackslash(CO_LexStrChar arg);
inline ATbool CO_isLexStrCharOctal(CO_LexStrChar arg);
inline ATbool CO_isLexStrCharNormal(CO_LexStrChar arg);
ATbool CO_hasLexStrCharA(CO_LexStrChar arg);
ATbool CO_hasLexStrCharB(CO_LexStrChar arg);
ATbool CO_hasLexStrCharC(CO_LexStrChar arg);
ATbool CO_hasLexStrCharCh(CO_LexStrChar arg);
char CO_getLexStrCharA(CO_LexStrChar arg);
char CO_getLexStrCharB(CO_LexStrChar arg);
char CO_getLexStrCharC(CO_LexStrChar arg);
char CO_getLexStrCharCh(CO_LexStrChar arg);
CO_LexStrChar CO_setLexStrCharA(CO_LexStrChar arg, char a);
CO_LexStrChar CO_setLexStrCharB(CO_LexStrChar arg, char b);
CO_LexStrChar CO_setLexStrCharC(CO_LexStrChar arg, char c);
CO_LexStrChar CO_setLexStrCharCh(CO_LexStrChar arg, char ch);

/*}}}  */
/*{{{  CO_StrChar accessors */

ATbool CO_isValidStrChar(CO_StrChar arg);
inline ATbool CO_isStrCharLexToCf(CO_StrChar arg);
ATbool CO_hasStrCharStrChar(CO_StrChar arg);
CO_LexStrChar CO_getStrCharStrChar(CO_StrChar arg);
CO_StrChar CO_setStrCharStrChar(CO_StrChar arg, CO_LexStrChar StrChar);

/*}}}  */
/*{{{  CO_LexStrCon accessors */

ATbool CO_isValidLexStrCon(CO_LexStrCon arg);
inline ATbool CO_isLexStrConDefault(CO_LexStrCon arg);
ATbool CO_hasLexStrConLine(CO_LexStrCon arg);
CO_LexStrCharLine CO_getLexStrConLine(CO_LexStrCon arg);
CO_LexStrCon CO_setLexStrConLine(CO_LexStrCon arg, CO_LexStrCharLine line);

/*}}}  */
/*{{{  CO_StrCon accessors */

ATbool CO_isValidStrCon(CO_StrCon arg);
inline ATbool CO_isStrConLexToCf(CO_StrCon arg);
ATbool CO_hasStrConStrCon(CO_StrCon arg);
CO_LexStrCon CO_getStrConStrCon(CO_StrCon arg);
CO_StrCon CO_setStrConStrCon(CO_StrCon arg, CO_LexStrCon StrCon);

/*}}}  */
/*{{{  CO_LexStrCharLine accessors */

ATbool CO_isValidLexStrCharLine(CO_LexStrCharLine arg);
inline ATbool CO_isLexStrCharLineEmpty(CO_LexStrCharLine arg);
inline ATbool CO_isLexStrCharLineSingle(CO_LexStrCharLine arg);
inline ATbool CO_isLexStrCharLineMany(CO_LexStrCharLine arg);
ATbool CO_hasLexStrCharLineHead(CO_LexStrCharLine arg);
ATbool CO_hasLexStrCharLineTail(CO_LexStrCharLine arg);
CO_LexStrChar CO_getLexStrCharLineHead(CO_LexStrCharLine arg);
CO_LexStrCharLine CO_getLexStrCharLineTail(CO_LexStrCharLine arg);
CO_LexStrCharLine CO_setLexStrCharLineHead(CO_LexStrCharLine arg, CO_LexStrChar head);
CO_LexStrCharLine CO_setLexStrCharLineTail(CO_LexStrCharLine arg, CO_LexStrCharLine tail);

/*}}}  */
/*{{{  CO_BoolCon accessors */

ATbool CO_isValidBoolCon(CO_BoolCon arg);
inline ATbool CO_isBoolConTrue(CO_BoolCon arg);
inline ATbool CO_isBoolConFalse(CO_BoolCon arg);

/*}}}  */
/*{{{  CO_LexNatCon accessors */

ATbool CO_isValidLexNatCon(CO_LexNatCon arg);
inline ATbool CO_isLexNatConDefault(CO_LexNatCon arg);
ATbool CO_hasLexNatConList(CO_LexNatCon arg);
char* CO_getLexNatConList(CO_LexNatCon arg);
CO_LexNatCon CO_setLexNatConList(CO_LexNatCon arg, const char* list);

/*}}}  */
/*{{{  CO_NatCon accessors */

ATbool CO_isValidNatCon(CO_NatCon arg);
inline ATbool CO_isNatConLexToCf(CO_NatCon arg);
ATbool CO_hasNatConNatCon(CO_NatCon arg);
CO_LexNatCon CO_getNatConNatCon(CO_NatCon arg);
CO_NatCon CO_setNatConNatCon(CO_NatCon arg, CO_LexNatCon NatCon);

/*}}}  */
/*{{{  CO_LexByte accessors */

ATbool CO_isValidLexByte(CO_LexByte arg);
inline ATbool CO_isLexByteByte(CO_LexByte arg);
ATbool CO_hasLexByteCh(CO_LexByte arg);
char CO_getLexByteCh(CO_LexByte arg);
CO_LexByte CO_setLexByteCh(CO_LexByte arg, char ch);

/*}}}  */
/*{{{  CO_Byte accessors */

ATbool CO_isValidByte(CO_Byte arg);
inline ATbool CO_isByteLexToCf(CO_Byte arg);
ATbool CO_hasByteByte(CO_Byte arg);
CO_LexByte CO_getByteByte(CO_Byte arg);
CO_Byte CO_setByteByte(CO_Byte arg, CO_LexByte Byte);

/*}}}  */
/*{{{  CO_LexBytes accessors */

ATbool CO_isValidLexBytes(CO_LexBytes arg);
inline ATbool CO_isLexBytesBytes(CO_LexBytes arg);
ATbool CO_hasLexBytesList(CO_LexBytes arg);
CO_LexByteList CO_getLexBytesList(CO_LexBytes arg);
CO_LexBytes CO_setLexBytesList(CO_LexBytes arg, CO_LexByteList list);

/*}}}  */
/*{{{  CO_Bytes accessors */

ATbool CO_isValidBytes(CO_Bytes arg);
inline ATbool CO_isBytesLexToCf(CO_Bytes arg);
ATbool CO_hasBytesBytes(CO_Bytes arg);
CO_LexBytes CO_getBytesBytes(CO_Bytes arg);
CO_Bytes CO_setBytesBytes(CO_Bytes arg, CO_LexBytes Bytes);

/*}}}  */
/*{{{  CO_LexByteList accessors */

ATbool CO_isValidLexByteList(CO_LexByteList arg);
inline ATbool CO_isLexByteListEmpty(CO_LexByteList arg);
inline ATbool CO_isLexByteListSingle(CO_LexByteList arg);
inline ATbool CO_isLexByteListMany(CO_LexByteList arg);
ATbool CO_hasLexByteListHead(CO_LexByteList arg);
ATbool CO_hasLexByteListTail(CO_LexByteList arg);
CO_LexByte CO_getLexByteListHead(CO_LexByteList arg);
CO_LexByteList CO_getLexByteListTail(CO_LexByteList arg);
CO_LexByteList CO_setLexByteListHead(CO_LexByteList arg, CO_LexByte head);
CO_LexByteList CO_setLexByteListTail(CO_LexByteList arg, CO_LexByteList tail);

/*}}}  */
/*{{{  CO_Subject accessors */

ATbool CO_isValidSubject(CO_Subject arg);
inline ATbool CO_isSubjectSubject(CO_Subject arg);
inline ATbool CO_isSubjectLocalized(CO_Subject arg);
ATbool CO_hasSubjectWsAfterSubject(CO_Subject arg);
ATbool CO_hasSubjectWsAfterParenOpen(CO_Subject arg);
ATbool CO_hasSubjectDescription(CO_Subject arg);
ATbool CO_hasSubjectWsAfterDescription(CO_Subject arg);
ATbool CO_hasSubjectWsAfterLocalized(CO_Subject arg);
ATbool CO_hasSubjectWsAfterComma(CO_Subject arg);
ATbool CO_hasSubjectLocation(CO_Subject arg);
ATbool CO_hasSubjectWsAfterLocation(CO_Subject arg);
CO_OptLayout CO_getSubjectWsAfterSubject(CO_Subject arg);
CO_OptLayout CO_getSubjectWsAfterParenOpen(CO_Subject arg);
CO_StrCon CO_getSubjectDescription(CO_Subject arg);
CO_OptLayout CO_getSubjectWsAfterDescription(CO_Subject arg);
CO_OptLayout CO_getSubjectWsAfterLocalized(CO_Subject arg);
CO_OptLayout CO_getSubjectWsAfterComma(CO_Subject arg);
CO_Location CO_getSubjectLocation(CO_Subject arg);
CO_OptLayout CO_getSubjectWsAfterLocation(CO_Subject arg);
CO_Subject CO_setSubjectWsAfterSubject(CO_Subject arg, CO_OptLayout wsAfterSubject);
CO_Subject CO_setSubjectWsAfterParenOpen(CO_Subject arg, CO_OptLayout wsAfterParenOpen);
CO_Subject CO_setSubjectDescription(CO_Subject arg, CO_StrCon description);
CO_Subject CO_setSubjectWsAfterDescription(CO_Subject arg, CO_OptLayout wsAfterDescription);
CO_Subject CO_setSubjectWsAfterLocalized(CO_Subject arg, CO_OptLayout wsAfterLocalized);
CO_Subject CO_setSubjectWsAfterComma(CO_Subject arg, CO_OptLayout wsAfterComma);
CO_Subject CO_setSubjectLocation(CO_Subject arg, CO_Location Location);
CO_Subject CO_setSubjectWsAfterLocation(CO_Subject arg, CO_OptLayout wsAfterLocation);

/*}}}  */
/*{{{  CO_Error accessors */

ATbool CO_isValidError(CO_Error arg);
inline ATbool CO_isErrorInfo(CO_Error arg);
inline ATbool CO_isErrorWarning(CO_Error arg);
inline ATbool CO_isErrorError(CO_Error arg);
inline ATbool CO_isErrorFatal(CO_Error arg);
ATbool CO_hasErrorWsAfterInfo(CO_Error arg);
ATbool CO_hasErrorWsAfterParenOpen(CO_Error arg);
ATbool CO_hasErrorDescription(CO_Error arg);
ATbool CO_hasErrorWsAfterDescription(CO_Error arg);
ATbool CO_hasErrorWsAfterComma(CO_Error arg);
ATbool CO_hasErrorWsAfterBracketOpen(CO_Error arg);
ATbool CO_hasErrorList(CO_Error arg);
ATbool CO_hasErrorWsAfterList(CO_Error arg);
ATbool CO_hasErrorWsAfterBracketClose(CO_Error arg);
ATbool CO_hasErrorWsAfterWarning(CO_Error arg);
ATbool CO_hasErrorWsAfterError(CO_Error arg);
ATbool CO_hasErrorWsAfterFatal(CO_Error arg);
CO_OptLayout CO_getErrorWsAfterInfo(CO_Error arg);
CO_OptLayout CO_getErrorWsAfterParenOpen(CO_Error arg);
CO_StrCon CO_getErrorDescription(CO_Error arg);
CO_OptLayout CO_getErrorWsAfterDescription(CO_Error arg);
CO_OptLayout CO_getErrorWsAfterComma(CO_Error arg);
CO_OptLayout CO_getErrorWsAfterBracketOpen(CO_Error arg);
CO_SubjectList CO_getErrorList(CO_Error arg);
CO_OptLayout CO_getErrorWsAfterList(CO_Error arg);
CO_OptLayout CO_getErrorWsAfterBracketClose(CO_Error arg);
CO_OptLayout CO_getErrorWsAfterWarning(CO_Error arg);
CO_OptLayout CO_getErrorWsAfterError(CO_Error arg);
CO_OptLayout CO_getErrorWsAfterFatal(CO_Error arg);
CO_Error CO_setErrorWsAfterInfo(CO_Error arg, CO_OptLayout wsAfterInfo);
CO_Error CO_setErrorWsAfterParenOpen(CO_Error arg, CO_OptLayout wsAfterParenOpen);
CO_Error CO_setErrorDescription(CO_Error arg, CO_StrCon description);
CO_Error CO_setErrorWsAfterDescription(CO_Error arg, CO_OptLayout wsAfterDescription);
CO_Error CO_setErrorWsAfterComma(CO_Error arg, CO_OptLayout wsAfterComma);
CO_Error CO_setErrorWsAfterBracketOpen(CO_Error arg, CO_OptLayout wsAfterBracketOpen);
CO_Error CO_setErrorList(CO_Error arg, CO_SubjectList list);
CO_Error CO_setErrorWsAfterList(CO_Error arg, CO_OptLayout wsAfterList);
CO_Error CO_setErrorWsAfterBracketClose(CO_Error arg, CO_OptLayout wsAfterBracketClose);
CO_Error CO_setErrorWsAfterWarning(CO_Error arg, CO_OptLayout wsAfterWarning);
CO_Error CO_setErrorWsAfterError(CO_Error arg, CO_OptLayout wsAfterError);
CO_Error CO_setErrorWsAfterFatal(CO_Error arg, CO_OptLayout wsAfterFatal);

/*}}}  */
/*{{{  CO_Summary accessors */

ATbool CO_isValidSummary(CO_Summary arg);
inline ATbool CO_isSummarySummary(CO_Summary arg);
ATbool CO_hasSummaryWsAfterSummary(CO_Summary arg);
ATbool CO_hasSummaryWsAfterParenOpen(CO_Summary arg);
ATbool CO_hasSummaryProducer(CO_Summary arg);
ATbool CO_hasSummaryWsAfterProducer(CO_Summary arg);
ATbool CO_hasSummaryWsAfterComma(CO_Summary arg);
ATbool CO_hasSummaryId(CO_Summary arg);
ATbool CO_hasSummaryWsAfterId(CO_Summary arg);
ATbool CO_hasSummaryWsAfterComma1(CO_Summary arg);
ATbool CO_hasSummaryWsAfterBracketOpen(CO_Summary arg);
ATbool CO_hasSummaryList(CO_Summary arg);
ATbool CO_hasSummaryWsAfterList(CO_Summary arg);
ATbool CO_hasSummaryWsAfterBracketClose(CO_Summary arg);
CO_OptLayout CO_getSummaryWsAfterSummary(CO_Summary arg);
CO_OptLayout CO_getSummaryWsAfterParenOpen(CO_Summary arg);
CO_StrCon CO_getSummaryProducer(CO_Summary arg);
CO_OptLayout CO_getSummaryWsAfterProducer(CO_Summary arg);
CO_OptLayout CO_getSummaryWsAfterComma(CO_Summary arg);
CO_StrCon CO_getSummaryId(CO_Summary arg);
CO_OptLayout CO_getSummaryWsAfterId(CO_Summary arg);
CO_OptLayout CO_getSummaryWsAfterComma1(CO_Summary arg);
CO_OptLayout CO_getSummaryWsAfterBracketOpen(CO_Summary arg);
CO_ErrorList CO_getSummaryList(CO_Summary arg);
CO_OptLayout CO_getSummaryWsAfterList(CO_Summary arg);
CO_OptLayout CO_getSummaryWsAfterBracketClose(CO_Summary arg);
CO_Summary CO_setSummaryWsAfterSummary(CO_Summary arg, CO_OptLayout wsAfterSummary);
CO_Summary CO_setSummaryWsAfterParenOpen(CO_Summary arg, CO_OptLayout wsAfterParenOpen);
CO_Summary CO_setSummaryProducer(CO_Summary arg, CO_StrCon producer);
CO_Summary CO_setSummaryWsAfterProducer(CO_Summary arg, CO_OptLayout wsAfterProducer);
CO_Summary CO_setSummaryWsAfterComma(CO_Summary arg, CO_OptLayout wsAfterComma);
CO_Summary CO_setSummaryId(CO_Summary arg, CO_StrCon id);
CO_Summary CO_setSummaryWsAfterId(CO_Summary arg, CO_OptLayout wsAfterId);
CO_Summary CO_setSummaryWsAfterComma1(CO_Summary arg, CO_OptLayout wsAfterComma1);
CO_Summary CO_setSummaryWsAfterBracketOpen(CO_Summary arg, CO_OptLayout wsAfterBracketOpen);
CO_Summary CO_setSummaryList(CO_Summary arg, CO_ErrorList list);
CO_Summary CO_setSummaryWsAfterList(CO_Summary arg, CO_OptLayout wsAfterList);
CO_Summary CO_setSummaryWsAfterBracketClose(CO_Summary arg, CO_OptLayout wsAfterBracketClose);

/*}}}  */
/*{{{  CO_SubjectList accessors */

ATbool CO_isValidSubjectList(CO_SubjectList arg);
inline ATbool CO_isSubjectListEmpty(CO_SubjectList arg);
inline ATbool CO_isSubjectListSingle(CO_SubjectList arg);
inline ATbool CO_isSubjectListMany(CO_SubjectList arg);
ATbool CO_hasSubjectListHead(CO_SubjectList arg);
ATbool CO_hasSubjectListWsAfterHead(CO_SubjectList arg);
ATbool CO_hasSubjectListWsAfterSep(CO_SubjectList arg);
ATbool CO_hasSubjectListTail(CO_SubjectList arg);
CO_SubjectList CO_getSubjectListTail(CO_SubjectList arg);
CO_Subject CO_getSubjectListHead(CO_SubjectList arg);
CO_OptLayout CO_getSubjectListWsAfterHead(CO_SubjectList arg);
CO_OptLayout CO_getSubjectListWsAfterSep(CO_SubjectList arg);
CO_SubjectList CO_setSubjectListHead(CO_SubjectList arg, CO_Subject head);
CO_SubjectList CO_setSubjectListWsAfterHead(CO_SubjectList arg, CO_OptLayout wsAfterHead);
CO_SubjectList CO_setSubjectListWsAfterSep(CO_SubjectList arg, CO_OptLayout wsAfterSep);
CO_SubjectList CO_setSubjectListTail(CO_SubjectList arg, CO_SubjectList tail);

/*}}}  */
/*{{{  CO_ErrorList accessors */

ATbool CO_isValidErrorList(CO_ErrorList arg);
inline ATbool CO_isErrorListEmpty(CO_ErrorList arg);
inline ATbool CO_isErrorListSingle(CO_ErrorList arg);
inline ATbool CO_isErrorListMany(CO_ErrorList arg);
ATbool CO_hasErrorListHead(CO_ErrorList arg);
ATbool CO_hasErrorListWsAfterHead(CO_ErrorList arg);
ATbool CO_hasErrorListWsAfterSep(CO_ErrorList arg);
ATbool CO_hasErrorListTail(CO_ErrorList arg);
CO_ErrorList CO_getErrorListTail(CO_ErrorList arg);
CO_Error CO_getErrorListHead(CO_ErrorList arg);
CO_OptLayout CO_getErrorListWsAfterHead(CO_ErrorList arg);
CO_OptLayout CO_getErrorListWsAfterSep(CO_ErrorList arg);
CO_ErrorList CO_setErrorListHead(CO_ErrorList arg, CO_Error head);
CO_ErrorList CO_setErrorListWsAfterHead(CO_ErrorList arg, CO_OptLayout wsAfterHead);
CO_ErrorList CO_setErrorListWsAfterSep(CO_ErrorList arg, CO_OptLayout wsAfterSep);
CO_ErrorList CO_setErrorListTail(CO_ErrorList arg, CO_ErrorList tail);

/*}}}  */
/*{{{  CO_Location accessors */

ATbool CO_isValidLocation(CO_Location arg);
inline ATbool CO_isLocationFile(CO_Location arg);
inline ATbool CO_isLocationArea(CO_Location arg);
inline ATbool CO_isLocationAreaInFile(CO_Location arg);
ATbool CO_hasLocationWsAfterFile(CO_Location arg);
ATbool CO_hasLocationWsAfterParenOpen(CO_Location arg);
ATbool CO_hasLocationFilename(CO_Location arg);
ATbool CO_hasLocationWsAfterFilename(CO_Location arg);
ATbool CO_hasLocationWsAfterA(CO_Location arg);
ATbool CO_hasLocationArea(CO_Location arg);
ATbool CO_hasLocationWsAfterArea(CO_Location arg);
ATbool CO_hasLocationWsAfterAreaInFile(CO_Location arg);
ATbool CO_hasLocationWsAfterComma(CO_Location arg);
CO_OptLayout CO_getLocationWsAfterFile(CO_Location arg);
CO_OptLayout CO_getLocationWsAfterParenOpen(CO_Location arg);
CO_StrCon CO_getLocationFilename(CO_Location arg);
CO_OptLayout CO_getLocationWsAfterFilename(CO_Location arg);
CO_OptLayout CO_getLocationWsAfterA(CO_Location arg);
CO_Area CO_getLocationArea(CO_Location arg);
CO_OptLayout CO_getLocationWsAfterArea(CO_Location arg);
CO_OptLayout CO_getLocationWsAfterAreaInFile(CO_Location arg);
CO_OptLayout CO_getLocationWsAfterComma(CO_Location arg);
CO_Location CO_setLocationWsAfterFile(CO_Location arg, CO_OptLayout wsAfterFile);
CO_Location CO_setLocationWsAfterParenOpen(CO_Location arg, CO_OptLayout wsAfterParenOpen);
CO_Location CO_setLocationFilename(CO_Location arg, CO_StrCon filename);
CO_Location CO_setLocationWsAfterFilename(CO_Location arg, CO_OptLayout wsAfterFilename);
CO_Location CO_setLocationWsAfterA(CO_Location arg, CO_OptLayout wsAfterA);
CO_Location CO_setLocationArea(CO_Location arg, CO_Area Area);
CO_Location CO_setLocationWsAfterArea(CO_Location arg, CO_OptLayout wsAfterArea);
CO_Location CO_setLocationWsAfterAreaInFile(CO_Location arg, CO_OptLayout wsAfterAreaInFile);
CO_Location CO_setLocationWsAfterComma(CO_Location arg, CO_OptLayout wsAfterComma);

/*}}}  */
/*{{{  CO_Area accessors */

ATbool CO_isValidArea(CO_Area arg);
inline ATbool CO_isAreaArea(CO_Area arg);
ATbool CO_hasAreaWsAfterArea(CO_Area arg);
ATbool CO_hasAreaWsAfterParenOpen(CO_Area arg);
ATbool CO_hasAreaBeginLine(CO_Area arg);
ATbool CO_hasAreaWsAfterBeginLine(CO_Area arg);
ATbool CO_hasAreaWsAfterComma(CO_Area arg);
ATbool CO_hasAreaBeginColumn(CO_Area arg);
ATbool CO_hasAreaWsAfterBeginColumn(CO_Area arg);
ATbool CO_hasAreaWsAfterComma1(CO_Area arg);
ATbool CO_hasAreaEndLine(CO_Area arg);
ATbool CO_hasAreaWsAfterEndLine(CO_Area arg);
ATbool CO_hasAreaWsAfterComma2(CO_Area arg);
ATbool CO_hasAreaEndColumn(CO_Area arg);
ATbool CO_hasAreaWsAfterEndColumn(CO_Area arg);
ATbool CO_hasAreaWsAfterComma3(CO_Area arg);
ATbool CO_hasAreaOffset(CO_Area arg);
ATbool CO_hasAreaWsAfterOffset(CO_Area arg);
ATbool CO_hasAreaWsAfterComma4(CO_Area arg);
ATbool CO_hasAreaLength(CO_Area arg);
ATbool CO_hasAreaWsAfterLength(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterArea(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterParenOpen(CO_Area arg);
CO_NatCon CO_getAreaBeginLine(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterBeginLine(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterComma(CO_Area arg);
CO_NatCon CO_getAreaBeginColumn(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterBeginColumn(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterComma1(CO_Area arg);
CO_NatCon CO_getAreaEndLine(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterEndLine(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterComma2(CO_Area arg);
CO_NatCon CO_getAreaEndColumn(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterEndColumn(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterComma3(CO_Area arg);
CO_NatCon CO_getAreaOffset(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterOffset(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterComma4(CO_Area arg);
CO_NatCon CO_getAreaLength(CO_Area arg);
CO_OptLayout CO_getAreaWsAfterLength(CO_Area arg);
CO_Area CO_setAreaWsAfterArea(CO_Area arg, CO_OptLayout wsAfterArea);
CO_Area CO_setAreaWsAfterParenOpen(CO_Area arg, CO_OptLayout wsAfterParenOpen);
CO_Area CO_setAreaBeginLine(CO_Area arg, CO_NatCon beginLine);
CO_Area CO_setAreaWsAfterBeginLine(CO_Area arg, CO_OptLayout wsAfterBeginLine);
CO_Area CO_setAreaWsAfterComma(CO_Area arg, CO_OptLayout wsAfterComma);
CO_Area CO_setAreaBeginColumn(CO_Area arg, CO_NatCon beginColumn);
CO_Area CO_setAreaWsAfterBeginColumn(CO_Area arg, CO_OptLayout wsAfterBeginColumn);
CO_Area CO_setAreaWsAfterComma1(CO_Area arg, CO_OptLayout wsAfterComma1);
CO_Area CO_setAreaEndLine(CO_Area arg, CO_NatCon endLine);
CO_Area CO_setAreaWsAfterEndLine(CO_Area arg, CO_OptLayout wsAfterEndLine);
CO_Area CO_setAreaWsAfterComma2(CO_Area arg, CO_OptLayout wsAfterComma2);
CO_Area CO_setAreaEndColumn(CO_Area arg, CO_NatCon endColumn);
CO_Area CO_setAreaWsAfterEndColumn(CO_Area arg, CO_OptLayout wsAfterEndColumn);
CO_Area CO_setAreaWsAfterComma3(CO_Area arg, CO_OptLayout wsAfterComma3);
CO_Area CO_setAreaOffset(CO_Area arg, CO_NatCon offset);
CO_Area CO_setAreaWsAfterOffset(CO_Area arg, CO_OptLayout wsAfterOffset);
CO_Area CO_setAreaWsAfterComma4(CO_Area arg, CO_OptLayout wsAfterComma4);
CO_Area CO_setAreaLength(CO_Area arg, CO_NatCon length);
CO_Area CO_setAreaWsAfterLength(CO_Area arg, CO_OptLayout wsAfterLength);

/*}}}  */
/*{{{  CO_Read accessors */

ATbool CO_isValidRead(CO_Read arg);
inline ATbool CO_isReadSuccess(CO_Read arg);
inline ATbool CO_isReadFailure(CO_Read arg);
ATbool CO_hasReadWsAfterRead(CO_Read arg);
ATbool CO_hasReadWsAfterParenOpen(CO_Read arg);
ATbool CO_hasReadValue(CO_Read arg);
ATbool CO_hasReadWsAfterValue(CO_Read arg);
ATbool CO_hasReadWsAfterReadError(CO_Read arg);
ATbool CO_hasReadSummary(CO_Read arg);
ATbool CO_hasReadWsAfterSummary(CO_Read arg);
CO_OptLayout CO_getReadWsAfterRead(CO_Read arg);
CO_OptLayout CO_getReadWsAfterParenOpen(CO_Read arg);
CO_Bytes CO_getReadValue(CO_Read arg);
CO_OptLayout CO_getReadWsAfterValue(CO_Read arg);
CO_OptLayout CO_getReadWsAfterReadError(CO_Read arg);
CO_Summary CO_getReadSummary(CO_Read arg);
CO_OptLayout CO_getReadWsAfterSummary(CO_Read arg);
CO_Read CO_setReadWsAfterRead(CO_Read arg, CO_OptLayout wsAfterRead);
CO_Read CO_setReadWsAfterParenOpen(CO_Read arg, CO_OptLayout wsAfterParenOpen);
CO_Read CO_setReadValue(CO_Read arg, CO_Bytes value);
CO_Read CO_setReadWsAfterValue(CO_Read arg, CO_OptLayout wsAfterValue);
CO_Read CO_setReadWsAfterReadError(CO_Read arg, CO_OptLayout wsAfterReadError);
CO_Read CO_setReadSummary(CO_Read arg, CO_Summary Summary);
CO_Read CO_setReadWsAfterSummary(CO_Read arg, CO_OptLayout wsAfterSummary);

/*}}}  */
/*{{{  CO_Write accessors */

ATbool CO_isValidWrite(CO_Write arg);
inline ATbool CO_isWriteSuccess(CO_Write arg);
inline ATbool CO_isWriteFailure(CO_Write arg);
ATbool CO_hasWriteWsAfterWriteError(CO_Write arg);
ATbool CO_hasWriteWsAfterParenOpen(CO_Write arg);
ATbool CO_hasWriteSummary(CO_Write arg);
ATbool CO_hasWriteWsAfterSummary(CO_Write arg);
CO_OptLayout CO_getWriteWsAfterWriteError(CO_Write arg);
CO_OptLayout CO_getWriteWsAfterParenOpen(CO_Write arg);
CO_Summary CO_getWriteSummary(CO_Write arg);
CO_OptLayout CO_getWriteWsAfterSummary(CO_Write arg);
CO_Write CO_setWriteWsAfterWriteError(CO_Write arg, CO_OptLayout wsAfterWriteError);
CO_Write CO_setWriteWsAfterParenOpen(CO_Write arg, CO_OptLayout wsAfterParenOpen);
CO_Write CO_setWriteSummary(CO_Write arg, CO_Summary Summary);
CO_Write CO_setWriteWsAfterSummary(CO_Write arg, CO_OptLayout wsAfterSummary);

/*}}}  */
/*{{{  CO_ParsetreeX accessors */

ATbool CO_isValidParsetreeX(CO_ParsetreeX arg);
inline ATbool CO_isParsetreeXSuccess(CO_ParsetreeX arg);
inline ATbool CO_isParsetreeXFailure(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXTypeOfTree(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXTypeOfX(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterParseTree(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterParenOpen(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXLeftLayout(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterLeftLayout(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterComma(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXTree(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterTree(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterComma1(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXRightLayout(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterRightLayout(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterComma2(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXAmbCnt(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterAmbCnt(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterParseError(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXSummary(CO_ParsetreeX arg);
ATbool CO_hasParsetreeXWsAfterSummary(CO_ParsetreeX arg);
ATerm CO_getParsetreeXTypeOfTree(CO_ParsetreeX arg);
ATerm CO_getParsetreeXTypeOfX(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterParseTree(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterParenOpen(CO_ParsetreeX arg);
CO_Bytes CO_getParsetreeXLeftLayout(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterLeftLayout(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterComma(CO_ParsetreeX arg);
CO_X CO_getParsetreeXTree(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterTree(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterComma1(CO_ParsetreeX arg);
CO_Bytes CO_getParsetreeXRightLayout(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterRightLayout(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterComma2(CO_ParsetreeX arg);
CO_NatCon CO_getParsetreeXAmbCnt(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterAmbCnt(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterParseError(CO_ParsetreeX arg);
CO_Summary CO_getParsetreeXSummary(CO_ParsetreeX arg);
CO_OptLayout CO_getParsetreeXWsAfterSummary(CO_ParsetreeX arg);
CO_ParsetreeX CO_setParsetreeXTypeOfTree(CO_ParsetreeX arg, ATerm typeOfTree);
CO_ParsetreeX CO_setParsetreeXTypeOfX(CO_ParsetreeX arg, ATerm typeOfX);
CO_ParsetreeX CO_setParsetreeXWsAfterParseTree(CO_ParsetreeX arg, CO_OptLayout wsAfterParseTree);
CO_ParsetreeX CO_setParsetreeXWsAfterParenOpen(CO_ParsetreeX arg, CO_OptLayout wsAfterParenOpen);
CO_ParsetreeX CO_setParsetreeXLeftLayout(CO_ParsetreeX arg, CO_Bytes leftLayout);
CO_ParsetreeX CO_setParsetreeXWsAfterLeftLayout(CO_ParsetreeX arg, CO_OptLayout wsAfterLeftLayout);
CO_ParsetreeX CO_setParsetreeXWsAfterComma(CO_ParsetreeX arg, CO_OptLayout wsAfterComma);
CO_ParsetreeX CO_setParsetreeXTree(CO_ParsetreeX arg, CO_X tree);
CO_ParsetreeX CO_setParsetreeXWsAfterTree(CO_ParsetreeX arg, CO_OptLayout wsAfterTree);
CO_ParsetreeX CO_setParsetreeXWsAfterComma1(CO_ParsetreeX arg, CO_OptLayout wsAfterComma1);
CO_ParsetreeX CO_setParsetreeXRightLayout(CO_ParsetreeX arg, CO_Bytes rightLayout);
CO_ParsetreeX CO_setParsetreeXWsAfterRightLayout(CO_ParsetreeX arg, CO_OptLayout wsAfterRightLayout);
CO_ParsetreeX CO_setParsetreeXWsAfterComma2(CO_ParsetreeX arg, CO_OptLayout wsAfterComma2);
CO_ParsetreeX CO_setParsetreeXAmbCnt(CO_ParsetreeX arg, CO_NatCon ambCnt);
CO_ParsetreeX CO_setParsetreeXWsAfterAmbCnt(CO_ParsetreeX arg, CO_OptLayout wsAfterAmbCnt);
CO_ParsetreeX CO_setParsetreeXWsAfterParseError(CO_ParsetreeX arg, CO_OptLayout wsAfterParseError);
CO_ParsetreeX CO_setParsetreeXSummary(CO_ParsetreeX arg, CO_Summary Summary);
CO_ParsetreeX CO_setParsetreeXWsAfterSummary(CO_ParsetreeX arg, CO_OptLayout wsAfterSummary);

/*}}}  */
/*{{{  CO_X accessors */

ATbool CO_isValidX(CO_X arg);
inline ATbool CO_isXCast(CO_X arg);
ATbool CO_hasXX(CO_X arg);
ATerm CO_getXX(CO_X arg);
CO_X CO_setXX(CO_X arg, ATerm X);

/*}}}  */
/*{{{  sort visitors */

CO_OptLayout CO_visitOptLayout(CO_OptLayout arg, CO_Layout (*acceptLayout)(CO_Layout));
CO_Layout CO_visitLayout(CO_Layout arg, CO_LexLayoutList (*acceptList)(CO_LexLayoutList));
CO_LexLayoutList CO_visitLexLayoutList(CO_LexLayoutList arg, CO_LexLayout (*acceptHead)(CO_LexLayout));
CO_LexLayout CO_visitLexLayout(CO_LexLayout arg, char (*acceptCh)(char));
CO_Boolean CO_visitBoolean(CO_Boolean arg, CO_BoolCon (*acceptBoolCon)(CO_BoolCon), CO_OptLayout (*acceptWsAfterLhs)(CO_OptLayout), CO_OptLayout (*acceptWsAfterBar)(CO_OptLayout), CO_OptLayout (*acceptWsAfterAmp)(CO_OptLayout), CO_OptLayout (*acceptWsAfterNot)(CO_OptLayout), CO_OptLayout (*acceptWsAfterParenOpen)(CO_OptLayout), CO_OptLayout (*acceptWsAfterBoolean)(CO_OptLayout));
CO_Start CO_visitStart(CO_Start arg, CO_OptLayout (*acceptWsBefore)(CO_OptLayout), CO_Boolean (*acceptTopBoolean)(CO_Boolean), CO_OptLayout (*acceptWsAfter)(CO_OptLayout), int (*acceptAmbCnt)(int), CO_StrCon (*acceptTopStrCon)(CO_StrCon), CO_BoolCon (*acceptTopBoolCon)(CO_BoolCon), CO_Summary (*acceptTopSummary)(CO_Summary), CO_Error (*acceptTopError)(CO_Error));
CO_LexStrChar CO_visitLexStrChar(CO_LexStrChar arg, char (*acceptA)(char), char (*acceptB)(char), char (*acceptC)(char), char (*acceptCh)(char));
CO_StrChar CO_visitStrChar(CO_StrChar arg, CO_LexStrChar (*acceptStrChar)(CO_LexStrChar));
CO_LexStrCon CO_visitLexStrCon(CO_LexStrCon arg, CO_LexStrCharLine (*acceptLine)(CO_LexStrCharLine));
CO_StrCon CO_visitStrCon(CO_StrCon arg, CO_LexStrCon (*acceptStrCon)(CO_LexStrCon));
CO_LexStrCharLine CO_visitLexStrCharLine(CO_LexStrCharLine arg, CO_LexStrChar (*acceptHead)(CO_LexStrChar));
CO_BoolCon CO_visitBoolCon(CO_BoolCon arg);
CO_LexNatCon CO_visitLexNatCon(CO_LexNatCon arg, char* (*acceptList)(char*));
CO_NatCon CO_visitNatCon(CO_NatCon arg, CO_LexNatCon (*acceptNatCon)(CO_LexNatCon));
CO_LexByte CO_visitLexByte(CO_LexByte arg, char (*acceptCh)(char));
CO_Byte CO_visitByte(CO_Byte arg, CO_LexByte (*acceptByte)(CO_LexByte));
CO_LexBytes CO_visitLexBytes(CO_LexBytes arg, CO_LexByteList (*acceptList)(CO_LexByteList));
CO_Bytes CO_visitBytes(CO_Bytes arg, CO_LexBytes (*acceptBytes)(CO_LexBytes));
CO_LexByteList CO_visitLexByteList(CO_LexByteList arg, CO_LexByte (*acceptHead)(CO_LexByte));
CO_Subject CO_visitSubject(CO_Subject arg, CO_OptLayout (*acceptWsAfterSubject)(CO_OptLayout), CO_OptLayout (*acceptWsAfterParenOpen)(CO_OptLayout), CO_StrCon (*acceptDescription)(CO_StrCon), CO_OptLayout (*acceptWsAfterDescription)(CO_OptLayout), CO_OptLayout (*acceptWsAfterLocalized)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma)(CO_OptLayout), CO_Location (*acceptLocation)(CO_Location), CO_OptLayout (*acceptWsAfterLocation)(CO_OptLayout));
CO_Error CO_visitError(CO_Error arg, CO_OptLayout (*acceptWsAfterInfo)(CO_OptLayout), CO_OptLayout (*acceptWsAfterParenOpen)(CO_OptLayout), CO_StrCon (*acceptDescription)(CO_StrCon), CO_OptLayout (*acceptWsAfterDescription)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma)(CO_OptLayout), CO_OptLayout (*acceptWsAfterBracketOpen)(CO_OptLayout), CO_SubjectList (*acceptList)(CO_SubjectList), CO_OptLayout (*acceptWsAfterList)(CO_OptLayout), CO_OptLayout (*acceptWsAfterBracketClose)(CO_OptLayout), CO_OptLayout (*acceptWsAfterWarning)(CO_OptLayout), CO_OptLayout (*acceptWsAfterError)(CO_OptLayout), CO_OptLayout (*acceptWsAfterFatal)(CO_OptLayout));
CO_Summary CO_visitSummary(CO_Summary arg, CO_OptLayout (*acceptWsAfterSummary)(CO_OptLayout), CO_OptLayout (*acceptWsAfterParenOpen)(CO_OptLayout), CO_StrCon (*acceptProducer)(CO_StrCon), CO_OptLayout (*acceptWsAfterProducer)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma)(CO_OptLayout), CO_StrCon (*acceptId)(CO_StrCon), CO_OptLayout (*acceptWsAfterId)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma1)(CO_OptLayout), CO_OptLayout (*acceptWsAfterBracketOpen)(CO_OptLayout), CO_ErrorList (*acceptList)(CO_ErrorList), CO_OptLayout (*acceptWsAfterList)(CO_OptLayout), CO_OptLayout (*acceptWsAfterBracketClose)(CO_OptLayout));
CO_SubjectList CO_visitSubjectList(CO_SubjectList arg, CO_Subject (*acceptHead)(CO_Subject), CO_OptLayout (*acceptWsAfterHead)(CO_OptLayout), CO_OptLayout (*acceptWsAfterSep)(CO_OptLayout));
CO_ErrorList CO_visitErrorList(CO_ErrorList arg, CO_Error (*acceptHead)(CO_Error), CO_OptLayout (*acceptWsAfterHead)(CO_OptLayout), CO_OptLayout (*acceptWsAfterSep)(CO_OptLayout));
CO_Location CO_visitLocation(CO_Location arg, CO_OptLayout (*acceptWsAfterFile)(CO_OptLayout), CO_OptLayout (*acceptWsAfterParenOpen)(CO_OptLayout), CO_StrCon (*acceptFilename)(CO_StrCon), CO_OptLayout (*acceptWsAfterFilename)(CO_OptLayout), CO_OptLayout (*acceptWsAfterA)(CO_OptLayout), CO_Area (*acceptArea)(CO_Area), CO_OptLayout (*acceptWsAfterArea)(CO_OptLayout), CO_OptLayout (*acceptWsAfterAreaInFile)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma)(CO_OptLayout));
CO_Area CO_visitArea(CO_Area arg, CO_OptLayout (*acceptWsAfterArea)(CO_OptLayout), CO_OptLayout (*acceptWsAfterParenOpen)(CO_OptLayout), CO_NatCon (*acceptBeginLine)(CO_NatCon), CO_OptLayout (*acceptWsAfterBeginLine)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma)(CO_OptLayout), CO_NatCon (*acceptBeginColumn)(CO_NatCon), CO_OptLayout (*acceptWsAfterBeginColumn)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma1)(CO_OptLayout), CO_NatCon (*acceptEndLine)(CO_NatCon), CO_OptLayout (*acceptWsAfterEndLine)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma2)(CO_OptLayout), CO_NatCon (*acceptEndColumn)(CO_NatCon), CO_OptLayout (*acceptWsAfterEndColumn)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma3)(CO_OptLayout), CO_NatCon (*acceptOffset)(CO_NatCon), CO_OptLayout (*acceptWsAfterOffset)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma4)(CO_OptLayout), CO_NatCon (*acceptLength)(CO_NatCon), CO_OptLayout (*acceptWsAfterLength)(CO_OptLayout));
CO_Read CO_visitRead(CO_Read arg, CO_OptLayout (*acceptWsAfterRead)(CO_OptLayout), CO_OptLayout (*acceptWsAfterParenOpen)(CO_OptLayout), CO_Bytes (*acceptValue)(CO_Bytes), CO_OptLayout (*acceptWsAfterValue)(CO_OptLayout), CO_OptLayout (*acceptWsAfterReadError)(CO_OptLayout), CO_Summary (*acceptSummary)(CO_Summary), CO_OptLayout (*acceptWsAfterSummary)(CO_OptLayout));
CO_Write CO_visitWrite(CO_Write arg, CO_OptLayout (*acceptWsAfterWriteError)(CO_OptLayout), CO_OptLayout (*acceptWsAfterParenOpen)(CO_OptLayout), CO_Summary (*acceptSummary)(CO_Summary), CO_OptLayout (*acceptWsAfterSummary)(CO_OptLayout));
CO_ParsetreeX CO_visitParsetreeX(CO_ParsetreeX arg, ATerm (*acceptTypeOfTree)(ATerm), ATerm (*acceptTypeOfX)(ATerm), CO_OptLayout (*acceptWsAfterParseTree)(CO_OptLayout), CO_OptLayout (*acceptWsAfterParenOpen)(CO_OptLayout), CO_Bytes (*acceptLeftLayout)(CO_Bytes), CO_OptLayout (*acceptWsAfterLeftLayout)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma)(CO_OptLayout), CO_X (*acceptTree)(CO_X), CO_OptLayout (*acceptWsAfterTree)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma1)(CO_OptLayout), CO_Bytes (*acceptRightLayout)(CO_Bytes), CO_OptLayout (*acceptWsAfterRightLayout)(CO_OptLayout), CO_OptLayout (*acceptWsAfterComma2)(CO_OptLayout), CO_NatCon (*acceptAmbCnt)(CO_NatCon), CO_OptLayout (*acceptWsAfterAmbCnt)(CO_OptLayout), CO_OptLayout (*acceptWsAfterParseError)(CO_OptLayout), CO_Summary (*acceptSummary)(CO_Summary), CO_OptLayout (*acceptWsAfterSummary)(CO_OptLayout));
CO_X CO_visitX(CO_X arg, ATerm (*acceptX)(ATerm));

/*}}}  */

#endif /* _LIBRARY_H */
