/**
 * This file is generated by /ufs/markvdb/Research/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'query-tool' (prefix='')
 * Implementation generated at Fri May 23 09:42:58 2003
 */

#include "query-tool.tif.h"

#define NR_SIG_ENTRIES	2

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<query-tool>,query(<str>,<term>,<term>))",
  "rec-terminate(<query-tool>,<term>)",
};

/* Event handler for tool 'query-tool' */
ATerm query_tool_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0;
  ATerm t0, t1;

  if(ATmatch(term, "rec-eval(query(<str>,<term>,<term>))", &s0, &t0, &t1)) {
    return query(conn, s0, t0, t1);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = query_tool_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool query-tool cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'query-tool' */
ATerm query_tool_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

