/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_MuASF_Rules2C18_3_recursivesym ;
static ATerm lf_AUX_MuASF_Rules2C18_3_recursive ( ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 ) ;
static Symbol lf_AUX_MuASF_Rules2C18_3sym ;
static ATerm lf_AUX_MuASF_Rules2C18_3 ( ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 ) ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef21sym ;
static funcptr ef21 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol ef17sym ;
static funcptr ef17 ;
static Symbol lf5sym ;
static ATerm lf5 ( ATerm arg1 ) ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol ef19sym ;
static funcptr ef19 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef22sym ;
static funcptr ef22 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol lf6sym ;
static ATerm lf6 ( ATerm arg1 ) ;
static Symbol ef23sym ;
static funcptr ef23 ;
static Symbol ef24sym ;
static funcptr ef24 ;
static Symbol lf7sym ;
static ATerm lf7 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef20sym ;
static funcptr ef20 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol lf_AUX_MuASF_Rules2C18_1sym ;
static ATerm lf_AUX_MuASF_Rules2C18_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_MuASF_Rules2C18_2sym ;
static ATerm lf_AUX_MuASF_Rules2C18_2 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef25sym ;
static funcptr ef25 ;
void register_AUX_MuASF_Rules2C18 ( ) {
lf_AUX_MuASF_Rules2C18_3_recursivesym = ATmakeSymbol ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"listpatterns2cstats\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)"
 , 4 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Rules2C18_3_recursivesym ) ;
lf_AUX_MuASF_Rules2C18_3sym = ATmakeSymbol ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"listpatterns2cstats\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" , 4 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Rules2C18_3sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"IntCon\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf5sym = ATmakeSymbol ( "listtype(sort(\"Statement\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf5sym ) ;
lf6sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf6sym ) ;
lf7sym = ATmakeSymbol ( "listtype(sort(\"Expression\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf7sym ) ;
lf_AUX_MuASF_Rules2C18_1sym = ATmakeSymbol ( "listtype(sort(\"C-Rule\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Rules2C18_1sym ) ;
lf_AUX_MuASF_Rules2C18_2sym = ATmakeSymbol ( "listtype(sort(\"NamePair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Rules2C18_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"C-Rule\"),ql(\";\"))" ) , lf_AUX_MuASF_Rules2C18_1 , lf_AUX_MuASF_Rules2C18_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"NamePair\"),ql(\",\"))" ) , lf_AUX_MuASF_Rules2C18_2 , lf_AUX_MuASF_Rules2C18_2sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"listpatterns2cstats\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Rules2C18_3 , lf_AUX_MuASF_Rules2C18_3sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"listpatterns2cstats\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Rules2C18_3_recursive , lf_AUX_MuASF_Rules2C18_3_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"IntCon\"),ql(\",\"))" ) , lf4 , lf4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Statement\"))" ) , lf5 , lf5sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf6 , lf6sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Expression\"),ql(\",\"))" ) , lf7 , lf7sym ) ;
}
void resolve_AUX_MuASF_Rules2C18 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"select-on-same-list-pat\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"select-on-same-list-pat\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"listpattern2cstats\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"listpattern2cstats\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"get-first-vf-path\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"get-first-vf-path\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[ql(\"is-ignored-funid\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"prefer\")],w(\"\"),l(\"}\")))" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[ql(\"is-ignored-funid\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"prefer\")],w(\"\"),l(\"}\")))" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"make-atmp\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"make-atmp\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef19 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef19sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef20 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Declaration-list-opt\"),w(\"\"),ql(\"++d\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef20sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Declaration-list-opt\"),w(\"\"),ql(\"++d\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef21 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef21sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef22 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef22sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef23 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef23sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef24 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef24sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef25 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef25sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_MuASF_Rules2C18 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_MuASF_Rules2C18_3 ( ATerm arg0 , ATerm arg1 , ATerm arg2 , ATerm arg3 ) {
{
ATerm tmp [ 24 ] ;
FUNC_ENTRY ( lf_AUX_MuASF_Rules2C18_3sym , ATmakeAppl ( lf_AUX_MuASF_Rules2C18_3sym , arg0 , arg1 , arg2 , arg3 ) ) ;
if ( check_sym ( arg0 , lf_AUX_MuASF_Rules2C18_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( arg2 , lf_AUX_MuASF_Rules2C18_2sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
{
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
{
if ( not_empty_list ( tmp [ 1 ] ) ) {
( tmp [ 2 ] = ( * ef3 ) ( lf_AUX_MuASF_Rules2C18_1 ( cons ( make_list ( tmp [ 0 ] ) , make_list ( tmp [ 1 ] ) ) ) ) ) ;
if ( check_sym ( tmp [ 2 ] , ef4sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
( tmp [ 4 ] = arg_1 ( tmp [ 2 ] ) ) ;
{
if ( check_sym ( tmp [ 3 ] , lf_AUX_MuASF_Rules2C18_1sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 3 ] ) ) ;
{
if ( check_sym ( tmp [ 4 ] , lf_AUX_MuASF_Rules2C18_1sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 4 ] ) ) ;
{
if ( not_empty_list ( tmp [ 5 ] ) ) {
( tmp [ 7 ] = ( * ef5 ) ( lf_AUX_MuASF_Rules2C18_1 ( make_list ( tmp [ 5 ] ) ) , arg1 , lf_AUX_MuASF_Rules2C18_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 7 ] , ef6sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
( tmp [ 9 ] = arg_1 ( tmp [ 7 ] ) ) ;
( tmp [ 10 ] = arg_2 ( tmp [ 7 ] ) ) ;
( tmp [ 11 ] = ( * ef7 ) ( lf_AUX_MuASF_Rules2C18_1 ( make_list ( tmp [ 5 ] ) ) ) ) ;
if ( check_sym ( tmp [ 11 ] , ef8sym ) ) {
( tmp [ 12 ] = arg_0 ( tmp [ 11 ] ) ) ;
( tmp [ 13 ] = arg_1 ( tmp [ 11 ] ) ) ;
{
if ( check_sym ( tmp [ 12 ] , ef9sym ) ) {
( tmp [ 14 ] = arg_0 ( tmp [ 12 ] ) ) ;
{
if ( check_sym ( tmp [ 13 ] , lf4sym ) ) {
( tmp [ 15 ] = arg_0 ( tmp [ 13 ] ) ) ;
{
if ( not_empty_list ( tmp [ 15 ] ) ) {
( tmp [ 16 ] = ( * ef10 ) ( tmp [ 14 ] ) ) ;
if ( term_equal ( tmp [ 16 ] , ( constant0 ? constant0 : ( constant0 = ( * ef11 ) ( ) ) ) ) ) {
( tmp [ 17 ] = ( * ef12 ) ( ( * ef13 ) ( ( * ef14 ) ( ( * ef15 ) ( lf4 ( make_list ( tmp [ 15 ] ) ) ) ) ) ) ) ;
( tmp [ 18 ] = lf_AUX_MuASF_Rules2C18_3 ( lf_AUX_MuASF_Rules2C18_1 ( make_list ( tmp [ 6 ] ) ) , arg1 , lf_AUX_MuASF_Rules2C18_2 ( make_list ( atmp20 ) ) , tmp [ 10 ] ) ) ;
if ( check_sym ( tmp [ 18 ] , ef1sym ) ) {
( tmp [ 19 ] = arg_0 ( tmp [ 18 ] ) ) ;
( tmp [ 20 ] = arg_1 ( tmp [ 18 ] ) ) ;
( tmp [ 21 ] = ( * ef16 ) ( make_nf1 ( ef17sym , lf5 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( arg1 , tmp [ 17 ] ) ) ) ) ) ) ) ;
( tmp [ 22 ] = ( * ef2 ) ( tmp [ 21 ] , tmp [ 19 ] ) ) ;
( tmp [ 23 ] = ( * ef20 ) ( tmp [ 8 ] , tmp [ 9 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( tmp [ 23 ] , tmp [ 22 ] ) , tmp [ 20 ] ) ) ;
}
}
if ( term_equal ( tmp [ 16 ] , ( constant1 ? constant1 : ( constant1 = ( * ef21 ) ( ) ) ) ) ) {
( tmp [ 17 ] = ( * ef12 ) ( ( * ef13 ) ( ( * ef14 ) ( ( * ef15 ) ( lf4 ( make_list ( tmp [ 15 ] ) ) ) ) ) ) ) ;
( tmp [ 18 ] = lf_AUX_MuASF_Rules2C18_3 ( lf_AUX_MuASF_Rules2C18_1 ( make_list ( tmp [ 6 ] ) ) , arg1 , lf_AUX_MuASF_Rules2C18_2 ( make_list ( atmp20 ) ) , tmp [ 10 ] ) ) ;
if ( check_sym ( tmp [ 18 ] , ef1sym ) ) {
( tmp [ 19 ] = arg_0 ( tmp [ 18 ] ) ) ;
( tmp [ 20 ] = arg_1 ( tmp [ 18 ] ) ) ;
( tmp [ 21 ] = ( * ef16 ) ( make_nf1 ( ef17sym , lf5 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( arg1 , ( * ef12 ) ( ( * ef13 ) ( ( * ef22 ) ( ( * ef14 ) ( ( * ef23 ) ( lf6 ( ( ATerm ) ATmakeList ( 5 , char_table [ 97 ] , char_table [ 114 ] , char_table [ 103 ] , char_table [ 95 ] , char_table [ 48 ] ) ) ) ) , make_nf1 ( ef24sym , lf7 ( make_list ( tmp [ 17 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ;
( tmp [ 22 ] = ( * ef2 ) ( tmp [ 21 ] , tmp [ 19 ] ) ) ;
( tmp [ 23 ] = ( * ef20 ) ( tmp [ 8 ] , tmp [ 9 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( tmp [ 23 ] , tmp [ 22 ] ) , tmp [ 20 ] ) ) ;
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
else {
FUNC_EXIT ( ( * ef1 ) ( ( * ef25 ) ( ) , arg3 ) ) ;
}
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = ( * ef5 ) ( lf_AUX_MuASF_Rules2C18_1 ( make_list ( tmp [ 0 ] ) ) , arg1 , lf_AUX_MuASF_Rules2C18_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 1 ] , ef6sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
( tmp [ 3 ] = arg_1 ( tmp [ 1 ] ) ) ;
( tmp [ 4 ] = arg_2 ( tmp [ 1 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef20 ) ( tmp [ 2 ] , tmp [ 3 ] ) , tmp [ 4 ] ) ) ;
}
}
}
}
}
}
FUNC_EXIT ( make_nf4 ( lf_AUX_MuASF_Rules2C18_3sym , arg0 , arg1 , arg2 , arg3 ) ) ;
}
}
ATerm lf_AUX_MuASF_Rules2C18_3_recursive ( ATerm arg0 , ATerm arg1 , ATerm arg2 , ATerm arg3 ) {
{
ATerm tmp [ 24 ] ;
FUNC_ENTRY ( lf_AUX_MuASF_Rules2C18_3_recursivesym , ATmakeAppl ( lf_AUX_MuASF_Rules2C18_3_recursivesym , arg0 , arg1 , arg2 , arg3 ) ) ;
{
ATerm atmp00 = arg0 ;
if ( check_sym ( arg2 , lf_AUX_MuASF_Rules2C18_2sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
{
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
{
if ( not_empty_list ( tmp [ 1 ] ) ) {
( tmp [ 2 ] = ( * ef3 ) ( lf_AUX_MuASF_Rules2C18_1 ( cons ( make_list ( tmp [ 0 ] ) , make_list ( tmp [ 1 ] ) ) ) ) ) ;
if ( check_sym ( tmp [ 2 ] , ef4sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
( tmp [ 4 ] = arg_1 ( tmp [ 2 ] ) ) ;
{
if ( check_sym ( tmp [ 3 ] , lf_AUX_MuASF_Rules2C18_1sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 3 ] ) ) ;
{
if ( check_sym ( tmp [ 4 ] , lf_AUX_MuASF_Rules2C18_1sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 4 ] ) ) ;
{
if ( not_empty_list ( tmp [ 5 ] ) ) {
( tmp [ 7 ] = ( * ef5 ) ( lf_AUX_MuASF_Rules2C18_1 ( make_list ( tmp [ 5 ] ) ) , arg1 , lf_AUX_MuASF_Rules2C18_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 7 ] , ef6sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
( tmp [ 9 ] = arg_1 ( tmp [ 7 ] ) ) ;
( tmp [ 10 ] = arg_2 ( tmp [ 7 ] ) ) ;
( tmp [ 11 ] = ( * ef7 ) ( lf_AUX_MuASF_Rules2C18_1 ( make_list ( tmp [ 5 ] ) ) ) ) ;
if ( check_sym ( tmp [ 11 ] , ef8sym ) ) {
( tmp [ 12 ] = arg_0 ( tmp [ 11 ] ) ) ;
( tmp [ 13 ] = arg_1 ( tmp [ 11 ] ) ) ;
{
if ( check_sym ( tmp [ 12 ] , ef9sym ) ) {
( tmp [ 14 ] = arg_0 ( tmp [ 12 ] ) ) ;
{
if ( check_sym ( tmp [ 13 ] , lf4sym ) ) {
( tmp [ 15 ] = arg_0 ( tmp [ 13 ] ) ) ;
{
if ( not_empty_list ( tmp [ 15 ] ) ) {
( tmp [ 16 ] = ( * ef10 ) ( tmp [ 14 ] ) ) ;
if ( term_equal ( tmp [ 16 ] , ( constant0 ? constant0 : ( constant0 = ( * ef11 ) ( ) ) ) ) ) {
( tmp [ 17 ] = ( * ef12 ) ( ( * ef13 ) ( ( * ef14 ) ( ( * ef15 ) ( lf4 ( make_list ( tmp [ 15 ] ) ) ) ) ) ) ) ;
( tmp [ 18 ] = lf_AUX_MuASF_Rules2C18_3 ( lf_AUX_MuASF_Rules2C18_1 ( make_list ( tmp [ 6 ] ) ) , arg1 , lf_AUX_MuASF_Rules2C18_2 ( make_list ( atmp20 ) ) , tmp [ 10 ] ) ) ;
if ( check_sym ( tmp [ 18 ] , ef1sym ) ) {
( tmp [ 19 ] = arg_0 ( tmp [ 18 ] ) ) ;
( tmp [ 20 ] = arg_1 ( tmp [ 18 ] ) ) ;
( tmp [ 21 ] = ( * ef16 ) ( make_nf1 ( ef17sym , lf5 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( arg1 , tmp [ 17 ] ) ) ) ) ) ) ) ;
( tmp [ 22 ] = ( * ef2 ) ( tmp [ 21 ] , tmp [ 19 ] ) ) ;
( tmp [ 23 ] = ( * ef20 ) ( tmp [ 8 ] , tmp [ 9 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( tmp [ 23 ] , tmp [ 22 ] ) , tmp [ 20 ] ) ) ;
}
}
if ( term_equal ( tmp [ 16 ] , ( constant1 ? constant1 : ( constant1 = ( * ef21 ) ( ) ) ) ) ) {
( tmp [ 17 ] = ( * ef12 ) ( ( * ef13 ) ( ( * ef14 ) ( ( * ef15 ) ( lf4 ( make_list ( tmp [ 15 ] ) ) ) ) ) ) ) ;
( tmp [ 18 ] = lf_AUX_MuASF_Rules2C18_3 ( lf_AUX_MuASF_Rules2C18_1 ( make_list ( tmp [ 6 ] ) ) , arg1 , lf_AUX_MuASF_Rules2C18_2 ( make_list ( atmp20 ) ) , tmp [ 10 ] ) ) ;
if ( check_sym ( tmp [ 18 ] , ef1sym ) ) {
( tmp [ 19 ] = arg_0 ( tmp [ 18 ] ) ) ;
( tmp [ 20 ] = arg_1 ( tmp [ 18 ] ) ) ;
( tmp [ 21 ] = ( * ef16 ) ( make_nf1 ( ef17sym , lf5 ( make_list ( ( * ef18 ) ( ( * ef19 ) ( arg1 , ( * ef12 ) ( ( * ef13 ) ( ( * ef22 ) ( ( * ef14 ) ( ( * ef23 ) ( lf6 ( ( ATerm ) ATmakeList ( 5 , char_table [ 97 ] , char_table [ 114 ] , char_table [ 103 ] , char_table [ 95 ] , char_table [ 48 ] ) ) ) ) , make_nf1 ( ef24sym , lf7 ( make_list ( tmp [ 17 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ;
( tmp [ 22 ] = ( * ef2 ) ( tmp [ 21 ] , tmp [ 19 ] ) ) ;
( tmp [ 23 ] = ( * ef20 ) ( tmp [ 8 ] , tmp [ 9 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( tmp [ 23 ] , tmp [ 22 ] ) , tmp [ 20 ] ) ) ;
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
else {
FUNC_EXIT ( ( * ef1 ) ( ( * ef25 ) ( ) , arg3 ) ) ;
}
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = ( * ef5 ) ( lf_AUX_MuASF_Rules2C18_1 ( make_list ( tmp [ 0 ] ) ) , arg1 , lf_AUX_MuASF_Rules2C18_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 1 ] , ef6sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
( tmp [ 3 ] = arg_1 ( tmp [ 1 ] ) ) ;
( tmp [ 4 ] = arg_2 ( tmp [ 1 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef20 ) ( tmp [ 2 ] , tmp [ 3 ] ) , tmp [ 4 ] ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf4 ( lf_AUX_MuASF_Rules2C18_3_recursivesym , lf_AUX_MuASF_Rules2C18_1 ( arg0 ) , arg1 , arg2 , arg3 ) ) ;
}
}
ATerm lf_AUX_MuASF_Rules2C18_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Rules2C18_2sym , ATmakeAppl ( lf_AUX_MuASF_Rules2C18_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Rules2C18_2sym , arg0 ) ) ;
}
ATerm lf_AUX_MuASF_Rules2C18_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Rules2C18_1sym , ATmakeAppl ( lf_AUX_MuASF_Rules2C18_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Rules2C18_1sym , arg0 ) ) ;
}
ATerm lf7 ( ATerm arg0 ) {
CONS_ENTRY ( lf7sym , ATmakeAppl ( lf7sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf7sym , arg0 ) ) ;
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

