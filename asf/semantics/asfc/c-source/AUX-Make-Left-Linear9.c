#include  "asc-support.h"
static Symbol lf_AUX_Make_Left_Linear9_2sym ;
static ATerm lf_AUX_Make_Left_Linear9_2 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf_AUX_Make_Left_Linear9_1sym ;
static ATerm lf_AUX_Make_Left_Linear9_1 ( ATerm arg1 ) ;
void register_AUX_Make_Left_Linear9 ( ) {
lf_AUX_Make_Left_Linear9_2sym = ATmakeSymbol ( "prod(id(\"Make-Left-Linear\"),w(\"\"),[l(\"make-l-l-conds\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"VarEnv\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)"
 , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Make_Left_Linear9_2sym ) ;
lf_AUX_Make_Left_Linear9_1sym = ATmakeSymbol ( "listtype(sort(\"Cond\"),ql(\"&\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Make_Left_Linear9_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Cond\"),ql(\"&\"))" ) , lf_AUX_Make_Left_Linear9_1 , lf_AUX_Make_Left_Linear9_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Make-Left-Linear\"),w(\"\"),[l(\"make-l-l-conds\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"VarEnv\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) , lf_AUX_Make_Left_Linear9_2 , lf_AUX_Make_Left_Linear9_2sym ) ;
}
void resolve_AUX_Make_Left_Linear9 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Make-Left-Linear\"),w(\"\"),[l(\"make-l-l-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Cond\"),w(\"\"),l(\",\"),w(\"\"),sort(\"VarEnv\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Make-Left-Linear\"),w(\"\"),[l(\"make-l-l-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Cond\"),w(\"\"),l(\",\"),w(\"\"),sort(\"VarEnv\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Make_Left_Linear9 ( ) {
}
ATerm lf_AUX_Make_Left_Linear9_2 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
{
ATerm tmp [ 10 ] ;
FUNC_ENTRY ( lf_AUX_Make_Left_Linear9_2sym , ATmakeAppl ( lf_AUX_Make_Left_Linear9_2sym , arg0 , arg1 , arg2 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Make_Left_Linear9_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
FUNC_EXIT ( ( * ef1 ) ( tmp [ 0 ] , arg1 , arg2 ) ) ;
}
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
( tmp [ 2 ] = ( * ef1 ) ( tmp [ 0 ] , arg1 , arg2 ) ) ;
if ( check_sym ( tmp [ 2 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
( tmp [ 4 ] = arg_1 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf_AUX_Make_Left_Linear9_1sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 6 ] = lf_AUX_Make_Left_Linear9_2 ( lf_AUX_Make_Left_Linear9_1 ( make_list ( tmp [ 1 ] ) ) , arg1 , tmp [ 4 ] ) ) ;
if ( check_sym ( tmp [ 6 ] , ef2sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
( tmp [ 8 ] = arg_1 ( tmp [ 6 ] ) ) ;
if ( check_sym ( tmp [ 7 ] , lf_AUX_Make_Left_Linear9_1sym ) ) {
( tmp [ 9 ] = arg_0 ( tmp [ 7 ] ) ) ;
FUNC_EXIT ( ( * ef2 ) ( lf_AUX_Make_Left_Linear9_1 ( cons ( make_list ( tmp [ 5 ] ) , make_list ( tmp [ 9 ] ) ) ) , tmp [ 8 ] ) ) ;
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf3 ( lf_AUX_Make_Left_Linear9_2sym , arg0 , arg1 , arg2 ) ) ;
}
}
ATerm lf_AUX_Make_Left_Linear9_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Make_Left_Linear9_1sym , ATmakeAppl ( lf_AUX_Make_Left_Linear9_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Make_Left_Linear9_1sym , arg0 ) ) ;
}

