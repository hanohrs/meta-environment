/**
 * This file is generated by /users/protheo/vinju/software/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'asfe' (prefix='')
 * Implementation generated at Tue Oct 29 15:27:16 2002
 */

#include "asfe.tif.h"

#define NR_SIG_ENTRIES	2

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<asfe>,interpret(<str>,<term>,<term>,<term>))",
  "rec-terminate(<asfe>,<term>)",
};

/* Event handler for tool 'asfe' */
ATerm asfe_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0;
  ATerm t0, t1, t2;

  if(ATmatch(term, "rec-eval(interpret(<str>,<term>,<term>,<term>))", &s0, &t0, &t1, &t2)) {
    return interpret(conn, s0, t0, t1, t2);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = asfe_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool asfe cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'asfe' */
ATerm asfe_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

