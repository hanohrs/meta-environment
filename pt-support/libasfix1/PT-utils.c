
#include "PT-utils.h"

ATbool PT_isSymbolIter(PT_Symbol arg)
{
  return PT_isSymbolIterStarSep(arg) ||
         PT_isSymbolIterStar(arg)    ||
         PT_isSymbolIterPlusSep(arg) ||
         PT_isSymbolIterPlus(arg);
}

ATbool PT_isListVar(PT_Tree arg) 
{
  if (PT_isTreeVar(arg)) {
    PT_Symbol symbol = PT_getVarSymbol(PT_getTreeVar(arg));
   
    return PT_isSymbolIter(symbol); 
  }

  return ATfalse;
}

ATbool PT_isStarVar(PT_Tree arg) 
{
  if (PT_isTreeVar(arg)) {
    PT_Symbol symbol = PT_getVarSymbol(PT_getTreeVar(arg));
   
    return PT_isSymbolIterStar(symbol) || PT_isSymbolIterStarSep(symbol); 
  }

  return ATfalse;
}

ATbool PT_isPlusVar(PT_Tree arg) 
{
  if (PT_isTreeVar(arg)) {
    PT_Symbol symbol = PT_getVarSymbol(PT_getTreeVar(arg));
   
    return PT_isSymbolIterPlus(symbol) || PT_isSymbolIterPlusSep(symbol); 
  }

  return ATfalse;
}

PT_Args PT_concatArgs(PT_Args args1, PT_Args args2)
{
  return PT_makeArgsFromTerm((ATerm)ATconcat(
                                      (ATermList)PT_makeTermFromArgs(args1),
                                      (ATermList)PT_makeTermFromArgs(args2)));
}

PT_Args PT_appendArgs(PT_Args args, PT_Tree arg)
{
  return PT_makeArgsFromTerm((ATerm)ATappend(
                                      (ATermList)PT_makeTermFromArgs(args),
                                      (ATerm)PT_makeTermFromTree(arg)));
}

PT_Args PT_foreachTreeInArgs(PT_Args args, PT_TreeVisitor visitor)
{
  ATermList store;
  PT_Args newArgs = PT_makeArgsEmpty();

  /* apply func to each element */
  for (store = ATempty;
      PT_hasArgsHead(args);
      newArgs = PT_getArgsTail(args)) {
    store = ATinsert(store,
                     PT_makeTermFromTree(
                     visitor(PT_getArgsHead(args))));
  }

  /* create new list */
  for (; !ATisEmpty(store); store = ATgetNext(store)) {
    PT_Tree newTree = PT_makeTreeFromTerm(ATgetFirst(store));
    newArgs = PT_makeArgsList(newTree,newArgs);
  }

  return newArgs;
}

PT_Tree PT_removeTreeAnnotations(PT_Tree arg)
{
  ATerm atArg = PT_makeTermFromTree(arg);
  
  if (AT_getAnnotations(atArg) != NULL) {
    atArg = AT_removeAnnotations(atArg);
  }

  return PT_makeTreeFromTerm(atArg);
}

ATerm PT_getTreeAnnotation(PT_Tree arg, ATerm label)
{
  ATerm atArg = PT_makeTermFromTree(arg);

  return ATgetAnnotation(atArg, label);
}

int PT_getArgsLength(PT_Args args)
{
   return ATgetLength((ATermList)PT_makeTermFromArgs(args));
}

char *PT_getStringChars(PT_String ptStr)
{
  char *str;

  if (ATmatch(ptStr, "<str>", &str)) {
    return str;
  }

  ATerror("PT_getStringChars: not a string: %t\n", ptStr);
  return NULL;
}

PT_String PT_setStringChars(const char *str)
{
  return ATmake("<str>", str);
}

