/**
 * This file is generated by /ufs/jurgenv/meta-env/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'hello'
 * Headerfile generated at Tue Mar 20 16:17:45 2001
 */

#ifndef _HELLO_H
#define _HELLO_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
void rec_terminate(int conn, ATerm);
ATerm get_text(int conn);
extern ATerm hello_handler(int conn, ATerm term);
extern ATerm hello_checker(int conn, ATerm sigs);

#endif
