/**
 * This file is generated by /users/protheo/vinju/software/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'asfe' (prefix='')
 * Headerfile generated at Tue Oct 29 15:27:16 2002
 */

#ifndef _ASFE_H
#define _ASFE_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm interpret(int conn, char *, ATerm, ATerm, ATerm);
void rec_terminate(int conn, ATerm);
extern ATerm asfe_handler(int conn, ATerm term);
extern ATerm asfe_checker(int conn, ATerm sigs);

#endif
