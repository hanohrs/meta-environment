/**
 * This file is generated by /ufs/jurgenv/glt/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'asfe' (prefix='')
 * Headerfile generated at Tue Nov 18 09:31:50 2003
 */

#ifndef _ASFE_H
#define _ASFE_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm interpret(int conn, char *, ATerm, ATerm, ATerm, ATerm);
ATerm run_tests(int conn, char *, ATerm, ATerm);
void rec_terminate(int conn, ATerm);
extern ATerm asfe_handler(int conn, ATerm term);
extern ATerm asfe_checker(int conn, ATerm sigs);

#endif
