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
/* This C code is generated by the AsfSdfCompiler version 1.0 */

#include  "asc-support.h"
static Symbol lf_AUX_AsFix_Basics1_2sym ;
static ATerm lf_AUX_AsFix_Basics1_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_AsFix_Basics1_1sym ;
static ATerm lf_AUX_AsFix_Basics1_1 ( ATerm arg1 ) ;
void register_AUX_AsFix_Basics1 ( ) {
lf_AUX_AsFix_Basics1_2sym = ATmakeSymbol ( "prod(id(\"AsFix-Basics\"),w(\"\"),[ql(\"{\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SortList\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_AsFix_Basics1_2sym ) ;
lf_AUX_AsFix_Basics1_1sym = ATmakeSymbol ( "listtype(sort(\"ATerm\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_AsFix_Basics1_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"ATerm\"),ql(\";\"))" ) , lf_AUX_AsFix_Basics1_1 , lf_AUX_AsFix_Basics1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"AsFix-Basics\"),w(\"\"),[ql(\"{\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SortList\"),w(\"\"),no-attrs)" ) , lf_AUX_AsFix_Basics1_2 , lf_AUX_AsFix_Basics1_2sym ) ;
}
void resolve_AUX_AsFix_Basics1 ( ) {
}
void init_AUX_AsFix_Basics1 ( ) {
}
ATerm lf_AUX_AsFix_Basics1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_AsFix_Basics1_1sym , ATmakeAppl ( lf_AUX_AsFix_Basics1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_AsFix_Basics1_1sym , arg0 ) ) ;
}
ATerm lf_AUX_AsFix_Basics1_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_AsFix_Basics1_2sym , ATmakeAppl ( lf_AUX_AsFix_Basics1_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_AsFix_Basics1_2sym , arg0 ) ) ;
}

