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
static Symbol lf_AUX_Basic_Sdf_Syntax2_1sym ;
static ATerm lf_AUX_Basic_Sdf_Syntax2_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
void register_AUX_Basic_Sdf_Syntax2 ( ) {
lf_AUX_Basic_Sdf_Syntax2_1sym = ATmakeSymbol ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Basic_Sdf_Syntax2_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) , lf_AUX_Basic_Sdf_Syntax2_1 , lf_AUX_Basic_Sdf_Syntax2_1sym ) ;
}
void resolve_AUX_Basic_Sdf_Syntax2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"CC-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"CC-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Label-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Symbol\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Label-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Symbol\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Basic_Sdf_Syntax2 ( ) {
}
ATerm lf_AUX_Basic_Sdf_Syntax2_1 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_AUX_Basic_Sdf_Syntax2_1sym , ATmakeAppl ( lf_AUX_Basic_Sdf_Syntax2_1sym , arg0 ) ) ;
{
ATerm ltmp [ 1 ] ;
lbl_lf_AUX_Basic_Sdf_Syntax2_1 : ltmp [ 0 ] = arg0 ;
if ( check_sym ( ltmp [ 0 ] , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ltmp [ 0 ] ) ;
}
}
if ( check_sym ( ltmp [ 0 ] , ef2sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ltmp [ 0 ] ) ;
}
}
if ( check_sym ( ltmp [ 0 ] , ef3sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
( arg0 = atmp01 ) ;
goto lbl_lf_AUX_Basic_Sdf_Syntax2_1 ;
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Basic_Sdf_Syntax2_1sym , ltmp [ 0 ] ) ) ;
}
}

