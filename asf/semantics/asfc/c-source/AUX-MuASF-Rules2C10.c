#include  "asc-support.h"
static Symbol lf_AUX_MuASF_Rules2C10_3sym ;
static ATerm lf_AUX_MuASF_Rules2C10_3 ( ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol lf5sym ;
static ATerm lf5 ( ATerm arg1 ) ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol ef17sym ;
static funcptr ef17 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol lf6sym ;
static ATerm lf6 ( ATerm arg1 ) ;
static Symbol lf7sym ;
static ATerm lf7 ( ATerm arg1 ) ;
static Symbol ef27sym ;
static funcptr ef27 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef23sym ;
static funcptr ef23 ;
static Symbol ef28sym ;
static funcptr ef28 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef20sym ;
static funcptr ef20 ;
static Symbol ef25sym ;
static funcptr ef25 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef21sym ;
static funcptr ef21 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol lf8sym ;
static ATerm lf8 ( ATerm arg1 ) ;
static Symbol ef22sym ;
static funcptr ef22 ;
static Symbol ef24sym ;
static funcptr ef24 ;
static Symbol ef26sym ;
static funcptr ef26 ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol ef19sym ;
static funcptr ef19 ;
static Symbol lf_AUX_MuASF_Rules2C10_1sym ;
static ATerm lf_AUX_MuASF_Rules2C10_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_MuASF_Rules2C10_2sym ;
static ATerm lf_AUX_MuASF_Rules2C10_2 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef30sym ;
static funcptr ef30 ;
static Symbol ef29sym ;
static funcptr ef29 ;
void register_AUX_MuASF_Rules2C10 ( ) {
lf_AUX_MuASF_Rules2C10_3sym = ATmakeSymbol ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[l(\"asfrules2cstats\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)"
 , 4 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Rules2C10_3sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"Statement\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf5sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf5sym ) ;
lf6sym = ATmakeSymbol ( "listtype(sort(\"FV-Path\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf6sym ) ;
lf7sym = ATmakeSymbol ( "listtype(sort(\"Cond\"),ql(\"&\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf7sym ) ;
lf8sym = ATmakeSymbol ( "listtype(sort(\"IntCon\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf8sym ) ;
lf_AUX_MuASF_Rules2C10_1sym = ATmakeSymbol ( "listtype(sort(\"C-Rule\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Rules2C10_1sym ) ;
lf_AUX_MuASF_Rules2C10_2sym = ATmakeSymbol ( "listtype(sort(\"NamePair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Rules2C10_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"C-Rule\"),ql(\";\"))" ) , lf_AUX_MuASF_Rules2C10_1 , lf_AUX_MuASF_Rules2C10_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"NamePair\"),ql(\",\"))" ) , lf_AUX_MuASF_Rules2C10_2 , lf_AUX_MuASF_Rules2C10_2sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[l(\"asfrules2cstats\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Rules2C10_3 , lf_AUX_MuASF_Rules2C10_3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Statement\"))" ) , lf4 , lf4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf5 , lf5sym ) ;
register_prod ( ATparse ( "listtype(sort(\"FV-Path\"),ql(\",\"))" ) , lf6 , lf6sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Cond\"),ql(\"&\"))" ) , lf7 , lf7sym ) ;
register_prod ( ATparse ( "listtype(sort(\"IntCon\"),ql(\",\"))" ) , lf8 , lf8sym ) ;
}
void resolve_AUX_MuASF_Rules2C10 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Conds2C\"),w(\"\"),[l(\"conds2cstats\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Conds2C\"),w(\"\"),[l(\"conds2cstats\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Declaration-list-opt\"),w(\"\"),ql(\"++d\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Declaration-list-opt\"),w(\"\"),ql(\"++d\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-select-stat\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-select-stat\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"remove-ofs-first-arg\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"remove-ofs-first-arg\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"select-on-ofs-first-arg\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"select-on-ofs-first-arg\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef19 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef19sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef20 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"get-first-vf-path\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)" ) ) ;
ef20sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"get-first-vf-path\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)" ) ) ;
ef21 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef21sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef22 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef22sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef23 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[l(\"list2cstats\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef23sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[l(\"list2cstats\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef24 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef24sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef25 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-c-expression\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef25sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-c-expression\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef26 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[l(\"asfrules2cstats1\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef26sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[l(\"asfrules2cstats1\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef27 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef27sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef28 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef28sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef29 = lookup_func ( ATreadFromString ( "prod(id(\"Integers-Extended\"),w(\"\"),[l(\"gtr\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef29sym = lookup_sym ( ATreadFromString ( "prod(id(\"Integers-Extended\"),w(\"\"),[l(\"gtr\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef30 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef30sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_MuASF_Rules2C10 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_MuASF_Rules2C10_3 ( ATerm arg0 , ATerm arg1 , ATerm arg2 , ATerm arg3 ) {
{
ATerm tmp [ 27 ] ;
FUNC_ENTRY ( lf_AUX_MuASF_Rules2C10_3sym , ATmakeAppl ( lf_AUX_MuASF_Rules2C10_3sym , arg0 , arg1 , arg2 , arg3 ) ) ;
if ( check_sym ( arg0 , lf_AUX_MuASF_Rules2C10_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( arg1 , lf_AUX_MuASF_Rules2C10_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( arg2 , lf_AUX_MuASF_Rules2C10_2sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
if ( ! not_empty_list ( atmp00 ) ) {
if ( not_empty_list ( atmp10 ) ) {
( tmp [ 0 ] = list_head ( atmp10 ) ) ;
{
( tmp [ 1 ] = list_tail ( atmp10 ) ) ;
{
if ( check_sym ( tmp [ 0 ] , ef9sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 3 ] = arg_1 ( tmp [ 0 ] ) ) ;
( tmp [ 4 ] = arg_2 ( tmp [ 0 ] ) ) ;
( tmp [ 5 ] = arg_3 ( tmp [ 0 ] ) ) ;
( tmp [ 6 ] = arg_4 ( tmp [ 0 ] ) ) ;
( tmp [ 7 ] = arg_5 ( tmp [ 0 ] ) ) ;
{
if ( check_sym ( tmp [ 2 ] , lf6sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 2 ] ) ) ;
{
if ( check_sym ( tmp [ 3 ] , lf7sym ) ) {
( tmp [ 9 ] = arg_0 ( tmp [ 3 ] ) ) ;
{
if ( is_single_element ( tmp [ 8 ] ) ) {
( tmp [ 10 ] = list_head ( tmp [ 8 ] ) ) ;
if ( check_sym ( tmp [ 10 ] , ef11sym ) ) {
( tmp [ 11 ] = arg_0 ( tmp [ 10 ] ) ) ;
( tmp [ 12 ] = arg_1 ( tmp [ 10 ] ) ) ;
if ( check_sym ( tmp [ 12 ] , lf8sym ) ) {
( tmp [ 13 ] = arg_0 ( tmp [ 12 ] ) ) ;
if ( not_empty_list ( tmp [ 13 ] ) ) {
if ( term_equal ( ( * ef13 ) ( tmp [ 11 ] ) , ( constant0 ? constant0 : ( constant0 = ( * ef14 ) ( ) ) ) ) ) {
( tmp [ 14 ] = ( * ef15 ) ( lf8 ( make_list ( tmp [ 13 ] ) ) ) ) ;
( tmp [ 15 ] = ( * ef10 ) ( lf_AUX_MuASF_Rules2C10_1 ( cons ( make_list ( ( * ef9 ) ( lf6 ( make_list ( ( * ef11 ) ( tmp [ 11 ] , lf8 ( make_list ( tmp [ 13 ] ) ) ) ) ) , lf7 ( make_list ( tmp [ 9 ] ) ) , tmp [ 4 ] , tmp [ 5 ] , tmp [ 6 ] , tmp [ 7 ] ) ) , make_list ( tmp [ 1 ] ) ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 15 ] , ef1sym ) ) {
( tmp [ 16 ] = arg_0 ( tmp [ 15 ] ) ) ;
( tmp [ 17 ] = arg_1 ( tmp [ 15 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef12 ) ( tmp [ 14 ] , tmp [ 16 ] ) , tmp [ 17 ] ) ) ;
}
}
}
}
}
}
{
if ( ! not_empty_list ( tmp [ 8 ] ) ) {
FUNC_EXIT ( ( * ef10 ) ( lf_AUX_MuASF_Rules2C10_1 ( cons ( make_list ( ( * ef9 ) ( lf6 ( make_list ( null ( ) ) ) , lf7 ( make_list ( tmp [ 9 ] ) ) , tmp [ 4 ] , tmp [ 5 ] , tmp [ 6 ] , tmp [ 7 ] ) ) , make_list ( tmp [ 1 ] ) ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
}
else {
( tmp [ 10 ] = list_head ( tmp [ 8 ] ) ) ;
( tmp [ 11 ] = list_tail ( tmp [ 8 ] ) ) ;
if ( not_empty_list ( tmp [ 11 ] ) ) {
if ( check_sym ( tmp [ 10 ] , ef11sym ) ) {
( tmp [ 12 ] = arg_0 ( tmp [ 10 ] ) ) ;
( tmp [ 13 ] = arg_1 ( tmp [ 10 ] ) ) ;
if ( check_sym ( tmp [ 13 ] , lf8sym ) ) {
( tmp [ 14 ] = arg_0 ( tmp [ 13 ] ) ) ;
if ( not_empty_list ( tmp [ 14 ] ) ) {
if ( term_equal ( ( * ef13 ) ( tmp [ 12 ] ) , ( constant0 ? constant0 : ( constant0 = ( * ef14 ) ( ) ) ) ) ) {
( tmp [ 15 ] = ( * ef16 ) ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( tmp [ 1 ] ) ) ) ) ;
if ( check_sym ( tmp [ 15 ] , ef17sym ) ) {
( tmp [ 16 ] = arg_0 ( tmp [ 15 ] ) ) ;
if ( check_sym ( tmp [ 16 ] , lf_AUX_MuASF_Rules2C10_1sym ) ) {
( tmp [ 17 ] = arg_0 ( tmp [ 16 ] ) ) ;
( tmp [ 18 ] = ( * ef15 ) ( lf8 ( make_list ( tmp [ 14 ] ) ) ) ) ;
( tmp [ 19 ] = ( * ef18 ) ( lf_AUX_MuASF_Rules2C10_1 ( cons ( make_list ( ( * ef9 ) ( lf6 ( make_list ( tmp [ 11 ] ) ) , lf7 ( make_list ( tmp [ 9 ] ) ) , tmp [ 4 ] , tmp [ 5 ] , tmp [ 6 ] , tmp [ 7 ] ) ) , make_list ( tmp [ 17 ] ) ) ) ) ) ;
if ( check_sym ( tmp [ 19 ] , ef19sym ) ) {
( tmp [ 20 ] = arg_0 ( tmp [ 19 ] ) ) ;
( tmp [ 21 ] = arg_1 ( tmp [ 19 ] ) ) ;
if ( check_sym ( tmp [ 20 ] , lf_AUX_MuASF_Rules2C10_1sym ) ) {
( tmp [ 22 ] = arg_0 ( tmp [ 20 ] ) ) ;
if ( check_sym ( tmp [ 21 ] , lf_AUX_MuASF_Rules2C10_1sym ) ) {
( tmp [ 23 ] = arg_0 ( tmp [ 21 ] ) ) ;
( tmp [ 24 ] = lf_AUX_MuASF_Rules2C10_3 ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( tmp [ 22 ] ) ) , lf_AUX_MuASF_Rules2C10_1 ( make_list ( tmp [ 23 ] ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 24 ] , ef1sym ) ) {
( tmp [ 25 ] = arg_0 ( tmp [ 24 ] ) ) ;
( tmp [ 26 ] = arg_1 ( tmp [ 24 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef12 ) ( tmp [ 18 ] , tmp [ 25 ] ) , tmp [ 26 ] ) ) ;
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
else {
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef3 ) ( lf4 ( make_list ( ( * ef4 ) ( ( * ef5 ) ( ( * ef6 ) ( ( * ef7 ) ( ( * ef8 ) ( lf5 ( ( ATerm ) ATmakeList ( 8 , char_table [ 99 ] , char_table [ 111 ] , char_table [ 110 ] , char_table [ 116 ] , char_table [ 105 ] , char_table [ 110 ] , char_table [ 117 ] , char_table [ 101 ] ) ) ) ) ) ) ) ) ) ) ) , arg3 ) ) ;
}
}
else {
if ( ! not_empty_list ( atmp10 ) ) {
( tmp [ 0 ] = ( * ef20 ) ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( atmp00 ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef11sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ) ;
{
if ( check_sym ( tmp [ 1 ] , ef21sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 1 ] ) ) ;
{
if ( check_sym ( tmp [ 2 ] , lf8sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 2 ] ) ) ;
{
if ( not_empty_list ( tmp [ 4 ] ) ) {
( tmp [ 5 ] = ( * ef22 ) ( tmp [ 3 ] ) ) ;
if ( term_equal ( tmp [ 5 ] , ( constant0 ? constant0 : ( constant0 = ( * ef14 ) ( ) ) ) ) ) {
( tmp [ 6 ] = ( * ef15 ) ( lf8 ( make_list ( tmp [ 4 ] ) ) ) ) ;
( tmp [ 7 ] = ( * ef23 ) ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( atmp00 ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 7 ] , ef1sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
( tmp [ 9 ] = arg_1 ( tmp [ 7 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef12 ) ( tmp [ 6 ] , tmp [ 8 ] ) , tmp [ 9 ] ) ) ;
}
}
if ( term_equal ( tmp [ 5 ] , ( constant1 ? constant1 : ( constant1 = ( * ef24 ) ( ) ) ) ) ) {
( tmp [ 6 ] = ( * ef25 ) ( ( * ef11 ) ( ( * ef21 ) ( tmp [ 3 ] ) , lf8 ( make_list ( tmp [ 4 ] ) ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) ) ) ;
( tmp [ 7 ] = ( * ef15 ) ( lf8 ( make_list ( tmp [ 4 ] ) ) ) ) ;
( tmp [ 8 ] = ( * ef26 ) ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( atmp00 ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 8 ] , ef1sym ) ) {
( tmp [ 9 ] = arg_0 ( tmp [ 8 ] ) ) ;
( tmp [ 10 ] = arg_1 ( tmp [ 8 ] ) ) ;
( tmp [ 11 ] = ( * ef27 ) ( tmp [ 6 ] , tmp [ 9 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef12 ) ( tmp [ 7 ] , tmp [ 11 ] ) , tmp [ 10 ] ) ) ;
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
( tmp [ 0 ] = ( * ef20 ) ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( atmp00 ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef11sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ) ;
{
if ( check_sym ( tmp [ 1 ] , ef21sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 1 ] ) ) ;
{
if ( check_sym ( tmp [ 2 ] , lf8sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 2 ] ) ) ;
{
if ( not_empty_list ( tmp [ 4 ] ) ) {
if ( term_equal ( ( * ef22 ) ( tmp [ 3 ] ) , ( constant0 ? constant0 : ( constant0 = ( * ef14 ) ( ) ) ) ) ) {
( tmp [ 5 ] = ( * ef15 ) ( lf8 ( make_list ( tmp [ 4 ] ) ) ) ) ;
( tmp [ 6 ] = ( * ef23 ) ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( atmp00 ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 6 ] , ef1sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
( tmp [ 8 ] = arg_1 ( tmp [ 6 ] ) ) ;
( tmp [ 9 ] = ( * ef18 ) ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 9 ] , ef19sym ) ) {
( tmp [ 10 ] = arg_0 ( tmp [ 9 ] ) ) ;
( tmp [ 11 ] = arg_1 ( tmp [ 9 ] ) ) ;
if ( check_sym ( tmp [ 10 ] , lf_AUX_MuASF_Rules2C10_1sym ) ) {
( tmp [ 12 ] = arg_0 ( tmp [ 10 ] ) ) ;
if ( check_sym ( tmp [ 11 ] , lf_AUX_MuASF_Rules2C10_1sym ) ) {
( tmp [ 13 ] = arg_0 ( tmp [ 11 ] ) ) ;
( tmp [ 14 ] = lf_AUX_MuASF_Rules2C10_3 ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( tmp [ 12 ] ) ) , lf_AUX_MuASF_Rules2C10_1 ( make_list ( tmp [ 13 ] ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 14 ] , ef1sym ) ) {
( tmp [ 15 ] = arg_0 ( tmp [ 14 ] ) ) ;
( tmp [ 16 ] = arg_1 ( tmp [ 14 ] ) ) ;
( tmp [ 17 ] = ( * ef12 ) ( tmp [ 5 ] , tmp [ 7 ] ) ) ;
( tmp [ 18 ] = ( * ef28 ) ( tmp [ 17 ] , tmp [ 15 ] ) ) ;
( tmp [ 19 ] = ( * ef29 ) ( tmp [ 8 ] , tmp [ 16 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( tmp [ 18 ] , tmp [ 19 ] ) ) ;
}
}
}
}
}
}
( tmp [ 5 ] = ( * ef25 ) ( ( * ef11 ) ( ( * ef21 ) ( tmp [ 3 ] ) , lf8 ( make_list ( tmp [ 4 ] ) ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) ) ) ;
( tmp [ 6 ] = ( * ef15 ) ( lf8 ( make_list ( tmp [ 4 ] ) ) ) ) ;
if ( term_equal ( ( * ef22 ) ( tmp [ 3 ] ) , ( constant1 ? constant1 : ( constant1 = ( * ef24 ) ( ) ) ) ) ) {
( tmp [ 7 ] = ( * ef26 ) ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( atmp00 ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 7 ] , ef1sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
( tmp [ 9 ] = arg_1 ( tmp [ 7 ] ) ) ;
( tmp [ 10 ] = ( * ef18 ) ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 10 ] , ef19sym ) ) {
( tmp [ 11 ] = arg_0 ( tmp [ 10 ] ) ) ;
( tmp [ 12 ] = arg_1 ( tmp [ 10 ] ) ) ;
if ( check_sym ( tmp [ 11 ] , lf_AUX_MuASF_Rules2C10_1sym ) ) {
( tmp [ 13 ] = arg_0 ( tmp [ 11 ] ) ) ;
if ( check_sym ( tmp [ 12 ] , lf_AUX_MuASF_Rules2C10_1sym ) ) {
( tmp [ 14 ] = arg_0 ( tmp [ 12 ] ) ) ;
( tmp [ 15 ] = lf_AUX_MuASF_Rules2C10_3 ( lf_AUX_MuASF_Rules2C10_1 ( make_list ( tmp [ 13 ] ) ) , lf_AUX_MuASF_Rules2C10_1 ( make_list ( tmp [ 14 ] ) ) , lf_AUX_MuASF_Rules2C10_2 ( make_list ( atmp20 ) ) , arg3 ) ) ;
if ( check_sym ( tmp [ 15 ] , ef1sym ) ) {
( tmp [ 16 ] = arg_0 ( tmp [ 15 ] ) ) ;
( tmp [ 17 ] = arg_1 ( tmp [ 15 ] ) ) ;
( tmp [ 18 ] = ( * ef30 ) ( tmp [ 5 ] , tmp [ 8 ] , tmp [ 16 ] ) ) ;
( tmp [ 19 ] = ( * ef29 ) ( tmp [ 9 ] , tmp [ 17 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef12 ) ( tmp [ 6 ] , tmp [ 18 ] ) , tmp [ 19 ] ) ) ;
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
FUNC_EXIT ( make_nf4 ( lf_AUX_MuASF_Rules2C10_3sym , arg0 , arg1 , arg2 , arg3 ) ) ;
}
}
ATerm lf_AUX_MuASF_Rules2C10_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Rules2C10_2sym , ATmakeAppl ( lf_AUX_MuASF_Rules2C10_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Rules2C10_2sym , arg0 ) ) ;
}
ATerm lf_AUX_MuASF_Rules2C10_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Rules2C10_1sym , ATmakeAppl ( lf_AUX_MuASF_Rules2C10_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Rules2C10_1sym , arg0 ) ) ;
}
ATerm lf8 ( ATerm arg0 ) {
CONS_ENTRY ( lf8sym , ATmakeAppl ( lf8sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf8sym , arg0 ) ) ;
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

