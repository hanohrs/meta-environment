#include  "asc-support.h"
static Symbol lf_AUX_Transform_Constructors2_3sym ;
static ATerm lf_AUX_Transform_Constructors2_3 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf_AUX_Transform_Constructors2_2sym ;
static ATerm lf_AUX_Transform_Constructors2_2 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf_AUX_Transform_Constructors2_1sym ;
static ATerm lf_AUX_Transform_Constructors2_1 ( ATerm arg1 ) ;
void register_AUX_Transform_Constructors2 ( ) {
lf_AUX_Transform_Constructors2_3sym = ATmakeSymbol ( "prod(id(\"Transform-Constructors\"),w(\"\"),[l(\"transform-constructor-terms-in-rules\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"RuleList\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Transform_Constructors2_3sym ) ;
lf_AUX_Transform_Constructors2_2sym = ATmakeSymbol ( "listtype(sort(\"NamePair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Transform_Constructors2_2sym ) ;
lf_AUX_Transform_Constructors2_1sym = ATmakeSymbol ( "listtype(sort(\"Rule\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Transform_Constructors2_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Rule\"),ql(\";\"))" ) , lf_AUX_Transform_Constructors2_1 , lf_AUX_Transform_Constructors2_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"NamePair\"),ql(\",\"))" ) , lf_AUX_Transform_Constructors2_2 , lf_AUX_Transform_Constructors2_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Transform-Constructors\"),w(\"\"),[l(\"transform-constructor-terms-in-rules\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"RuleList\"),w(\"\"),no-attrs)" ) , lf_AUX_Transform_Constructors2_3 , lf_AUX_Transform_Constructors2_3sym ) ;
}
void resolve_AUX_Transform_Constructors2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Transform-Constructors\"),w(\"\"),[l(\"move-cons-terms-in-rule\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Rule\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Rule\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Transform-Constructors\"),w(\"\"),[l(\"move-cons-terms-in-rule\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Rule\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Rule\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Transform_Constructors2 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Transform_Constructors2_3 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Transform_Constructors2_3sym , ATmakeAppl ( lf_AUX_Transform_Constructors2_3sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Transform_Constructors2_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( arg1 , lf_AUX_Transform_Constructors2_2sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
( tmp [ 2 ] = ( * ef2 ) ( tmp [ 0 ] , lf_AUX_Transform_Constructors2_2 ( make_list ( atmp10 ) ) ) ) ;
( tmp [ 3 ] = lf_AUX_Transform_Constructors2_3 ( lf_AUX_Transform_Constructors2_1 ( make_list ( tmp [ 1 ] ) ) , lf_AUX_Transform_Constructors2_2 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef1sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf_AUX_Transform_Constructors2_1sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf_AUX_Transform_Constructors2_1 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) ;
}
}
}
else {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf_AUX_Transform_Constructors2_1 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Transform_Constructors2_3sym , arg0 , arg1 ) ) ;
}
}
ATerm lf_AUX_Transform_Constructors2_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Transform_Constructors2_1sym , ATmakeAppl ( lf_AUX_Transform_Constructors2_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Transform_Constructors2_1sym , arg0 ) ) ;
}
ATerm lf_AUX_Transform_Constructors2_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Transform_Constructors2_2sym , ATmakeAppl ( lf_AUX_Transform_Constructors2_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Transform_Constructors2_2sym , arg0 ) ) ;
}

