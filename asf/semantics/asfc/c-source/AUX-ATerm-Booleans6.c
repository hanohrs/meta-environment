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
static Symbol lf_AUX_ATerm_Booleans6_1sym ;
static ATerm lf_AUX_ATerm_Booleans6_1 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_ATerm_Booleans6 ( ) {
lf_AUX_ATerm_Booleans6_1sym = ATmakeSymbol ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"if\"),w(\"\"),sort(\"Bool\"),w(\"\"),ql(\"then\"),w(\"\"),sort(\"Bool\"),w(\"\"),ql(\"else\"),w(\"\"),sort(\"Bool\"),w(\"\"),ql(\"fi\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"
 , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_ATerm_Booleans6_1sym ) ;
register_prod ( ATparse ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"if\"),w(\"\"),sort(\"Bool\"),w(\"\"),ql(\"then\"),w(\"\"),sort(\"Bool\"),w(\"\"),ql(\"else\"),w(\"\"),sort(\"Bool\"),w(\"\"),ql(\"fi\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) , lf_AUX_ATerm_Booleans6_1 , lf_AUX_ATerm_Booleans6_1sym ) ;
}
void resolve_AUX_ATerm_Booleans6 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_ATerm_Booleans6 ( ) {
}
ATerm lf_AUX_ATerm_Booleans6_1 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
FUNC_ENTRY ( lf_AUX_ATerm_Booleans6_1sym , ATmakeAppl ( lf_AUX_ATerm_Booleans6_1sym , arg0 , arg1 , arg2 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
FUNC_EXIT ( arg1 ) ;
}
if ( check_sym ( arg0 , ef2sym ) ) {
FUNC_EXIT ( arg2 ) ;
}
FUNC_EXIT ( make_nf3 ( lf_AUX_ATerm_Booleans6_1sym , arg0 , arg1 , arg2 ) ) ;
}

