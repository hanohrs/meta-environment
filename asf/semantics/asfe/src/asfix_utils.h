/*
    Meta-Environment - An environment for language prototyping.
    Copyright (C) 2000  Stichting Mathematisch Centrum,
                        Amsterdam, The Netherlands.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or (at
    your option) any later version.

    This program is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
    USA

*/
/*
 * utils.h
 *
 * Extra utility functions on asfix that the evaluator uses.
 * This utility module is ment only to be used in evaluator.c
 *
 *
 * $Id$
 */

#ifndef EVALUATOR_UTILS_H
#define EVALUATOR_UTILS_H

#include <MEPT-utils.h>

#ifdef PEDANTIC_CHECKING
#define pedantic_assert(c) assert(c)
#else
#define pedantic_assert(c)
#endif

#define isAsFixEqual(t1,t2) (isEqualModuloWhitespace(t1,t2))

/* isEqualModuloWhitespace computes equality disregarding any whitespace in the 
 * asfix. Both terms must contain whitespace keywords, but they may be different.
 */
ATbool isEqualModuloWhitespace(PT_Tree asfix1, PT_Tree asfix2);

/* skipWhiteSpace. This function moves the list pointer to an 
 * element that is not layout (whitespace or a separator).
 */
PT_Args skipWhitespace(PT_Args list);

/* skipToEndOfWhitespace. this function moves the list pointer
 * while the pointer is on whitespace.
 */
PT_Args skipToEndOfWhitespace(PT_Args list);

/* yield. This function asources an asfix term to text and 
 * creates a quoted literal ATerm for it.
 */
ATerm yieldTree(PT_Tree asfix);
ATerm yieldArgs(PT_Args asfix);

/*
 * isValidList, isValidSlice both check:
 *    - if no consecutive whitespace nodes occur in a list
 */
ATbool isValidList(PT_Args list);
ATbool isValidSlice(PT_Args begin, PT_Args end);

#endif
