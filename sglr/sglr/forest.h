/*
  %% $Id$
  %% Parse forests

   The parser maintains a compact representation of a set of parse
   trees in the form of a parse forest. We use the generic terms to
   represent these.

   Parse forests are constructed using the functions |apply|, |NULL|,
   |cons| and |amb|. |apply| denotes the application of a function to
   a list of arguments. |NULL| denotes the empty list of
   arguments.|cons| adds a term in front of a list. The function |amb|
   actually constructs forests. It takes two trees and creates an
   ambiguous node \emph{at the same address as the first tree}. This
   means that all trees with a pointer to the first tree will share
   the newly created ambiguous node.

*/

#ifndef _FOREST_H_
#define _FOREST_H_  1

#include  "parser.h"

#define SG_APPLLABEL    "#"
#define SG_REJECTLABEL  "X"

enum SG_AmbTblKind { SG_AMBTBL_INIT, SG_AMBTBL_CLEAR, SG_AMBTBL_ADD,
                     SG_AMBTBL_UPDATE, SG_AMBTBL_REMOVE, SG_AMBTBL_LOOKUP,
                     SG_AMBTBL_DUMP};

enum SG_ApplIDAction { SG_APPLID_ZERO, SG_APPLID_INC };

ATermList SG_AmbTable(int Mode, ATermInt key, ATermList value);
int   SG_MaxNrAmb(int Mode);
AFun  SG_ApplAFun(void);
AFun  SG_AprodAFun(void);
AFun  SG_AmbAFun(void);

void  SG_Amb(parse_table *, ATermAppl, ATermAppl);
ATermAppl SG_ExpandApplNode(parse_table * pt, ATermAppl t, ATbool recurse);
ATerm SG_YieldPT(parse_table *pt, ATerm t);
int   SG_ApplID(int Action);
ATerm SG_ApplLabel(void);
ATerm SG_AprodlLabel(void);
ATerm SG_RejectLabel(void);
ATerm SG_Apply(parse_table *, label, ATermList, ATbool);
ATerm SG_TreeType(ATerm);
ATermInt SG_GetProdLabel(ATermAppl aprod);

ATerm SG_TermYield(ATerm);
ATerm SG_DotTermYield(ATerm);

#endif  /* _FOREST_H_ */
