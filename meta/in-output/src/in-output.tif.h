/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'in-output' (prefix='')
 */

#ifndef _IN_OUTPUT_H
#define _IN_OUTPUT_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm write_packed_term_file(int conn, const char *, ATerm);
ATerm write_term_file(int conn, const char *, ATerm);
ATerm read_text_file(int conn, const char *);
ATerm unpack_term(int conn, ATerm);
ATerm read_term_file(int conn, const char *);
ATerm pack_term(int conn, ATerm);
ATerm read_packed_term_file(int conn, const char *);
ATerm write_text_file(int conn, const char *, ATerm);
ATerm compare_files(int conn, const char *, const char *);
ATerm exists_file(int conn, const char *);
ATerm get_filename(int conn, const char *, const char *, const char *);
ATerm remove_file(int conn, const char *, const char *, const char *);
ATerm get_path_directory(int conn, const char *);
ATerm find_file(int conn, ATerm, const char *, const char *);
ATerm get_path_filename(int conn, const char *);
ATerm relative_to_absolute(int conn, ATerm);
ATerm get_path_extension(int conn, const char *);
void rec_terminate(int conn, ATerm);
extern ATerm in_output_handler(int conn, ATerm term);
extern ATerm in_output_checker(int conn, ATerm sigs);

#endif
