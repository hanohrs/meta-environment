/**
 * This file is generated by /export/scratch1/jong/meta/install/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'editor-hive' (prefix='')
 * Implementation generated at Tue Jan 27 16:53:31 2004
 */

#include "editor-hive.tif.h"

#define NR_SIG_ENTRIES	15

static char *signature[NR_SIG_ENTRIES] = {
  "rec-do(<editor-hive>,edit-file(<term>,<str>,<str>))",
  "rec-do(<editor-hive>,set-actions(<term>,<list>))",
  "rec-do(<editor-hive>,reread-contents(<term>))",
  "rec-do(<editor-hive>,set-focus(<term>,<term>))",
  "rec-do(<editor-hive>,write-contents(<term>))",
  "rec-do(<editor-hive>,get-contents(<term>,<term>))",
  "rec-do(<editor-hive>,clear-focus(<term>))",
  "rec-do(<editor-hive>,display-message(<term>,<str>))",
  "rec-do(<editor-hive>,set-cursor-at-focus(<term>,<term>))",
  "rec-do(<editor-hive>,set-cursor-at-location(<term>,<term>))",
  "rec-do(<editor-hive>,set-focus-at-location(<term>,<term>))",
  "rec-do(<editor-hive>,editor-to-front(<term>))",
  "rec-do(<editor-hive>,kill-editor(<term>))",
  "rec-ack-event(<editor-hive>,<term>)",
  "rec-terminate(<editor-hive>,<term>)",
};

/* Event handler for tool 'editor-hive' */
ATerm editor_hive_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0, *s1;
  ATerm t0, t1;

  if(ATmatch(term, "rec-do(clear-focus(<term>))", &t0)) {
    clear_focus(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(get-contents(<term>,<term>))", &t0, &t1)) {
    get_contents(conn, t0, t1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(display-message(<term>,<str>))", &t0, &s0)) {
    display_message(conn, t0, s0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(write-contents(<term>))", &t0)) {
    write_contents(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(set-cursor-at-focus(<term>,<term>))", &t0, &t1)) {
    set_cursor_at_focus(conn, t0, t1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(set-focus(<term>,<term>))", &t0, &t1)) {
    set_focus(conn, t0, t1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(set-cursor-at-location(<term>,<term>))", &t0, &t1)) {
    set_cursor_at_location(conn, t0, t1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(reread-contents(<term>))", &t0)) {
    reread_contents(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(set-focus-at-location(<term>,<term>))", &t0, &t1)) {
    set_focus_at_location(conn, t0, t1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(set-actions(<term>,<term>))", &t0, &t1)) {
    set_actions(conn, t0, t1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(editor-to-front(<term>))", &t0)) {
    editor_to_front(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(edit-file(<term>,<str>,<str>))", &t0, &s0, &s1)) {
    edit_file(conn, t0, s0, s1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(kill-editor(<term>))", &t0)) {
    kill_editor(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-ack-event(<term>)", &t0)) {
    rec_ack_event(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = editor_hive_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool editor-hive cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'editor-hive' */
ATerm editor_hive_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

