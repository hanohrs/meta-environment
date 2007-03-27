/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'editor-manager' (prefix='')
 */

#include "editor-manager.h"

#define NR_SIG_ENTRIES	14

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<editor-manager>,create-session(<str>))",
  "rec-eval(<editor-manager>,create-empty-session)",
  "rec-eval(<editor-manager>,get-path(<session-id>))",
  "rec-eval(<editor-manager>,bind-session(<session-id>,<module-id>))",
  "rec-eval(<editor-manager>,get-moduleid(<session-id>))",
  "rec-do(<editor-manager>,register-editor(<session-id>,<term>))",
  "rec-eval(<editor-manager>,is-editor-registered(<session-id>,<term>))",
  "rec-do(<editor-manager>,unregister-editor(<session-id>,<term>))",
  "rec-eval(<editor-manager>,get-sessions-by-moduleid(<module-id>))",
  "rec-eval(<editor-manager>,get-session-by-path(<str>))",
  "rec-do(<editor-manager>,delete-session(<session-id>))",
  "rec-eval(<editor-manager>,request-transaction(<session-id>))",
  "rec-do(<editor-manager>,end-transaction(<session-id>))",
  "rec-terminate(<editor-manager>,<term>)",
};

/* Event handler for tool 'editor-manager' */
ATerm editor_manager_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0;
  ATerm t0, t1;

  if(ATmatch(term, "rec-eval(is-editor-registered(<term>,<term>))", &t0, &t1)) {
    return is_editor_registered(conn, t0, t1);
  }
  if(ATmatch(term, "rec-do(register-editor(<term>,<term>))", &t0, &t1)) {
    register_editor(conn, t0, t1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(unregister-editor(<term>,<term>))", &t0, &t1)) {
    unregister_editor(conn, t0, t1);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(get-moduleid(<term>))", &t0)) {
    return get_moduleid(conn, t0);
  }
  if(ATmatch(term, "rec-eval(get-sessions-by-moduleid(<term>))", &t0)) {
    return get_sessions_by_moduleid(conn, t0);
  }
  if(ATmatch(term, "rec-eval(bind-session(<term>,<term>))", &t0, &t1)) {
    return bind_session(conn, t0, t1);
  }
  if(ATmatch(term, "rec-eval(get-session-by-path(<str>))", &s0)) {
    return get_session_by_path(conn, s0);
  }
  if(ATmatch(term, "rec-eval(get-path(<term>))", &t0)) {
    return get_path(conn, t0);
  }
  if(ATmatch(term, "rec-do(delete-session(<term>))", &t0)) {
    delete_session(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(create-empty-session)")) {
    return create_empty_session(conn);
  }
  if(ATmatch(term, "rec-eval(request-transaction(<term>))", &t0)) {
    return request_transaction(conn, t0);
  }
  if(ATmatch(term, "rec-eval(create-session(<str>))", &s0)) {
    return create_session(conn, s0);
  }
  if(ATmatch(term, "rec-do(end-transaction(<term>))", &t0)) {
    end_transaction(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = editor_manager_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool editor-manager cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'editor-manager' */
ATerm editor_manager_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

