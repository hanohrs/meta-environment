/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'text-editor' (prefix='')
 * Headerfile generated at Thu Jan 16 12:00:24 2003
 */

#ifndef _TEXT_EDITOR_H
#define _TEXT_EDITOR_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
void tb_unset_focus(int conn, char *);
ATerm tb_get_focus_text(int conn, char *, int, int);
void tb_set_focus_unchanged(int conn, char *, char *, int, int);
void tb_set_char_pos(int conn, char *, int);
void tb_set_focus(int conn, char *, char *, int, int);
void tb_set_msg(int conn, char *);
void tb_add_menu_item(int conn, char *, char *);
void move_editor_to_front(int conn, char *);
ATerm edit_file(int conn, char *);
void reload_file(int conn, char *);
void rec_ack_event(int conn, ATerm);
void rec_terminate(int conn, ATerm);
extern ATerm text_editor_handler(int conn, ATerm term);
extern ATerm text_editor_checker(int conn, ATerm sigs);

#endif
