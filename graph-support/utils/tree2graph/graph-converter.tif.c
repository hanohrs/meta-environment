/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'graph-converter' (prefix='')
 */

#include "graph-converter.tif.h"

#define NR_SIG_ENTRIES	2

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<graph-converter>,tree2graph(<str>,<term>,<term>))",
  "rec-terminate(<graph-converter>,<term>)",
};

/* Event handler for tool 'graph-converter' */
ATerm graph_converter_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0;
  ATerm t0, t1;

  if(ATmatch(term, "rec-eval(tree2graph(<str>,<term>,<term>))", &s0, &t0, &t1)) {
    return tree2graph(conn, s0, t0, t1);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = graph_converter_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool graph-converter cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'graph-converter' */
ATerm graph_converter_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

