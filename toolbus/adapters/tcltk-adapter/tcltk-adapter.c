#line 38 "tcltk-adapter.c.nw"
#include <TB.h>
#include <tcl.h>
#include <tk.h>
#line 49 "tcltk-adapter.c.nw"
/* 20 Kb should suffice for most applications. */
#define DEFAULT_BUF_SIZE	20480

char *script;
char *name;

Tcl_Interp *interp;

int bufsize = DEFAULT_BUF_SIZE;
char *BUF;
int offset;
#line 68 "tcltk-adapter.c.nw"
void pr_type_wish(type *tp);
void pr_term_list_wish(const term_list *tl, char sep);
void pr_env_wish(const env *e);
void pr_string_wish(char *s, int len);
#line 79 "tcltk-adapter.c.nw"
void reset_buffer()
{
  offset = 0;
  BUF[0] = '\0';
}
#line 92 "tcltk-adapter.c.nw"
void printb_str(char *str)
{
  int len = strlen(str);

  if(offset + len > bufsize)
    TBprintf(stderr, "Buffer overflow, ignoring %s\n", str);
  else {
    strcpy(&BUF[offset], str);
    offset += len;
    BUF[offset] = '\0';
  }
}
#line 111 "tcltk-adapter.c.nw"
void printb_char(char c)
{
  if(offset >= bufsize)
    TBprintf(stderr, "Buffer overflow, ignoring %c\n", c);
  else {
    BUF[offset++] = c;
    BUF[offset] = '\0';
  }
}
#line 129 "tcltk-adapter.c.nw"
char *wish_type_string(tkind kind)
{
  static char *types[] =
    { "term", "bool", "int", "real", "str", "bstr", "var",
      "placeholder", "appl", "env", "list"
    };

  if(kind >= t_term && kind <= t_list)
    return types[kind];

  return "unknown";
}
#line 149 "tcltk-adapter.c.nw"
void print_escaped_char(char c)
{
  /* In a string, we just escape the character. */
  char Buf[6];
  int i;
  
  sprintf(Buf, "\\%o", ((unsigned int)c) & 0xFF);
  printb_str(Buf);
}
#line 166 "tcltk-adapter.c.nw"
void printn_wish(const char *s, int n)
{
  static TBbool instring = TBfalse;
  static TBbool prev_escaped = TBfalse;

  while(n){
    if(*s == '"') {
      printb_char('\\');
      if(instring)
	{
	  instring = TBfalse;
	  prev_escaped = TBfalse;
	}
      else
	instring = TBtrue;
    }

    if(instring)
      {
	if(*s == '\\' || *s == '[' || *s == ']')
          printb_char('\\');
        prev_escaped = TBfalse;
      }

    if(isprint(*s))
      {
        /* We don't want an octal digit after an escaped number! */
	if(prev_escaped && *s >= '0' && *s <= '7')
	  print_escaped_char(*s++);
	else
          printb_char(*s++);
	prev_escaped = TBfalse;
      }
    else
      {
	/* We have a non-printable character */
	print_escaped_char(*s++);
	prev_escaped = TBtrue;
      }

    n--;
  }
}

#line 218 "tcltk-adapter.c.nw"
void pr_term_wish(term *t)
{
  char cbuf[100], *ftxt;

  /* TBprintf(stderr, "Term: %t\n", t);*/
  if(!t){
    printn_wish("{}",2);
    return;
  }
  switch(tkind(t))
    {
    case t_str:
      pr_string_wish(str_val(t), strlen(str_val(t)));
      break;

    case t_bstr:
      pr_string_wish(bstr_val(t), bstr_len(t));
      break;

    case t_bool:
      if(bool_val(t)) 
	printn_wish("true", 4);
      else
	printn_wish("false", 4);
      break;

    case t_int:
      sprintf(cbuf, "%d", int_val(t));
      printn_wish(cbuf, strlen(cbuf));
      break;

    case t_real:
      sprintf(cbuf, "%f", real_val(t));
      printn_wish(cbuf, strlen(cbuf));
      break;

    case t_var: /* Can't occur ??? */
      ftxt = get_txt(var_sym(t));
      printn_wish(ftxt, strlen(ftxt));
      pr_type_wish(var_type(t));
      if(var_result(t))
	printn_wish("?",1);
      break;

    case t_placeholder:
      printn_wish("<",1);
      pr_term_wish(placeholder_type(t));
      printn_wish(">",1);
      break;

    case t_appl:
      ftxt = get_txt(fun_sym(t));
      printn_wish(ftxt, strlen(ftxt));
      if(fun_args(t) != NULL || isupper(ftxt[0])){
	printn_wish("(", 1);
	pr_term_list_wish(fun_args(t), ',');
	printn_wish(")", 1);
      }
      break;

    case t_list:
      printn_wish("{", 1); 
      pr_term_list_wish(t, ' ');
      printn_wish("}", 1);
      break;

    case t_env:
      pr_env(t);
      break;
    }
}
#line 297 "tcltk-adapter.c.nw"
void pr_string_wish(char *s, int len)
{
  printb_char('\"');
  printn_wish(s, len);
  printb_char('\"');
}
#line 311 "tcltk-adapter.c.nw"
void pr_type_wish(type *tp)
{
  printn_wish(":", 1); 
  pr_term_wish(tp);
}
#line 324 "tcltk-adapter.c.nw"
void pr_term_list_wish(const term_list *tl, char sep)
{
  TBbool first = TBtrue;

  for( ; tl; tl = next(tl)){
    assert(is_list(tl));    
    if(first)
      first = TBfalse;
    else
      printn_wish(&sep, 1);
    pr_term_wish(first(tl));
  }
}
#line 345 "tcltk-adapter.c.nw"
void pr_env_wish(const env *e)
{
  TBbool first = TBtrue;
  char *ftxt;

  printn_wish("{", 1);
  for( ; e; e = env_next(e)){
    assert(is_env(e));    
    if(first)
      first = TBfalse;
    else
      printn_wish(" ", 1);
    printn_wish("{", 1);
    ftxt = get_txt(env_sym(e));
    printn_wish(ftxt, strlen(ftxt));
    printn_wish(" ", 1);
    pr_term_wish(env_val(e));
    printn_wish("}",1);
  }
  printn_wish("}", 1);
}

#line 374 "tcltk-adapter.c.nw"
term *TclString2Term(char *str)
{
  return TBmake(str);
}

#line 387 "tcltk-adapter.c.nw"
void toolbus_input(ClientData data, int mask)
{
  if(TBpeek())
    TBreceive();
}
#line 399 "tcltk-adapter.c.nw"
term *from_toolbus(term *t) 
{
  char *fname;
  term *farg, *fargs, *event, *msg;
  int i, pid1, pid2;
  term *Env, *Subs, *Notes, *AtArgs, *Coords;
  char *AtFun;
  term *pe;
  char *mon_point;
 
  reset_buffer();
  if(TBmatch(t, "rec-do(%f(%l))", &fname, &fargs)) {
    printb_str(fname);
    for( ; fargs; fargs = next(fargs)) {
      printb_char(' ');
      pr_term_wish(first(fargs));
    }      
    
    /*TBprintf(stderr, "calling function %s.\n", BUF); */
    Tcl_Eval(interp, BUF);

    return NULL;
  }
  
  if(TBmatch(t, "rec-eval(%f(%l))", &fname, &fargs)) {
    /*TBprintf(stderr, "returning result of function %s: %l\n", fname, fargs);*/
    printb_str(fname);
    for( ; fargs; fargs = next(fargs)) {
       printb_char(' ');
       pr_term_wish(first(fargs));
    }    

    if(interp->result)
      return TclString2Term(interp->result);

    return NULL;
  }

  if(TBmatch(t, "rec-ack-event(%t)", &event)) {
    /*TBprintf(stderr, "rec-ack-event %t\n", event);*/
    printb_str("rec-ack-event ");
    pr_term_wish(event);
    /*TBprintf(stderr, "calling function %s\n", BUF); */
    Tcl_Eval(interp, BUF);

    return NULL;
  }

  if(TBmatch(t, "rec-monitor(%f(%d,%f,%t,%t,%t,%t,%t,%d,%t))",
	&mon_point, &pid1, &AtFun, &AtArgs, &Coords, 
	&Env, &Subs, &Notes, &pid2, &pe)) {
    TBmsg("Monitor commands not implemented yet: %t\n", t);
    return NULL;
  }

  if(TBmatch(t, "rec-terminate(%t)", &msg)) {
    printb_str("rec-terminate ");
    pr_term_wish(msg);
    Tcl_Eval(interp, BUF);

    TBexit(0);
  }

  TBmsg("Ignored: %t\n", t);
  return NULL;
}
#line 472 "tcltk-adapter.c.nw"
int Tcl_TBsend(ClientData data, Tcl_Interp *interp, int argc, char *argv[])
{
  term *t;

  if(argc != 2) {
    interp->result = "Usage: TBsend ?term?";
    return TCL_ERROR;
  }

  t = TclString2Term(argv[1]);

  TBsend(t);
  return TCL_OK;
}
#line 492 "tcltk-adapter.c.nw"
int Tcl_TBstring(ClientData data, Tcl_Interp *interp, int argc, char *argv[])
{
  char *buf,*src,*dest,size;

  if(argc != 2) {
    interp->result = "Usage: TBstring ?string?";
    return TCL_ERROR;
  }

  src = argv[1];
  size = strlen(src)+3;
  while(*src) {
    if(*src == '"')
      size++;
    src++;
  }
  buf = malloc(size);
  src = argv[1];
  buf[0] = '"';
  dest = buf+1;
  while(*src) {
    if(*src == '"')
      *dest++ = '\\';
    *dest++ = *src++;
  }
  *dest++ = '"';
  *dest = '\0';
  
  Tcl_SetResult(interp, buf, TCL_DYNAMIC);
  return TCL_OK;
}
#line 531 "tcltk-adapter.c.nw"
int Tcl_AppInit(Tcl_Interp *interp)
{
  fprintf(stderr, "Starting Tcl/Tk...\n");
  if(Tcl_Init(interp) == TCL_ERROR) {
    return TCL_ERROR;
  }

  if(Tk_Init(interp) == TCL_ERROR) {
    return TCL_ERROR;
  }

  Tcl_CreateCommand(interp, "TBsend", Tcl_TBsend, (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  Tcl_CreateCommand(interp, "TBstring", Tcl_TBstring, (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  return TCL_OK;
}
#line 556 "tcltk-adapter.c.nw"
void handle_args(int argc, char *argv[])
{
  int i;

  for(i=0; argv[i]; i++) {
    if(streq(argv[i], "-script")) {
      script = argv[++i];
      continue;
    }
    if(streq(argv[i], "-name")) {
      name = argv[++i];
      continue;
    }
    if(streq(argv[i], "-bufsize")) {
      bufsize = atoi(argv[++i]);
      if(bufsize <= 0) {
        TBprintf(stderr, "warning: illegal buffer size %d\n", bufsize);
        bufsize = DEFAULT_BUF_SIZE;
      }
    }
  }
  if(!name)
    name = script;

  if(!name)
    name = "noname";
}
#line 589 "tcltk-adapter.c.nw"
int main(int argc, char *argv[])
{
  Tk_Window main_win;
  int i, error;

  handle_args(argc, argv);
  BUF = malloc(bufsize);
  if(!BUF) {
    TBprintf(stderr, "Not enough space to allocate text buffer!\n");
    TBexit(1);
  }

  TBinit(NULL, argc, argv, from_toolbus, NULL);

  interp = Tcl_CreateInterp();
  main_win = Tk_CreateMainWindow(interp, getenv("DISPLAY"), name, "Tk");
  if(main_win == NULL) {
    TBprintf(stderr, "%s\n", interp->result);
    TBexit(1);
  }
  Tk_GeometryRequest(main_win, 200, 200);

  Tcl_AppInit(interp);

  if(script) {
    error = Tcl_EvalFile(interp, script);
 
    if(error != TCL_OK) {
      char *trace;

      TBprintf(stderr, "%s: %s\n", script, interp->result);
      trace = Tcl_GetVar(interp, "errorInfo", 0);
      if(trace) {
        TBprintf(stderr, "***** TCL TRACE *****\n");
        TBprintf(stderr, "%s\n", trace);
      }
    }
  }

  /* Install handler */
  TBprintf(stderr, "%d ports\n", ninports);
  for(i=0; i<ninports; i++) {
    TBprintf(stderr, "Adding port %d (%d)\n", i, inportset[i].in);
    Tk_CreateFileHandler(inportset[i].in, TK_READABLE, toolbus_input, NULL);
  }  
  
  while(1) {
    Tk_DoOneEvent(TK_ALL_EVENTS);
  }
  return 0;                   /* Needed only to prevent compiler warning. */
}
