/*

    Meta-Environment - An environment for language prototyping.
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
static Symbol lf_AUX_ParseTrees11_1sym ;
static ATerm lf_AUX_ParseTrees11_1 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef3sym ;
static funcptr ef3 ;
void register_AUX_ParseTrees11 ( ) {
lf_AUX_ParseTrees11_1sym = ATmakeSymbol ( "prod(id(\"ParseTrees\"),w(\"\"),[ql(\"named-elem\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"AFun\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ATermList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ATermList\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"
 , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_ParseTrees11_1sym ) ;
register_prod ( ATparse ( "prod(id(\"ParseTrees\"),w(\"\"),[ql(\"named-elem\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"AFun\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ATermList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ATermList\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) , lf_AUX_ParseTrees11_1 , lf_AUX_ParseTrees11_1sym ) ;
}
void resolve_AUX_ParseTrees11 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Lists\"),w(\"\"),[ql(\"first\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Lists\"),w(\"\"),[ql(\"first\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[sort(\"AFun\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[sort(\"AFun\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ATerms\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ATerms\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_ParseTrees11 ( ) {
}
ATerm lf_AUX_ParseTrees11_1 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
FUNC_ENTRY ( lf_AUX_ParseTrees11_1sym , ATmakeAppl ( lf_AUX_ParseTrees11_1sym , arg0 , arg1 , arg2 ) ) ;
{
ATerm ltmp [ 3 ] ;
lbl_lf_AUX_ParseTrees11_1 : ltmp [ 0 ] = arg0 ;
( ltmp [ 1 ] = arg1 ) ;
( ltmp [ 2 ] = arg2 ) ;
if ( term_equal ( ( * ef1 ) ( ltmp [ 1 ] ) , ( * ef2 ) ( ltmp [ 0 ] ) ) ) {
FUNC_EXIT ( ( * ef1 ) ( ltmp [ 2 ] ) ) ;
}
if ( check_sym ( ltmp [ 1 ] , ef3sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef4sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
{
ATerm atmp101 = arg_1 ( atmp10 ) ;
if ( check_sym ( ltmp [ 2 ] , ef3sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
if ( check_sym ( atmp20 , ef4sym ) ) {
{
ATerm atmp200 = arg_0 ( atmp20 ) ;
{
ATerm atmp201 = arg_1 ( atmp20 ) ;
( arg1 = ( * ef3 ) ( atmp101 ) ) ;
( arg2 = ( * ef3 ) ( atmp201 ) ) ;
goto lbl_lf_AUX_ParseTrees11_1 ;
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
FUNC_EXIT ( make_nf3 ( lf_AUX_ParseTrees11_1sym , ltmp [ 0 ] , ltmp [ 1 ] , ltmp [ 2 ] ) ) ;
}
}

