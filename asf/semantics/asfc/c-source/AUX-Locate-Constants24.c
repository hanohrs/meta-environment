#include  "support.h"
static Symbol lf_AUX_Locate_Constants24_2sym ;
static ATerm lf_AUX_Locate_Constants24_2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf_AUX_Locate_Constants24_1sym ;
static ATerm lf_AUX_Locate_Constants24_1 ( ATerm arg1 ) ;
void register_AUX_Locate_Constants24 ( ) {
lf_AUX_Locate_Constants24_2sym = ATmakeSymbol ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"flatten-arguments\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Locate_Constants24_2sym ) ;
lf_AUX_Locate_Constants24_1sym = ATmakeSymbol ( "listtype(sort(\"Expression\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Locate_Constants24_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Expression\"),ql(\",\"))" ) , lf_AUX_Locate_Constants24_1 , lf_AUX_Locate_Constants24_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"flatten-arguments\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) , lf_AUX_Locate_Constants24_2 , lf_AUX_Locate_Constants24_2sym ) ;
}
void resolve_AUX_Locate_Constants24 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"flatten-list-of-chars\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"flatten-list-of-chars\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Locate_Constants24 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Locate_Constants24_2 ( ATerm arg0 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Locate_Constants24_2sym , ATmakeAppl ( lf_AUX_Locate_Constants24_2sym , arg0 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Locate_Constants24_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( not_empty_list ( atmp00 ) ) {
tmp [ 0 ] = list_head ( atmp00 ) ;
tmp [ 1 ] = list_tail ( atmp00 ) ;
tmp [ 2 ] = ( * ef2 ) ( tmp [ 0 ] ) ;
tmp [ 3 ] = lf_AUX_Locate_Constants24_2 ( lf_AUX_Locate_Constants24_1 ( make_list ( tmp [ 1 ] ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef1sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf_AUX_Locate_Constants24_1sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( lf_AUX_Locate_Constants24_1 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) ;
}
}
}
else {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf_AUX_Locate_Constants24_1 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Locate_Constants24_2sym , arg0 ) ) ;
}
}
ATerm lf_AUX_Locate_Constants24_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Locate_Constants24_1sym , ATmakeAppl ( lf_AUX_Locate_Constants24_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Locate_Constants24_1sym , arg0 ) ) ;
}

