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
static Symbol lf_AUX_Character_Class_Syntax1_1sym ;
static ATerm lf_AUX_Character_Class_Syntax1_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_Character_Class_Syntax1_2sym ;
static ATerm lf_AUX_Character_Class_Syntax1_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_Character_Class_Syntax1_3sym ;
static ATerm lf_AUX_Character_Class_Syntax1_3 ( ATerm arg1 ) ;
static Symbol lf_AUX_Character_Class_Syntax1_4sym ;
static ATerm lf_AUX_Character_Class_Syntax1_4 ( ) ;
static Symbol lf_AUX_Character_Class_Syntax1_5sym ;
static ATerm lf_AUX_Character_Class_Syntax1_5 ( ATerm arg1 ) ;
static Symbol lf_AUX_Character_Class_Syntax1_6sym ;
static ATerm lf_AUX_Character_Class_Syntax1_6 ( ATerm arg1 ) ;
void register_AUX_Character_Class_Syntax1 ( ) {
lf_AUX_Character_Class_Syntax1_1sym = ATmakeSymbol ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRange\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Syntax1_1sym ) ;
lf_AUX_Character_Class_Syntax1_2sym = ATmakeSymbol ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRange\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Syntax1_2sym ) ;
lf_AUX_Character_Class_Syntax1_3sym = ATmakeSymbol ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"bracket\")],w(\"\"),l(\"}\")))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Syntax1_3sym ) ;
lf_AUX_Character_Class_Syntax1_4sym = ATmakeSymbol ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Syntax1_4sym ) ;
lf_AUX_Character_Class_Syntax1_5sym = ATmakeSymbol ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRanges\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Syntax1_5sym ) ;
lf_AUX_Character_Class_Syntax1_6sym = ATmakeSymbol ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"CharClass\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"bracket\")],w(\"\"),l(\"}\")))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Syntax1_6sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRange\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Class_Syntax1_1 , lf_AUX_Character_Class_Syntax1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRange\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Class_Syntax1_2 , lf_AUX_Character_Class_Syntax1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"bracket\")],w(\"\"),l(\"}\")))" ) , lf_AUX_Character_Class_Syntax1_3 , lf_AUX_Character_Class_Syntax1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Class_Syntax1_4 , lf_AUX_Character_Class_Syntax1_4sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRanges\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Class_Syntax1_5 , lf_AUX_Character_Class_Syntax1_5sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"CharClass\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"bracket\")],w(\"\"),l(\"}\")))" ) , lf_AUX_Character_Class_Syntax1_6 , lf_AUX_Character_Class_Syntax1_6sym ) ;
}
void resolve_AUX_Character_Class_Syntax1 ( ) {
}
void init_AUX_Character_Class_Syntax1 ( ) {
}
ATerm lf_AUX_Character_Class_Syntax1_6 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Character_Class_Syntax1_6sym , ATmakeAppl ( lf_AUX_Character_Class_Syntax1_6sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Character_Class_Syntax1_6sym , arg0 ) ) ;
}
ATerm lf_AUX_Character_Class_Syntax1_5 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Character_Class_Syntax1_5sym , ATmakeAppl ( lf_AUX_Character_Class_Syntax1_5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Character_Class_Syntax1_5sym , arg0 ) ) ;
}
ATerm lf_AUX_Character_Class_Syntax1_4 ( ) {
CONS_ENTRY ( lf_AUX_Character_Class_Syntax1_4sym , ATmakeAppl0 ( lf_AUX_Character_Class_Syntax1_4sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Character_Class_Syntax1_4sym ) ) ;
}
ATerm lf_AUX_Character_Class_Syntax1_3 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Character_Class_Syntax1_3sym , ATmakeAppl ( lf_AUX_Character_Class_Syntax1_3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Character_Class_Syntax1_3sym , arg0 ) ) ;
}
ATerm lf_AUX_Character_Class_Syntax1_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Character_Class_Syntax1_2sym , ATmakeAppl ( lf_AUX_Character_Class_Syntax1_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Character_Class_Syntax1_2sym , arg0 ) ) ;
}
ATerm lf_AUX_Character_Class_Syntax1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Character_Class_Syntax1_1sym , ATmakeAppl ( lf_AUX_Character_Class_Syntax1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Character_Class_Syntax1_1sym , arg0 ) ) ;
}

