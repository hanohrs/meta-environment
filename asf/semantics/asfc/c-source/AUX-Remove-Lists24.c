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
static Symbol lf_AUX_Remove_Lists24_2sym ;
static ATerm lf_AUX_Remove_Lists24_2 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef17sym ;
static funcptr ef17 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf_AUX_Remove_Lists24_1sym ;
static ATerm lf_AUX_Remove_Lists24_1 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
void register_AUX_Remove_Lists24 ( ) {
lf_AUX_Remove_Lists24_2sym = ATmakeSymbol ( "prod(id(\"Remove-Lists\"),w(\"\"),[l(\"transform-lhs-multiple-terms\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Remove_Lists24_2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf_AUX_Remove_Lists24_1sym = ATmakeSymbol ( "listtype(sort(\"Term\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Remove_Lists24_1sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"Cond\"),ql(\"&\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Term\"),ql(\",\"))" ) , lf_AUX_Remove_Lists24_1 , lf_AUX_Remove_Lists24_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Remove-Lists\"),w(\"\"),[l(\"transform-lhs-multiple-terms\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" ) , lf_AUX_Remove_Lists24_2 , lf_AUX_Remove_Lists24_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Cond\"),ql(\"&\"))" ) , lf4 , lf4sym ) ;
}
void resolve_AUX_Remove_Lists24 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"Var\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"Var\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"VarId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Var\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"VarId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Var\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"Term\"),w(\"\"),ql(\"=:\"),w(\"\"),sort(\"Term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"Term\"),w(\"\"),ql(\"=:\"),w(\"\"),sort(\"Term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Remove-Lists-Aux\"),w(\"\"),[l(\"make-new-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Remove-Lists-Aux\"),w(\"\"),[l(\"make-new-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Remove-Lists\"),w(\"\"),[l(\"rem-lists-from-lhs-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Remove-Lists\"),w(\"\"),[l(\"rem-lists-from-lhs-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"get-int\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"get-int\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"newlistvar\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"VarId\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"newlistvar\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"VarId\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"put-int\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"put-int\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"Integers-Extended\"),w(\"\"),[l(\"succ\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"Integers-Extended\"),w(\"\"),[l(\"succ\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"Remove-Lists\"),w(\"\"),[l(\"transform-lhs-list-terms\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"Remove-Lists\"),w(\"\"),[l(\"transform-lhs-list-terms\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"Remove-Lists\"),w(\"\"),[l(\"transform-no-list-terms\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"Remove-Lists\"),w(\"\"),[l(\"transform-no-list-terms\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term-CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_Remove_Lists24 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_Remove_Lists24_2 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 36 ] ;
FUNC_ENTRY ( lf_AUX_Remove_Lists24_2sym , ATmakeAppl ( lf_AUX_Remove_Lists24_2sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Remove_Lists24_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
{
if ( check_sym ( tmp [ 0 ] , ef1sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ) ;
{
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 1 ] ) ) ;
{
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
{
if ( check_sym ( tmp [ 2 ] , lf_AUX_Remove_Lists24_1sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 2 ] ) ) ;
{
if ( not_empty_list ( tmp [ 4 ] ) ) {
( tmp [ 6 ] = list_head ( tmp [ 4 ] ) ) ;
if ( term_equal ( tmp [ 6 ] , make_char ( 99 ) ) ) {
( tmp [ 7 ] = list_tail ( tmp [ 4 ] ) ) ;
{
if ( not_empty_list ( tmp [ 7 ] ) ) {
( tmp [ 8 ] = list_head ( tmp [ 7 ] ) ) ;
if ( term_equal ( tmp [ 8 ] , make_char ( 111 ) ) ) {
( tmp [ 9 ] = list_tail ( tmp [ 7 ] ) ) ;
{
if ( not_empty_list ( tmp [ 9 ] ) ) {
( tmp [ 10 ] = list_head ( tmp [ 9 ] ) ) ;
if ( term_equal ( tmp [ 10 ] , make_char ( 110 ) ) ) {
( tmp [ 11 ] = list_tail ( tmp [ 9 ] ) ) ;
{
if ( is_single_element ( tmp [ 11 ] ) ) {
( tmp [ 12 ] = list_head ( tmp [ 11 ] ) ) ;
if ( term_equal ( tmp [ 12 ] , make_char ( 115 ) ) ) {
if ( not_empty_list ( tmp [ 5 ] ) ) {
( tmp [ 13 ] = list_head ( tmp [ 5 ] ) ) ;
{
( tmp [ 14 ] = list_tail ( tmp [ 5 ] ) ) ;
{
if ( is_single_element ( tmp [ 14 ] ) ) {
( tmp [ 15 ] = list_head ( tmp [ 14 ] ) ) ;
( tmp [ 16 ] = ( * ef9 ) ( tmp [ 13 ] ) ) ;
if ( term_equal ( tmp [ 16 ] , ( constant0 ? constant0 : ( constant0 = ( * ef10 ) ( ) ) ) ) ) {
( tmp [ 17 ] = ( * ef11 ) ( tmp [ 13 ] , arg1 ) ) ;
if ( check_sym ( tmp [ 17 ] , ef3sym ) ) {
( tmp [ 18 ] = arg_0 ( tmp [ 17 ] ) ) ;
( tmp [ 19 ] = arg_1 ( tmp [ 17 ] ) ) ;
( tmp [ 20 ] = arg_2 ( tmp [ 17 ] ) ) ;
if ( check_sym ( tmp [ 18 ] , lf_AUX_Remove_Lists24_1sym ) ) {
( tmp [ 21 ] = arg_0 ( tmp [ 18 ] ) ) ;
if ( check_sym ( tmp [ 19 ] , lf4sym ) ) {
( tmp [ 22 ] = arg_0 ( tmp [ 19 ] ) ) ;
if ( is_single_element ( tmp [ 21 ] ) ) {
( tmp [ 23 ] = list_head ( tmp [ 21 ] ) ) ;
( tmp [ 24 ] = ( * ef12 ) ( tmp [ 20 ] ) ) ;
( tmp [ 25 ] = ( * ef13 ) ( tmp [ 24 ] ) ) ;
( tmp [ 26 ] = ( * ef14 ) ( ( * ef15 ) ( tmp [ 24 ] ) , tmp [ 20 ] ) ) ;
( tmp [ 27 ] = ( * ef16 ) ( lf_AUX_Remove_Lists24_1 ( make_list ( tmp [ 15 ] ) ) , tmp [ 26 ] ) ) ;
if ( check_sym ( tmp [ 27 ] , ef3sym ) ) {
( tmp [ 28 ] = arg_0 ( tmp [ 27 ] ) ) ;
( tmp [ 29 ] = arg_1 ( tmp [ 27 ] ) ) ;
( tmp [ 30 ] = arg_2 ( tmp [ 27 ] ) ) ;
if ( check_sym ( tmp [ 28 ] , lf_AUX_Remove_Lists24_1sym ) ) {
( tmp [ 31 ] = arg_0 ( tmp [ 28 ] ) ) ;
if ( check_sym ( tmp [ 29 ] , lf4sym ) ) {
( tmp [ 32 ] = arg_0 ( tmp [ 29 ] ) ) ;
if ( is_single_element ( tmp [ 31 ] ) ) {
( tmp [ 33 ] = list_head ( tmp [ 31 ] ) ) ;
if ( check_sym ( tmp [ 33 ] , ef4sym ) ) {
( tmp [ 34 ] = arg_0 ( tmp [ 33 ] ) ) ;
if ( check_sym ( tmp [ 34 ] , ef5sym ) ) {
( tmp [ 35 ] = arg_0 ( tmp [ 34 ] ) ) ;
FUNC_EXIT ( ( * ef3 ) ( lf_AUX_Remove_Lists24_1 ( make_list ( ( * ef4 ) ( ( * ef5 ) ( tmp [ 25 ] ) ) ) ) , lf4 ( cons ( make_list ( ( * ef6 ) ( ( * ef1 ) ( ( * ef2 ) ( lf3 ( ( ATerm ) ATmakeList ( 14 , char_table [ 110 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 112 ] , char_table [ 116 ] , char_table [ 121 ] , char_table [ 95 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] ) ) ) , lf_AUX_Remove_Lists24_1 ( make_list ( ( * ef4 ) ( ( * ef5 ) ( tmp [ 25 ] ) ) ) ) ) , ( * ef7 ) ( ( * ef2 ) ( lf3 ( make_list ( make_char ( 116 ) ) ) ) ) ) ) , cons ( make_list ( ( * ef8 ) ( ( * ef1 ) ( ( * ef2 ) ( lf3 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 104 ] , char_table [ 101 ] , char_table [ 97 ] , char_table [ 100 ] ) ) ) , lf_AUX_Remove_Lists24_1 ( make_list ( ( * ef4 ) ( ( * ef5 ) ( tmp [ 25 ] ) ) ) ) ) , tmp [ 23 ] ) ) , cons ( make_list ( tmp [ 22 ] ) , cons ( make_list ( ( * ef6 ) ( ( * ef1 ) ( ( * ef2 ) ( lf3 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 116 ] , char_table [ 97 ] , char_table [ 105 ] , char_table [ 108 ] ) ) ) , lf_AUX_Remove_Lists24_1 ( make_list ( ( * ef4 ) ( ( * ef5 ) ( tmp [ 25 ] ) ) ) ) ) , ( * ef4 ) ( ( * ef5 ) ( tmp [ 35 ] ) ) ) ) , make_list ( tmp [ 32 ] ) ) ) ) ) ) , tmp [ 30 ] ) ) ;
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
}
if ( term_equal ( tmp [ 16 ] , ( constant1 ? constant1 : ( constant1 = ( * ef17 ) ( ) ) ) ) ) {
( tmp [ 17 ] = ( * ef12 ) ( arg1 ) ) ;
( tmp [ 18 ] = ( * ef13 ) ( tmp [ 17 ] ) ) ;
( tmp [ 19 ] = ( * ef14 ) ( ( * ef15 ) ( tmp [ 17 ] ) , arg1 ) ) ;
( tmp [ 20 ] = ( * ef18 ) ( lf_AUX_Remove_Lists24_1 ( make_list ( ( * ef1 ) ( ( * ef2 ) ( lf3 ( ( ATerm ) ATmakeList ( 4 , char_table [ 99 ] , char_table [ 111 ] , char_table [ 110 ] , char_table [ 115 ] ) ) ) , lf_AUX_Remove_Lists24_1 ( cons ( make_list ( tmp [ 13 ] ) , make_list ( tmp [ 15 ] ) ) ) ) ) ) , tmp [ 19 ] ) ) ;
if ( check_sym ( tmp [ 20 ] , ef3sym ) ) {
( tmp [ 21 ] = arg_0 ( tmp [ 20 ] ) ) ;
( tmp [ 22 ] = arg_1 ( tmp [ 20 ] ) ) ;
( tmp [ 23 ] = arg_2 ( tmp [ 20 ] ) ) ;
if ( check_sym ( tmp [ 21 ] , lf_AUX_Remove_Lists24_1sym ) ) {
( tmp [ 24 ] = arg_0 ( tmp [ 21 ] ) ) ;
if ( check_sym ( tmp [ 22 ] , lf4sym ) ) {
( tmp [ 25 ] = arg_0 ( tmp [ 22 ] ) ) ;
if ( is_single_element ( tmp [ 24 ] ) ) {
( tmp [ 26 ] = list_head ( tmp [ 24 ] ) ) ;
if ( check_sym ( tmp [ 26 ] , ef4sym ) ) {
( tmp [ 27 ] = arg_0 ( tmp [ 26 ] ) ) ;
if ( check_sym ( tmp [ 27 ] , ef5sym ) ) {
( tmp [ 28 ] = arg_0 ( tmp [ 27 ] ) ) ;
FUNC_EXIT ( ( * ef3 ) ( lf_AUX_Remove_Lists24_1 ( make_list ( ( * ef4 ) ( ( * ef5 ) ( tmp [ 28 ] ) ) ) ) , lf4 ( make_list ( tmp [ 25 ] ) ) , tmp [ 23 ] ) ) ;
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
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Remove_Lists24_2sym , arg0 , arg1 ) ) ;
}
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}
ATerm lf_AUX_Remove_Lists24_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Remove_Lists24_1sym , ATmakeAppl ( lf_AUX_Remove_Lists24_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Remove_Lists24_1sym , arg0 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}

