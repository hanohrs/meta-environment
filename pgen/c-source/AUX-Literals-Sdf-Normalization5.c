/*

    PGEN - the SDF2 parse table generator.
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
/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Literals_Sdf_Normalization5_2_recursivesym ;
static ATerm lf_AUX_Literals_Sdf_Normalization5_2_recursive ( ATerm arg1 ) ;
static Symbol lf_AUX_Literals_Sdf_Normalization5_2sym ;
static ATerm lf_AUX_Literals_Sdf_Normalization5_2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol lf_AUX_Literals_Sdf_Normalization5_1sym ;
static ATerm lf_AUX_Literals_Sdf_Normalization5_1 ( ATerm arg1 ) ;
void register_AUX_Literals_Sdf_Normalization5 ( ) {
lf_AUX_Literals_Sdf_Normalization5_2_recursivesym = ATmakeSymbol ( "prod(id(\"Literals-Sdf-Normalization\"),w(\"\"),[ql(\"symbols\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Literals_Sdf_Normalization5_2_recursivesym ) ;
lf_AUX_Literals_Sdf_Normalization5_2sym = ATmakeSymbol ( "prod(id(\"Literals-Sdf-Normalization\"),w(\"\"),[ql(\"symbols\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Literals_Sdf_Normalization5_2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf_AUX_Literals_Sdf_Normalization5_1sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Literals_Sdf_Normalization5_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"),ql(\",\"))" ) , lf_AUX_Literals_Sdf_Normalization5_1 , lf_AUX_Literals_Sdf_Normalization5_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Literals-Sdf-Normalization\"),w(\"\"),[ql(\"symbols\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) , lf_AUX_Literals_Sdf_Normalization5_2 , lf_AUX_Literals_Sdf_Normalization5_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Literals-Sdf-Normalization\"),w(\"\"),[ql(\"symbols\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) , lf_AUX_Literals_Sdf_Normalization5_2_recursive , lf_AUX_Literals_Sdf_Normalization5_2_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf4 , lf4sym ) ;
}
void resolve_AUX_Literals_Sdf_Normalization5 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols-Projection\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Symbols\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols-Projection\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Symbols\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Literals_Sdf_Normalization5 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Literals_Sdf_Normalization5_2 ( ATerm arg0 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_Literals_Sdf_Normalization5_2sym , ATmakeAppl ( lf_AUX_Literals_Sdf_Normalization5_2sym , arg0 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Literals_Sdf_Normalization5_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( ! not_empty_list ( atmp00 ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf3 ( make_list ( null ( ) ) ) ) ) ;
}
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf3 ( make_list ( tmp [ 0 ] ) ) ) ) ;
}
}
}
if ( check_sym ( arg0 , lf_AUX_Literals_Sdf_Normalization5_1sym ) ) {
( tmp [ 0 ] = arg_0 ( arg0 ) ) ;
{
ATerm atmp000 [ 2 ] ;
( atmp000 [ 0 ] = tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
( atmp000 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
if ( not_empty_list ( tmp [ 0 ] ) ) {
FUNC_EXIT ( ( * ef2 ) ( ( * ef2 ) ( lf_AUX_Literals_Sdf_Normalization5_2_recursive ( slice ( atmp000 [ 0 ] , atmp000 [ 1 ] ) ) , make_nf1 ( ef1sym , lf3 ( make_list ( ( * ef3 ) ( ( * ef4 ) ( lf4 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 44 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) , lf_AUX_Literals_Sdf_Normalization5_2_recursive ( tmp [ 0 ] ) ) ) ;
}
( atmp000 [ 1 ] = list_tail ( atmp000 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp000 [ 1 ] ) ;
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Literals_Sdf_Normalization5_2sym , arg0 ) ) ;
}
}
ATerm lf_AUX_Literals_Sdf_Normalization5_2_recursive ( ATerm arg0 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_Literals_Sdf_Normalization5_2_recursivesym , ATmakeAppl ( lf_AUX_Literals_Sdf_Normalization5_2_recursivesym , arg0 ) ) ;
{
ATerm atmp00 = arg0 ;
if ( ! not_empty_list ( atmp00 ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf3 ( make_list ( null ( ) ) ) ) ) ;
}
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf3 ( make_list ( tmp [ 0 ] ) ) ) ) ;
}
}
( tmp [ 0 ] = arg0 ) ;
{
ATerm atmp000 [ 2 ] ;
( atmp000 [ 0 ] = tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
( atmp000 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
if ( not_empty_list ( tmp [ 0 ] ) ) {
FUNC_EXIT ( ( * ef2 ) ( ( * ef2 ) ( lf_AUX_Literals_Sdf_Normalization5_2_recursive ( slice ( atmp000 [ 0 ] , atmp000 [ 1 ] ) ) , make_nf1 ( ef1sym , lf3 ( make_list ( ( * ef3 ) ( ( * ef4 ) ( lf4 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 44 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) , lf_AUX_Literals_Sdf_Normalization5_2_recursive ( tmp [ 0 ] ) ) ) ;
}
( atmp000 [ 1 ] = list_tail ( atmp000 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp000 [ 1 ] ) ;
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Literals_Sdf_Normalization5_2_recursivesym , lf_AUX_Literals_Sdf_Normalization5_1 ( arg0 ) ) ) ;
}
}
ATerm lf_AUX_Literals_Sdf_Normalization5_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Literals_Sdf_Normalization5_1sym , ATmakeAppl ( lf_AUX_Literals_Sdf_Normalization5_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Literals_Sdf_Normalization5_1sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}

