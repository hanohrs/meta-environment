/*

    Meta-Environment - An environment for language prototyping.
    Copyright (C) 2000  Stichting Mathematisch Centrum, Amsterdam, 
                        The Netherlands. 

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/
/* A first version of the COMPILER in ToolBus C. 
   This program is written by Mark van den Brand and
   improved by Pieter Olivier.

   The following functions are available:
   void rec_terminate(ATerm t)
   ATerm generate_code(char *modname, ATerm module)
*/

#include <assert.h>
#include <atb-tool.h>
#include <string.h>
#include <ctype.h>
#include <AsFix.h>
#include <aterm2.h>
#include <deprecated.h>
#include <stdio.h>
#include <unistd.h>  

#include <sys/times.h>
#include <stdlib.h>
#include <limits.h>
/* For cpu time calculation */
#include <time.h>

#include <asc-support.h>
#include <AsFix2src.h>

#include "compiler.tif.h"

ATbool run_verbose;

static char myname[] = "compiler";
static char myversion[] = "1.3";

static char *outputDirName = NULL;

/*
    The argument vector: list of option letters, colons denote option
    arguments.  See Usage function, immediately below, for option
    explanation.
 */

static char myarguments[] = "hi:o:vV";

extern ATerm pattern_asfix_id;
extern ATerm pattern_asfix_term;

extern void resolve_all();
extern void register_all();
extern void init_all();

void AFinitExpansionTerms();
void AFinitAsFixPatterns();
ATerm AFexpandAsFixModule(ATerm mod);

ATerm innermost(ATerm t);
ATerm toasfix(ATerm t, ATerm f, ATerm n);
void init_patterns();

void rec_terminate(int cid, ATerm t) 
{
  clock_t cputime;
  float cpusecs;

  /* read the cpu time up till now*/
  cputime = clock();
  cpusecs = (float) ((float) cputime / (float) CLOCKS_PER_SEC);

  if(run_verbose) {
    ATfprintf(stderr, "Compiler used %f seconds cpu time\n", cpusecs);
  }

  exit(0);
}

void set_output_dir(int cid, char *dirName)
{
  int len = strlen(dirName) + 1;

  outputDirName = (char *) realloc(outputDirName, len);

  if (outputDirName == NULL) {
    ATerror("compiler: unable to allocate %d bytes\n", len);
  } else {
    strcpy(outputDirName, dirName);
  }
}

char *
get_output_dir(void)
{
  if (outputDirName != NULL) {
    return outputDirName;
  } else if (getenv("COMPILER_OUTPUT") != NULL) {
    return getenv("COMPILER_OUTPUT");
  } else {
    return ".";
  }
}


/*{{{  Converting back to readable C-code */
void ToC_code(ATerm asfix, FILE *file)
{
  int c, prev = ' ';
  int instring = 0;
  int escaped = 0;
  int firststring = 1;
  static char *buf = NULL;
  char *bp;
  static int bufsize = -1;

  int size3 = 0, size2, size = AFsourceSize(asfix);
  if(size > bufsize) {
    if(buf)
      free(buf);
    buf = (char *)malloc(size+1);
    if(!buf)
      ATerror("out of memory in PrettyPrint");
    bufsize = size;
  }     
  size2 = AFsource(asfix, buf);
  if(size2 != size)
    ATerror("sizes don't match: %d != %d in PrettyPrint", size, size2);

  ATfprintf(file, "/* This C code is generated by the AsfSdfCompiler version %s */\n\n",
            myversion);

  bp = buf;
  do {
    size3++;
    c = *bp++;
  } while(c != '#');

  while(c != '"') {
    fputc(c, file);
    size3++;
    c = *bp++;
  }
  fputc(' ', file);
  fputc(c, file);
  size3++;    
  c = *bp++;

  while(c != '"') {
    fputc(c, file);
    size3++;
    c = *bp++;
  }
  fputs("\"\n", file);

  do {
    size3++;
    c = *bp++;
    if(c >= 0) {
      if(!instring && c == '\n')
        c = ' ';
      if(!(instring || prev != ' ' || c != ' '))
        ;
      else  
        fputc(c, file);
      prev = c;
    }
    if(instring) {
      if(!escaped && c == '"') {
        instring = 0;
        if(firststring) {
          firststring = 0;
          fputc('\n', file);
        }
      }
      escaped = 0;
      if(!escaped && c == '\\')
        escaped = 1;
    } else {
      if(c == '"')
        instring = 1;
      else {   
        if(c == ';' || c == '}' || c == '{') {
          fputc('\n', file);
          prev = ' ';
        }
      }
    }
  } while(size3 != size);
}        

/*}}}  */   
/*{{{  ATerm make_compiler_term(char *name, ATerm term) */

static ATerm make_compiler_term(char *name, ATerm term)
{
  ATerm t_name;
  ATerm t_mod_name;
  ATerm prod, appl;
  ATerm abbrevs;
  ATerm a_name;
  ATerm term_open, term_close, term_ws;

  a_name = ATmake("l(<str>)",name);
  t_mod_name = ATparse("id(\"AsFix2C\")");
  t_name = ATparse("ql(\"asfix2c\")");
  abbrevs = ATparse("abbreviations([])");
  term_open = ATparse("ql(\"(\")");
  term_close = ATparse("ql(\")\")");
  term_ws = ATparse("w(\"\")");

  prod = AFmakeProd(t_mod_name,
                    ATmakeList(7,t_name,term_ws,term_open,term_ws,
                               ATparse("sort(\"ATerm\")"),
                               term_ws,term_close),
                    ATparse("sort(\"CProgram\")"),
                    ATparse("no-attrs"));
  appl = AFmakeAppl(prod,
                    ATmakeList(7,t_name,term_ws,term_open,term_ws,
                               term,
                               term_ws,term_close));
  return ATmake("term(<term>,<term>,<term>,<term>,<term>,<term>," \
                "<term>,<term>,<term>)",
                ATparse("l(\"term\")"),
                term_ws,a_name,term_ws,t_mod_name,term_ws,
                appl,term_ws,abbrevs);
}

/*}}}  */
/*{{{  static Term expand_to_asfix(ATerm mod, char *name) */


static ATerm expand_to_asfix(ATerm mod, char *name)
{
  ATerm arg;

  arg = AFexpandAsFixModule(mod);
  return make_compiler_term(name,arg);
}

/*}}}  */
/*{{{  ATerm generate_code(int cid, char *modname, ATerm module) */

ATerm generate_code(int cid, char *modname, ATerm module)
{
  char *fname;
  ATerm expmod, reduct, cmod;
  ATerm aname, idname, file, mname, trm;
  int len;
  FILE *output;
  char *path;
  
  if (run_verbose) {
    ATwarning("generating code for %s\n", modname);
  }
  
  path = get_output_dir();
  len = strlen(path) + 1 + strlen(modname) + strlen(".asfix");
  fname = malloc(len + 1);
  if (!fname) {
    ATerror("Not enough memory\n");
  }
  sprintf(fname, "%s/%s.asfix", path, modname);

  expmod = expand_to_asfix(module, fname);
 
  if (!ATmatchTerm(expmod, pattern_asfix_term, NULL, NULL,
                   &file, NULL, &mname, NULL, &trm, NULL, NULL)) {
    ATabort("%s: internal error, unable to extract module from asfix representation.\n",
            myname);
  }

  reduct = innermost(trm);

  assert(reduct != NULL);

  aname  = ATmake("l(<str>)",fname);
  idname = ATreadFromString("id(\"AsFix2C\")");
  cmod = toasfix(reduct, aname, idname);
  free(fname);

  len = strlen(path) + 1 + strlen(modname) + strlen(".c");
  fname = malloc(len + 1);
  if (!fname) {
    ATerror("Not enough memory\n");
  }
  sprintf(fname, "%s/%s.c", path, modname );

  output = fopen(fname,"w");
  if (!output)  {
    ATwarning("Cannot open file %s\n", fname);
  } else {
    ToC_code(cmod,output);
    ATfprintf(output, "\n");
    fclose(output);
  }

  free(fname);

  return ATmake("snd-value(c-code-ready)");
}

/*}}}  */
/*{{{  void usage(void) */

/*
 * Usage: displays helpful usage information
 */

void usage(void)
{
  ATwarning(
            "Usage: %s [options]\n"
            "Options:\n"
            "\t-h              display help information (usage)\n"
            "\t-i filename     input from file (default stdin)\n"
            "\t-o filename     output to file (default stdout)\n"
            "\t-v              verbose mode\n"
            "\t-V              reveal program version (i.e. %s)\n",
            myname, myversion);
  exit(0);
}

/*}}}  */
/*{{{  void version(void) */

void version(void)
{
  ATwarning("%s v%s\n", myname, myversion);
  exit(0);
}

/*}}}  */
/*{{{  int main(int argc, char *argv[]) */

int main(int argc, char *argv[])
{
  FILE *iofile;

  int cid;
  int c, toolbus_mode = 0;
  char *input = "-";
  char *output = "-";

  extern char *optarg;
  extern int   optind;

  ATerm bottomOfStack, module, expandedmodule, term;
  ATerm aname, c_code, iname, mname, file, reduct;

  clock_t cputime;

  run_verbose = ATfalse;
 
  /* See how much CPU time we use */
  /* Set the clock to zero */

  /*  Check whether we're a ToolBus process  */
  for(c=1; !toolbus_mode && c<argc; c++)
    toolbus_mode = !strcmp(argv[c], "-TB_TOOL_NAME");

  cputime = clock();

  AFinit(argc, argv, &bottomOfStack);
  AFinitExpansionTerms();
  AFinitAsFixPatterns();
  init_patterns();

  c_rehash(INITIAL_TABLE_SIZE);
  register_all();
  resolve_all();
  init_all();

  if (toolbus_mode) {
#ifndef WIN32 /* Code with Toolbus calls, non Windows */
    ATBinit(argc, argv, &bottomOfStack);  
    cid = ATBconnect(NULL, NULL, -1, compiler_handler);
    ATBeventloop();
#else
    ATwarning("compiler: Toolbus cannot be used in Windows.\n");
#endif
  } else {
    while ((c = getopt(argc, argv, myarguments)) != -1) {
      switch (c) {
      case 'v':  run_verbose = ATtrue; break;
      case 'i':  input=optarg;         break;
      case 'o':  output=optarg;        break;
      case 'V':  version();            break;

      case 'h':  /* drop intended */
      default:   usage();              break;
      }
    }

    if (!strcmp(input, "") || !strcmp(input, "-")) {
      iofile = stdin;
    } else if (!(iofile = fopen(input, "r"))) {
      ATerror("%s: cannot open %s\n", myname, input);
    }

    module = ATreadFromFile(iofile);

    expandedmodule = expand_to_asfix(module, input);
   
    if(!ATmatchTerm(expandedmodule, pattern_asfix_term, NULL, NULL,
                    &file, NULL, &mname, NULL, &term, NULL, NULL)) {
      ATabort("%s: internal error, illegal expanded asfix\n", myname);
    }
       

    if (run_verbose) {
      ATwarning("Reducing ...\n");
    }

    reduct = innermost(term);

    if (run_verbose) {
      ATwarning("Reducing finished.\n");
    }

    aname  = ATmake("l(<str>)", input);
    iname = ATreadFromString("id(\"AsFix2C\")");
    c_code = toasfix(reduct, aname, iname);

    if (!strcmp(output, "") || !strcmp(output, "-")) {
      iofile = stdout;
    } else if (!(iofile = fopen(output, "w"))) {
      ATerror("%s: cannot open %s\n", myname, output);
    }

    ToC_code(c_code, iofile);
    ATfprintf(iofile, "\n");
    fclose(iofile);
    if (run_verbose) {
      ATwarning("Writing: %s\n", output);
    }
  }

  return 0;
}

/*}}}  */
