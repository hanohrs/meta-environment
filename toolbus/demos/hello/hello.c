#include "TB.h"                     /* Standard header file */

term *hello_handler(term *inp)      /* Handle input from ToolBus */
{
  term *arg;

  if(TBmatch(inp, "rec-eval(get-text)"))
    return TBmake("snd-value(\"Hello World, my first ToolBus tool in C!\n\")");
  if(TBmatch(inp, "rec-terminate(%t)", &arg))
    exit(0);
  else {
    TBprintf(stderr, "hello: wrong input %t received\n", inp);
    return NULL;                    /* Return NULL to indicate that no term
                                       has to be sent back to the ToolBus */
  }
}

void main(int argc, char *argv[])   /* main program of hello tool */
{
  TBinit("hello", argc, argv, hello_handler, NULL);
  TBeventloop();
}
