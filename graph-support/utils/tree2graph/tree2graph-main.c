/* $Id$ */

/*{{{  includes */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <aterm1.h>
#include <MEPT-utils.h>
#include "PT2graph.h"

#ifndef WITHOUT_TOOLBUS
#include "graph-converter.tif.h"
#endif

/*}}}  */

/*{{{  globals */

static char myname[] = "tree2graph";
static char myversion[] = "1.0";
static char myarguments[] = "bchi:lmo:ptV";


/*}}}  */

/*{{{  void usage(void) */
 
void usage(void)
{
  fprintf(stderr,
	  "Converts a parse tree to a graph term. For every application of \n"
	  "a production a node is created and for every character or literal \n"
	  "a leaf is created.\n\n"
          "Usage: %s [%s]\n"
          "Options:\n"
          "\t-b              save graph in binary format\n"
          "\t-c              display individual characters\n"
          "\t-h              display help information (usage)\n"
          "\t-i filename     input from file (default stdin)\n"
          "\t-l              display layout nodes\n"
          "\t-o filename     output to file (default stdout)\n"
          "\t-p              show the productions\n"
          "\t-t              save graph in textual format\n"
          "\t-V              reveal program version (i.e. %s)\n",
          myname, myarguments, myversion);
}
 
/*}}}  */
/*{{{  void rec_terminate(int cid, ATerm t) */
 
void rec_terminate(int cid, ATerm t)
{
  exit(0);
}
 
/*}}}  */
/*{{{  ATerm tree2graph(int cid, char *name, ATerm tree) */

ATerm tree2graph(int cid, const char *name, ATerm tree, ATerm leafs_on)
{
  ATbool flag = ATmatch(leafs_on, "true");

  Graph graph = PT_printAnyToGraph(name, tree, flag, ATtrue, flag, flag);

  return ATmake("snd-value(graph(<term>))", GraphToTerm(graph));
}

/*}}}  */ 
/*{{{  int main (int argc, char *argv[]) */

int main (int argc, char *argv[])
{
  int c; /* option character */
  ATerm bottomOfStack;
  ATerm tree;
  Graph graph;

  char   *input_file_name  = "-";
  char   *output_file_name = "-";

  ATbool characters = ATfalse;
  ATbool productions = ATfalse;
  ATbool layout = ATfalse;
  ATbool literals = ATtrue;
  ATbool binary = ATtrue;

#ifndef WITHOUT_TOOLBUS
  ATbool use_toolbus = ATfalse;
  int i;
 
  for (i=1; !use_toolbus && i < argc; i++) {
    use_toolbus = !strcmp(argv[i], "-TB_TOOL_NAME");
  }
 
  if (use_toolbus) {
    int cid;
    ATBinit(argc, argv, &bottomOfStack);
    PT_initMEPTApi();
    initGraphApi();
    cid = ATBconnect(NULL, NULL, -1, graph_converter_handler);
    ATBeventloop();
  }
  else
#endif
  {
    while ((c = getopt(argc, argv, myarguments)) != EOF)
      switch (c) {
        case 'b':  binary = ATtrue;              break;
        case 'c':  characters = ATtrue;          break;
        case 'h':  usage();                      exit(0);
        case 'i':  input_file_name  = optarg;    break;
        case 'l':  layout = ATtrue;              break;
        case 'm':  literals = ATfalse;           break;
        case 'o':  output_file_name = optarg;    break;
        case 'p':  productions = ATtrue;         break;
        case 't':  binary = ATfalse;             break;
        case 'V':  fprintf(stderr, "%s %s\n", myname, myversion);
                                                 exit(0);
        default :  usage();                      exit(1);
    }

    ATinit(argc, argv, &bottomOfStack);
    PT_initMEPTApi();
    initGraphApi();

    tree = ATreadFromNamedFile(input_file_name);

    if(tree == NULL) {
      ATerror("%s: could not read term from input file %s\n", 
	      myname, input_file_name);
    }

    graph = PT_printAnyToGraph("",
                               tree, characters, productions,
			       layout, literals);

    if (!strcmp(output_file_name,"-")) {
      if (binary) {
        ATwriteToBinaryFile(GraphToTerm(graph), stdout);
      } 
      else {
        ATwriteToTextFile(GraphToTerm(graph), stdout);
      } 
    }
    else {
      if (binary) {
        ATwriteToNamedBinaryFile(GraphToTerm(graph), output_file_name);
      } 
      else {
        ATwriteToNamedTextFile(GraphToTerm(graph), output_file_name);
      } 
    }
  }

  return 0;
}

/*}}}  */
