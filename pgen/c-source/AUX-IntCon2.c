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
static Symbol lf_AUX_IntCon2_2_recursivesym ;
static ATerm lf_AUX_IntCon2_2_recursive ( ATerm arg1 ) ;
static Symbol lf_AUX_IntCon2_2sym ;
static ATerm lf_AUX_IntCon2_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_IntCon2_1sym ;
static ATerm lf_AUX_IntCon2_1 ( ATerm arg1 ) ;
void register_AUX_IntCon2 ( ) {
lf_AUX_IntCon2_2_recursivesym = ATmakeSymbol ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_IntCon2_2_recursivesym ) ;
lf_AUX_IntCon2_2sym = ATmakeSymbol ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_IntCon2_2sym ) ;
lf_AUX_IntCon2_1sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_IntCon2_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf_AUX_IntCon2_1 , lf_AUX_IntCon2_1sym ) ;
register_prod ( ATparse ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) , lf_AUX_IntCon2_2 , lf_AUX_IntCon2_2sym ) ;
register_prod ( ATparse ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) , lf_AUX_IntCon2_2_recursive , lf_AUX_IntCon2_2_recursivesym ) ;
}
void resolve_AUX_IntCon2 ( ) {
}
void init_AUX_IntCon2 ( ) {
}
ATerm lf_AUX_IntCon2_2 ( ATerm arg0 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_IntCon2_2sym , ATmakeAppl ( lf_AUX_IntCon2_2sym , arg0 ) ) ;
if ( check_sym ( arg0 , lf_AUX_IntCon2_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( not_empty_list ( atmp00 ) ) {
if ( term_equal ( list_head ( atmp00 ) , make_char ( 48 ) ) ) {
( tmp [ 0 ] = list_tail ( atmp00 ) ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
FUNC_EXIT ( lf_AUX_IntCon2_2_recursive ( make_list ( tmp [ 0 ] ) ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_IntCon2_2sym , arg0 ) ) ;
}
}
ATerm lf_AUX_IntCon2_2_recursive ( ATerm arg0 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_IntCon2_2_recursivesym , ATmakeAppl ( lf_AUX_IntCon2_2_recursivesym , arg0 ) ) ;
{
ATerm ltmp [ 1 ] ;
lbl_lf_AUX_IntCon2_2_recursive : ltmp [ 0 ] = arg0 ;
{
ATerm atmp00 = arg0 ;
if ( not_empty_list ( atmp00 ) ) {
if ( term_equal ( list_head ( atmp00 ) , make_char ( 48 ) ) ) {
( tmp [ 0 ] = list_tail ( atmp00 ) ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
( arg0 = make_list ( tmp [ 0 ] ) ) ;
goto lbl_lf_AUX_IntCon2_2_recursive ;
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_IntCon2_2_recursivesym , lf_AUX_IntCon2_1 ( ltmp [ 0 ] ) ) ) ;
}
}
}
ATerm lf_AUX_IntCon2_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_IntCon2_1sym , ATmakeAppl ( lf_AUX_IntCon2_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_IntCon2_1sym , arg0 ) ) ;
}

