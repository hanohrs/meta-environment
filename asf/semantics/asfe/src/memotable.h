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

/* memotable.h
 *
 * Data structure for memoization of terms and normal forms
 *
 * $Id$
 */
#ifndef _MEMOTABLE_H
#define _MEMOTABLE_H

#include <aterm2.h>
#include <PT.h>

typedef ATermTable MemoTable;

MemoTable MemoTableCreate(void);
MemoTable MemoTableClear(MemoTable table);
void      MemoTableDestroy(MemoTable table);
MemoTable MemoTableAdd(MemoTable table, PT_Tree term, PT_Tree normalform);
PT_Tree   MemoTableLookup(MemoTable table, PT_Tree term);

#endif
