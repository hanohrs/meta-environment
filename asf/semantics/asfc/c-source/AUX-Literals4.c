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
static Symbol lf_AUX_Literals4_1sym ;
static ATerm lf_AUX_Literals4_1 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Literals4 ( ) {
lf_AUX_Literals4_1sym = ATmakeSymbol ( "prod(id(\"Literals\"),w(\"\"),[l(\"de-escape\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Literal\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Literals4_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Literals\"),w(\"\"),[l(\"de-escape\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Literal\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" ) , lf_AUX_Literals4_1 , lf_AUX_Literals4_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Literals4 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Literals\"),w(\"\"),[sort(\"Literal\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Literals\"),w(\"\"),[sort(\"Literal\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Literals4 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Literals4_1 ( ATerm arg0 ) {
{
ATerm tmp [ 8 ] ;
FUNC_ENTRY ( lf_AUX_Literals4_1sym , ATmakeAppl ( lf_AUX_Literals4_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( not_empty_list ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
if ( term_equal ( tmp [ 0 ] , make_char ( 34 ) ) ) {
( tmp [ 1 ] = list_tail ( atmp000 ) ) ;
{
if ( is_single_element ( tmp [ 1 ] ) ) {
if ( term_equal ( list_head ( tmp [ 1 ] ) , make_char ( 34 ) ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 34 ] , char_table [ 34 ] ) ) ) ) ;
}
}
{
if ( not_empty_list ( tmp [ 1 ] ) ) {
( tmp [ 2 ] = list_head ( tmp [ 1 ] ) ) ;
if ( term_equal ( tmp [ 2 ] , make_char ( 92 ) ) ) {
( tmp [ 3 ] = list_tail ( tmp [ 1 ] ) ) ;
{
if ( not_empty_list ( tmp [ 3 ] ) ) {
( tmp [ 4 ] = list_head ( tmp [ 3 ] ) ) ;
if ( term_equal ( tmp [ 4 ] , make_char ( 92 ) ) ) {
( tmp [ 5 ] = list_tail ( tmp [ 3 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
( tmp [ 6 ] = list_prefix ( tmp [ 5 ] ) ) ;
if ( term_equal ( list_last ( tmp [ 5 ] ) , make_char ( 34 ) ) ) {
( tmp [ 7 ] = ( * ef2 ) ( ( * ef1 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 92 ] , char_table [ 34 ] ) ) ) , lf_AUX_Literals4_1 ( ( * ef1 ) ( lf2 ( cons ( make_list_char ( 34 ) , cons ( make_list ( tmp [ 6 ] ) , make_list ( make_char ( 34 ) ) ) ) ) ) ) ) ) ;
FUNC_EXIT ( tmp [ 7 ] ) ;
}
}
}
if ( term_equal ( tmp [ 4 ] , make_char ( 34 ) ) ) {
( tmp [ 5 ] = list_tail ( tmp [ 3 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
( tmp [ 6 ] = list_prefix ( tmp [ 5 ] ) ) ;
if ( term_equal ( list_last ( tmp [ 5 ] ) , make_char ( 34 ) ) ) {
( tmp [ 7 ] = ( * ef2 ) ( ( * ef1 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 34 ] , char_table [ 34 ] ) ) ) , lf_AUX_Literals4_1 ( ( * ef1 ) ( lf2 ( cons ( make_list_char ( 34 ) , cons ( make_list ( tmp [ 6 ] ) , make_list ( make_char ( 34 ) ) ) ) ) ) ) ) ) ;
FUNC_EXIT ( tmp [ 7 ] ) ;
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
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( not_empty_list ( atmp000 ) ) {
if ( term_equal ( list_head ( atmp000 ) , make_char ( 34 ) ) ) {
( tmp [ 0 ] = list_tail ( atmp000 ) ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
( tmp [ 1 ] = list_head ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = list_tail ( tmp [ 0 ] ) ) ;
if ( not_empty_list ( tmp [ 2 ] ) ) {
( tmp [ 3 ] = list_prefix ( tmp [ 2 ] ) ) ;
if ( term_equal ( list_last ( tmp [ 2 ] ) , make_char ( 34 ) ) ) {
( tmp [ 4 ] = ( * ef2 ) ( ( * ef1 ) ( lf2 ( cons ( make_list_char ( 34 ) , cons ( make_list ( tmp [ 1 ] ) , make_list ( make_char ( 34 ) ) ) ) ) ) , lf_AUX_Literals4_1 ( ( * ef1 ) ( lf2 ( cons ( make_list_char ( 34 ) , cons ( make_list ( tmp [ 3 ] ) , make_list ( make_char ( 34 ) ) ) ) ) ) ) ) ) ;
FUNC_EXIT ( tmp [ 4 ] ) ;
}
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Literals4_1sym , arg0 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

