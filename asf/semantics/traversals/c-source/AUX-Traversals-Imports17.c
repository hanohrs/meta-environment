/* This C code is generated by the AsfSdfCompiler version 1.0 */

#include  "asc-support.h"
static Symbol lf_AUX_Traversals_Imports17_1sym ;
static ATerm lf_AUX_Traversals_Imports17_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Traversals_Imports17 ( ) {
lf_AUX_Traversals_Imports17_1sym = ATmakeSymbol ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"add\"),w(\"\"),sort(\"Import\"),w(\"\"),ql(\"to\"),w(\"\"),sort(\"ImportSet\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImportSet\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Traversals_Imports17_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Import\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"add\"),w(\"\"),sort(\"Import\"),w(\"\"),ql(\"to\"),w(\"\"),sort(\"ImportSet\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImportSet\"),w(\"\"),no-attrs)" ) , lf_AUX_Traversals_Imports17_1 , lf_AUX_Traversals_Imports17_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Import\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Traversals_Imports17 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"[\"),w(\"\"),iter(sort(\"Import\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImportSet\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"[\"),w(\"\"),iter(sort(\"Import\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImportSet\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Traversals_Imports17 ( ) {
}
ATerm lf_AUX_Traversals_Imports17_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_Traversals_Imports17_1sym , ATmakeAppl ( lf_AUX_Traversals_Imports17_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
( tmp [ 0 ] = arg_0 ( atmp10 ) ) ;
{
ATerm atmp10010 ;
ATerm atmp1000 [ 2 ] ;
( atmp1000 [ 0 ] = tmp [ 0 ] ) ;
( atmp1000 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
( atmp10010 = list_head ( tmp [ 0 ] ) ) ;
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
if ( term_equal ( arg0 , atmp10010 ) ) {
FUNC_EXIT ( ( * ef1 ) ( lf2 ( cons ( slice ( atmp1000 [ 0 ] , atmp1000 [ 1 ] ) , cons ( make_list ( arg0 ) , tmp [ 0 ] ) ) ) ) ) ;
}
( atmp1000 [ 1 ] = list_tail ( atmp1000 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp1000 [ 1 ] ) ;
}
}
}
}
}
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
FUNC_EXIT ( ( * ef1 ) ( lf2 ( cons ( make_list ( arg0 ) , make_list ( atmp100 ) ) ) ) ) ;
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Traversals_Imports17_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

