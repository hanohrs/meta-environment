#ifndef _C_COMPILER_H
#define _C_COMPILER_H

void call_c_compiler(const char* cflags,
		     ATbool with_annos,
		     const char* binary, 
		     const char* name, 
		     const char* stem,
		     const char* source);

#endif
