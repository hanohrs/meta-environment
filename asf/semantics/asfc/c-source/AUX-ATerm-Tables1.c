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
static Symbol lf_AUX_ATerm_Tables1_1sym ;
static ATerm lf_AUX_ATerm_Tables1_1 ( ) ;
static Symbol lf_AUX_ATerm_Tables1_2sym ;
static ATerm lf_AUX_ATerm_Tables1_2 ( ) ;
static Symbol lf_AUX_ATerm_Tables1_3sym ;
static ATerm lf_AUX_ATerm_Tables1_3 ( ) ;
static Symbol lf_AUX_ATerm_Tables1_4sym ;
static ATerm lf_AUX_ATerm_Tables1_4 ( ) ;
static Symbol lf_AUX_ATerm_Tables1_5sym ;
static ATerm lf_AUX_ATerm_Tables1_5 ( ) ;
void register_AUX_ATerm_Tables1 ( ) {
lf_AUX_ATerm_Tables1_1sym = ATmakeSymbol ( "prod(id(\"ATerm-Tables\"),w(\"\"),[l(\"getf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)"
 , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_ATerm_Tables1_1sym ) ;
lf_AUX_ATerm_Tables1_2sym = ATmakeSymbol ( "prod(id(\"ATerm-Tables\"),w(\"\"),[l(\"egetf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_ATerm_Tables1_2sym ) ;
lf_AUX_ATerm_Tables1_3sym = ATmakeSymbol ( "prod(id(\"ATerm-Tables\"),w(\"\"),[l(\"putf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_ATerm_Tables1_3sym ) ;
lf_AUX_ATerm_Tables1_4sym = ATmakeSymbol ( "prod(id(\"ATerm-Tables\"),w(\"\"),[l(\"cputf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_ATerm_Tables1_4sym ) ;
lf_AUX_ATerm_Tables1_5sym = ATmakeSymbol ( "prod(id(\"ATerm-Tables\"),w(\"\"),[l(\"deff\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_ATerm_Tables1_5sym ) ;
register_prod ( ATparse ( "prod(id(\"ATerm-Tables\"),w(\"\"),[l(\"getf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) , lf_AUX_ATerm_Tables1_1 , lf_AUX_ATerm_Tables1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"ATerm-Tables\"),w(\"\"),[l(\"egetf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) , lf_AUX_ATerm_Tables1_2 , lf_AUX_ATerm_Tables1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"ATerm-Tables\"),w(\"\"),[l(\"putf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) , lf_AUX_ATerm_Tables1_3 , lf_AUX_ATerm_Tables1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"ATerm-Tables\"),w(\"\"),[l(\"cputf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) , lf_AUX_ATerm_Tables1_4 , lf_AUX_ATerm_Tables1_4sym ) ;
register_prod ( ATparse ( "prod(id(\"ATerm-Tables\"),w(\"\"),[l(\"deff\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) , lf_AUX_ATerm_Tables1_5 , lf_AUX_ATerm_Tables1_5sym ) ;
}
void resolve_AUX_ATerm_Tables1 ( ) {
}
void init_AUX_ATerm_Tables1 ( ) {
}
ATerm lf_AUX_ATerm_Tables1_5 ( ) {
CONS_ENTRY ( lf_AUX_ATerm_Tables1_5sym , ATmakeAppl0 ( lf_AUX_ATerm_Tables1_5sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_ATerm_Tables1_5sym ) ) ;
}
ATerm lf_AUX_ATerm_Tables1_4 ( ) {
CONS_ENTRY ( lf_AUX_ATerm_Tables1_4sym , ATmakeAppl0 ( lf_AUX_ATerm_Tables1_4sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_ATerm_Tables1_4sym ) ) ;
}
ATerm lf_AUX_ATerm_Tables1_3 ( ) {
CONS_ENTRY ( lf_AUX_ATerm_Tables1_3sym , ATmakeAppl0 ( lf_AUX_ATerm_Tables1_3sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_ATerm_Tables1_3sym ) ) ;
}
ATerm lf_AUX_ATerm_Tables1_2 ( ) {
CONS_ENTRY ( lf_AUX_ATerm_Tables1_2sym , ATmakeAppl0 ( lf_AUX_ATerm_Tables1_2sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_ATerm_Tables1_2sym ) ) ;
}
ATerm lf_AUX_ATerm_Tables1_1 ( ) {
CONS_ENTRY ( lf_AUX_ATerm_Tables1_1sym , ATmakeAppl0 ( lf_AUX_ATerm_Tables1_1sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_ATerm_Tables1_1sym ) ) ;
}

