/*
 $Id$
 */

#include <unistd.h>          
#include <string.h>   

#include <stdlib.h>
#include <assert.h>

#include <aterm2.h>

#include "posmap.h"
#include "mem-alloc.h"
#include "forest.h"
#include "parse-table.h"
#include "sglr.h"
#include "sglr-strings.h"
#include "levels.h"

extern long sg_nr_rejects;

ATermTable resolvedtable = NULL;
ATermTable postable = NULL;

/*{{{  int SG_InjectionFilterSucceeded(int mode) */

int SG_InjectionFilterSucceeded(int mode)
{
  static int count = 0;

  switch(mode) {
    case SG_NR_ZERO:
      return count = 0;
    case SG_NR_INC:
      return count++;
    case SG_NR_DEC:
      return count--;
    case SG_NR_ASK:
    default:
      return count;
  }
}

/*}}}  */
/*{{{  int SG_CountEagernessFilterSucceeded(int mode) */

int SG_CountEagernessFilterSucceeded(int mode)
{
  static int count = 0;

  switch(mode) {
    case SG_NR_ZERO:
      return count = 0;
    case SG_NR_INC:
      return count++;
    case SG_NR_DEC:
      return count--;
    case SG_NR_ASK:
    default:
      return count;
  }
}

/*}}}  */
/*{{{  int SG_InjectionCountCalls(int mode) */

int SG_InjectionCountCalls(int mode)
{
  static int count = 0;

  switch(mode) {
    case SG_NR_ZERO:
      return count = 0;
    case SG_NR_INC:
      return count++;
    case SG_NR_DEC:
      return count--;
    case SG_NR_ASK:
    default:
      return count;
  }
}

/*}}}  */
/*{{{  int SG_CountEagernessGtrCalls(int mode) */

int SG_CountEagernessGtrCalls(int mode)
{
  static int count = 0;

  switch(mode) {
    case SG_NR_ZERO:
      return count = 0;
    case SG_NR_INC:
      return count++;
    case SG_NR_DEC:
      return count--;
    case SG_NR_ASK:
    default:
      return count;
  }
}

/*}}}  */
/*{{{  int SG_PreferAndAvoidCalls(int mode) */

int SG_PreferAndAvoidCalls(int mode)
{
  static int count = 0;

  switch(mode) {
    case SG_NR_ZERO:
      return count = 0;
    case SG_NR_INC:
      return count++;
    case SG_NR_DEC:
      return count--;
    case SG_NR_ASK:
    default:
      return count;
  }
}

/*}}}  */
/*{{{  int SG_AmbCalls(int mode) */

int SG_AmbCalls(int mode)
{
  static int count = 0;

  switch(mode) {
    case SG_NR_ZERO:
      return count = 0;
    case SG_NR_INC:
      return count++;
    case SG_NR_DEC:
      return count--;
    case SG_NR_ASK:
    default:
      return count;
  }
}

/*}}}  */
/*{{{  int SG_MaxNrAmb(int mode) */

int SG_MaxNrAmb(int mode)
{
  static int count = 0;

  switch(mode) {
    case SG_NR_ZERO:
      return count = 0;
    case SG_NR_INC:
      return count++;
    case SG_NR_DEC:
      return count--;
    case SG_NR_ASK:
    default:
      return count;
  }
}

/*}}}  */
/*{{{  int SGnrAmb(int mode) */

int SGnrAmb(int mode)
{
  static int count = 0;

  switch(mode) {
    case SG_NR_ZERO:
      return count = 0;
    case SG_NR_INC:
      return ++count;
    case SG_NR_DEC:
      return --count;
    case SG_NR_ASK:
    default:
      return count;
  }
}

/*}}}  */
/*{{{  int SG_ClustersVisited(int mode) */

int SG_ClustersVisited(int mode)
{
    static int count = 0;

    switch(mode) {
    case SG_NR_ZERO:
      return count = 0;
    case SG_NR_INC:
      return ++count;
    case SG_NR_DEC:
      return --count;
    case SG_NR_ASK:
    default:
      return count;
    }
}

/*}}}  */

/*{{{  ATbool SG_StartInjection(parse_table *pt, label l) */

ATbool SG_StartInjection(parse_table *pt, label l)
{
  return ATmatch((ATerm) SG_LookupProduction(pt, l),
                 "prod([cf(opt(layout)),cf(sort(<str>)),cf(opt(layout))],"
                 "sort(\"<START>\"),no-attrs)",
                 NULL, NULL, NULL);
}

/*}}}  */


/*  The function |SG_Apply| is defined directly in terms of ATerm functions.  */

/*{{{  tree SG_Apply(parse_table *pt, label l, ATermList ts, int attr) */

tree SG_Apply(parse_table *pt, label l, ATermList ts, int attr)
{
  tree t;
  AFun fun = (AFun) NULL;

/* We need no tree, so nothing needs to be constructed! */
  if (!SG_OUTPUT) {
    return NULL;
  }

  IF_STATISTICS(if(attr == SG_PT_REJECT) sg_nr_rejects++;);

  switch(attr)
  {
    case SG_PT_REGULAR:
      fun = SG_Regular_AFun;
      break;
    case SG_PT_REJECT:
      fun = SG_Reject_AFun;
      break;
    case SG_PT_EAGER:
      fun = SG_Eager_AFun;
      break;
    case SG_PT_UNEAGER:
      fun = SG_Uneager_AFun;
      break;
  }
  t = (tree) ATmakeAppl2(fun,
                         (ATerm) ATmakeAppl1(SG_Aprod_AFun,
                                             (ATerm) SG_GetATint(l, 0)),
                         (ATerm) ts);

  return t;
}

/*}}}  */

/*{{{  static label SG_GetProdLabel(tree aprod) */

static label SG_GetProdLabel(tree aprod)
{
  return ATgetInt((ATermInt) ATgetArgument(aprod, 0));
}

/*}}}  */
/*{{{  label SG_GetApplProdLabel(tree appl) */

label SG_GetApplProdLabel(tree appl)
{
  return SG_GetProdLabel((tree) ATgetArgument(appl, 0));
}

/*}}}  */
/*{{{  label SG_GetRejectProdLabel(tree appl) */

label SG_GetRejectProdLabel(tree appl)
{
  return SG_GetProdLabel((tree) ATgetArgument(appl, 0));
}

/*}}}  */

/* Yield converts aprods to AsFix */
/*{{{  tree yieldTreeRecursive(parse_table *pt, tree t) */
static ATermTable yieldCache = NULL;
tree yieldTreeRecursive(parse_table *pt, tree t)
{
  tree      arg, res, newarg;
  ATermList args, newargs, ambs, tail;
  AFun      fun;
  ATerm     prod;

  if (!t) {
    return NULL;
  }

	res = (tree) ATtableGet(yieldCache, (ATerm) t);
	if (res != NULL) {
					return res;
	}

  switch(ATgetType(t)) {
  case AT_LIST:
    args = (ATermList) t;

    if (!ATisEmpty(args)) {
      arg = (tree) ATgetFirst(args);
      tail = ATgetNext(args);

      if (ATisEmpty(tail)) {
        newargs = ATempty;
      } else {
        newargs = (ATermList)yieldTreeRecursive(pt, (tree) tail);
      }
    
      newarg = (tree) yieldTreeRecursive(pt, arg);
      if (newarg) {
        if (ATisEqual(newarg, arg) && ATisEqual(newargs, tail)) {
								newargs = args;
        } else {
								newargs = ATinsert(newargs, (ATerm)newarg); 
        }
      }
      else {
							return NULL;
      }
    }
    else {
      newargs = ATempty;
    }
    return (tree)newargs;
  case AT_APPL:
    fun  = ATgetAFun(t);

    /*  A small sanity check */
    if (SG_FILTER && SG_FILTER_REJECT) {
      assert(fun != SG_Reject_AFun);
    }

    if(fun == SG_Amb_AFun) {
       ambs = (ATermList) ATgetArgument((ATerm) t, 0); /* get the ambs */
       if (ATgetLength(ambs) > 1) {
         SGnrAmb(SG_NR_INC);
         ambs = (ATermList) yieldTreeRecursive(pt, (tree) ambs);
	 if (ambs) {
           res  = ATsetArgument((ATermAppl) t, (ATerm) ambs, 0);
	 }
	 else {
           res = NULL;
	 }
       }
       else {
         res = yieldTreeRecursive(pt, (tree)ATgetFirst(ambs));
       }
    }
    else if (fun == SG_Cycle_AFun) {
      res = t;
    }
    else {
      prod = ATgetArgument((ATerm) t, 0); /* get the prod */
      args = (ATermList) ATgetArgument((ATerm) t, 1); /* get the args */
      args = (ATermList) yieldTreeRecursive(pt, (tree) args);
      if (args) {
        prod = (ATerm) SG_LookupProduction(pt, SG_GetProdLabel((tree) prod));
 
        res  = ATmakeAppl2(SG_Appl_AFun, prod, (ATerm) args);
      }
      else {
        res = NULL;
      }
    }

		ATtablePut(yieldCache, (ATerm) t, (ATerm) res);
    return res;
  }

  return t;
}

/*}}}  */

tree SG_YieldTree(parse_table *pt, tree t) 
{
				tree result = t; 
	/* without memoization, this algorithm would be
	 * exponential in the amount of ambiguities
	 */
  yieldCache = ATtableCreate(1024, 75);
  if (yieldCache == NULL) {
					ATwarning("Not enough memory for yielding\n");
				return NULL;
	}


	result = yieldTreeRecursive(pt, t);

	ATtableDestroy(yieldCache);

	return result;
}


/*
 SG_GtrPriority(l0, l1) returns true iff priority(l0) > priority(l0)
 */

/*{{{  static ATbool SG_GtrPriority(parse_table *pt, int argNumber ,  */

static ATbool SG_GtrPriority(parse_table *pt, int argNumber , 
                             ATermInt lt0, ATermInt lt1)
{
  ATermList prios = SG_LookupGtrPriority(pt, lt0);

  if (prios && ATindexOf(prios, (ATerm) lt1, 0) != -1) {
    return ATtrue;
  }
  else {
    ATermList prios;

    prios = SG_LookupArgGtrPriority(pt, lt0, ATmakeInt(argNumber));

    if (prios && ATindexOf(prios, (ATerm) lt1, 0) != -1) {
      return ATtrue;
    }
  }
  return ATfalse;
}

/*}}}  */
/*{{{  ATbool SGGtrPriority(parse_table *pt, int argNumber, label l0, label l1) */

ATbool SGGtrPriority(parse_table *pt, int argNumber, label l0, label l1)
{
  return SG_GtrPriority(pt, argNumber, ATmakeInt(l0), ATmakeInt(l1));
}

/*}}}  */

/*{{{  static int SG_ProdType_AFun(AFun f) */

static int SG_ProdType_AFun(AFun f)
{
  if (f == SG_Regular_AFun) {
    return SG_PT_REGULAR;
  }
  if (f == SG_Reject_AFun) {
    return SG_PT_REJECT;
  }
  if (f == SG_Eager_AFun) {
    return SG_PT_EAGER;
  }
  if (f == SG_Uneager_AFun) {
    return SG_PT_UNEAGER;
  }

  /*  None of the above...  */
  return -1;
}

/*}}}  */
/*{{{  static int SG_ProdType_Tree(tree t) */

static int SG_ProdType_Tree(tree t)
{
  int  TreeType = 0;

  TreeType = SG_ProdType_AFun(ATgetAFun(t));
  if(TreeType < 0) {
    ATabort("TreeType exception for %t\n", t);
  }
  return TreeType;
}

/*}}}  */

/* Recursive check whether a tree contains at least
 * one reject node.
 */

/*{{{  static ATbool SG_HasRejectProd(tree t) */

static ATbool SG_HasRejectProd(tree t)
{
  AFun     fun;

  if (ATgetType(t) == AT_APPL) {
    fun = ATgetAFun(t);
    if (fun == SG_Reject_AFun) {
      return ATtrue;
    }
  }
  return ATfalse;
}

/*}}}  */

/*{{{  static ATbool SG_ProdIsAvoid(int prodtype) */

static ATbool SG_ProdIsAvoid(int prodtype)
{
  return prodtype == SG_PT_UNEAGER;
} 

/*}}}  */
/*{{{  static ATbool SG_ProdIsPrefer(int prodtype) */

static ATbool SG_ProdIsPrefer(int prodtype)
{
  return prodtype == SG_PT_EAGER;
} 

/*}}}  */

/*{{{  static size_t SG_CountAvoidsInTree(tree t0) */

static size_t SG_CountAvoidsInTree(tree t0)
{
  ATermList ambs;
  size_t avoids = 0;
  AFun fun;

  switch (ATgetType(t0)) {
  case AT_APPL:
    fun = ATgetAFun((ATerm) t0);

    if(fun == SG_Amb_AFun) {
      ambs = (ATermList) ATgetArgument((ATermAppl) t0, 0);

      return SG_CountAvoidsInTree((tree) ATgetFirst(ambs));
    }
    else if (fun == SG_Cycle_AFun) {
      return 0;
    }
    else {
      if (SG_ProdIsAvoid(SG_ProdType_Tree(t0))) {
        return 1;
      }
      else if (SG_ProdIsPrefer(SG_ProdType_Tree(t0))) {
        return 0;
      }

      return SG_CountAvoidsInTree((tree)ATgetArgument((ATermAppl) t0, 1));
    }
    break;
  case AT_LIST:
    for (; !ATisEmpty((ATermList) t0); t0 = (tree) ATgetNext((ATermList) t0)) {
      ATerm elem = ATgetFirst((ATermList) t0);
      avoids += SG_CountAvoidsInTree((tree) elem);
    }
    break;
  case AT_INT:
  case AT_REAL:
  case AT_PLACEHOLDER:
  case AT_BLOB:
  default:
    break;
  }

  return avoids;
}     

/*}}}  */
/*{{{  static size_t SG_CountPrefersInTree(tree t0) */

static size_t SG_CountPrefersInTree(tree t0)
{
  ATermList ambs;
  size_t prefers = 0;
  AFun fun;

  switch (ATgetType(t0)) {
  case AT_APPL:
    fun = ATgetAFun((ATerm) t0);

    if(fun == SG_Amb_AFun) {
      ambs = (ATermList) ATgetArgument((ATermAppl) t0, 0);

      return SG_CountPrefersInTree((tree) ATgetFirst(ambs));
    }
    else if (fun == SG_Cycle_AFun) {
      return 0;
    }
    else {
      if (SG_ProdIsPrefer(SG_ProdType_Tree(t0))) {
        return 1;
      }
      else if (SG_ProdIsAvoid(SG_ProdType_Tree(t0))) {
        return 0;
      }

      return SG_CountPrefersInTree((tree)ATgetArgument((ATermAppl) t0, 1));
    }
    break;
  case AT_LIST:
    for (; !ATisEmpty((ATermList) t0); t0 = (tree) ATgetNext((ATermList) t0)) {
      ATerm elem = ATgetFirst((ATermList) t0);
      prefers += SG_CountPrefersInTree((tree) elem);
    }
    break;
  case AT_INT:
  case AT_REAL:
  case AT_PLACEHOLDER:
  case AT_BLOB:
  default:
    break;
  }

  return prefers;
}     

/*}}}  */

/* SG_CountInjectionsInTree counts injections using
 * a parse tree, instead of using the multiset directly.
 *
 * this is due to the fact that the multiset is not defined
 * on ambiguity clusters, but injection count is.
 */

/*{{{  static size_t SG_CountInjectionsInTree(parse_table *pt, tree t) */

static size_t SG_CountInjectionsInTree(parse_table *pt, tree t)
{
  label l;
  size_t injections = 0;
  AFun fun;
  tree kid;

  if (ATgetType(t) == AT_APPL) {
    fun = ATgetAFun((ATerm) t);
  
    if (fun != SG_Amb_AFun && fun != SG_Cycle_AFun) {
      l = SG_GetApplProdLabel(t);

      if (SG_ProdIsInjection(pt, l)) {
        injections++;
        kid = (tree)ATgetFirst((ATermList)ATgetArgument((ATermAppl) t, 1));
        injections += SG_CountInjectionsInTree(pt, kid);
      }
    }
  }
  return injections;
}    

/*}}}  */

/*{{{  static size_t SG_CountAllInjectionsInTree(parse_table *pt, tree t) */

static size_t SG_CountAllInjectionsInTree(parse_table *pt, tree t)
{
  label l;
  ATermList ambs;
  ATerm kids;
  size_t injections = 0;
  AFun fun;
  tree first;

  switch (ATgetType(t)) {
  case AT_APPL:
    fun = ATgetAFun((ATerm) t);

    l = SG_GetApplProdLabel(t);

    if (fun == SG_Amb_AFun) {
      ambs = (ATermList) ATgetArgument((ATermAppl) t, 0);
      /* Either we have a singleton or
       * the injection count of all elements in the cluster are
       * equal due to earlier filtering, so we just take the first.
       */
      first = (tree) ATgetFirst(ambs);
      injections = SG_CountAllInjectionsInTree(pt, first);
    }
    else if (fun == SG_Cycle_AFun) {
      /* injection counting is meaningless for trees that have
       * cycles, so return -1, and let the caller handle this case
       */
      return -1;
    }  
    else {
      size_t kidsInjections = 0;
      kids = ATgetArgument((ATermAppl) t, 1);

      if (SG_ProdIsInjection(pt, l)) {
        injections++;
      }

      kidsInjections = SG_CountAllInjectionsInTree(pt, (tree) kids);

      if (kidsInjections != -1) {
	injections+=kidsInjections;
      }
      else {
	injections = -1;
      }
    }
    break;
  case AT_LIST:
    for (; !ATisEmpty((ATermList) t); t = (tree) ATgetNext((ATermList) t)) {
      ATerm elem = ATgetFirst((ATermList) t);
      size_t kidInjections;

      kidInjections = SG_CountAllInjectionsInTree(pt, (tree) elem);

      if (kidInjections == -1) {
	injections = -1;
	break;
      }
      else {
	injections += kidInjections;
      }
    }
    break;
  case AT_INT:
  case AT_REAL:
  case AT_PLACEHOLDER:
  case AT_BLOB:
  default:
    break;
  }

  return injections;
}     

/*}}}  */

/* Below we define the filters that compare two trees */

/*
 SG_MoreEager(t0, t1) returns true iff either
    - t0 is eager and t1 is regular or avoid
    - t0 is regular and t1 is avoid
 */

/*{{{  static tree SG_Jump_Over_Injections(parse_table *pt, tree t) */

static tree SG_Jump_Over_Injections(parse_table *pt, tree t)
{
  if (ATgetType(t) == AT_APPL &&
      ATgetAFun(t) != SG_Amb_AFun &&
      ATgetAFun(t) != SG_Cycle_AFun) {
    label prod = SG_GetApplProdLabel(t);
        
    while (SG_ProdIsUserDefinedInjection(pt, prod)) {
      ATermList injSons = (ATermList)ATgetArgument((ATerm)t, 1);
      t = (tree)ATgetFirst(injSons);
  
      if (ATgetType(t) == AT_APPL &&
          ATgetAFun(t) != SG_Amb_AFun &&
	  ATgetAFun(t) != SG_Cycle_AFun) {
        prod = SG_GetApplProdLabel(t);
      }
      else {
        return t;
      }
    }
  }
  return t;
}

/*}}}  */
/*{{{  static tree SG_Jump_Over_Injections_Modulo_Eagerness(parse_table *pt, tree t) */

static tree SG_Jump_Over_Injections_Modulo_Eagerness(parse_table *pt, tree t)
{
  if (ATgetType(t) == AT_APPL &&
      ATgetAFun(t) != SG_Amb_AFun &&
      ATgetAFun(t) != SG_Cycle_AFun &&
      SG_ProdType_Tree(t) != SG_PT_EAGER &&
      SG_ProdType_Tree(t) != SG_PT_UNEAGER) {
    label prod = SG_GetApplProdLabel(t);

    while (SG_ProdIsInjection(pt, prod)) {
      ATermList injSons = (ATermList)ATgetArgument((ATerm)t, 1);
      t = (tree)ATgetFirst(injSons);

      if (ATgetType(t) == AT_APPL &&
          ATgetAFun(t) != SG_Amb_AFun &&
	  ATgetAFun(t) != SG_Cycle_AFun &&
          SG_ProdType_Tree(t) != SG_PT_EAGER &&
          SG_ProdType_Tree(t) != SG_PT_UNEAGER) {
        prod = SG_GetApplProdLabel(t);
      }
      else {
        return t;
      }
    }
  }
  return t;
}

/*}}}  */

/*{{{  static ATbool SG_MoreEager(int prodtype0, int prodtype1) */

static ATbool SG_MoreEager(int prodtype0, int prodtype1)
{
  if (prodtype0 != prodtype1 && 
      (prodtype0 == SG_PT_EAGER
       || prodtype1 == SG_PT_UNEAGER)) {
    return ATtrue;
  }

  return ATfalse;
}

/*}}}  */
/*{{{  static ATbool SG_EagerPriority_Tree(parse_table *pt, tree t0, tree t1) */

static ATbool SG_EagerPriority_Tree(parse_table *pt, tree t0, tree t1)
{
  tree newt0, newt1;

  if (SG_MoreEager(SG_ProdType_Tree(t0), SG_ProdType_Tree(t1))) {
    return ATtrue;
  }

  newt0 = SG_Jump_Over_Injections_Modulo_Eagerness(pt, t0);
  newt1 = SG_Jump_Over_Injections_Modulo_Eagerness(pt, t1);
  if (ATgetType(newt0) == AT_APPL &&
      ATgetAFun(newt0) != SG_Amb_AFun &&
      ATgetAFun(newt0) != SG_Cycle_AFun &&
      ATgetType(newt1) == AT_APPL &&
      ATgetAFun(newt1) != SG_Amb_AFun &&
      ATgetAFun(newt1) != SG_Cycle_AFun) {
    if (SG_MoreEager(SG_ProdType_Tree(newt0), SG_ProdType_Tree(newt1))) {
      return ATtrue;
    }
  }
  return ATfalse;
}

/*}}}  */
/*{{{  static tree SG_Direct_Eagerness_Filter(parse_table *pt, tree t0, tree t1) */

static tree SG_Direct_Eagerness_Filter(parse_table *pt, tree t0, tree t1)
{
  ATermInt l0 = SG_GetATint(SG_GetApplProdLabel(t0), 0);
  ATermInt l1 = SG_GetATint(SG_GetApplProdLabel(t1), 0);

  if (SG_EagerPriority_Tree(pt, t0, t1)) {
    IF_DEBUG(ATfprintf(SG_log(), "(Un)Eagerness Priority: %t > %t\n", l0, l1))
    return t0;
  }
  if (SG_EagerPriority_Tree(pt, t1, t0)) {
    IF_DEBUG(ATfprintf(SG_log(), "(Un)Eagerness Priority: %t < %t\n", l0, l1))
    return t1;
  }

  return NULL;
}

/*}}}  */

/*{{{  static int countDistinctArguments(ATermList args0, ATermList args1) */

static int countDistinctArguments(ATermList args0, ATermList args1)
{
  int diffs = 0;
  while (!ATisEmpty(args0)) {

    if (!ATisEqual(ATgetFirst(args0), ATgetFirst(args1))) {
      diffs++;
    }

    args1 =  ATgetNext(args1);
    args0 =  ATgetNext(args0);
  }
  return diffs;
}

/*}}}  */

/*{{{  static tree SG_Indirect_Eagerness_Filter(parse_table *pt, tree t0, tree t1) */

static tree SG_Indirect_Eagerness_Filter(parse_table *pt, tree t0, tree t1)
{
  ATermInt  l0 = SG_GetATint(SG_GetApplProdLabel(t0), 0);
  ATermInt  l1 = SG_GetATint(SG_GetApplProdLabel(t1), 0);
  tree max;

  if (ATgetAFun(t0) == SG_Amb_AFun
      ||
      ATgetAFun(t1) == SG_Amb_AFun
      || 
      ATgetAFun(t0) == SG_Cycle_AFun
      ||
      ATgetAFun(t1) == SG_Cycle_AFun) {
    return NULL;
  }
  if (!ATisEqual(l0,l1)) {
    return SG_Direct_Eagerness_Filter(pt, t0, t1);
  }
  else {
    ATermList args0 = (ATermList)ATgetArgument((ATerm)t0, 1);
    ATermList args1 = (ATermList)ATgetArgument((ATerm)t1, 1);
    int diffs = countDistinctArguments(args0, args1);
    
    if (diffs == 1) {
      while (!ATisEmpty(args0)) {
        tree arg0 = (tree)ATgetFirst(args0);
        tree arg1 = (tree)ATgetFirst(args1);

        if (!ATisEqual(arg0, arg1)) {
          max = SG_Indirect_Eagerness_Filter(pt, arg0, arg1);

          if (max) {
            if (ATisEqual(max, arg0)) {
	      return t0;
	    }
	    else {
	      return t1;
	    }
	  }
	  else {
	    return NULL;
	  }
        }
         
        args1 = ATgetNext(args1);
        args0 = ATgetNext(args0);
      }
    }
  }
  return NULL;
}

/*}}}  */

/*
 * This filter is needed because it can happen that one tree
 * contains "avoid"s and the other tree contains "prefer"s.
 * As soon as this happens the MultiSets of both trees become
 * symmetric. The filter "SG_FilterOnPreferAndAvoid" counts
 * the number of prefers and avoids in both trees and tries
 * to make a comparison between the two.
 * 
 *  t1 is prefer over t2 if 
 *  #prefers in t1 >= #prefers in t2 && #avoids in t1 <= #avoids in t2)      
 */

/*{{{  static tree SG_Count_Eagerness_Filter(parse_table *pt, tree t0, tree t1) */

static tree SG_Count_Eagerness_Filter(parse_table *pt, tree t0, tree t1)
{
  tree max = NULL;
  ATermInt  l0 = SG_GetATint(SG_GetApplProdLabel(t0), 0);
  ATermInt  l1 = SG_GetATint(SG_GetApplProdLabel(t1), 0);
  int pT0, pT1, aT0, aT1;

  IF_STATISTICS(SG_CountEagernessGtrCalls(SG_NR_INC));

  if (SG_PT_HAS_PREFERS(pt) || SG_PT_HAS_AVOIDS(pt)) {
    pT0 = SG_CountPrefersInTree(t0);
    pT1 = SG_CountPrefersInTree(t1);
    aT0 = SG_CountAvoidsInTree(t0);
    aT1 = SG_CountAvoidsInTree(t1);

    if (((pT0 > pT1) && (aT0 <= aT1)) ||
        ((pT0 == pT1) && (aT0 < aT1))) { 
      IF_DEBUG(ATfprintf(SG_log(), "Eagerness Priority: %t > %t\n", l0, l1))
      max = t0;
    }
  
    if (((pT1 > pT0) && (aT1 <= aT0)) ||
        ((pT1 == pT0) && (aT1 < aT0))) {
      if (max != NULL) {
        IF_DEBUG(ATfprintf(SG_log(),
                           "Symmetric eagerness priority relation %t %t\n", 
                           l0, l1))
        max = NULL;
      }
      else { 
        IF_DEBUG(ATfprintf(SG_log(), "Eagerness Priority: %t < %t\n", l0, l1))
        max = t1;
      }
    }
  }
  
  if (max) {
    IF_STATISTICS(SG_CountEagernessFilterSucceeded(SG_NR_INC));
  }

  return max;
}

/*}}}  */

#if 0
/*{{{  static tree SG_InjectionCount_Filter(parse_table *pt, tree t0, tree t1) */

static tree SG_InjectionCount_Filter(parse_table *pt, tree t0, tree t1)
{
  ATermInt  l0 = SG_GetATint(SG_GetApplProdLabel(t0), 0);
  ATermInt  l1 = SG_GetATint(SG_GetApplProdLabel(t1), 0);
  size_t in0   = SG_CountInjectionsInTree(pt, t0);
  size_t in1   = SG_CountInjectionsInTree(pt, t1);
 
  IF_STATISTICS(
    SG_InjectionCountCalls(SG_NR_INC);
    if (in0 != in1) {
      SG_InjectionFilterSucceeded(SG_NR_INC);
    }
    );

  if (in0 > in1) {
    IF_DEBUG(ATfprintf(SG_log(), "Injection Priority: %t < %t (%d > %d)\n",
      				 l0, l1, in0, in1))
      return t1;
  } else if (in0 < in1) {
    IF_DEBUG(ATfprintf(SG_log(), "Injection Priority: %t > %t (%d < %d)\n",
      				 l0, l1, in0, in1))
      return t0;
  }

  return NULL;
}

/*}}}  */
#endif

/*{{{  static tree SG_FullInjectionCount_Filter(parse_table *pt, tree t0, tree t1) */

static tree SG_FullInjectionCount_Filter(parse_table *pt, tree t0, tree t1)
{
  ATermInt  l0 = SG_GetATint(SG_GetApplProdLabel(t0), 0);
  ATermInt  l1 = SG_GetATint(SG_GetApplProdLabel(t1), 0);
  size_t in0   = SG_CountAllInjectionsInTree(pt, t0);
  size_t in1   = SG_CountAllInjectionsInTree(pt, t1);


  IF_STATISTICS(
    SG_InjectionCountCalls(SG_NR_INC);
    if (in0 != in1) {
      SG_InjectionFilterSucceeded(SG_NR_INC);
    }
    );

  if (in0 == -1 || in1 == -1) {
    /* one of them had a cycle, abort */
    return NULL;
  } 

  if (in0 > in1) {
    IF_DEBUG(ATfprintf(SG_log(), "Injection Priority: %t < %t (%d > %d)\n",
      				 l0, l1, in0, in1))
      return t1;
  } else if (in0 < in1) {
    IF_DEBUG(ATfprintf(SG_log(), "Injection Priority: %t > %t (%d < %d)\n",
      				 l0, l1, in0, in1))
      return t0;
  }

  return NULL;
}

/*}}}  */

/*
 SG_Filter -- a generic hook to add disambiguating `filters'

 Arguments:  the current parse table
 two terms
 Returns:    the preferred term of the two, or NULL if there is no
 filter that prefers either one of them
 */
/*{{{  static tree SG_Filter(parse_table *pt, tree t0, tree t1) */

static tree SG_Filter(parse_table *pt, tree t0, tree t1)
{
  tree max = NULL;
 
  /* equal terms just select on */
  if (ATisEqual(t0, t1)) {
    return t0;
  }
 
  /* only try these filters if the parsetable contains such info */
    /*  Next, inspect direct eager/avoid status  */
  
/*
  if (SG_PT_HAS_PREFERENCES(pt)) {
    
    if (SG_FILTER_DIRECTEAGERNESS) {
      max = SG_Direct_Eagerness_Filter(pt, t0, t1);
      if(max) {
	return max;
      }
    }
  }
*/
  
  

  /* An experiment to see whether the ambiguity node can
   * be pushed down the tree. This will only be done
   * if only one argument of the node differs.
   */
  if (SG_PT_HAS_PREFERENCES(pt)) {
    if (SG_FILTER_DIRECTEAGERNESS) {
      max = SG_Indirect_Eagerness_Filter(pt, t0, t1);
      if (max) {
	return max;
      }
    }
  }

  /* Last resort if none of the previous filters was successfull
   * this filter might resolve some ambiguities.
   */

  if (SG_PT_HAS_PREFERENCES(pt)) {
    /* deep eagerness filter */
    if (SG_FILTER_EAGERNESS) {
      max = SG_Count_Eagerness_Filter(pt, t0, t1);
      if (max) {
	return max;
      }
    }
  }

  /* injectionscount filter */
  if (SG_FILTER_INJECTIONCOUNT) {
    max = SG_FullInjectionCount_Filter(pt, t0, t1);
    if (max) {
      return max;
    }
  }

  return max;
}

/*}}}  */

/*{{{  ATermList SG_FilterAmbList(parse_table *pt, ATermList ambs, tree t) */

ATermList SG_FilterAmbList(parse_table *pt, ATermList ambs, tree t)
{
  ATermList  new = ATempty;
  tree       amb, max;
  ATbool     t_filtered_out = ATfalse;

  if (ATisEmpty(ambs)) {
    return ATmakeList1((ATerm) t);
  }

  /*  Filter term against all terms in ambiguity cluster  */

  for (;!ATisEmpty(ambs); ambs = ATgetNext(ambs)) {
    amb = (tree) ATgetFirst(ambs);

    /* Which of the two has a higher priority? */
    max = SG_Filter(pt, t, amb);

    if(max == NULL) {
       /* it's a draw, so amb is added */
       new = ATinsert(new, (ATerm) amb);
    } else {
      if (ATisEqual(max, amb)) { 
        /* amb wins, so it is added, but
         * we prevent t from being added 
         */ 
        t_filtered_out = ATtrue;
        new = ATinsert(new, (ATerm) amb);  
      }
      /* else t wins for this case, so amb is not added */
    }

  }
  
  if (!t_filtered_out) {
    new = ATinsert(new, (ATerm) t);
  }
    
  return new;
}

/*}}}  */

/*{{{  static tree SG_Replace_Under_Injections(tree t, tree injT, tree newTree) */

static tree SG_Replace_Under_Injections(tree t, tree injT, tree newTree)
{
  if (ATisEqual(t, injT)) {
    return newTree;
  }
  else {
    ATermList sons = (ATermList)ATgetArgument((ATerm) t, 1);
    tree newSon = SG_Replace_Under_Injections((tree)ATgetFirst(sons), 
                                              injT, newTree);
    return ATsetArgument((ATermAppl)t, (ATerm)ATmakeList1((ATerm)newSon), 1);
  }
}

/*}}}  */

/*{{{  static tree SG_Priority_Filter(parse_table *pt, tree t, label prodl) */

static tree SG_Priority_Filter(parse_table *pt, tree t, label prodl)
{
  ATermList newambs = ATempty;
  ATermList sons    = (ATermList)ATgetArgument((ATerm) t, 1);
  ATermList newSons = ATempty;
  ATermInt l0       = SG_GetATint(prodl, 0);
  ATermInt l1;
  label proda;
  int argNumber = 0;

  for (;!ATisEmpty(sons); sons = ATgetNext(sons), argNumber++) {
    tree son = (tree)ATgetFirst(sons);
    tree injSon = SG_Jump_Over_Injections(pt, son);

    if (ATgetType(injSon) == AT_APPL &&
        ATgetAFun(injSon) == SG_Amb_AFun) {
      ATermList ambs = (ATermList)ATgetArgument((ATerm)injSon, 0);

      newambs = ATempty;
      for (;!ATisEmpty(ambs); ambs = ATgetNext(ambs)) {
        tree amb = (tree) ATgetFirst(ambs);
        tree injAmb = SG_Jump_Over_Injections(pt, amb);

        if (ATgetType(injAmb) == AT_APPL) {
          proda = SG_GetApplProdLabel(injAmb);
          l1 = SG_GetATint(proda, 0);
 
          if (!SG_GtrPriority(pt, argNumber, l0, l1)) {
            newambs = ATinsert(newambs, (ATerm) amb);
          }
          else {
            IF_DEBUG(ATfprintf(SG_log(),
                               "Higher priority node %d removed.\n",
                               prodl));
          }
        }
      }
      if (!ATisEmpty(newambs)) {
        tree orgInjSon = injSon;

        if (ATgetLength(newambs) > 1) {
          injSon = ATsetArgument((ATermAppl)injSon, (ATerm)newambs, 0);
        }
        else {
          injSon = (tree)ATgetFirst(newambs);
        }
        son = SG_Replace_Under_Injections(son, orgInjSon, injSon);
      }
      else {
        return NULL;
      }
    }
    else if (ATgetType(injSon) == AT_APPL 
	     && ATgetAFun(injSon) != SG_Cycle_AFun) {
      proda = SG_GetApplProdLabel(injSon);
      l1 = SG_GetATint(proda, 0);
      
      if (SG_GtrPriority(pt, argNumber, l0, l1)) {
        return NULL;
      }
    }
    newSons = ATinsert(newSons, (ATerm)son);
  }
  return ATsetArgument((ATermAppl)t, (ATerm)ATreverse(newSons), 1);
}

/*}}}  */

/*{{{  static tree SG_Associativity_Priority_Filter(parse_table *pt, tree t) */

static tree SG_Associativity_Priority_Filter(parse_table *pt, tree t)
{
  /* If the tree has an associativity prod and it has an
   * ambiguity cluster as son, it is checked whether there
   * is an unresolved conflict!
   */

  if (ATgetType(t) == AT_APPL 
      && ATgetAFun(t) != SG_Amb_AFun
      && ATgetAFun(t) != SG_Cycle_AFun) {
    label     prodl   = SG_GetApplProdLabel(t);

    if (SG_FILTER_PRIORITY) {
      if (SG_hasProductionPriority(pt, ATmakeInt(prodl))) {
        return SG_Priority_Filter(pt, t, prodl);
      }
    }
  }  
  return t;
}

/*}}}  */

static tree SG_FilterTreeRecursive(parse_table *pt, tree t, size_t *pos,
                 ATbool inAmbs, ATbool cycle, int level);

/*{{{  static tree SG_FilterAmbs(parse_table *pt, ATermList ambs, size_t *pos,  */

static tree SG_FilterAmbs(parse_table *pt, ATermList ambs, size_t *pos, 
			  ATbool cycle, int level)
{
  ATermList newambs;
  tree amb, newamb;
  ATermList localAmbs = ambs;
  size_t saved_pos = *pos;
  size_t new_pos = saved_pos;

  if (SG_FILTER) {
    if (SG_FILTER_REJECT && SG_PT_HAS_REJECTS(pt)) {
      for (;!ATisEmpty(localAmbs); localAmbs = ATgetNext(localAmbs)) {
        amb = (tree) ATgetFirst(localAmbs);
        if (SG_HasRejectProd(amb)) {
	  /* We need to filter the first tree in order to get the position
	   * information correct.
	   */
          SG_FilterTreeRecursive(pt, amb, pos, ATtrue, cycle, level+1);

          return NULL;
        }
      }
    }
  }

  /* first we do the children */
  newambs = ATempty;
  for (;!ATisEmpty(ambs); ambs = ATgetNext(ambs)) {
    *pos = saved_pos;
    amb = (tree) ATgetFirst(ambs);
    newamb = SG_FilterTreeRecursive(pt, amb, pos, ATtrue, cycle, level+1);

    if (*pos != saved_pos) {
      new_pos = *pos;
    }
    

    if (newamb) {
      newambs = ATinsert(newambs, (ATerm)newamb);
    }
  }

  *pos = new_pos;
  ambs = newambs;

  if (SG_FILTER) {
    IF_DEBUG(ATfprintf(SG_log(), "Ambiguity cluster: %d nodes originally.\n", 
                       ATgetLength(ambs)))
   
    /* now we handle this ambiguity cluster */
    if (ATgetLength(ambs) > 1) {
      ATermList ambscopy = ambs;
      ATermList ambschanged;

      /* for every node, compare it to all the others. If the node
       * has been filtered out already, we can skip it.
       */
      for (;!ATisEmpty(ambscopy); ambscopy = ATgetNext(ambscopy)) {
        amb = (tree) ATgetFirst(ambscopy);
        ambschanged = ATremoveElement(ambs, (ATerm) amb);
        if (!ATisEqual(ambs, ambschanged)) {
          ambs = SG_FilterAmbList(pt, ambschanged, amb);
        }
      }
    }       
  } 
  
  if (ATgetLength(ambs) == 0) {
    return (tree)NULL;
  }

  if (ATgetLength(ambs) == 1) {
    tree first = (tree)ATgetFirst(ambs);
      return first;
  }

  /* if there are ambiguities left, create an amb node */
  IF_DEBUG(ATfprintf(SG_log(), 
                     "Ambiguity cluster: %d equivalent node(s).\n", 
                     ATgetLength(ambs)))
  return (tree)ATmakeAppl1(SG_Amb_AFun,(ATerm) ambs);
}

/*}}}  */
/*{{{  static tree SG_FilterTreeRecursive(parse_table *pt, tree t, size_t *pos, */

static tree SG_FilterTreeRecursive(parse_table *pt, tree t, size_t *pos,
                                   ATbool inAmbs, ATbool cycle,
				   int level)
{
  int type = ATgetType(t);
  ATermList args, ambs;
  ATermList newargs, tail, newtail;
  tree arg, newt, newarg;
  ATerm key;
  ATerm clusterIndex = NULL;

  switch(type) {
  case AT_APPL:
    if (SG_InputAmbiMapIsSet(*pos) > 0) {
      ambs = (ATermList) SG_AmbiTablesGetCluster((ATerm) t, *pos);
      clusterIndex = (ATerm) SG_AmbiTablesGetIndex((ATerm) t, *pos);

      /*ATwarning("checking for cycle\n");*/
      if (!inAmbs && clusterIndex && SG_getLevel(clusterIndex) != -1) {

	if (SG_FILTER_REMOVECYCLES) {
	  /*ATwarning("CYCLE DETECTED\n");*/
	  return NULL;
	}
	else {
	  tree first = (tree) ATgetFirst(ambs);
	  PT_Production prod = (PT_Production) 
	    SG_LookupProduction(pt, SG_GetApplProdLabel(first));
	  PT_Symbol rhs = PT_getProductionRhs(prod);
	  int ambLevel = SG_getLevel(clusterIndex);
	 
	  return (tree) PT_makeTreeCycle(rhs, level - ambLevel);
	}
      }
    }
    else {
      ambs = ATempty;
    }

    if (!inAmbs && !ATisEmpty(ambs)) {
      IF_VERBOSE(
        SG_PrintStatusBar("sglr: filtering", 
                          SG_ClustersVisited(SG_NR_INC), SGnrAmb(SG_NR_ASK));
      )

      key = SG_CreateAmbiKey((ATerm) ambs, *pos);

      newt = (tree)ATtableGet(resolvedtable, key);
      if (!newt) {
	SG_setLevel(clusterIndex, level);
        newt = SG_FilterAmbs(pt, ambs, pos, cycle, level);
	SG_unsetLevel(clusterIndex);
        if (newt) {
	  ATtablePut(resolvedtable, key, (ATerm) newt);
	  ATtablePut(postable, key, (ATerm)ATmakeInt(*pos));
        }
        else {
          return NULL;
        }
      }
      else {
        *pos = ATgetInt((ATermInt)ATtableGet(postable, key));
      }
      t = newt;
    }
    else {
      args = (ATermList) ATgetArgument((ATerm) t, 1); /* get the kids */
      newargs = (ATermList)SG_FilterTreeRecursive(pt, (tree) args, pos,
                          ATfalse, cycle, level);
      if (SG_FILTER) {
        if (SG_FILTER_REJECT && SG_PT_HAS_REJECTS(pt)) {
	  /* The check for reject productions has to be done afterwards
	   * in order to get correct position information.
	   */
          if (SG_HasRejectProd(t)) {
            return NULL;
          }
        }
      }
      if (newargs) {
        t = (tree)ATsetArgument((ATermAppl) t, (ATerm) newargs, 1);
      }
      else {
        return NULL;
      }
    }
  break;
  case AT_LIST:
    args = (ATermList) t;

    if (!ATisEmpty(args)) {
      arg = (tree) ATgetFirst(args);
      tail = ATgetNext(args);

      newarg = (tree) SG_FilterTreeRecursive(pt, arg, pos, ATfalse, 
					     cycle, level+1);

      if (ATisEmpty(tail)) {
        newtail = ATempty;
      } 
      else {
        newtail = (ATermList)SG_FilterTreeRecursive(pt, (tree)tail, pos,
                          ATfalse, cycle, level);
        if (!newtail) {
          return NULL;
        }
      }
    
      if (newarg) {
        if (!ATisEqual((ATerm)newarg, (ATerm)arg) || 
            !ATisEqual(newtail, tail)) {
          t = (tree)ATinsert(newtail, (ATerm)newarg); 
        }
      }
      else {
        return NULL;
      }
    }
  break;
  case AT_INT:
    (*pos)++;
    break;  
  default:
  break;
  }

  if (SG_FILTER) {
    return SG_Associativity_Priority_Filter(pt, t);
  }
  else {
    return t;
  }
}

/*}}}  */

/*{{{  tree SG_FilterTree(parse_table *pt, tree t) */

tree SG_FilterTree(parse_table *pt, tree t)
{
   int nrAmbs;
   tree newT;
   size_t pos = 0;

   /* We only cache multisets for ambiguity clusters
    * so we create a table with at most 
    * #(ambiguity nodes) elements.
    */

   resolvedtable = ATtableCreate(2048, 75);
   postable = ATtableCreate(2048, 75);

   nrAmbs = SGnrAmb(SG_NR_ASK);
   IF_VERBOSE(SG_ClustersVisited(SG_NR_ZERO));

   SG_initLevels();
   newT = SG_FilterTreeRecursive(pt, t, &pos, ATfalse, ATfalse, 0);
   SG_cleanupLevels();
   
   IF_VERBOSE(
      /* print 100% bar, the rest was solved by caching ambclusters */
      SG_PrintStatusBar("sglr: filtering", 
	    SGnrAmb(SG_NR_ASK), SGnrAmb(SG_NR_ASK));
      SG_PrintDotAndNewLine();
      )

   ATtableDestroy(resolvedtable);
   ATtableDestroy(postable);

   return newT; 
}

/*}}}  */

/*{{{  tree SG_SelectOnTopSort(parse_table *pt, tree t, const char *sort) */

tree SG_SelectOnTopSort(parse_table *pt, tree t, const char *sort)
{
  ATermList allambs;
  ATerm amb, prod;
  ATermList newambs = ATempty;
  label l;
  char *prodsort;
  ATermInt index;

  index = SG_AmbiTablesGetIndex((ATerm) t, 0);
  allambs = SG_AmbiTablesGetClusterOnIndex(index);

  if (!ATisEmpty(allambs)) {
/* We have at least one tree in the ambiguity cluster
 * and for all trees in this cluster we have to check
 * whether it has the sort that was expected.
 * If all trees are removed a "NULL" tree is returned.
 */
    for (; !ATisEmpty(allambs); allambs = ATgetNext(allambs)) {
      amb = ATgetFirst(allambs);
      l = SG_GetApplProdLabel((tree) amb);
      prod = (ATerm) SG_LookupProduction(pt, l);
      if (ATmatch(prod, 
                  "prod([cf(opt(layout)),cf(sort(<str>)),cf(opt(layout))],"
                  "sort(\"<START>\"),no-attrs)", &prodsort)) {
        if (!strcmp(prodsort, sort)) {
          newambs = ATinsert(newambs, amb);
        }
      }
    }
    SG_AmbiTablesUpdateCluster(index, newambs);

    if (ATisEmpty(newambs)) {
      return NULL;
    }
    else {
      return t;
    }
  }
  else {
/* We have only one tree and for this tree we have to check
 * whether it has the sort that was expected.
 * If this tree is removed a "NULL" tree is returned.
 */
    l = SG_GetApplProdLabel((tree) t);
    prod = (ATerm) SG_LookupProduction(pt, l);
    if (ATmatch(prod, 
                "prod([cf(opt(layout)),cf(sort(<str>)),cf(opt(layout))],"
                "sort(\"<START>\"),no-attrs)", &prodsort)) {
      if (!strcmp(prodsort, sort)) {
        return t;
      }
    }
  }
  return NULL;
}

/*}}}  */
