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
static Symbol lf_AUX_MuASF_Sign2C9_1sym ;
static ATerm lf_AUX_MuASF_Sign2C9_1 ( ATerm arg1 ) ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol lf5sym ;
static ATerm lf5 ( ATerm arg1 ) ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef16sym ;
static funcptr ef16 ;
void register_AUX_MuASF_Sign2C9 ( ) {
lf_AUX_MuASF_Sign2C9_1sym = ATmakeSymbol ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"namepair2rstats\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"NamePair\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Sign2C9_1sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"Statement\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf5sym = ATmakeSymbol ( "listtype(sort(\"Expression\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf5sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Term\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"namepair2rstats\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"NamePair\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Sign2C9_1 , lf_AUX_MuASF_Sign2C9_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Term\"),ql(\",\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Statement\"))" ) , lf4 , lf4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Expression\"),ql(\",\"))" ) , lf5 , lf5sym ) ;
}
void resolve_AUX_MuASF_Sign2C9 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NamePair\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NamePair\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-quoted-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-quoted-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
static ATerm constant2 = NULL ;
void init_AUX_MuASF_Sign2C9 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
ATprotect ( & constant2 ) ;
}
ATerm lf_AUX_MuASF_Sign2C9_1 ( ATerm arg0 ) {
{
ATerm tmp [ 5 ] ;
FUNC_ENTRY ( lf_AUX_MuASF_Sign2C9_1sym , ATmakeAppl ( lf_AUX_MuASF_Sign2C9_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , ef2sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
if ( check_sym ( atmp010 , lf2sym ) ) {
{
ATerm atmp0100 = arg_0 ( atmp010 ) ;
{
ATerm atmp02 = arg_2 ( arg0 ) ;
if ( check_sym ( atmp02 , lf3sym ) ) {
{
ATerm atmp020 = arg_0 ( atmp02 ) ;
if ( not_empty_list ( atmp0000 ) ) {
if ( term_equal ( list_head ( atmp0000 ) , make_char ( 34 ) ) ) {
( tmp [ 0 ] = list_tail ( atmp0000 ) ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
if ( term_equal ( list_head ( tmp [ 0 ] ) , make_char ( 123 ) ) ) {
( tmp [ 1 ] = list_tail ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = list_prefix ( tmp [ 1 ] ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
if ( term_equal ( list_last ( tmp [ 1 ] ) , make_char ( 34 ) ) ) {
( tmp [ 3 ] = list_prefix ( tmp [ 2 ] ) ) ;
if ( not_empty_list ( tmp [ 2 ] ) ) {
if ( term_equal ( list_last ( tmp [ 2 ] ) , make_char ( 125 ) ) ) {
if ( not_empty_list ( atmp0100 ) ) {
if ( term_equal ( list_head ( atmp0100 ) , make_char ( 108 ) ) ) {
( tmp [ 4 ] = list_tail ( atmp0100 ) ) ;
FUNC_EXIT ( ( * ef3 ) ( ( * ef4 ) ( lf4 ( make_list ( ( * ef5 ) ( ( * ef6 ) ( ( * ef7 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( ( ATerm ) ATmakeList ( 13 , char_table [ 114 ] , char_table [ 101 ] , char_table [ 103 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 95 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 100 ] ) ) ) ) , ( * ef11 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( ( ATerm ) ATmakeList ( 7 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 97 ] , char_table [ 114 ] , char_table [ 115 ] , char_table [ 101 ] ) ) ) ) , ( * ef11 ) ( lf5 ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( cons ( make_list_char ( 34 ) , cons ( make_list_char ( 108 ) , cons ( make_list_char ( 105 ) , cons ( make_list_char ( 115 ) , cons ( make_list_char ( 116 ) , cons ( make_list_char ( 116 ) , cons ( make_list_char ( 121 ) , cons ( make_list_char ( 112 ) , cons ( make_list_char ( 101 ) , cons ( make_list_char ( 40 ) , cons ( make_list ( tmp [ 3 ] ) , ( ATerm ) ATmakeList ( 2 , char_table [ 41 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( cons ( make_list_char ( 108 ) , make_list ( tmp [ 4 ] ) ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( cons ( make_list_char ( 108 ) , cons ( make_list ( tmp [ 4 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
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
{
if ( not_empty_list ( atmp0100 ) ) {
( tmp [ 0 ] = list_head ( atmp0100 ) ) ;
if ( term_equal ( tmp [ 0 ] , make_char ( 95 ) ) ) {
( tmp [ 1 ] = list_tail ( atmp0100 ) ) ;
( tmp [ 2 ] = ( * ef14 ) ( ( * ef2 ) ( lf2 ( make_list ( atmp0000 ) ) ) ) ) ;
if ( term_equal ( tmp [ 2 ] , ( constant0 ? constant0 : ( constant0 = ( * ef15 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef3 ) ( ( * ef4 ) ( lf4 ( make_list ( ( * ef5 ) ( ( * ef6 ) ( ( * ef7 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( ( ATerm ) ATmakeList ( 13 , char_table [ 114 ] , char_table [ 101 ] , char_table [ 103 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 95 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 100 ] ) ) ) ) , ( * ef11 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( ( ATerm ) ATmakeList ( 7 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 97 ] , char_table [ 114 ] , char_table [ 115 ] , char_table [ 101 ] ) ) ) ) , ( * ef11 ) ( lf5 ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( make_list ( atmp0000 ) ) ) ) ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( make_list ( tmp [ 1 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( cons ( make_list ( tmp [ 1 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 2 ] , ( constant1 ? constant1 : ( constant1 = ( * ef13 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef3 ) ( ( * ef4 ) ( lf4 ( make_list ( ( * ef5 ) ( ( * ef6 ) ( ( * ef7 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( ( ATerm ) ATmakeList ( 13 , char_table [ 114 ] , char_table [ 101 ] , char_table [ 103 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 95 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 100 ] ) ) ) ) , ( * ef11 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( ( ATerm ) ATmakeList ( 7 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 97 ] , char_table [ 114 ] , char_table [ 115 ] , char_table [ 101 ] ) ) ) ) , ( * ef11 ) ( lf5 ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( cons ( make_list_char ( 34 ) , cons ( make_list ( atmp0000 ) , make_list ( make_char ( 34 ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( make_list ( tmp [ 1 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( cons ( make_list ( tmp [ 1 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
}
}
if ( term_equal ( tmp [ 0 ] , make_char ( 101 ) ) ) {
( tmp [ 1 ] = list_tail ( atmp0100 ) ) ;
FUNC_EXIT_CONST ( constant2 , ( * ef16 ) ( ) ) ;
}
if ( term_equal ( tmp [ 0 ] , make_char ( 108 ) ) ) {
( tmp [ 1 ] = list_tail ( atmp0100 ) ) ;
if ( term_equal ( ( * ef12 ) ( ( * ef2 ) ( lf2 ( make_list ( atmp0000 ) ) ) ) , ( constant1 ? constant1 : ( constant1 = ( * ef13 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef3 ) ( ( * ef4 ) ( lf4 ( make_list ( ( * ef5 ) ( ( * ef6 ) ( ( * ef7 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( ( ATerm ) ATmakeList ( 13 , char_table [ 114 ] , char_table [ 101 ] , char_table [ 103 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 95 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 100 ] ) ) ) ) , ( * ef11 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( ( ATerm ) ATmakeList ( 7 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 97 ] , char_table [ 114 ] , char_table [ 115 ] , char_table [ 101 ] ) ) ) ) , ( * ef11 ) ( lf5 ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( make_list ( atmp0000 ) ) ) ) ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( cons ( make_list_char ( 108 ) , make_list ( tmp [ 1 ] ) ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( ( * ef9 ) ( ( * ef10 ) ( lf2 ( cons ( make_list_char ( 108 ) , cons ( make_list ( tmp [ 1 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
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
FUNC_EXIT ( make_nf1 ( lf_AUX_MuASF_Sign2C9_1sym , arg0 ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}
ATerm lf5 ( ATerm arg0 ) {
CONS_ENTRY ( lf5sym , ATmakeAppl ( lf5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf5sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}

