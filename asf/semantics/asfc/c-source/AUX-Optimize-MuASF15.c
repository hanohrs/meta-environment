/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Optimize_MuASF15_1_recursivesym ;
static ATerm lf_AUX_Optimize_MuASF15_1_recursive ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_Optimize_MuASF15_1sym ;
static ATerm lf_AUX_Optimize_MuASF15_1 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Optimize_MuASF15 ( ) {
lf_AUX_Optimize_MuASF15_1_recursivesym = ATmakeSymbol ( "prod(id(\"Optimize-MuASF\"),w(\"\"),[ql(\"remove-emb-conds\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"CondList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunIdHasEmbeddingAt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"RemoveOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CondList\"),w(\"\"),no-attrs)"
 , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Optimize_MuASF15_1_recursivesym ) ;
lf_AUX_Optimize_MuASF15_1sym = ATmakeSymbol ( "prod(id(\"Optimize-MuASF\"),w(\"\"),[ql(\"remove-emb-conds\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"CondList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunIdHasEmbeddingAt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"RemoveOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CondList\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Optimize_MuASF15_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Cond\"),ql(\"&\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Optimize-MuASF\"),w(\"\"),[ql(\"remove-emb-conds\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"CondList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunIdHasEmbeddingAt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"RemoveOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CondList\"),w(\"\"),no-attrs)" ) , lf_AUX_Optimize_MuASF15_1 , lf_AUX_Optimize_MuASF15_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Optimize-MuASF\"),w(\"\"),[ql(\"remove-emb-conds\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"CondList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunIdHasEmbeddingAt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"RemoveOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CondList\"),w(\"\"),no-attrs)" ) , lf_AUX_Optimize_MuASF15_1_recursive , lf_AUX_Optimize_MuASF15_1_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"Cond\"),ql(\"&\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Optimize_MuASF15 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"CondList\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"CondList\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Optimize-MuASF\"),w(\"\"),[ql(\"remove-emb-cond\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunIdHasEmbeddingAt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"RemoveOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Optimize-MuASF\"),w(\"\"),[ql(\"remove-emb-cond\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"FunIdHasEmbeddingAt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"RemoveOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Optimize_MuASF15 ( ) {
}
ATerm lf_AUX_Optimize_MuASF15_1 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Optimize_MuASF15_1sym , ATmakeAppl ( lf_AUX_Optimize_MuASF15_1sym , arg0 , arg1 , arg2 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( is_single_element ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef2 ) ( tmp [ 0 ] , arg1 , arg2 ) ) ) ) ) ;
}
if ( not_empty_list ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
( tmp [ 1 ] = list_tail ( atmp000 ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
( tmp [ 2 ] = ( * ef2 ) ( tmp [ 0 ] , arg1 , arg2 ) ) ;
( tmp [ 3 ] = lf_AUX_Optimize_MuASF15_1_recursive ( make_list ( tmp [ 1 ] ) , arg1 , arg2 ) ) ;
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) ;
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf3 ( lf_AUX_Optimize_MuASF15_1sym , arg0 , arg1 , arg2 ) ) ;
}
}
ATerm lf_AUX_Optimize_MuASF15_1_recursive ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Optimize_MuASF15_1_recursivesym , ATmakeAppl ( lf_AUX_Optimize_MuASF15_1_recursivesym , arg0 , arg1 , arg2 ) ) ;
{
ATerm atmp00 = arg0 ;
{
ATerm atmp000 = atmp00 ;
if ( is_single_element ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef2 ) ( tmp [ 0 ] , arg1 , arg2 ) ) ) ) ) ;
}
if ( not_empty_list ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
( tmp [ 1 ] = list_tail ( atmp000 ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
( tmp [ 2 ] = ( * ef2 ) ( tmp [ 0 ] , arg1 , arg2 ) ) ;
( tmp [ 3 ] = lf_AUX_Optimize_MuASF15_1_recursive ( make_list ( tmp [ 1 ] ) , arg1 , arg2 ) ) ;
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf3 ( lf_AUX_Optimize_MuASF15_1_recursivesym , ( * ef1 ) ( lf2 ( arg0 ) ) , arg1 , arg2 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

