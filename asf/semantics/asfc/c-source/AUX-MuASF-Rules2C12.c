/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_MuASF_Rules2C12_3sym ;
static ATerm lf_AUX_MuASF_Rules2C12_3 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol lf_AUX_MuASF_Rules2C12_2sym ;
static ATerm lf_AUX_MuASF_Rules2C12_2 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol lf_AUX_MuASF_Rules2C12_1sym ;
static ATerm lf_AUX_MuASF_Rules2C12_1 ( ATerm arg1 ) ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol lf5sym ;
static ATerm lf5 ( ATerm arg1 ) ;
void register_AUX_MuASF_Rules2C12 ( ) {
lf_AUX_MuASF_Rules2C12_3sym = ATmakeSymbol ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"asfrules2cstats\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Rules2C12_3sym ) ;
lf_AUX_MuASF_Rules2C12_2sym = ATmakeSymbol ( "listtype(sort(\"NamePair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Rules2C12_2sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf_AUX_MuASF_Rules2C12_1sym = ATmakeSymbol ( "listtype(sort(\"Rule\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Rules2C12_1sym ) ;
lf5sym = ATmakeSymbol ( "listtype(sort(\"C-Rule\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf5sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Rule\"),ql(\";\"))" ) , lf_AUX_MuASF_Rules2C12_1 , lf_AUX_MuASF_Rules2C12_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"NamePair\"),ql(\",\"))" ) , lf_AUX_MuASF_Rules2C12_2 , lf_AUX_MuASF_Rules2C12_2sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"asfrules2cstats\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Rules2C12_3 , lf_AUX_MuASF_Rules2C12_3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf4 , lf4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"C-Rule\"),ql(\";\"))" ) , lf5 , lf5sym ) ;
}
void resolve_AUX_MuASF_Rules2C12 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"asfrules2cstats\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"MakeSelectStat\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"asfrules2cstats\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"MakeSelectStat\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"make-select-stat\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"MakeSelectStat\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[ql(\"make-select-stat\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"MakeSelectStat\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"make-c-rules\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"make-c-rules\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"select-on-ofs-first-arg\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"select-on-ofs-first-arg\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_MuASF_Rules2C12 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_MuASF_Rules2C12_3 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 8 ] ;
FUNC_ENTRY ( lf_AUX_MuASF_Rules2C12_3sym , ATmakeAppl ( lf_AUX_MuASF_Rules2C12_3sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , lf_AUX_MuASF_Rules2C12_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( arg1 , lf_AUX_MuASF_Rules2C12_2sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = ( * ef7 ) ( lf_AUX_MuASF_Rules2C12_1 ( make_list ( atmp00 ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef8sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , lf5sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
( tmp [ 3 ] = ( * ef9 ) ( lf5 ( make_list ( tmp [ 2 ] ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef10sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 5 ] = arg_1 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf5sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( check_sym ( tmp [ 5 ] , lf5sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 5 ] ) ) ;
FUNC_EXIT ( ( * ef5 ) ( lf5 ( make_list ( tmp [ 6 ] ) ) , lf5 ( make_list ( tmp [ 7 ] ) ) , lf_AUX_MuASF_Rules2C12_2 ( make_list ( atmp10 ) ) , ( * ef3 ) ( ( * ef4 ) ( lf4 ( make_list ( make_char ( 48 ) ) ) ) ) , ( * ef6 ) ( ) ) ) ;
}
}
}
}
}
}
else {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ( * ef2 ) ( ) , ( * ef3 ) ( ( * ef4 ) ( lf4 ( make_list ( make_char ( 48 ) ) ) ) ) ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_MuASF_Rules2C12_3sym , arg0 , arg1 ) ) ;
}
}
ATerm lf5 ( ATerm arg0 ) {
CONS_ENTRY ( lf5sym , ATmakeAppl ( lf5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf5sym , arg0 ) ) ;
}
ATerm lf_AUX_MuASF_Rules2C12_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Rules2C12_1sym , ATmakeAppl ( lf_AUX_MuASF_Rules2C12_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Rules2C12_1sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}
ATerm lf_AUX_MuASF_Rules2C12_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Rules2C12_2sym , ATmakeAppl ( lf_AUX_MuASF_Rules2C12_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Rules2C12_2sym , arg0 ) ) ;
}

