#include  "asc-support.h"
static Symbol lf_AUX_Rules2C_Aux26_2sym ;
static ATerm lf_AUX_Rules2C_Aux26_2 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf_AUX_Rules2C_Aux26_1sym ;
static ATerm lf_AUX_Rules2C_Aux26_1 ( ATerm arg1 ) ;
void register_AUX_Rules2C_Aux26 ( ) {
lf_AUX_Rules2C_Aux26_2sym = ATmakeSymbol ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"add-env\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Rules2C_Aux26_2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"FV-Path\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"Cond\"),ql(\"&\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf_AUX_Rules2C_Aux26_1sym = ATmakeSymbol ( "listtype(sort(\"C-Rule\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Rules2C_Aux26_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"C-Rule\"),ql(\";\"))" ) , lf_AUX_Rules2C_Aux26_1 , lf_AUX_Rules2C_Aux26_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"add-env\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) , lf_AUX_Rules2C_Aux26_2 , lf_AUX_Rules2C_Aux26_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"FV-Path\"),ql(\",\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Cond\"),ql(\"&\"))" ) , lf4 , lf4sym ) ;
}
void resolve_AUX_Rules2C_Aux26 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"C-env\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"C-env\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-env\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"C-env\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"C-env\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-env\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Rules2C_Aux26 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Rules2C_Aux26_2 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 13 ] ;
FUNC_ENTRY ( lf_AUX_Rules2C_Aux26_2sym , ATmakeAppl ( lf_AUX_Rules2C_Aux26_2sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Rules2C_Aux26_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 3 ] = arg_1 ( tmp [ 0 ] ) ) ;
( tmp [ 4 ] = arg_2 ( tmp [ 0 ] ) ) ;
( tmp [ 5 ] = arg_3 ( tmp [ 0 ] ) ) ;
( tmp [ 6 ] = arg_4 ( tmp [ 0 ] ) ) ;
( tmp [ 7 ] = arg_5 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , lf3sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf4sym ) ) {
( tmp [ 9 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 10 ] = lf_AUX_Rules2C_Aux26_2 ( lf_AUX_Rules2C_Aux26_1 ( make_list ( tmp [ 1 ] ) ) , arg1 ) ) ;
if ( check_sym ( tmp [ 10 ] , ef1sym ) ) {
( tmp [ 11 ] = arg_0 ( tmp [ 10 ] ) ) ;
if ( check_sym ( tmp [ 11 ] , lf_AUX_Rules2C_Aux26_1sym ) ) {
( tmp [ 12 ] = arg_0 ( tmp [ 11 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf_AUX_Rules2C_Aux26_1 ( cons ( make_list ( ( * ef2 ) ( lf3 ( make_list ( tmp [ 8 ] ) ) , lf4 ( make_list ( tmp [ 9 ] ) ) , tmp [ 4 ] , ( * ef3 ) ( tmp [ 5 ] , arg1 ) , ( * ef3 ) ( tmp [ 6 ] , arg1 ) , tmp [ 7 ] ) ) , make_list ( tmp [ 12 ] ) ) ) ) ) ;
}
}
}
}
}
}
else {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf_AUX_Rules2C_Aux26_1 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Rules2C_Aux26_2sym , arg0 , arg1 ) ) ;
}
}
ATerm lf_AUX_Rules2C_Aux26_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Rules2C_Aux26_1sym , ATmakeAppl ( lf_AUX_Rules2C_Aux26_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Rules2C_Aux26_1sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}

