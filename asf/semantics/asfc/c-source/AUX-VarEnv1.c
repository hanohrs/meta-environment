/*

    Asf Sdf Compiler Runtime Library
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
/* This C code is generated by the AsfSdfCompiler version 1.0 */

#include  "asc-support.h"
static Symbol lf_AUX_VarEnv1_2sym ;
static ATerm lf_AUX_VarEnv1_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_VarEnv1_3sym ;
static ATerm lf_AUX_VarEnv1_3 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_VarEnv1_4sym ;
static ATerm lf_AUX_VarEnv1_4 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_VarEnv1_6sym ;
static ATerm lf_AUX_VarEnv1_6 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_VarEnv1_5sym ;
static ATerm lf_AUX_VarEnv1_5 ( ATerm arg1 ) ;
static Symbol lf_AUX_VarEnv1_7sym ;
static ATerm lf_AUX_VarEnv1_7 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_VarEnv1_9sym ;
static ATerm lf_AUX_VarEnv1_9 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_VarEnv1_10sym ;
static ATerm lf_AUX_VarEnv1_10 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_VarEnv1_8sym ;
static ATerm lf_AUX_VarEnv1_8 ( ATerm arg1 ) ;
static Symbol lf_AUX_VarEnv1_11sym ;
static ATerm lf_AUX_VarEnv1_11 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_VarEnv1_1sym ;
static ATerm lf_AUX_VarEnv1_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_VarEnv1_13sym ;
static ATerm lf_AUX_VarEnv1_13 ( ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 ) ;
static Symbol lf_AUX_VarEnv1_12sym ;
static ATerm lf_AUX_VarEnv1_12 ( ATerm arg1 ) ;
static Symbol lf_AUX_VarEnv1_14sym ;
static ATerm lf_AUX_VarEnv1_14 ( ATerm arg1 , ATerm arg2 ) ;
void register_AUX_VarEnv1 ( ) {
lf_AUX_VarEnv1_2sym = ATmakeSymbol ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"VarEnv\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_2sym ) ;
lf_AUX_VarEnv1_3sym = ATmakeSymbol ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_3sym ) ;
lf_AUX_VarEnv1_4sym = ATmakeSymbol ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"VarId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"VarId\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"VV-Pair\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_4sym ) ;
lf_AUX_VarEnv1_6sym = ATmakeSymbol ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"VV-Pair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVVarEnv\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_6sym ) ;
lf_AUX_VarEnv1_5sym = ATmakeSymbol ( "listtype(sort(\"VV-Pair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_5sym ) ;
lf_AUX_VarEnv1_7sym = ATmakeSymbol ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"VarId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVVarEnv\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"VV-Struct\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_7sym ) ;
lf_AUX_VarEnv1_9sym = ATmakeSymbol ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_9sym ) ;
lf_AUX_VarEnv1_10sym = ATmakeSymbol ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_10sym ) ;
lf_AUX_VarEnv1_8sym = ATmakeSymbol ( "listtype(sort(\"Cond\"),ql(\"&\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_8sym ) ;
lf_AUX_VarEnv1_11sym = ATmakeSymbol ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NamePair\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_11sym ) ;
lf_AUX_VarEnv1_1sym = ATmakeSymbol ( "listtype(sort(\"Term\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_1sym ) ;
lf_AUX_VarEnv1_13sym = ATmakeSymbol ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NameTable\"),w(\"\"),no-attrs)" , 4 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_13sym ) ;
lf_AUX_VarEnv1_12sym = ATmakeSymbol ( "listtype(sort(\"NamePair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_12sym ) ;
lf_AUX_VarEnv1_14sym = ATmakeSymbol ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IdTablePair\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_VarEnv1_14sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Term\"),ql(\",\"))" ) , lf_AUX_VarEnv1_1 , lf_AUX_VarEnv1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"VarEnv\"),w(\"\"),no-attrs)" ) , lf_AUX_VarEnv1_2 , lf_AUX_VarEnv1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),no-attrs)" ) , lf_AUX_VarEnv1_3 , lf_AUX_VarEnv1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"VarId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"VarId\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"VV-Pair\"),w(\"\"),no-attrs)" ) , lf_AUX_VarEnv1_4 , lf_AUX_VarEnv1_4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"VV-Pair\"),ql(\",\"))" ) , lf_AUX_VarEnv1_5 , lf_AUX_VarEnv1_5sym ) ;
register_prod ( ATparse ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"VV-Pair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVVarEnv\"),w(\"\"),no-attrs)" ) , lf_AUX_VarEnv1_6 , lf_AUX_VarEnv1_6sym ) ;
register_prod ( ATparse ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"VarId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVVarEnv\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"VV-Struct\"),w(\"\"),no-attrs)" ) , lf_AUX_VarEnv1_7 , lf_AUX_VarEnv1_7sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Cond\"),ql(\"&\"))" ) , lf_AUX_VarEnv1_8 , lf_AUX_VarEnv1_8sym ) ;
register_prod ( ATparse ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" ) , lf_AUX_VarEnv1_9 , lf_AUX_VarEnv1_9sym ) ;
register_prod ( ATparse ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) , lf_AUX_VarEnv1_10 , lf_AUX_VarEnv1_10sym ) ;
register_prod ( ATparse ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NamePair\"),w(\"\"),no-attrs)" ) , lf_AUX_VarEnv1_11 , lf_AUX_VarEnv1_11sym ) ;
register_prod ( ATparse ( "listtype(sort(\"NamePair\"),ql(\",\"))" ) , lf_AUX_VarEnv1_12 , lf_AUX_VarEnv1_12sym ) ;
register_prod ( ATparse ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NameTable\"),w(\"\"),no-attrs)" ) , lf_AUX_VarEnv1_13 , lf_AUX_VarEnv1_13sym ) ;
register_prod ( ATparse ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IdTablePair\"),w(\"\"),no-attrs)" ) , lf_AUX_VarEnv1_14 , lf_AUX_VarEnv1_14sym ) ;
}
void resolve_AUX_VarEnv1 ( ) {
}
void init_AUX_VarEnv1 ( ) {
}
ATerm lf_AUX_VarEnv1_14 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_14sym , ATmakeAppl ( lf_AUX_VarEnv1_14sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_VarEnv1_14sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_VarEnv1_12 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_12sym , ATmakeAppl ( lf_AUX_VarEnv1_12sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_VarEnv1_12sym , arg0 ) ) ;
}
ATerm lf_AUX_VarEnv1_13 ( ATerm arg0 , ATerm arg1 , ATerm arg2 , ATerm arg3 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_13sym , ATmakeAppl ( lf_AUX_VarEnv1_13sym , arg0 , arg1 , arg2 , arg3 ) ) ;
CONS_EXIT ( make_nf4 ( lf_AUX_VarEnv1_13sym , arg0 , arg1 , arg2 , arg3 ) ) ;
}
ATerm lf_AUX_VarEnv1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_1sym , ATmakeAppl ( lf_AUX_VarEnv1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_VarEnv1_1sym , arg0 ) ) ;
}
ATerm lf_AUX_VarEnv1_11 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_11sym , ATmakeAppl ( lf_AUX_VarEnv1_11sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_VarEnv1_11sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_VarEnv1_8 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_8sym , ATmakeAppl ( lf_AUX_VarEnv1_8sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_VarEnv1_8sym , arg0 ) ) ;
}
ATerm lf_AUX_VarEnv1_10 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_10sym , ATmakeAppl ( lf_AUX_VarEnv1_10sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_VarEnv1_10sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_VarEnv1_9 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_9sym , ATmakeAppl ( lf_AUX_VarEnv1_9sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_VarEnv1_9sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_VarEnv1_7 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_7sym , ATmakeAppl ( lf_AUX_VarEnv1_7sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_VarEnv1_7sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_VarEnv1_5 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_5sym , ATmakeAppl ( lf_AUX_VarEnv1_5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_VarEnv1_5sym , arg0 ) ) ;
}
ATerm lf_AUX_VarEnv1_6 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_6sym , ATmakeAppl ( lf_AUX_VarEnv1_6sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_VarEnv1_6sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_VarEnv1_4 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_4sym , ATmakeAppl ( lf_AUX_VarEnv1_4sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_VarEnv1_4sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_VarEnv1_3 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_3sym , ATmakeAppl ( lf_AUX_VarEnv1_3sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_VarEnv1_3sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_VarEnv1_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_VarEnv1_2sym , ATmakeAppl ( lf_AUX_VarEnv1_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_VarEnv1_2sym , arg0 ) ) ;
}

