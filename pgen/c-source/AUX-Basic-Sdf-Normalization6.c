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
static Symbol lf_AUX_Basic_Sdf_Normalization6_1_recursivesym ;
static ATerm lf_AUX_Basic_Sdf_Normalization6_1_recursive ( ATerm arg1 ) ;
static Symbol lf_AUX_Basic_Sdf_Normalization6_1sym ;
static ATerm lf_AUX_Basic_Sdf_Normalization6_1 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Basic_Sdf_Normalization6 ( ) {
lf_AUX_Basic_Sdf_Normalization6_1_recursivesym = ATmakeSymbol ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"-LEXs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Basic_Sdf_Normalization6_1_recursivesym ) ;
lf_AUX_Basic_Sdf_Normalization6_1sym = ATmakeSymbol ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"-LEXs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Basic_Sdf_Normalization6_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"-LEXs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Basic_Sdf_Normalization6_1 , lf_AUX_Basic_Sdf_Normalization6_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"-LEXs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Basic_Sdf_Normalization6_1_recursive , lf_AUX_Basic_Sdf_Normalization6_1_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Basic_Sdf_Normalization6 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Production\"),w(\"\"),ql(\"-LEX\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Production\"),w(\"\"),ql(\"-LEX\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\"-LEXs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\"-LEXs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[ql(\"filter-attributes\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Attributes\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[ql(\"filter-attributes\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Attributes\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[sort(\"Productions\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[sort(\"Productions\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Basic_Sdf_Normalization6 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Basic_Sdf_Normalization6_1 ( ATerm arg0 ) {
{
ATerm tmp [ 7 ] ;
FUNC_ENTRY ( lf_AUX_Basic_Sdf_Normalization6_1sym , ATmakeAppl ( lf_AUX_Basic_Sdf_Normalization6_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( is_single_element ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ) ;
( tmp [ 3 ] = arg_2 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , ef3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf3sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
( tmp [ 6 ] = ( * ef7 ) ( tmp [ 3 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( cons ( make_list ( ( * ef4 ) ( ( * ef2 ) ( make_nf1 ( ef3sym , lf3 ( make_list ( tmp [ 5 ] ) ) ) , tmp [ 2 ] , tmp [ 3 ] ) ) ) , make_list ( ( * ef2 ) ( ( * ef5 ) ( make_nf1 ( ef3sym , lf3 ( make_list ( tmp [ 2 ] ) ) ) ) , ( * ef6 ) ( tmp [ 2 ] ) , tmp [ 6 ] ) ) ) ) ) ) ;
}
}
}
}
if ( term_equal ( make_nf1 ( ef1sym , lf2 ( make_list ( atmp000 ) ) ) , ( constant0 ? constant0 : ( constant0 = make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ) ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
( tmp [ 0 ] = arg_0 ( atmp00 ) ) ;
{
ATerm atmp0000 [ 2 ] ;
( atmp0000 [ 0 ] = tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
( atmp0000 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
if ( not_empty_list ( tmp [ 0 ] ) ) {
FUNC_EXIT ( ( * ef8 ) ( lf_AUX_Basic_Sdf_Normalization6_1_recursive ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) ) , lf_AUX_Basic_Sdf_Normalization6_1_recursive ( tmp [ 0 ] ) ) ) ;
}
( atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp0000 [ 1 ] ) ;
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Basic_Sdf_Normalization6_1sym , arg0 ) ) ;
}
}
ATerm lf_AUX_Basic_Sdf_Normalization6_1_recursive ( ATerm arg0 ) {
{
ATerm tmp [ 7 ] ;
FUNC_ENTRY ( lf_AUX_Basic_Sdf_Normalization6_1_recursivesym , ATmakeAppl ( lf_AUX_Basic_Sdf_Normalization6_1_recursivesym , arg0 ) ) ;
{
ATerm atmp00 = arg0 ;
{
ATerm atmp000 = atmp00 ;
if ( is_single_element ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ) ;
( tmp [ 3 ] = arg_2 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , ef3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf3sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
( tmp [ 6 ] = ( * ef7 ) ( tmp [ 3 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( cons ( make_list ( ( * ef4 ) ( ( * ef2 ) ( make_nf1 ( ef3sym , lf3 ( make_list ( tmp [ 5 ] ) ) ) , tmp [ 2 ] , tmp [ 3 ] ) ) ) , make_list ( ( * ef2 ) ( ( * ef5 ) ( make_nf1 ( ef3sym , lf3 ( make_list ( tmp [ 2 ] ) ) ) ) , ( * ef6 ) ( tmp [ 2 ] ) , tmp [ 6 ] ) ) ) ) ) ) ;
}
}
}
}
if ( term_equal ( make_nf1 ( ef1sym , lf2 ( make_list ( atmp000 ) ) ) , ( constant0 ? constant0 : ( constant0 = make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ) ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
}
}
{
ATerm atmp00 = arg0 ;
( tmp [ 0 ] = atmp00 ) ;
{
ATerm atmp0000 [ 2 ] ;
( atmp0000 [ 0 ] = tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
( atmp0000 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
if ( not_empty_list ( tmp [ 0 ] ) ) {
FUNC_EXIT ( ( * ef8 ) ( lf_AUX_Basic_Sdf_Normalization6_1_recursive ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) ) , lf_AUX_Basic_Sdf_Normalization6_1_recursive ( tmp [ 0 ] ) ) ) ;
}
( atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp0000 [ 1 ] ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Basic_Sdf_Normalization6_1_recursivesym , ( * ef1 ) ( lf2 ( arg0 ) ) ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}

