/*

    Meta-Environment - An environment for language prototyping.
    Copyright (C) 2000  Stichting Mathematisch Centrum, Amsterdam, The Netherlands. 

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
#include  "asc-support.h"
static Symbol lf_AUX_Make_Assign_Conds8_2sym ;
static ATerm lf_AUX_Make_Assign_Conds8_2 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf_AUX_Make_Assign_Conds8_1sym ;
static ATerm lf_AUX_Make_Assign_Conds8_1 ( ATerm arg1 ) ;
void register_AUX_Make_Assign_Conds8 ( ) {
lf_AUX_Make_Assign_Conds8_2sym = ATmakeSymbol ( "prod(id(\"Make-Assign-Conds\"),w(\"\"),[l(\"make-mc-conds\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Make_Assign_Conds8_2sym ) ;
lf_AUX_Make_Assign_Conds8_1sym = ATmakeSymbol ( "listtype(sort(\"Cond\"),ql(\"&\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Make_Assign_Conds8_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Cond\"),ql(\"&\"))" ) , lf_AUX_Make_Assign_Conds8_1 , lf_AUX_Make_Assign_Conds8_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Make-Assign-Conds\"),w(\"\"),[l(\"make-mc-conds\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) , lf_AUX_Make_Assign_Conds8_2 , lf_AUX_Make_Assign_Conds8_2sym ) ;
}
void resolve_AUX_Make_Assign_Conds8 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Make-Assign-Conds\"),w(\"\"),[l(\"make-mc-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Cond\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Make-Assign-Conds\"),w(\"\"),[l(\"make-mc-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Cond\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Make_Assign_Conds8 ( ) {
}
ATerm lf_AUX_Make_Assign_Conds8_2 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 11 ] ;
FUNC_ENTRY ( lf_AUX_Make_Assign_Conds8_2sym , ATmakeAppl ( lf_AUX_Make_Assign_Conds8_2sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Make_Assign_Conds8_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
FUNC_EXIT ( ( * ef1 ) ( tmp [ 0 ] , arg1 ) ) ;
}
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
( tmp [ 2 ] = ( * ef1 ) ( tmp [ 0 ] , arg1 ) ) ;
if ( check_sym ( tmp [ 2 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
( tmp [ 4 ] = arg_1 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf_AUX_Make_Assign_Conds8_1sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( is_single_element ( tmp [ 5 ] ) ) {
( tmp [ 6 ] = list_head ( tmp [ 5 ] ) ) ;
( tmp [ 7 ] = lf_AUX_Make_Assign_Conds8_2 ( lf_AUX_Make_Assign_Conds8_1 ( make_list ( tmp [ 1 ] ) ) , tmp [ 4 ] ) ) ;
if ( check_sym ( tmp [ 7 ] , ef2sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
( tmp [ 9 ] = arg_1 ( tmp [ 7 ] ) ) ;
if ( check_sym ( tmp [ 8 ] , lf_AUX_Make_Assign_Conds8_1sym ) ) {
( tmp [ 10 ] = arg_0 ( tmp [ 8 ] ) ) ;
if ( not_empty_list ( tmp [ 10 ] ) ) {
FUNC_EXIT ( ( * ef2 ) ( lf_AUX_Make_Assign_Conds8_1 ( cons ( make_list ( tmp [ 6 ] ) , make_list ( tmp [ 10 ] ) ) ) , tmp [ 9 ] ) ) ;
}
}
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Make_Assign_Conds8_2sym , arg0 , arg1 ) ) ;
}
}
ATerm lf_AUX_Make_Assign_Conds8_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Make_Assign_Conds8_1sym , ATmakeAppl ( lf_AUX_Make_Assign_Conds8_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Make_Assign_Conds8_1sym , arg0 ) ) ;
}

