
#ifndef FOCUS_H
#define FOCUS_H

#include <PT.h>

#include "Editor.h"

#define FOCUS_CLEAN 0
#define FOCUS_DIRTY 1

SE_Focus createFocus(PT_ParseTree parse_tree, SE_Path path, int focus_status);
SE_Focus createRootFocus(PT_ParseTree parse_tree, int focus_status);

SE_Focus expandFocusToStartSymbol(SE_Editor editor, SE_Focus focus);
SE_Focus updateFocus(SE_Focus focus, int location, int length);

SE_Editor joinFoci(SE_Editor editor);
SE_Editor joinDirtyFoci(SE_Editor editor);

SE_FocusList removeFocus(SE_FocusList foci, SE_Focus focus);

#endif
