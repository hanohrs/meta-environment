/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'in-output' (prefix='')
 */

#ifndef _IN_OUTPUT_H
#define _IN_OUTPUT_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm read_and_pack_term(int conn, const char *);
ATerm read_text_file(int conn, const char *);
ATerm read_term_file(int conn, const char *);
ATerm unpack_and_write_in_baf(int conn, const char *, ATerm);
ATerm compare_files(int conn, const char *, const char *);
ATerm write_in_baf(int conn, const char *, ATerm);
ATerm get_filename(int conn, const char *, const char *, const char *);
ATerm write_text_list(int conn, const char *, ATerm);
ATerm get_relative_filename(int conn, ATerm, const char *, const char *);
ATerm unpack_term(int conn, ATerm);
ATerm get_path_directory(int conn, const char *);
ATerm pack_term(int conn, ATerm);
ATerm get_path_filename(int conn, const char *);
ATerm exists_file(int conn, const char *);
ATerm get_path_extension(int conn, const char *);
ATerm copy_file(int conn, const char *, const char *);
ATerm make_file(int conn, const char *);
ATerm remove_file(int conn, const char *);
ATerm get_file_path(int conn, ATerm);
ATerm find_file(int conn, ATerm, const char *, const char *);
ATerm get_file_name(int conn, ATerm);
ATerm relative_to_absolute(int conn, ATerm);
ATerm get_file_extension(int conn, ATerm);
void rec_terminate(int conn, ATerm);
extern ATerm in_output_handler(int conn, ATerm term);
extern ATerm in_output_checker(int conn, ATerm sigs);

#endif
