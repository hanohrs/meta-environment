#include "hello.tif.c"             /* Include tool interface */

term *get_text(void)               /* Generate a hello text */
{
  return TBmake("snd-value(\"Hello World, my first ToolBus tool in C!\n\")");
}

void rec_terminate(term *msg)      /* Mandatory function to terminate tool */
{
  exit(0);
}

void main(int argc, char *argv[])  /* main program of hello tool */
{
  TBinit("hello", argc, argv, hello_handler, hello_check_in_sign);
  TBeventloop();
}
