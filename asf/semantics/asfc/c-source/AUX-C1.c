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
static Symbol lf_AUX_C1_2sym ;
static ATerm lf_AUX_C1_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_3sym ;
static ATerm lf_AUX_C1_3 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_4sym ;
static ATerm lf_AUX_C1_4 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_5sym ;
static ATerm lf_AUX_C1_5 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_6sym ;
static ATerm lf_AUX_C1_6 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_1sym ;
static ATerm lf_AUX_C1_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_7sym ;
static ATerm lf_AUX_C1_7 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_8sym ;
static ATerm lf_AUX_C1_8 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_9sym ;
static ATerm lf_AUX_C1_9 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_10sym ;
static ATerm lf_AUX_C1_10 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_11sym ;
static ATerm lf_AUX_C1_11 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_12sym ;
static ATerm lf_AUX_C1_12 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_C1_13sym ;
static ATerm lf_AUX_C1_13 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_14sym ;
static ATerm lf_AUX_C1_14 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_15sym ;
static ATerm lf_AUX_C1_15 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_17sym ;
static ATerm lf_AUX_C1_17 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_16sym ;
static ATerm lf_AUX_C1_16 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_18sym ;
static ATerm lf_AUX_C1_18 ( ) ;
static Symbol lf_AUX_C1_19sym ;
static ATerm lf_AUX_C1_19 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_20sym ;
static ATerm lf_AUX_C1_20 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_C1_21sym ;
static ATerm lf_AUX_C1_21 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_22sym ;
static ATerm lf_AUX_C1_22 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_C1_24sym ;
static ATerm lf_AUX_C1_24 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_23sym ;
static ATerm lf_AUX_C1_23 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_25sym ;
static ATerm lf_AUX_C1_25 ( ) ;
static Symbol lf_AUX_C1_26sym ;
static ATerm lf_AUX_C1_26 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_28sym ;
static ATerm lf_AUX_C1_28 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_27sym ;
static ATerm lf_AUX_C1_27 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_29sym ;
static ATerm lf_AUX_C1_29 ( ) ;
static Symbol lf_AUX_C1_30sym ;
static ATerm lf_AUX_C1_30 ( ) ;
static Symbol lf_AUX_C1_31sym ;
static ATerm lf_AUX_C1_31 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_32sym ;
static ATerm lf_AUX_C1_32 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_33sym ;
static ATerm lf_AUX_C1_33 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_34sym ;
static ATerm lf_AUX_C1_34 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_35sym ;
static ATerm lf_AUX_C1_35 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_37sym ;
static ATerm lf_AUX_C1_37 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_36sym ;
static ATerm lf_AUX_C1_36 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_38sym ;
static ATerm lf_AUX_C1_38 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_39sym ;
static ATerm lf_AUX_C1_39 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_40sym ;
static ATerm lf_AUX_C1_40 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_41sym ;
static ATerm lf_AUX_C1_41 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_42sym ;
static ATerm lf_AUX_C1_42 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_C1_43sym ;
static ATerm lf_AUX_C1_43 ( ) ;
static Symbol lf_AUX_C1_44sym ;
static ATerm lf_AUX_C1_44 ( ) ;
static Symbol lf_AUX_C1_45sym ;
static ATerm lf_AUX_C1_45 ( ) ;
static Symbol lf_AUX_C1_46sym ;
static ATerm lf_AUX_C1_46 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_47sym ;
static ATerm lf_AUX_C1_47 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_48sym ;
static ATerm lf_AUX_C1_48 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_49sym ;
static ATerm lf_AUX_C1_49 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_50sym ;
static ATerm lf_AUX_C1_50 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_51sym ;
static ATerm lf_AUX_C1_51 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_52sym ;
static ATerm lf_AUX_C1_52 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_53sym ;
static ATerm lf_AUX_C1_53 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_55sym ;
static ATerm lf_AUX_C1_55 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_54sym ;
static ATerm lf_AUX_C1_54 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_56sym ;
static ATerm lf_AUX_C1_56 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_C1_57sym ;
static ATerm lf_AUX_C1_57 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_58sym ;
static ATerm lf_AUX_C1_58 ( ATerm arg1 ) ;
static Symbol lf_AUX_C1_59sym ;
static ATerm lf_AUX_C1_59 ( ATerm arg1 , ATerm arg2 ) ;
void register_AUX_C1 ( ) {
lf_AUX_C1_2sym = ATmakeSymbol ( "prod(id(\"caller\"),w(\"\"),[l(\"integer-constant\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Integer-constant\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_2sym ) ;
lf_AUX_C1_3sym = ATmakeSymbol ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_3sym ) ;
lf_AUX_C1_4sym = ATmakeSymbol ( "prod(id(\"caller\"),w(\"\"),[l(\"string\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"String\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_4sym ) ;
lf_AUX_C1_5sym = ATmakeSymbol ( "prod(id(\"caller\"),w(\"\"),[l(\"cdir\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CDir\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_5sym ) ;
lf_AUX_C1_6sym = ATmakeSymbol ( "prod(id(\"caller\"),w(\"\"),[l(\"cdirs\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CDirs\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_6sym ) ;
lf_AUX_C1_1sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_1sym ) ;
lf_AUX_C1_7sym = ATmakeSymbol ( "prod(id(\"caller\"),w(\"\"),[l(\"cfilename\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CFilename\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_7sym ) ;
lf_AUX_C1_8sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_8sym ) ;
lf_AUX_C1_9sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_9sym ) ;
lf_AUX_C1_10sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_10sym ) ;
lf_AUX_C1_11sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[l(\"if\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_11sym ) ;
lf_AUX_C1_12sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[l(\"if\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\"),w(\"\"),l(\"else\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_12sym ) ;
lf_AUX_C1_13sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[l(\"while\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_13sym ) ;
lf_AUX_C1_14sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[l(\"return\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_14sym ) ;
lf_AUX_C1_15sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[l(\"goto\"),w(\"\"),sort(\"Identifier\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_15sym ) ;
lf_AUX_C1_17sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_17sym ) ;
lf_AUX_C1_16sym = ATmakeSymbol ( "listtype(sort(\"Statement\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_16sym ) ;
lf_AUX_C1_18sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_18sym ) ;
lf_AUX_C1_19sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_19sym ) ;
lf_AUX_C1_20sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-specifiers\"),w(\"\"),sort(\"Declarator\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_20sym ) ;
lf_AUX_C1_21sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-specifiers\"),w(\"\"),sort(\"Declarator\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_21sym ) ;
lf_AUX_C1_22sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-specifiers\"),w(\"\"),sort(\"Declarator\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_22sym ) ;
lf_AUX_C1_24sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Declaration\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_24sym ) ;
lf_AUX_C1_23sym = ATmakeSymbol ( "listtype(sort(\"Declaration\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_23sym ) ;
lf_AUX_C1_25sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_25sym ) ;
lf_AUX_C1_26sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_26sym ) ;
lf_AUX_C1_28sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Type-specifier\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-specifiers\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_28sym ) ;
lf_AUX_C1_27sym = ATmakeSymbol ( "listtype(sort(\"Type-specifier\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_27sym ) ;
lf_AUX_C1_29sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[l(\"static\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Type-specifier\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_29sym ) ;
lf_AUX_C1_30sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[l(\"void\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Type-specifier\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_30sym ) ;
lf_AUX_C1_31sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Type-specifier\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_31sym ) ;
lf_AUX_C1_32sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[ql(\"*\"),w(\"\"),sort(\"Declarator\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_32sym ) ;
lf_AUX_C1_33sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_33sym ) ;
lf_AUX_C1_34sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Integer-constant\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_34sym ) ;
lf_AUX_C1_35sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Parameter-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_35sym ) ;
lf_AUX_C1_37sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Parameter-declaration\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parameter-list\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_37sym ) ;
lf_AUX_C1_36sym = ATmakeSymbol ( "listtype(sort(\"Parameter-declaration\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_36sym ) ;
lf_AUX_C1_38sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-specifiers\"),w(\"\"),sort(\"Declarator\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parameter-declaration\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_38sym ) ;
lf_AUX_C1_39sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_39sym ) ;
lf_AUX_C1_40sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_40sym ) ;
lf_AUX_C1_41sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Unary-operator\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_41sym ) ;
lf_AUX_C1_42sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"?\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_42sym ) ;
lf_AUX_C1_43sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[ql(\"&\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Unary-operator\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_43sym ) ;
lf_AUX_C1_44sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[ql(\"*\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Unary-operator\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_44sym ) ;
lf_AUX_C1_45sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[ql(\"!\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Unary-operator\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_45sym ) ;
lf_AUX_C1_46sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Identifier\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_46sym ) ;
lf_AUX_C1_47sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_47sym ) ;
lf_AUX_C1_48sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_48sym ) ;
lf_AUX_C1_49sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_49sym ) ;
lf_AUX_C1_50sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_50sym ) ;
lf_AUX_C1_51sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"Integer-constant\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_51sym ) ;
lf_AUX_C1_52sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"String\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_52sym ) ;
lf_AUX_C1_53sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_53sym ) ;
lf_AUX_C1_55sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_55sym ) ;
lf_AUX_C1_54sym = ATmakeSymbol ( "listtype(sort(\"Expression\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_54sym ) ;
lf_AUX_C1_56sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"INCLUDES\"),w(\"\"),sort(\"Declaration-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CProgram\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_56sym ) ;
lf_AUX_C1_57sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[ql(\"#include\"),w(\"\"),sort(\"CFilename\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INCLUDE\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_57sym ) ;
lf_AUX_C1_58sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"INCLUDE\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INCLUDES\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_58sym ) ;
lf_AUX_C1_59sym = ATmakeSymbol ( "prod(id(\"C\"),w(\"\"),[sort(\"INCLUDES\"),w(\"\"),sort(\"INCLUDE\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INCLUDES\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_C1_59sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf_AUX_C1_1 , lf_AUX_C1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"caller\"),w(\"\"),[l(\"integer-constant\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Integer-constant\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_2 , lf_AUX_C1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_3 , lf_AUX_C1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"caller\"),w(\"\"),[l(\"string\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"String\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_4 , lf_AUX_C1_4sym ) ;
register_prod ( ATparse ( "prod(id(\"caller\"),w(\"\"),[l(\"cdir\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CDir\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_5 , lf_AUX_C1_5sym ) ;
register_prod ( ATparse ( "prod(id(\"caller\"),w(\"\"),[l(\"cdirs\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CDirs\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_6 , lf_AUX_C1_6sym ) ;
register_prod ( ATparse ( "prod(id(\"caller\"),w(\"\"),[l(\"cfilename\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CFilename\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_7 , lf_AUX_C1_7sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_8 , lf_AUX_C1_8sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_9 , lf_AUX_C1_9sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_10 , lf_AUX_C1_10sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[l(\"if\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_11 , lf_AUX_C1_11sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[l(\"if\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\"),w(\"\"),l(\"else\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_12 , lf_AUX_C1_12sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[l(\"while\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_13 , lf_AUX_C1_13sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[l(\"return\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_14 , lf_AUX_C1_14sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[l(\"goto\"),w(\"\"),sort(\"Identifier\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_15 , lf_AUX_C1_15sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Statement\"))" ) , lf_AUX_C1_16 , lf_AUX_C1_16sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_17 , lf_AUX_C1_17sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_18 , lf_AUX_C1_18sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_19 , lf_AUX_C1_19sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-specifiers\"),w(\"\"),sort(\"Declarator\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_20 , lf_AUX_C1_20sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-specifiers\"),w(\"\"),sort(\"Declarator\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_21 , lf_AUX_C1_21sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-specifiers\"),w(\"\"),sort(\"Declarator\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_22 , lf_AUX_C1_22sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Declaration\"))" ) , lf_AUX_C1_23 , lf_AUX_C1_23sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Declaration\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_24 , lf_AUX_C1_24sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_25 , lf_AUX_C1_25sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_26 , lf_AUX_C1_26sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Type-specifier\"))" ) , lf_AUX_C1_27 , lf_AUX_C1_27sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Type-specifier\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-specifiers\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_28 , lf_AUX_C1_28sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[l(\"static\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Type-specifier\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_29 , lf_AUX_C1_29sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[l(\"void\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Type-specifier\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_30 , lf_AUX_C1_30sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Type-specifier\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_31 , lf_AUX_C1_31sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[ql(\"*\"),w(\"\"),sort(\"Declarator\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_32 , lf_AUX_C1_32sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_33 , lf_AUX_C1_33sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Integer-constant\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_34 , lf_AUX_C1_34sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Parameter-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declarator\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_35 , lf_AUX_C1_35sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Parameter-declaration\"),ql(\",\"))" ) , lf_AUX_C1_36 , lf_AUX_C1_36sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Parameter-declaration\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parameter-list\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_37 , lf_AUX_C1_37sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Declaration-specifiers\"),w(\"\"),sort(\"Declarator\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parameter-declaration\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_38 , lf_AUX_C1_38sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_39 , lf_AUX_C1_39sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_40 , lf_AUX_C1_40sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Unary-operator\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_41 , lf_AUX_C1_41sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"?\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_42 , lf_AUX_C1_42sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[ql(\"&\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Unary-operator\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_43 , lf_AUX_C1_43sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[ql(\"*\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Unary-operator\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_44 , lf_AUX_C1_44sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[ql(\"!\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Unary-operator\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_45 , lf_AUX_C1_45sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Identifier\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_46 , lf_AUX_C1_46sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_47 , lf_AUX_C1_47sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_48 , lf_AUX_C1_48sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_49 , lf_AUX_C1_49sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_50 , lf_AUX_C1_50sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"Integer-constant\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_51 , lf_AUX_C1_51sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"String\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_52 , lf_AUX_C1_52sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_53 , lf_AUX_C1_53sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Expression\"),ql(\",\"))" ) , lf_AUX_C1_54 , lf_AUX_C1_54sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_55 , lf_AUX_C1_55sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"INCLUDES\"),w(\"\"),sort(\"Declaration-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CProgram\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_56 , lf_AUX_C1_56sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[ql(\"#include\"),w(\"\"),sort(\"CFilename\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INCLUDE\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_57 , lf_AUX_C1_57sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"INCLUDE\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INCLUDES\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_58 , lf_AUX_C1_58sym ) ;
register_prod ( ATparse ( "prod(id(\"C\"),w(\"\"),[sort(\"INCLUDES\"),w(\"\"),sort(\"INCLUDE\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INCLUDES\"),w(\"\"),no-attrs)" ) , lf_AUX_C1_59 , lf_AUX_C1_59sym ) ;
}
void resolve_AUX_C1 ( ) {
}
void init_AUX_C1 ( ) {
}
ATerm lf_AUX_C1_59 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_59sym , ATmakeAppl ( lf_AUX_C1_59sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_59sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_58 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_58sym , ATmakeAppl ( lf_AUX_C1_58sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_58sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_57 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_57sym , ATmakeAppl ( lf_AUX_C1_57sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_57sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_56 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_56sym , ATmakeAppl ( lf_AUX_C1_56sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_56sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_54 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_54sym , ATmakeAppl ( lf_AUX_C1_54sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_54sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_55 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_55sym , ATmakeAppl ( lf_AUX_C1_55sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_55sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_53 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_53sym , ATmakeAppl ( lf_AUX_C1_53sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_53sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_52 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_52sym , ATmakeAppl ( lf_AUX_C1_52sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_52sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_51 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_51sym , ATmakeAppl ( lf_AUX_C1_51sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_51sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_50 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_50sym , ATmakeAppl ( lf_AUX_C1_50sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_50sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_49 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_49sym , ATmakeAppl ( lf_AUX_C1_49sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_49sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_48 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_48sym , ATmakeAppl ( lf_AUX_C1_48sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_48sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_47 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_47sym , ATmakeAppl ( lf_AUX_C1_47sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_47sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_46 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_46sym , ATmakeAppl ( lf_AUX_C1_46sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_46sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_45 ( ) {
CONS_ENTRY ( lf_AUX_C1_45sym , ATmakeAppl0 ( lf_AUX_C1_45sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_C1_45sym ) ) ;
}
ATerm lf_AUX_C1_44 ( ) {
CONS_ENTRY ( lf_AUX_C1_44sym , ATmakeAppl0 ( lf_AUX_C1_44sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_C1_44sym ) ) ;
}
ATerm lf_AUX_C1_43 ( ) {
CONS_ENTRY ( lf_AUX_C1_43sym , ATmakeAppl0 ( lf_AUX_C1_43sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_C1_43sym ) ) ;
}
ATerm lf_AUX_C1_42 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_C1_42sym , ATmakeAppl ( lf_AUX_C1_42sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_C1_42sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_C1_41 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_41sym , ATmakeAppl ( lf_AUX_C1_41sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_41sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_40 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_40sym , ATmakeAppl ( lf_AUX_C1_40sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_40sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_39 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_39sym , ATmakeAppl ( lf_AUX_C1_39sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_39sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_38 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_38sym , ATmakeAppl ( lf_AUX_C1_38sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_38sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_36 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_36sym , ATmakeAppl ( lf_AUX_C1_36sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_36sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_37 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_37sym , ATmakeAppl ( lf_AUX_C1_37sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_37sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_35 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_35sym , ATmakeAppl ( lf_AUX_C1_35sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_35sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_34 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_34sym , ATmakeAppl ( lf_AUX_C1_34sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_34sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_33 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_33sym , ATmakeAppl ( lf_AUX_C1_33sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_33sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_32 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_32sym , ATmakeAppl ( lf_AUX_C1_32sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_32sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_31 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_31sym , ATmakeAppl ( lf_AUX_C1_31sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_31sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_30 ( ) {
CONS_ENTRY ( lf_AUX_C1_30sym , ATmakeAppl0 ( lf_AUX_C1_30sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_C1_30sym ) ) ;
}
ATerm lf_AUX_C1_29 ( ) {
CONS_ENTRY ( lf_AUX_C1_29sym , ATmakeAppl0 ( lf_AUX_C1_29sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_C1_29sym ) ) ;
}
ATerm lf_AUX_C1_27 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_27sym , ATmakeAppl ( lf_AUX_C1_27sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_27sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_28 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_28sym , ATmakeAppl ( lf_AUX_C1_28sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_28sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_26 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_26sym , ATmakeAppl ( lf_AUX_C1_26sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_26sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_25 ( ) {
CONS_ENTRY ( lf_AUX_C1_25sym , ATmakeAppl0 ( lf_AUX_C1_25sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_C1_25sym ) ) ;
}
ATerm lf_AUX_C1_23 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_23sym , ATmakeAppl ( lf_AUX_C1_23sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_23sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_24 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_24sym , ATmakeAppl ( lf_AUX_C1_24sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_24sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_22 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_C1_22sym , ATmakeAppl ( lf_AUX_C1_22sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_C1_22sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_C1_21 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_21sym , ATmakeAppl ( lf_AUX_C1_21sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_21sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_20 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_C1_20sym , ATmakeAppl ( lf_AUX_C1_20sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_C1_20sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_C1_19 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_19sym , ATmakeAppl ( lf_AUX_C1_19sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_19sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_18 ( ) {
CONS_ENTRY ( lf_AUX_C1_18sym , ATmakeAppl0 ( lf_AUX_C1_18sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_C1_18sym ) ) ;
}
ATerm lf_AUX_C1_16 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_16sym , ATmakeAppl ( lf_AUX_C1_16sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_16sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_17 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_17sym , ATmakeAppl ( lf_AUX_C1_17sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_17sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_15 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_15sym , ATmakeAppl ( lf_AUX_C1_15sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_15sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_14 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_14sym , ATmakeAppl ( lf_AUX_C1_14sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_14sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_13 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_13sym , ATmakeAppl ( lf_AUX_C1_13sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_13sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_12 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_C1_12sym , ATmakeAppl ( lf_AUX_C1_12sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_C1_12sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_C1_11 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_11sym , ATmakeAppl ( lf_AUX_C1_11sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_11sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_10 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_10sym , ATmakeAppl ( lf_AUX_C1_10sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_10sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_9 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_C1_9sym , ATmakeAppl ( lf_AUX_C1_9sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_C1_9sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_C1_8 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_8sym , ATmakeAppl ( lf_AUX_C1_8sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_8sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_7 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_7sym , ATmakeAppl ( lf_AUX_C1_7sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_7sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_1sym , ATmakeAppl ( lf_AUX_C1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_1sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_6 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_6sym , ATmakeAppl ( lf_AUX_C1_6sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_6sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_5 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_5sym , ATmakeAppl ( lf_AUX_C1_5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_5sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_4 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_4sym , ATmakeAppl ( lf_AUX_C1_4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_4sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_3 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_3sym , ATmakeAppl ( lf_AUX_C1_3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_3sym , arg0 ) ) ;
}
ATerm lf_AUX_C1_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_C1_2sym , ATmakeAppl ( lf_AUX_C1_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_C1_2sym , arg0 ) ) ;
}

