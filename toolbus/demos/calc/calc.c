/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'calc' (prefix='')
 */

#include "calc.h"

#define NR_SIG_ENTRIES	2

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<calc>,expr(<str>))",
  "rec-terminate(<calc>,<term>)",
};

/* Event handler for tool 'calc' */
ATerm calc_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0;
  ATerm t0;

  if(ATmatch(term, "rec-eval(expr(<str>))", &s0)) {
    return expr(conn, s0);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = calc_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool calc cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'calc' */
ATerm calc_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

