/* Disclaimer: guaranteed to the spacebar(tm) */

#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <MEPT-utils.h>

#include "pandora.h"

/*{{{  Declarations */
static BOX_Box treeToBox(PT_Tree tree);
/*}}}  */

/*{{{  static char *escapeQuotes(const char *input) */

static char *escapeQuotes(const char *input)
{
  static char *buf = NULL;
  const char *p;
  int len;
  char *s;

  len = strlen(input);
  buf = realloc(buf, len*3 + 1);

  p = input;
  s = buf;
  while (p && *p) {
    if (*p == '"' || *p == '\\') {
      *s++ = '\\';
      *s++ = '\\';
    }
    *s++ = *p++;
  }
  *s++ = '\0';

  return buf;
}

/*}}}  */
/*{{{  static char *quoteString(const char *input)  */

static char *quoteString(char *input) 
{
  static char *buf = NULL;
  char *s = NULL;
  const char *p = NULL;
  int len;
  
  len = strlen(input) + 3;
  buf = realloc(buf, len);
  
  p = input;
  s = buf;
  *s++ = '"';
  while (p && *p) {
    *s++ = *p++;
  }
  *s++ = '"';
  *s++ = '\0';

  return buf;
}

/*}}}  */

/*{{{  static ATbool isLayout(const char *input) */

static ATbool isLayout(const char *input)
{
  const char *p = NULL;

  p = input;
  while (p && *p) {
    if (!isspace((int)*p++))
    {
      return ATfalse;
    }
  }
  return ATtrue;
}

/*}}}  */
/*{{{  static char *stripLayout(const char *input) */

static char *stripLayout(const char *input)
{
  static char *buf = NULL;
  const char *s = NULL, *f = NULL;
  int len;

  if (input == NULL)
  {
    return NULL;
  }

  len = strlen(input);
  if (len == 0 || isLayout(input))
  {
    return "";
  }

  buf = realloc(buf, len + 1);

  s = input;
  while (isspace((int)*s))
  {
    s++;
  }

  f = input + len - 1;
  while (f > s && isspace((int)*f))
  {
    f--;
  }

  len = f - s + 1;
  strncpy(buf, s, len);
  buf[len] = '\0';

  return buf;
}

/*}}}  */
/*{{{  static PT_Args skipLayout(PT_Args args) */

static PT_Args skipLayout(PT_Args args)
{
  while (!PT_isArgsEmpty(args) && PT_isTreeLayout(PT_getArgsHead(args)))
  {
    args = PT_getArgsTail(args);
  }
  return args;
}

/*}}}  */

/*{{{  static ATbool hasProductionFromBoxAttribute(PT_Production prod) */

static ATbool hasProductionFromBoxAttribute(PT_Production prod)
{
  return PT_hasProductionCertainAttr(prod,
				     PT_makeAttrTerm(ATparse("from-box")));
}

/*}}}  */
/*{{{  static ATbool hasProductionToBoxAttribute(PT_Production prod) */

static ATbool hasProductionToBoxAttribute(PT_Production prod)
{
  return PT_hasProductionCertainAttr(prod,
				     PT_makeAttrTerm(ATparse("to-box")));
}

/*}}}  */
 
/*{{{  static ATbool isIndentedType(PT_Production production) */

static ATbool isIndentedType(PT_Production production)
{
  ATbool expectTerminal = ATtrue;
  PT_Symbol symbol;
  PT_Symbols productionLhs; 

  if (!PT_hasProductionLhs(production)) 
  {
    return ATfalse;
  }
  
  productionLhs = PT_getProductionLhs(production);

  if (PT_getSymbolsLength(productionLhs) < 3)
  {
    return ATfalse;
  }

  while (!PT_isSymbolsEmpty(productionLhs)) 
  {
    symbol = PT_getSymbolsHead(productionLhs);
    if (!PT_isOptLayoutSymbol(symbol))
    {
      if (expectTerminal == ATtrue)
      {
	if (!PT_isSymbolLit(symbol))
	{
	  return ATfalse;
	}
	expectTerminal = ATfalse;
      }
      else
      {
	if (PT_isSymbolLit(symbol))
	{
	  return ATfalse;
	}
	expectTerminal = ATtrue;
      }	
    }
    productionLhs = PT_getSymbolsTail(productionLhs);
  }

  return ATtrue;
}

/*}}}  */
/*{{{  static ATbool isNonTerminal(PT_Tree tree) */

static ATbool isNonTerminal(PT_Tree tree)
{
  if (PT_isLexicalInjectionProd(PT_getTreeProd(tree))) {
    return ATfalse;
  }
  if (PT_isTreeLit(tree)) {
    return ATfalse;
  }
  if (PT_isTreeLayout(tree)) {
    return ATfalse;
  }
  return ATtrue;
}

/*}}}  */

/*{{{  static BOX_Box terminalToBox(PT_Tree tree) */

static BOX_Box terminalToBox(PT_Tree tree)
{
  char *yield = PT_yieldTreeToString(tree, ATfalse);
  char *escaped = escapeQuotes(yield);
  char *quoted = quoteString(escaped);
  BOX_StrCon strcon = BOX_makeStrConDefault(quoted);
  return BOX_makeBoxString(strcon);
}

/*}}}  */
/*{{{  static BOX_Box layoutToBox(PT_Tree tree) */

static BOX_Box layoutToBox(PT_Tree tree)
{
  BOX_BoxList boxList = BOX_makeBoxListEmpty();
  char *yield = PT_yieldTreeToString(tree, ATfalse);

  if (!isLayout(yield)) {
    char *comment = stripLayout(yield);
    char *escaped = escapeQuotes(comment);
    char *quoted = quoteString(escaped);
    BOX_StrCon strcon = BOX_makeStrConDefault(quoted);
    return BOX_makeBoxString(strcon);
  }

  return BOX_makeBoxHEmptyLayout(boxList);
}

/*}}}  */

/*{{{  static BOX_Box sepListToBox(PT_Args args) */

static BOX_Box sepListToBox(PT_Args args)
{
  BOX_OptLayout optLayout = BOX_makeOptLayoutAbsent();
  BOX_BoxList boxList = BOX_makeBoxListEmpty();
  BOX_SpaceSymbol spaceSymbol = BOX_makeSpaceSymbolHorizontal();
  BOX_NatCon spaceValue = BOX_makeNatConDefault("0");
  BOX_SpaceOption spaceOption = BOX_makeSpaceOptionDefault(spaceSymbol,
							   optLayout,
							   optLayout,
							   spaceValue);
  BOX_SpaceOptionOptions spaceOptions = 
    BOX_makeSpaceOptionOptionsSingle(spaceOption);

  while (!PT_isArgsEmpty(args)) 
  {
    BOX_Box listArgBox; 

    args = skipLayout(args);
    listArgBox = treeToBox(PT_getArgsHead(args));

    args = PT_getArgsTail(args);

    args = skipLayout(args);
    if (!PT_isArgsEmpty(args))
    {
      BOX_BoxList listBoxList = BOX_makeBoxListSingle(listArgBox);
      BOX_Box sepBox = treeToBox(PT_getArgsHead(args));

      listBoxList = BOX_makeBoxListMany(sepBox, optLayout, listBoxList);
      listBoxList = BOX_reverseBoxList(listBoxList);

      /* list separators don't have preceding spaces */
      listArgBox = BOX_makeBoxH(optLayout,
				spaceOptions,
				optLayout,
				optLayout,
				listBoxList,
				optLayout);

      args = PT_getArgsTail(args);
    }

    boxList = BOX_makeBoxListMany(listArgBox, optLayout, boxList);

  }
  boxList = BOX_reverseBoxList(boxList);

  return BOX_makeBoxVEmptyLayout(boxList);
}

/*}}}  */
/*{{{  static BOX_Box noSepListToBox(PT_Args args) */

static BOX_Box noSepListToBox(PT_Args args)
{
  BOX_OptLayout optLayout = BOX_makeOptLayoutAbsent();
  BOX_BoxList boxList = BOX_makeBoxListEmpty();

  while (!PT_isArgsEmpty(args)) 
  {
    PT_Tree head = PT_getArgsHead(args);

    if (!PT_isTreeLayout(head)) 
    {
      boxList = BOX_makeBoxListMany(treeToBox(head), optLayout, boxList);
    }

    args = PT_getArgsTail(args);
  }
  boxList = BOX_reverseBoxList(boxList);

  return BOX_makeBoxVEmptyLayout(boxList);
}

/*}}}  */
/*{{{  static BOX_Box listToBox(PT_Tree tree) */

static BOX_Box listToBox(PT_Tree tree)
{
  PT_Production production = PT_getTreeProd(tree);
  PT_Args args = PT_getTreeArgs(tree);
  PT_Symbol symbol = PT_getProductionRhs(production);

  BOX_BoxList boxList = BOX_makeBoxListEmpty();
  
  if (PT_isArgsEmpty(args))
  {
    return BOX_makeBoxHEmptyLayout(boxList);
  }

  symbol = PT_getSymbolSymbol(symbol);
  if (PT_isSymbolIterStarSep(symbol) || PT_isSymbolIterPlusSep(symbol))
  {
    return sepListToBox(args);
  }
  else
  {
    return noSepListToBox(args);
  }
}

/*}}}  */

/*{{{  static BOX_Box argsSingleToBox(PT_Args arg) */

static BOX_Box argsSingleToBox(PT_Args arg)
{
  PT_Tree head = PT_getArgsHead(arg);
  return treeToBox(head);
}

/*}}}  */
/*{{{  static BOX_Box argsManyToBox(PT_Tree tree) */

static BOX_Box argsManyToBox(PT_Tree tree)
{
  BOX_BoxList boxList = BOX_makeBoxListEmpty();
  BOX_OptLayout optLayout = BOX_makeOptLayoutAbsent();
  
  PT_Args args = PT_getTreeArgs(tree);

  for (; !PT_isArgsEmpty(args); args = PT_getArgsTail(args)) 
  {
    PT_Tree head = PT_getArgsHead(args);
    if(!isLayout(PT_yieldTreeToString(head, ATfalse)))  
    {
      BOX_Box prettyHead = treeToBox(head);

      if (isNonTerminal(head) 
	  && isIndentedType(PT_getTreeProd(tree))) 
      {
	prettyHead = BOX_makeBoxIEmptyLayout(prettyHead);
      } 
      boxList = BOX_makeBoxListMany(prettyHead, optLayout, boxList); 
    }
  }
  boxList = BOX_reverseBoxList(boxList);

  if (isIndentedType(PT_getTreeProd(tree))) 
  {
    return BOX_makeBoxVEmptyLayout(boxList);
  } 
  else 
  {
    return BOX_makeBoxHvEmptyLayout(boxList);
  }  
}

/*}}}  */
/*{{{  static BOX_Box applToBox(PT_Tree tree) */

static BOX_Box applToBox(PT_Tree tree)
{
  PT_Args args = PT_getTreeArgs(tree);

  if (PT_getArgsLength(args) == 1) 
  {
    return argsSingleToBox(args);
  }

  return argsManyToBox(tree);
}

/*}}}  */

/*{{{  static BOX_Box processTree(PT_Tree tree) */

static BOX_Box processTree(PT_Tree tree)
{
  PT_Args args = PT_getTreeArgs(tree);
  PT_Tree treeTree = NULL;

  /* JURGEN: This does not work with productions like:
   * "box2" `X` "(" Box ")" -> X   {from-box}
   * `X` "2box" "(" X   ")" -> Box {to-box}
   */

  while (!PT_isArgsEmpty(args)) {
    PT_Tree arg = PT_getArgsHead(args);

    if (!PT_isTreeLayout(arg) && !PT_isTreeLit(arg)) {
      treeTree = arg;
    }
    args = PT_getArgsTail(args);
  }

  if (treeTree) {
    return treeToBox(treeTree);
  }
  else {
    return NULL;
  }
}

/*}}}  */

/*{{{  static BOX_Box transformBox(PT_Tree tree) */

static PT_Tree transformBox(PT_Tree tree)
{
  PT_Production  boxProd = PT_getTreeProd(tree);
  PT_Args args = PT_getTreeArgs(tree);
  PT_Args boxArgs = PT_makeArgsEmpty();

  while (!PT_isArgsEmpty(args)) {
    PT_Tree arg = PT_getArgsHead(args);

    if (PT_isTreeFlatLexical(arg) || PT_isTreeLayout(arg) || PT_isTreeLit(arg)) {
      boxArgs = PT_appendArgs(boxArgs, arg);
    }
    else if (PT_isTreeAppl(arg)) {
      if (hasProductionToBoxAttribute(PT_getTreeProd(arg))) {
        BOX_Box boxArg = processTree(arg);
        boxArgs = PT_appendArgs(boxArgs, PT_TreeFromTerm(BOX_BoxToTerm(boxArg)));
      }
      else {
        boxArgs = PT_appendArgs(boxArgs, transformBox(arg));
      }
    }
    else {
      boxArgs = PT_appendArgs(boxArgs, transformBox(arg));
    }
    args = PT_getArgsTail(args);
  }

  return PT_makeTreeAppl(boxProd, boxArgs);
}

/*}}}  */
/*{{{  static BOX_Box processBox(PT_Tree tree) */

static BOX_Box processBox(PT_Tree tree)
{
  PT_Args args = PT_getTreeArgs(tree);

  while (!PT_isArgsEmpty(args)) {
    PT_Tree arg = PT_getArgsHead(args);

    if (!PT_isTreeLayout(arg) && !PT_isTreeLit(arg)) {
      return BOX_BoxFromTerm(PT_TreeToTerm(transformBox(arg)));
    }
    args = PT_getArgsTail(args);
  }

  return NULL;
}

/*}}}  */
/*{{{  static BOX_Box treeToBox(PT_Tree tree)  */

static BOX_Box treeToBox(PT_Tree tree) 
{
  if (hasProductionFromBoxAttribute(PT_getTreeProd(tree))) {
    return processBox(tree);
  }
  else if (PT_isLexicalInjectionProd(PT_getTreeProd(tree))
      || PT_isTreeLit(tree)) {
    return terminalToBox(tree); 
  }
  else if (PT_isTreeLayout(tree)) {
    return layoutToBox(tree);
  }
  else if (PT_isProductionList(PT_getTreeProd(tree)))
  {
    return listToBox(tree); 
  }
  else if (PT_isTreeAppl(tree)) {
    return applToBox(tree);
  } 
  else {
    ATwarning("Unhandled parsetree type: %t\n", tree);
    return NULL;
  }
}

/*}}}  */

/*{{{  BOX_Start pandora(PT_ParseTree parsetree) */

BOX_Start pandora(PT_ParseTree parsetree)
{
  PT_Tree tree = PT_getParseTreeTop(parsetree);
  BOX_OptLayout optLayout = BOX_makeOptLayoutAbsent();
  BOX_Start start = BOX_makeStartBox(optLayout, treeToBox(tree), optLayout, 0);
  return start;
}

/*}}}  */
