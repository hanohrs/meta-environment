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
static Symbol lf_AUX_MuASF_Sign2C5_2sym ;
static ATerm lf_AUX_MuASF_Sign2C5_2 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol lf7sym ;
static ATerm lf7 ( ATerm arg1 ) ;
static Symbol ef31sym ;
static funcptr ef31 ;
static Symbol ef25sym ;
static funcptr ef25 ;
static Symbol ef30sym ;
static funcptr ef30 ;
static Symbol ef36sym ;
static funcptr ef36 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol lf8sym ;
static ATerm lf8 ( ATerm arg1 ) ;
static Symbol ef17sym ;
static funcptr ef17 ;
static Symbol ef23sym ;
static funcptr ef23 ;
static Symbol ef24sym ;
static funcptr ef24 ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol ef21sym ;
static funcptr ef21 ;
static Symbol ef22sym ;
static funcptr ef22 ;
static Symbol lf9sym ;
static ATerm lf9 ( ATerm arg1 ) ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol ef19sym ;
static funcptr ef19 ;
static Symbol ef20sym ;
static funcptr ef20 ;
static Symbol ef32sym ;
static funcptr ef32 ;
static Symbol ef26sym ;
static funcptr ef26 ;
static Symbol ef28sym ;
static funcptr ef28 ;
static Symbol ef29sym ;
static funcptr ef29 ;
static Symbol ef27sym ;
static funcptr ef27 ;
static Symbol ef40sym ;
static funcptr ef40 ;
static Symbol ef41sym ;
static funcptr ef41 ;
static Symbol ef33sym ;
static funcptr ef33 ;
static Symbol lf10sym ;
static ATerm lf10 ( ATerm arg1 ) ;
static Symbol ef34sym ;
static funcptr ef34 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf_AUX_MuASF_Sign2C5_1sym ;
static ATerm lf_AUX_MuASF_Sign2C5_1 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol lf5sym ;
static ATerm lf5 ( ATerm arg1 ) ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol lf6sym ;
static ATerm lf6 ( ATerm arg1 ) ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef35sym ;
static funcptr ef35 ;
static Symbol ef37sym ;
static funcptr ef37 ;
static Symbol lf11sym ;
static ATerm lf11 ( ATerm arg1 ) ;
static Symbol ef38sym ;
static funcptr ef38 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef39sym ;
static funcptr ef39 ;
void register_AUX_MuASF_Sign2C5 ( ) {
lf_AUX_MuASF_Sign2C5_2sym = ATmakeSymbol ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"funcdef2cfuncs\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FTS-tuple\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Sign2C5_2sym ) ;
lf7sym = ATmakeSymbol ( "listtype(sort(\"Parameter-declaration\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf7sym ) ;
lf8sym = ATmakeSymbol ( "listtype(sort(\"Statement\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf8sym ) ;
lf9sym = ATmakeSymbol ( "listtype(sort(\"Expression\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf9sym ) ;
lf10sym = ATmakeSymbol ( "listtype(sort(\"Term\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf10sym ) ;
lf_AUX_MuASF_Sign2C5_1sym = ATmakeSymbol ( "listtype(sort(\"NamePair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Sign2C5_1sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"FuncDef\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf5sym = ATmakeSymbol ( "listtype(sort(\"Declaration\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf5sym ) ;
lf6sym = ATmakeSymbol ( "listtype(sort(\"Type-specifier\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf6sym ) ;
lf11sym = ATmakeSymbol ( "listtype(sort(\"SigArg\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf11sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"NamePair\"),ql(\",\"))" ) , lf_AUX_MuASF_Sign2C5_1 , lf_AUX_MuASF_Sign2C5_1sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"funcdef2cfuncs\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FTS-tuple\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Sign2C5_2 , lf_AUX_MuASF_Sign2C5_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"FuncDef\"),ql(\";\"))" ) , lf4 , lf4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Declaration\"))" ) , lf5 , lf5sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Type-specifier\"))" ) , lf6 , lf6sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Parameter-declaration\"),ql(\",\"))" ) , lf7 , lf7sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Statement\"))" ) , lf8 , lf8sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Expression\"),ql(\",\"))" ) , lf9 , lf9sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Term\"),ql(\",\"))" ) , lf10 , lf10sym ) ;
register_prod ( ATparse ( "listtype(sort(\"SigArg\"),ql(\",\"))" ) , lf11 , lf11sym ) ;
}
void resolve_AUX_MuASF_Sign2C5 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FTS-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FTS-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Declaration\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Declaration\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-specifiers\"),w(\"\"),sort(\"Declarator\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-specifiers\"),w(\"\"),sort(\"Declarator\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Type-specifier\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-specifiers\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Type-specifier\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-specifiers\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[l(\"static\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Type-specifier\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[l(\"static\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Type-specifier\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Type-specifier\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Type-specifier\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Parameter-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Parameter-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Parameter-declaration\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parameter-list\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Parameter-declaration\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parameter-list\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef19 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef19sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef20 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef20sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef21 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef21sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef22 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef22sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef23 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Integer-constant\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef23sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Integer-constant\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef24 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"integer-constant\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Integer-constant\"),w(\"\"),no-attrs)" ) ) ;
ef24sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"integer-constant\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Integer-constant\"),w(\"\"),no-attrs)" ) ) ;
ef25 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"pn-lookup\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef25sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"pn-lookup\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef26 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef26sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef27 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef27sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef28 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"np-lookup\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef28sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"np-lookup\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef29 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-quoted-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef29sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-quoted-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef30 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef30sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef31 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),sort(\"Annotations\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
ef31sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),sort(\"Annotations\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
ef32 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Signature-Ops\"),w(\"\"),[l(\"is-external\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Annotations\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef32sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Signature-Ops\"),w(\"\"),[l(\"is-external\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Annotations\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef33 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[ql(\"{\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Annotations\"),w(\"\"),no-attrs)" ) ) ;
ef33sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[ql(\"{\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Annotations\"),w(\"\"),no-attrs)" ) ) ;
ef34 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef34sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef35 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef35sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef36 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"SigArg\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
ef36sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"SigArg\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
ef37 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"sigargs2cargs\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"SigArg\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parameter-list\"),w(\"\"),no-attrs)" ) ) ;
ef37sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"sigargs2cargs\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"SigArg\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parameter-list\"),w(\"\"),no-attrs)" ) ) ;
ef38 = lookup_func ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef38sym = lookup_sym ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef39 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) ) ;
ef39sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) ) ;
ef40 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"countsigargs\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"SigArg\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef40sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"countsigargs\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"SigArg\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef41 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"SigArg\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\"),w(\"\"),sort(\"Annotations\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
ef41sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"SigArg\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\"),w(\"\"),sort(\"Annotations\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_MuASF_Sign2C5 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_MuASF_Sign2C5_2 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 12 ] ;
FUNC_ENTRY ( lf_AUX_MuASF_Sign2C5_2sym , ATmakeAppl ( lf_AUX_MuASF_Sign2C5_2sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( arg1 , lf_AUX_MuASF_Sign2C5_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( not_empty_list ( atmp0000 ) ) {
if ( term_equal ( list_head ( atmp0000 ) , make_char ( 34 ) ) ) {
( tmp [ 0 ] = list_tail ( atmp0000 ) ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
if ( term_equal ( list_head ( tmp [ 0 ] ) , make_char ( 123 ) ) ) {
( tmp [ 1 ] = list_tail ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = list_prefix ( tmp [ 1 ] ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
if ( term_equal ( list_last ( tmp [ 1 ] ) , make_char ( 34 ) ) ) {
( tmp [ 3 ] = list_prefix ( tmp [ 2 ] ) ) ;
if ( not_empty_list ( tmp [ 2 ] ) ) {
if ( term_equal ( list_last ( tmp [ 2 ] ) , make_char ( 125 ) ) ) {
( tmp [ 4 ] = ( * ef25 ) ( ( * ef2 ) ( lf3 ( cons ( make_list_char ( 34 ) , cons ( make_list_char ( 123 ) , cons ( make_list ( tmp [ 3 ] ) , ( ATerm ) ATmakeList ( 2 , char_table [ 125 ] , char_table [ 34 ] ) ) ) ) ) ) , lf_AUX_MuASF_Sign2C5_1 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 4 ] , ef2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( check_sym ( tmp [ 5 ] , lf3sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( ( * ef1 ) ( ( * ef2 ) ( lf3 ( make_list ( tmp [ 6 ] ) ) ) ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( tmp [ 6 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 5 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) , ( * ef12 ) ( ( * ef10 ) ( lf3 ( make_list ( tmp [ 6 ] ) ) ) , ( * ef13 ) ( lf7 ( make_list ( null ( ) ) ) ) ) ) ) ) ) ) ) , ( * ef14 ) ( ( * ef15 ) ( lf8 ( cons ( make_list ( ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( tmp [ 6 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 12 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list_char ( 34 ) , cons ( make_list_char ( 108 ) , cons ( make_list_char ( 105 ) , cons ( make_list_char ( 115 ) , cons ( make_list_char ( 116 ) , cons ( make_list_char ( 116 ) , cons ( make_list_char ( 121 ) , cons ( make_list_char ( 112 ) , cons ( make_list_char ( 101 ) , cons ( make_list_char ( 40 ) , cons ( make_list ( tmp [ 3 ] ) , ( ATerm ) ATmakeList ( 2 , char_table [ 41 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef23 ) ( ( * ef24 ) ( lf3 ( make_list ( make_char ( 49 ) ) ) ) ) ) ) ) , make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 116 ] , char_table [ 114 ] , char_table [ 117 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , make_list ( ( * ef16 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 15 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( tmp [ 6 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
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
( tmp [ 0 ] = ( * ef26 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ;
if ( term_equal ( tmp [ 0 ] , ( constant0 ? constant0 : ( constant0 = ( * ef27 ) ( ) ) ) ) ) {
( tmp [ 1 ] = ( * ef28 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) , lf_AUX_MuASF_Sign2C5_1 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
{
if ( check_sym ( tmp [ 2 ] , lf3sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
( tmp [ 4 ] = ( * ef29 ) ( ( * ef2 ) ( lf3 ( make_list ( tmp [ 3 ] ) ) ) ) ) ;
if ( term_equal ( tmp [ 4 ] , ( constant0 ? constant0 : ( constant0 = ( * ef27 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( ( * ef1 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 5 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) , ( * ef12 ) ( ( * ef10 ) ( lf3 ( make_list ( atmp0000 ) ) ) , ( * ef13 ) ( lf7 ( make_list ( null ( ) ) ) ) ) ) ) ) ) ) ) , ( * ef14 ) ( ( * ef15 ) ( lf8 ( cons ( make_list ( ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 12 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list_char ( 34 ) , cons ( make_list ( tmp [ 3 ] ) , make_list ( make_char ( 34 ) ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef23 ) ( ( * ef24 ) ( lf3 ( make_list ( make_char ( 48 ) ) ) ) ) ) ) ) , make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 7 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 102 ] , char_table [ 97 ] , char_table [ 108 ] , char_table [ 115 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , make_list ( ( * ef16 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 15 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 4 ] , ( constant1 ? constant1 : ( constant1 = ( * ef30 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( ( * ef1 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 5 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) , ( * ef12 ) ( ( * ef10 ) ( lf3 ( make_list ( atmp0000 ) ) ) , ( * ef13 ) ( lf7 ( make_list ( null ( ) ) ) ) ) ) ) ) ) ) ) , ( * ef14 ) ( ( * ef15 ) ( lf8 ( cons ( make_list ( ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 12 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( make_list ( tmp [ 3 ] ) ) ) ) ) ) ) , cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef23 ) ( ( * ef24 ) ( lf3 ( make_list ( make_char ( 48 ) ) ) ) ) ) ) ) , make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 116 ] , char_table [ 114 ] , char_table [ 117 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , make_list ( ( * ef16 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 15 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
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
}
}
}
if ( check_sym ( arg0 , ef31sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , ef33sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
if ( check_sym ( atmp010 , lf10sym ) ) {
{
ATerm atmp0100 = arg_0 ( atmp010 ) ;
if ( check_sym ( arg1 , lf_AUX_MuASF_Sign2C5_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( is_single_element ( atmp0100 ) ) {
( tmp [ 0 ] = list_head ( atmp0100 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef34sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , lf3sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( not_empty_list ( tmp [ 3 ] ) ) {
if ( term_equal ( list_head ( tmp [ 3 ] ) , make_char ( 101 ) ) ) {
( tmp [ 4 ] = list_tail ( tmp [ 3 ] ) ) ;
if ( not_empty_list ( tmp [ 4 ] ) ) {
if ( term_equal ( list_head ( tmp [ 4 ] ) , make_char ( 120 ) ) ) {
( tmp [ 5 ] = list_tail ( tmp [ 4 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
if ( term_equal ( list_head ( tmp [ 5 ] ) , make_char ( 116 ) ) ) {
( tmp [ 6 ] = list_tail ( tmp [ 5 ] ) ) ;
if ( not_empty_list ( tmp [ 6 ] ) ) {
if ( term_equal ( list_head ( tmp [ 6 ] ) , make_char ( 101 ) ) ) {
( tmp [ 7 ] = list_tail ( tmp [ 6 ] ) ) ;
if ( not_empty_list ( tmp [ 7 ] ) ) {
if ( term_equal ( list_head ( tmp [ 7 ] ) , make_char ( 114 ) ) ) {
( tmp [ 8 ] = list_tail ( tmp [ 7 ] ) ) ;
if ( not_empty_list ( tmp [ 8 ] ) ) {
if ( term_equal ( list_head ( tmp [ 8 ] ) , make_char ( 110 ) ) ) {
( tmp [ 9 ] = list_tail ( tmp [ 8 ] ) ) ;
if ( not_empty_list ( tmp [ 9 ] ) ) {
if ( term_equal ( list_head ( tmp [ 9 ] ) , make_char ( 97 ) ) ) {
( tmp [ 10 ] = list_tail ( tmp [ 9 ] ) ) ;
if ( is_single_element ( tmp [ 10 ] ) ) {
if ( term_equal ( list_head ( tmp [ 10 ] ) , make_char ( 108 ) ) ) {
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( null ( ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 7 , char_table [ 102 ] , char_table [ 117 ] , char_table [ 110 ] , char_table [ 99 ] , char_table [ 112 ] , char_table [ 116 ] , char_table [ 114 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ) ) ) ) ) , ( * ef35 ) ( ) ) ) ;
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
}
}
}
}
}
}
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( arg1 , lf_AUX_MuASF_Sign2C5_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
( tmp [ 0 ] = ( * ef32 ) ( atmp01 ) ) ;
if ( term_equal ( tmp [ 0 ] , ( constant0 ? constant0 : ( constant0 = ( * ef27 ) ( ) ) ) ) ) {
( tmp [ 1 ] = ( * ef26 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ;
if ( term_equal ( tmp [ 1 ] , ( constant0 ? constant0 : ( constant0 = ( * ef27 ) ( ) ) ) ) ) {
( tmp [ 2 ] = ( * ef28 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) , lf_AUX_MuASF_Sign2C5_1 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 2 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
{
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 5 ] = ( * ef29 ) ( ( * ef2 ) ( lf3 ( make_list ( tmp [ 4 ] ) ) ) ) ) ;
if ( term_equal ( tmp [ 5 ] , ( constant1 ? constant1 : ( constant1 = ( * ef30 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( ( * ef31 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) , atmp01 ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 5 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) , ( * ef12 ) ( ( * ef10 ) ( lf3 ( make_list ( atmp0000 ) ) ) , ( * ef13 ) ( lf7 ( make_list ( null ( ) ) ) ) ) ) ) ) ) ) ) , ( * ef14 ) ( ( * ef15 ) ( lf8 ( cons ( make_list ( ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 12 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( make_list ( tmp [ 4 ] ) ) ) ) ) ) ) , cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef23 ) ( ( * ef24 ) ( lf3 ( make_list ( make_char ( 48 ) ) ) ) ) ) ) ) , make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 116 ] , char_table [ 114 ] , char_table [ 117 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , make_list ( ( * ef16 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 15 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 5 ] , ( constant0 ? constant0 : ( constant0 = ( * ef27 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( ( * ef31 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) , atmp01 ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 5 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) , ( * ef12 ) ( ( * ef10 ) ( lf3 ( make_list ( atmp0000 ) ) ) , ( * ef13 ) ( lf7 ( make_list ( null ( ) ) ) ) ) ) ) ) ) ) ) , ( * ef14 ) ( ( * ef15 ) ( lf8 ( cons ( make_list ( ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 12 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list_char ( 34 ) , cons ( make_list ( tmp [ 4 ] ) , make_list ( make_char ( 34 ) ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef23 ) ( ( * ef24 ) ( lf3 ( make_list ( make_char ( 48 ) ) ) ) ) ) ) ) , make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 7 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 102 ] , char_table [ 97 ] , char_table [ 108 ] , char_table [ 115 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , make_list ( ( * ef16 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 15 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
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
}
}
}
}
}
}
if ( check_sym ( arg0 , ef36sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , lf11sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
if ( check_sym ( arg1 , lf_AUX_MuASF_Sign2C5_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( not_empty_list ( atmp0000 ) ) {
if ( term_equal ( list_head ( atmp0000 ) , make_char ( 34 ) ) ) {
( tmp [ 0 ] = list_tail ( atmp0000 ) ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
if ( term_equal ( list_head ( tmp [ 0 ] ) , make_char ( 123 ) ) ) {
( tmp [ 1 ] = list_tail ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = list_prefix ( tmp [ 1 ] ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
if ( term_equal ( list_last ( tmp [ 1 ] ) , make_char ( 34 ) ) ) {
( tmp [ 3 ] = list_prefix ( tmp [ 2 ] ) ) ;
if ( not_empty_list ( tmp [ 2 ] ) ) {
if ( term_equal ( list_last ( tmp [ 2 ] ) , make_char ( 125 ) ) ) {
if ( not_empty_list ( atmp010 ) ) {
( tmp [ 4 ] = ( * ef25 ) ( ( * ef2 ) ( lf3 ( cons ( make_list_char ( 34 ) , cons ( make_list_char ( 123 ) , cons ( make_list ( tmp [ 3 ] ) , ( ATerm ) ATmakeList ( 2 , char_table [ 125 ] , char_table [ 34 ] ) ) ) ) ) ) , lf_AUX_MuASF_Sign2C5_1 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 4 ] , ef2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( check_sym ( tmp [ 5 ] , lf3sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
( tmp [ 7 ] = ( * ef37 ) ( lf11 ( make_list ( atmp010 ) ) , ( * ef38 ) ( ( * ef39 ) ( lf3 ( make_list ( make_char ( 49 ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( ( * ef36 ) ( ( * ef2 ) ( lf3 ( make_list ( tmp [ 6 ] ) ) ) , lf11 ( make_list ( atmp010 ) ) ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( tmp [ 6 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 5 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) , ( * ef12 ) ( ( * ef10 ) ( lf3 ( make_list ( tmp [ 6 ] ) ) ) , tmp [ 7 ] ) ) ) ) ) ) ) , ( * ef14 ) ( ( * ef15 ) ( lf8 ( cons ( make_list ( ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( tmp [ 6 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 12 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list_char ( 34 ) , cons ( make_list_char ( 108 ) , cons ( make_list_char ( 105 ) , cons ( make_list_char ( 115 ) , cons ( make_list_char ( 116 ) , cons ( make_list_char ( 116 ) , cons ( make_list_char ( 121 ) , cons ( make_list_char ( 112 ) , cons ( make_list_char ( 101 ) , cons ( make_list_char ( 40 ) , cons ( make_list ( tmp [ 3 ] ) , ( ATerm ) ATmakeList ( 2 , char_table [ 41 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef23 ) ( ( * ef24 ) ( lf3 ( make_list ( make_char ( 49 ) ) ) ) ) ) ) ) , make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 116 ] , char_table [ 114 ] , char_table [ 117 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , make_list ( ( * ef16 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 15 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( tmp [ 6 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
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
}
{
if ( not_empty_list ( atmp010 ) ) {
( tmp [ 0 ] = ( * ef26 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ;
if ( term_equal ( tmp [ 0 ] , ( constant0 ? constant0 : ( constant0 = ( * ef27 ) ( ) ) ) ) ) {
( tmp [ 1 ] = ( * ef28 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) , lf_AUX_MuASF_Sign2C5_1 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
{
if ( check_sym ( tmp [ 2 ] , lf3sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
( tmp [ 4 ] = ( * ef29 ) ( ( * ef2 ) ( lf3 ( make_list ( tmp [ 3 ] ) ) ) ) ) ;
if ( term_equal ( tmp [ 4 ] , ( constant0 ? constant0 : ( constant0 = ( * ef27 ) ( ) ) ) ) ) {
( tmp [ 5 ] = ( * ef37 ) ( lf11 ( make_list ( atmp010 ) ) , ( * ef38 ) ( ( * ef39 ) ( lf3 ( make_list ( make_char ( 49 ) ) ) ) ) ) ) ;
( tmp [ 6 ] = ( * ef40 ) ( lf11 ( make_list ( atmp010 ) ) ) ) ;
if ( check_sym ( tmp [ 6 ] , ef38sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
if ( check_sym ( tmp [ 7 ] , ef39sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
if ( check_sym ( tmp [ 8 ] , lf3sym ) ) {
( tmp [ 9 ] = arg_0 ( tmp [ 8 ] ) ) ;
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( ( * ef36 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) , lf11 ( make_list ( atmp010 ) ) ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 5 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) , ( * ef12 ) ( ( * ef10 ) ( lf3 ( make_list ( atmp0000 ) ) ) , tmp [ 5 ] ) ) ) ) ) ) ) , ( * ef14 ) ( ( * ef15 ) ( lf8 ( cons ( make_list ( ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 12 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list_char ( 34 ) , cons ( make_list ( tmp [ 3 ] ) , make_list ( make_char ( 34 ) ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef23 ) ( ( * ef24 ) ( lf3 ( make_list ( tmp [ 9 ] ) ) ) ) ) ) ) , make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 7 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 102 ] , char_table [ 97 ] , char_table [ 108 ] , char_table [ 115 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , make_list ( ( * ef16 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 15 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
}
}
}
}
if ( term_equal ( tmp [ 4 ] , ( constant1 ? constant1 : ( constant1 = ( * ef30 ) ( ) ) ) ) ) {
( tmp [ 5 ] = ( * ef37 ) ( lf11 ( make_list ( atmp010 ) ) , ( * ef38 ) ( ( * ef39 ) ( lf3 ( make_list ( make_char ( 49 ) ) ) ) ) ) ) ;
( tmp [ 6 ] = ( * ef40 ) ( lf11 ( make_list ( atmp010 ) ) ) ) ;
if ( check_sym ( tmp [ 6 ] , ef38sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
if ( check_sym ( tmp [ 7 ] , ef39sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
if ( check_sym ( tmp [ 8 ] , lf3sym ) ) {
( tmp [ 9 ] = arg_0 ( tmp [ 8 ] ) ) ;
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( ( * ef36 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) , lf11 ( make_list ( atmp010 ) ) ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 5 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) , ( * ef12 ) ( ( * ef10 ) ( lf3 ( make_list ( atmp0000 ) ) ) , tmp [ 5 ] ) ) ) ) ) ) ) , ( * ef14 ) ( ( * ef15 ) ( lf8 ( cons ( make_list ( ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 12 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( make_list ( tmp [ 3 ] ) ) ) ) ) ) ) , cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef23 ) ( ( * ef24 ) ( lf3 ( make_list ( tmp [ 9 ] ) ) ) ) ) ) ) , make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 116 ] , char_table [ 114 ] , char_table [ 117 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , make_list ( ( * ef16 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 15 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
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
}
if ( check_sym ( arg0 , ef41sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , lf11sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
{
ATerm atmp02 = arg_2 ( arg0 ) ;
if ( check_sym ( atmp02 , ef33sym ) ) {
{
ATerm atmp020 = arg_0 ( atmp02 ) ;
if ( check_sym ( atmp020 , lf10sym ) ) {
{
ATerm atmp0200 = arg_0 ( atmp020 ) ;
if ( check_sym ( arg1 , lf_AUX_MuASF_Sign2C5_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( not_empty_list ( atmp010 ) ) {
if ( is_single_element ( atmp0200 ) ) {
( tmp [ 0 ] = list_head ( atmp0200 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef34sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , lf3sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( not_empty_list ( tmp [ 3 ] ) ) {
if ( term_equal ( list_head ( tmp [ 3 ] ) , make_char ( 101 ) ) ) {
( tmp [ 4 ] = list_tail ( tmp [ 3 ] ) ) ;
if ( not_empty_list ( tmp [ 4 ] ) ) {
if ( term_equal ( list_head ( tmp [ 4 ] ) , make_char ( 120 ) ) ) {
( tmp [ 5 ] = list_tail ( tmp [ 4 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
if ( term_equal ( list_head ( tmp [ 5 ] ) , make_char ( 116 ) ) ) {
( tmp [ 6 ] = list_tail ( tmp [ 5 ] ) ) ;
if ( not_empty_list ( tmp [ 6 ] ) ) {
if ( term_equal ( list_head ( tmp [ 6 ] ) , make_char ( 101 ) ) ) {
( tmp [ 7 ] = list_tail ( tmp [ 6 ] ) ) ;
if ( not_empty_list ( tmp [ 7 ] ) ) {
if ( term_equal ( list_head ( tmp [ 7 ] ) , make_char ( 114 ) ) ) {
( tmp [ 8 ] = list_tail ( tmp [ 7 ] ) ) ;
if ( not_empty_list ( tmp [ 8 ] ) ) {
if ( term_equal ( list_head ( tmp [ 8 ] ) , make_char ( 110 ) ) ) {
( tmp [ 9 ] = list_tail ( tmp [ 8 ] ) ) ;
if ( not_empty_list ( tmp [ 9 ] ) ) {
if ( term_equal ( list_head ( tmp [ 9 ] ) , make_char ( 97 ) ) ) {
( tmp [ 10 ] = list_tail ( tmp [ 9 ] ) ) ;
if ( is_single_element ( tmp [ 10 ] ) ) {
if ( term_equal ( list_head ( tmp [ 10 ] ) , make_char ( 108 ) ) ) {
( tmp [ 11 ] = ( * ef37 ) ( lf11 ( make_list ( atmp010 ) ) , ( * ef38 ) ( ( * ef39 ) ( lf3 ( make_list ( make_char ( 49 ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( null ( ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 7 , char_table [ 102 ] , char_table [ 117 ] , char_table [ 110 ] , char_table [ 99 ] , char_table [ 112 ] , char_table [ 116 ] , char_table [ 114 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ) ) ) ) ) , ( * ef35 ) ( ) ) ) ;
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
}
}
}
}
}
}
}
{
ATerm atmp02 = arg_2 ( arg0 ) ;
if ( check_sym ( arg1 , lf_AUX_MuASF_Sign2C5_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( not_empty_list ( atmp010 ) ) {
( tmp [ 0 ] = ( * ef32 ) ( atmp02 ) ) ;
if ( term_equal ( tmp [ 0 ] , ( constant0 ? constant0 : ( constant0 = ( * ef27 ) ( ) ) ) ) ) {
( tmp [ 1 ] = ( * ef26 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ;
if ( term_equal ( tmp [ 1 ] , ( constant0 ? constant0 : ( constant0 = ( * ef27 ) ( ) ) ) ) ) {
( tmp [ 2 ] = ( * ef28 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) , lf_AUX_MuASF_Sign2C5_1 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 2 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
{
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 5 ] = ( * ef29 ) ( ( * ef2 ) ( lf3 ( make_list ( tmp [ 4 ] ) ) ) ) ) ;
if ( term_equal ( tmp [ 5 ] , ( constant1 ? constant1 : ( constant1 = ( * ef30 ) ( ) ) ) ) ) {
( tmp [ 6 ] = ( * ef37 ) ( lf11 ( make_list ( atmp010 ) ) , ( * ef38 ) ( ( * ef39 ) ( lf3 ( make_list ( make_char ( 49 ) ) ) ) ) ) ) ;
( tmp [ 7 ] = ( * ef40 ) ( lf11 ( make_list ( atmp010 ) ) ) ) ;
if ( check_sym ( tmp [ 7 ] , ef38sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
if ( check_sym ( tmp [ 8 ] , ef39sym ) ) {
( tmp [ 9 ] = arg_0 ( tmp [ 8 ] ) ) ;
if ( check_sym ( tmp [ 9 ] , lf3sym ) ) {
( tmp [ 10 ] = arg_0 ( tmp [ 9 ] ) ) ;
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( ( * ef41 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) , lf11 ( make_list ( atmp010 ) ) , atmp02 ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 5 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) , ( * ef12 ) ( ( * ef10 ) ( lf3 ( make_list ( atmp0000 ) ) ) , tmp [ 6 ] ) ) ) ) ) ) ) , ( * ef14 ) ( ( * ef15 ) ( lf8 ( cons ( make_list ( ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 12 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( make_list ( tmp [ 4 ] ) ) ) ) ) ) ) , cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef23 ) ( ( * ef24 ) ( lf3 ( make_list ( tmp [ 10 ] ) ) ) ) ) ) ) , make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 116 ] , char_table [ 114 ] , char_table [ 117 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , make_list ( ( * ef16 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 15 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
}
}
}
}
if ( term_equal ( tmp [ 5 ] , ( constant0 ? constant0 : ( constant0 = ( * ef27 ) ( ) ) ) ) ) {
( tmp [ 6 ] = ( * ef37 ) ( lf11 ( make_list ( atmp010 ) ) , ( * ef38 ) ( ( * ef39 ) ( lf3 ( make_list ( make_char ( 49 ) ) ) ) ) ) ) ;
( tmp [ 7 ] = ( * ef40 ) ( lf11 ( make_list ( atmp010 ) ) ) ) ;
if ( check_sym ( tmp [ 7 ] , ef38sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
if ( check_sym ( tmp [ 8 ] , ef39sym ) ) {
( tmp [ 9 ] = arg_0 ( tmp [ 8 ] ) ) ;
if ( check_sym ( tmp [ 9 ] , lf3sym ) ) {
( tmp [ 10 ] = arg_0 ( tmp [ 9 ] ) ) ;
FUNC_EXIT ( ( * ef3 ) ( lf4 ( make_list ( ( * ef41 ) ( ( * ef2 ) ( lf3 ( make_list ( atmp0000 ) ) ) , lf11 ( make_list ( atmp010 ) ) , atmp02 ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf5 ( cons ( make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) ) ) ) ) , ( * ef11 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef6 ) ( ( * ef7 ) ( lf6 ( cons ( make_list ( ( * ef8 ) ( ) ) , make_list ( ( * ef9 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 5 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) , ( * ef12 ) ( ( * ef10 ) ( lf3 ( make_list ( atmp0000 ) ) ) , tmp [ 6 ] ) ) ) ) ) ) ) , ( * ef14 ) ( ( * ef15 ) ( lf8 ( cons ( make_list ( ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) , ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 12 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list_char ( 34 ) , cons ( make_list ( tmp [ 4 ] ) , make_list ( make_char ( 34 ) ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef23 ) ( ( * ef24 ) ( lf3 ( make_list ( tmp [ 10 ] ) ) ) ) ) ) ) , make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 7 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 102 ] , char_table [ 97 ] , char_table [ 108 ] , char_table [ 115 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , make_list ( ( * ef16 ) ( ( * ef18 ) ( ( * ef19 ) ( ( * ef21 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 15 , char_table [ 65 ] , char_table [ 84 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 83 ] , char_table [ 121 ] , char_table [ 109 ] , char_table [ 98 ] , char_table [ 111 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf9 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef10 ) ( lf3 ( cons ( make_list ( atmp0000 ) , ( ATerm ) ATmakeList ( 3 , char_table [ 115 ] , char_table [ 121 ] , char_table [ 109 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
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
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_MuASF_Sign2C5_2sym , arg0 , arg1 ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf11 ( ATerm arg0 ) {
CONS_ENTRY ( lf11sym , ATmakeAppl ( lf11sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf11sym , arg0 ) ) ;
}
ATerm lf6 ( ATerm arg0 ) {
CONS_ENTRY ( lf6sym , ATmakeAppl ( lf6sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf6sym , arg0 ) ) ;
}
ATerm lf5 ( ATerm arg0 ) {
CONS_ENTRY ( lf5sym , ATmakeAppl ( lf5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf5sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}
ATerm lf_AUX_MuASF_Sign2C5_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Sign2C5_1sym , ATmakeAppl ( lf_AUX_MuASF_Sign2C5_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Sign2C5_1sym , arg0 ) ) ;
}
ATerm lf10 ( ATerm arg0 ) {
CONS_ENTRY ( lf10sym , ATmakeAppl ( lf10sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf10sym , arg0 ) ) ;
}
ATerm lf9 ( ATerm arg0 ) {
CONS_ENTRY ( lf9sym , ATmakeAppl ( lf9sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf9sym , arg0 ) ) ;
}
ATerm lf8 ( ATerm arg0 ) {
CONS_ENTRY ( lf8sym , ATmakeAppl ( lf8sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf8sym , arg0 ) ) ;
}
ATerm lf7 ( ATerm arg0 ) {
CONS_ENTRY ( lf7sym , ATmakeAppl ( lf7sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf7sym , arg0 ) ) ;
}

