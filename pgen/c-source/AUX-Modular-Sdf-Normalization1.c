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
static Symbol lf_AUX_Modular_Sdf_Normalization1_1sym ;
static ATerm lf_AUX_Modular_Sdf_Normalization1_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Modular_Sdf_Normalization1_3sym ;
static ATerm lf_AUX_Modular_Sdf_Normalization1_3 ( ATerm arg1 ) ;
static Symbol lf_AUX_Modular_Sdf_Normalization1_2sym ;
static ATerm lf_AUX_Modular_Sdf_Normalization1_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_Modular_Sdf_Normalization1_4sym ;
static ATerm lf_AUX_Modular_Sdf_Normalization1_4 ( ATerm arg1 , ATerm arg2 ) ;
void register_AUX_Modular_Sdf_Normalization1 ( ) {
lf_AUX_Modular_Sdf_Normalization1_1sym = ATmakeSymbol ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Imports\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Ipair\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Normalization1_1sym ) ;
lf_AUX_Modular_Sdf_Normalization1_3sym = ATmakeSymbol ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[iter(sort(\"Ipair\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"ICL\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Normalization1_3sym ) ;
lf_AUX_Modular_Sdf_Normalization1_2sym = ATmakeSymbol ( "listtype(sort(\"Ipair\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Normalization1_2sym ) ;
lf_AUX_Modular_Sdf_Normalization1_4sym = ATmakeSymbol ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Imports\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IG\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Normalization1_4sym ) ;
register_prod ( ATparse ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Imports\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Ipair\"),w(\"\"),no-attrs)" ) , lf_AUX_Modular_Sdf_Normalization1_1 , lf_AUX_Modular_Sdf_Normalization1_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Ipair\"))" ) , lf_AUX_Modular_Sdf_Normalization1_2 , lf_AUX_Modular_Sdf_Normalization1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[iter(sort(\"Ipair\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"ICL\"),w(\"\"),no-attrs)" ) , lf_AUX_Modular_Sdf_Normalization1_3 , lf_AUX_Modular_Sdf_Normalization1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Imports\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IG\"),w(\"\"),no-attrs)" ) , lf_AUX_Modular_Sdf_Normalization1_4 , lf_AUX_Modular_Sdf_Normalization1_4sym ) ;
}
void resolve_AUX_Modular_Sdf_Normalization1 ( ) {
}
void init_AUX_Modular_Sdf_Normalization1 ( ) {
}
ATerm lf_AUX_Modular_Sdf_Normalization1_4 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Modular_Sdf_Normalization1_4sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Normalization1_4sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Modular_Sdf_Normalization1_4sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Modular_Sdf_Normalization1_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Modular_Sdf_Normalization1_2sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Normalization1_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Modular_Sdf_Normalization1_2sym , arg0 ) ) ;
}
ATerm lf_AUX_Modular_Sdf_Normalization1_3 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Modular_Sdf_Normalization1_3sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Normalization1_3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Modular_Sdf_Normalization1_3sym , arg0 ) ) ;
}
ATerm lf_AUX_Modular_Sdf_Normalization1_1 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Modular_Sdf_Normalization1_1sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Normalization1_1sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Modular_Sdf_Normalization1_1sym , arg0 , arg1 ) ) ;
}

