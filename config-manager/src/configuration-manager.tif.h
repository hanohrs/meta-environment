/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'configuration-manager' (prefix='')
 */

#ifndef _CONFIGURATION_MANAGER_H
#define _CONFIGURATION_MANAGER_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm get_subtype_action(int conn, ATerm, ATerm, ATerm);
ATerm get_action(int conn, ATerm, ATerm);
ATerm get_extension_modulename(int conn, const char *);
ATerm get_subtype_events(int conn, ATerm, ATerm);
ATerm get_modulename_extension(int conn, ATerm);
ATerm get_events(int conn, ATerm);
ATerm get_module_paths(int conn);
void change_workspace(int conn, const char *);
ATerm get_library_paths(int conn);
void add_system_properties(int conn, const char *);
ATerm get_text_categories(int conn);
void rec_terminate(int conn, ATerm);
extern ATerm configuration_manager_handler(int conn, ATerm term);
extern ATerm configuration_manager_checker(int conn, ATerm sigs);

#endif
