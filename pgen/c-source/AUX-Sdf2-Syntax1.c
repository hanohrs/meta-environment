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
static Symbol lf_AUX_Sdf2_Syntax1_1sym ;
static ATerm lf_AUX_Sdf2_Syntax1_1 ( ) ;
static Symbol lf_AUX_Sdf2_Syntax1_2sym ;
static ATerm lf_AUX_Sdf2_Syntax1_2 ( ) ;
static Symbol lf_AUX_Sdf2_Syntax1_3sym ;
static ATerm lf_AUX_Sdf2_Syntax1_3 ( ATerm arg1 ) ;
static Symbol lf_AUX_Sdf2_Syntax1_4sym ;
static ATerm lf_AUX_Sdf2_Syntax1_4 ( ATerm arg1 ) ;
static Symbol lf_AUX_Sdf2_Syntax1_5sym ;
static ATerm lf_AUX_Sdf2_Syntax1_5 ( ATerm arg1 ) ;
static Symbol lf_AUX_Sdf2_Syntax1_6sym ;
static ATerm lf_AUX_Sdf2_Syntax1_6 ( ATerm arg1 ) ;
static Symbol lf_AUX_Sdf2_Syntax1_7sym ;
static ATerm lf_AUX_Sdf2_Syntax1_7 ( ATerm arg1 ) ;
void register_AUX_Sdf2_Syntax1 ( ) {
lf_AUX_Sdf2_Syntax1_1sym = ATmakeSymbol ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"<START>\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)"
 , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_Syntax1_1sym ) ;
lf_AUX_Sdf2_Syntax1_2sym = ATmakeSymbol ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"<Start>\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_Syntax1_2sym ) ;
lf_AUX_Sdf2_Syntax1_3sym = ATmakeSymbol ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_Syntax1_3sym ) ;
lf_AUX_Sdf2_Syntax1_4sym = ATmakeSymbol ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_Syntax1_4sym ) ;
lf_AUX_Sdf2_Syntax1_5sym = ATmakeSymbol ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_Syntax1_5sym ) ;
lf_AUX_Sdf2_Syntax1_6sym = ATmakeSymbol ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_Syntax1_6sym ) ;
lf_AUX_Sdf2_Syntax1_7sym = ATmakeSymbol ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"definition\"),w(\"\"),sort(\"Definition\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SDF\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_Syntax1_7sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"<START>\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_Syntax1_1 , lf_AUX_Sdf2_Syntax1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"<Start>\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_Syntax1_2 , lf_AUX_Sdf2_Syntax1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_Syntax1_3 , lf_AUX_Sdf2_Syntax1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_Syntax1_4 , lf_AUX_Sdf2_Syntax1_4sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_Syntax1_5 , lf_AUX_Sdf2_Syntax1_5sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_Syntax1_6 , lf_AUX_Sdf2_Syntax1_6sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"definition\"),w(\"\"),sort(\"Definition\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SDF\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_Syntax1_7 , lf_AUX_Sdf2_Syntax1_7sym ) ;
}
void resolve_AUX_Sdf2_Syntax1 ( ) {
}
void init_AUX_Sdf2_Syntax1 ( ) {
}
ATerm lf_AUX_Sdf2_Syntax1_7 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Sdf2_Syntax1_7sym , ATmakeAppl ( lf_AUX_Sdf2_Syntax1_7sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Sdf2_Syntax1_7sym , arg0 ) ) ;
}
ATerm lf_AUX_Sdf2_Syntax1_6 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Sdf2_Syntax1_6sym , ATmakeAppl ( lf_AUX_Sdf2_Syntax1_6sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Sdf2_Syntax1_6sym , arg0 ) ) ;
}
ATerm lf_AUX_Sdf2_Syntax1_5 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Sdf2_Syntax1_5sym , ATmakeAppl ( lf_AUX_Sdf2_Syntax1_5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Sdf2_Syntax1_5sym , arg0 ) ) ;
}
ATerm lf_AUX_Sdf2_Syntax1_4 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Sdf2_Syntax1_4sym , ATmakeAppl ( lf_AUX_Sdf2_Syntax1_4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Sdf2_Syntax1_4sym , arg0 ) ) ;
}
ATerm lf_AUX_Sdf2_Syntax1_3 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Sdf2_Syntax1_3sym , ATmakeAppl ( lf_AUX_Sdf2_Syntax1_3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Sdf2_Syntax1_3sym , arg0 ) ) ;
}
ATerm lf_AUX_Sdf2_Syntax1_2 ( ) {
CONS_ENTRY ( lf_AUX_Sdf2_Syntax1_2sym , ATmakeAppl0 ( lf_AUX_Sdf2_Syntax1_2sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Sdf2_Syntax1_2sym ) ) ;
}
ATerm lf_AUX_Sdf2_Syntax1_1 ( ) {
CONS_ENTRY ( lf_AUX_Sdf2_Syntax1_1sym , ATmakeAppl0 ( lf_AUX_Sdf2_Syntax1_1sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Sdf2_Syntax1_1sym ) ) ;
}

