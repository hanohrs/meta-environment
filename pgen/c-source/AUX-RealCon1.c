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
static Symbol lf_AUX_RealCon1_1sym ;
static ATerm lf_AUX_RealCon1_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_RealCon1_2sym ;
static ATerm lf_AUX_RealCon1_2 ( ) ;
static Symbol lf_AUX_RealCon1_3sym ;
static ATerm lf_AUX_RealCon1_3 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
void register_AUX_RealCon1 ( ) {
lf_AUX_RealCon1_1sym = ATmakeSymbol ( "prod(id(\"RealCon\"),w(\"\"),[ql(\"e\"),w(\"\"),sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptExp\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_RealCon1_1sym ) ;
lf_AUX_RealCon1_2sym = ATmakeSymbol ( "prod(id(\"RealCon\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptExp\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_RealCon1_2sym ) ;
lf_AUX_RealCon1_3sym = ATmakeSymbol ( "prod(id(\"RealCon\"),w(\"\"),[sort(\"IntCon\"),w(\"\"),ql(\".\"),w(\"\"),sort(\"NatCon\"),w(\"\"),sort(\"OptExp\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"RealCon\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_RealCon1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"RealCon\"),w(\"\"),[ql(\"e\"),w(\"\"),sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptExp\"),w(\"\"),no-attrs)" ) , lf_AUX_RealCon1_1 , lf_AUX_RealCon1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"RealCon\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptExp\"),w(\"\"),no-attrs)" ) , lf_AUX_RealCon1_2 , lf_AUX_RealCon1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"RealCon\"),w(\"\"),[sort(\"IntCon\"),w(\"\"),ql(\".\"),w(\"\"),sort(\"NatCon\"),w(\"\"),sort(\"OptExp\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"RealCon\"),w(\"\"),no-attrs)" ) , lf_AUX_RealCon1_3 , lf_AUX_RealCon1_3sym ) ;
}
void resolve_AUX_RealCon1 ( ) {
}
void init_AUX_RealCon1 ( ) {
}
ATerm lf_AUX_RealCon1_3 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_RealCon1_3sym , ATmakeAppl ( lf_AUX_RealCon1_3sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_RealCon1_3sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_RealCon1_2 ( ) {
CONS_ENTRY ( lf_AUX_RealCon1_2sym , ATmakeAppl0 ( lf_AUX_RealCon1_2sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_RealCon1_2sym ) ) ;
}
ATerm lf_AUX_RealCon1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_RealCon1_1sym , ATmakeAppl ( lf_AUX_RealCon1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_RealCon1_1sym , arg0 ) ) ;
}

