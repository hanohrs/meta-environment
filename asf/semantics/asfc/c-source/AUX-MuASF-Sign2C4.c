#include  "asc-support.h"
static Symbol lf_AUX_MuASF_Sign2C4_3sym ;
static ATerm lf_AUX_MuASF_Sign2C4_3 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf_AUX_MuASF_Sign2C4_2sym ;
static ATerm lf_AUX_MuASF_Sign2C4_2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf_AUX_MuASF_Sign2C4_1sym ;
static ATerm lf_AUX_MuASF_Sign2C4_1 ( ATerm arg1 ) ;
void register_AUX_MuASF_Sign2C4 ( ) {
lf_AUX_MuASF_Sign2C4_3sym = ATmakeSymbol ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"funcdefs2cfuncs\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FTS-tuple\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Sign2C4_3sym ) ;
lf_AUX_MuASF_Sign2C4_2sym = ATmakeSymbol ( "listtype(sort(\"NamePair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Sign2C4_2sym ) ;
lf_AUX_MuASF_Sign2C4_1sym = ATmakeSymbol ( "listtype(sort(\"FuncDef\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Sign2C4_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"FuncDef\"),ql(\";\"))" ) , lf_AUX_MuASF_Sign2C4_1 , lf_AUX_MuASF_Sign2C4_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"NamePair\"),ql(\",\"))" ) , lf_AUX_MuASF_Sign2C4_2 , lf_AUX_MuASF_Sign2C4_2sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"funcdefs2cfuncs\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FTS-tuple\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Sign2C4_3 , lf_AUX_MuASF_Sign2C4_3sym ) ;
}
void resolve_AUX_MuASF_Sign2C4 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"funcdef2cfuncs\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FTS-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Sign2C\"),w(\"\"),[l(\"funcdef2cfuncs\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FTS-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FTS-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FTS-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Declaration-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Declaration-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Declaration-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Declaration-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
}
void init_AUX_MuASF_Sign2C4 ( ) {
}
ATerm lf_AUX_MuASF_Sign2C4_3 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 12 ] ;
FUNC_ENTRY ( lf_AUX_MuASF_Sign2C4_3sym , ATmakeAppl ( lf_AUX_MuASF_Sign2C4_3sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , lf_AUX_MuASF_Sign2C4_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( arg1 , lf_AUX_MuASF_Sign2C4_2sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
FUNC_EXIT ( ( * ef1 ) ( tmp [ 0 ] , lf_AUX_MuASF_Sign2C4_2 ( make_list ( atmp10 ) ) ) ) ;
}
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
( tmp [ 2 ] = ( * ef1 ) ( tmp [ 0 ] , lf_AUX_MuASF_Sign2C4_2 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 2 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
( tmp [ 4 ] = arg_1 ( tmp [ 2 ] ) ) ;
( tmp [ 5 ] = arg_2 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf_AUX_MuASF_Sign2C4_1sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 7 ] = lf_AUX_MuASF_Sign2C4_3 ( lf_AUX_MuASF_Sign2C4_1 ( make_list ( tmp [ 1 ] ) ) , lf_AUX_MuASF_Sign2C4_2 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 7 ] , ef2sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
( tmp [ 9 ] = arg_1 ( tmp [ 7 ] ) ) ;
( tmp [ 10 ] = arg_2 ( tmp [ 7 ] ) ) ;
if ( check_sym ( tmp [ 8 ] , lf_AUX_MuASF_Sign2C4_1sym ) ) {
( tmp [ 11 ] = arg_0 ( tmp [ 8 ] ) ) ;
FUNC_EXIT ( ( * ef2 ) ( lf_AUX_MuASF_Sign2C4_1 ( cons ( make_list ( tmp [ 6 ] ) , make_list ( tmp [ 11 ] ) ) ) , ( * ef3 ) ( tmp [ 4 ] , tmp [ 9 ] ) , ( * ef4 ) ( tmp [ 5 ] , tmp [ 10 ] ) ) ) ;
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
FUNC_EXIT ( make_nf2 ( lf_AUX_MuASF_Sign2C4_3sym , arg0 , arg1 ) ) ;
}
}
ATerm lf_AUX_MuASF_Sign2C4_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Sign2C4_1sym , ATmakeAppl ( lf_AUX_MuASF_Sign2C4_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Sign2C4_1sym , arg0 ) ) ;
}
ATerm lf_AUX_MuASF_Sign2C4_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Sign2C4_2sym , ATmakeAppl ( lf_AUX_MuASF_Sign2C4_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Sign2C4_2sym , arg0 ) ) ;
}

