#include  "asc-support.h"
static Symbol lf_AUX_Normalize_Conds13_1sym ;
static ATerm lf_AUX_Normalize_Conds13_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
void register_AUX_Normalize_Conds13 ( ) {
lf_AUX_Normalize_Conds13_1sym = ATmakeSymbol ( "prod(id(\"Normalize-Conds\"),w(\"\"),[l(\"normalize-list-in-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TC-tuple\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Normalize_Conds13_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Term\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Cond\"),ql(\"&\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "prod(id(\"Normalize-Conds\"),w(\"\"),[l(\"normalize-list-in-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TC-tuple\"),w(\"\"),no-attrs)" ) , lf_AUX_Normalize_Conds13_1 , lf_AUX_Normalize_Conds13_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Term\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Cond\"),ql(\"&\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Normalize_Conds13 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Normalize-Conds\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TC-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Normalize-Conds\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TC-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Normalize-Conds\"),w(\"\"),[l(\"normalize-list-in-terms\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TC-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Normalize-Conds\"),w(\"\"),[l(\"normalize-list-in-terms\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TC-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Normalize-Conds\"),w(\"\"),[l(\"normalize-list-args\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TC-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Normalize-Conds\"),w(\"\"),[l(\"normalize-list-args\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TC-tuple\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_Normalize_Conds13 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_Normalize_Conds13_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 7 ] ;
FUNC_ENTRY ( lf_AUX_Normalize_Conds13_1sym , ATmakeAppl ( lf_AUX_Normalize_Conds13_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , lf2sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
if ( not_empty_list ( atmp010 ) ) {
( tmp [ 0 ] = ( * ef3 ) ( atmp00 ) ) ;
if ( term_equal ( tmp [ 0 ] , ( constant0 ? constant0 : ( constant0 = ( * ef4 ) ( ) ) ) ) ) {
( tmp [ 1 ] = ( * ef5 ) ( lf2 ( make_list ( atmp010 ) ) , arg1 ) ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
( tmp [ 3 ] = arg_1 ( tmp [ 1 ] ) ) ;
( tmp [ 4 ] = arg_2 ( tmp [ 1 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , lf2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
FUNC_EXIT ( ( * ef2 ) ( lf2 ( make_list ( ( * ef1 ) ( atmp00 , lf2 ( make_list ( tmp [ 5 ] ) ) ) ) ) , lf3 ( make_list ( tmp [ 6 ] ) ) , tmp [ 4 ] ) ) ;
}
}
}
}
}
if ( term_equal ( tmp [ 0 ] , ( constant1 ? constant1 : ( constant1 = ( * ef6 ) ( ) ) ) ) ) {
( tmp [ 1 ] = ( * ef7 ) ( lf2 ( make_list ( atmp010 ) ) , arg1 ) ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
( tmp [ 3 ] = arg_1 ( tmp [ 1 ] ) ) ;
( tmp [ 4 ] = arg_2 ( tmp [ 1 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , lf2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
FUNC_EXIT ( ( * ef2 ) ( lf2 ( make_list ( ( * ef1 ) ( atmp00 , lf2 ( make_list ( tmp [ 5 ] ) ) ) ) ) , lf3 ( make_list ( tmp [ 6 ] ) ) , tmp [ 4 ] ) ) ;
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
FUNC_EXIT ( ( * ef2 ) ( lf2 ( make_list ( arg0 ) ) , lf3 ( make_list ( null ( ) ) ) , arg1 ) ) ;
FUNC_EXIT ( make_nf2 ( lf_AUX_Normalize_Conds13_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

