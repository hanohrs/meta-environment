/*

    Meta-Environment - An environment for language prototyping.
    Copyright (C) 2000  Stichting Mathematisch Centrum, Amsterdam, The Netherlands. 

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
#include  "asc-support.h"
static Symbol lf_AUX_Integers_Extended2_1sym ;
static ATerm lf_AUX_Integers_Extended2_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_Integers_Extended2 ( ) {
lf_AUX_Integers_Extended2_1sym = ATmakeSymbol ( "prod(id(\"Integers-Extended\"),w(\"\"),[l(\"succ\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Integers_Extended2_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Integers-Extended\"),w(\"\"),[l(\"succ\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) , lf_AUX_Integers_Extended2_1 , lf_AUX_Integers_Extended2_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Integers_Extended2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"Int\"),w(\"\"),ql(\"+\"),w(\"\"),sort(\"Int\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"Int\"),w(\"\"),ql(\"+\"),w(\"\"),sort(\"Int\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Integers_Extended2 ( ) {
}
ATerm lf_AUX_Integers_Extended2_1 ( ATerm arg0 ) {
{
ATerm tmp [ 2 ] ;
FUNC_ENTRY ( lf_AUX_Integers_Extended2_1sym , ATmakeAppl ( lf_AUX_Integers_Extended2_1sym , arg0 ) ) ;
( tmp [ 0 ] = ( * ef1 ) ( ( * ef2 ) ( ( * ef3 ) ( ( * ef4 ) ( lf2 ( make_list ( make_char ( 49 ) ) ) ) ) ) , ( * ef2 ) ( arg0 ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
FUNC_EXIT ( tmp [ 1 ] ) ;
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Integers_Extended2_1sym , arg0 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

