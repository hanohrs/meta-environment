/* This C code is generated by the AsfSdfCompiler version 1.0 */

#include  "asc-support.h"
static Symbol lf_AUX_Traversals_Closure5_1sym ;
static ATerm lf_AUX_Traversals_Closure5_1 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Traversals_Closure5 ( ) {
lf_AUX_Traversals_Closure5_1sym = ATmakeSymbol ( "prod(id(\"Traversals-Closure\"),w(\"\"),[ql(\"sorts\"),w(\"\"),ql(\"in\"),w(\"\"),sort(\"Symbols\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Traversals_Closure5_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Traversals-Closure\"),w(\"\"),[ql(\"sorts\"),w(\"\"),ql(\"in\"),w(\"\"),sort(\"Symbols\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) , lf_AUX_Traversals_Closure5_1 , lf_AUX_Traversals_Closure5_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Traversals_Closure5 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[sort(\"Sort\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[sort(\"Sort\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Traversals-Closure\"),w(\"\"),[ql(\"add\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"to\"),w(\"\"),sort(\"SymbolSet\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Traversals-Closure\"),w(\"\"),[ql(\"add\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"to\"),w(\"\"),sort(\"SymbolSet\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"*\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"*\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Traversals-Closure\"),w(\"\"),[ql(\"add\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),ql(\"to\"),w(\"\"),sort(\"SymbolSet\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Traversals-Closure\"),w(\"\"),[ql(\"add\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),ql(\"to\"),w(\"\"),sort(\"SymbolSet\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Traversals-Closure\"),w(\"\"),[ql(\"[\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Traversals-Closure\"),w(\"\"),[ql(\"[\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"+\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"+\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"}\"),w(\"\"),ql(\"*\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"}\"),w(\"\"),ql(\"*\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"}\"),w(\"\"),ql(\"+\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"}\"),w(\"\"),ql(\"+\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Traversals_Closure5 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Traversals_Closure5_1 ( ATerm arg0 ) {
{
ATerm tmp [ 4 ] ;
FUNC_ENTRY ( lf_AUX_Traversals_Closure5_1sym , ATmakeAppl ( lf_AUX_Traversals_Closure5_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
( tmp [ 0 ] = arg_0 ( atmp00 ) ) ;
{
ATerm atmp00010 ;
ATerm atmp0000 [ 2 ] ;
( atmp0000 [ 0 ] = tmp [ 0 ] ) ;
( atmp0000 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
( atmp00010 = list_head ( tmp [ 0 ] ) ) ;
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
if ( check_sym ( atmp00010 , ef4sym ) ) {
( tmp [ 1 ] = arg_0 ( atmp00010 ) ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
FUNC_EXIT ( ( * ef5 ) ( ( * ef6 ) ( lf2 ( cons ( make_list ( ( * ef2 ) ( tmp [ 2 ] ) ) , make_list ( ( * ef4 ) ( ( * ef2 ) ( tmp [ 2 ] ) ) ) ) ) ) , lf_AUX_Traversals_Closure5_1 ( ( * ef1 ) ( lf2 ( cons ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) , tmp [ 0 ] ) ) ) ) ) ) ;
}
}
if ( check_sym ( atmp00010 , ef7sym ) ) {
( tmp [ 1 ] = arg_0 ( atmp00010 ) ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
FUNC_EXIT ( ( * ef5 ) ( ( * ef6 ) ( lf2 ( cons ( make_list ( ( * ef2 ) ( tmp [ 2 ] ) ) , make_list ( ( * ef7 ) ( ( * ef2 ) ( tmp [ 2 ] ) ) ) ) ) ) , lf_AUX_Traversals_Closure5_1 ( ( * ef1 ) ( lf2 ( cons ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) , tmp [ 0 ] ) ) ) ) ) ) ;
}
}
if ( check_sym ( atmp00010 , ef8sym ) ) {
( tmp [ 1 ] = arg_0 ( atmp00010 ) ) ;
( tmp [ 2 ] = arg_1 ( atmp00010 ) ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 1 ] ) ) ;
FUNC_EXIT ( ( * ef5 ) ( ( * ef6 ) ( lf2 ( cons ( make_list ( ( * ef2 ) ( tmp [ 3 ] ) ) , make_list ( ( * ef8 ) ( ( * ef2 ) ( tmp [ 3 ] ) , tmp [ 2 ] ) ) ) ) ) , lf_AUX_Traversals_Closure5_1 ( ( * ef1 ) ( lf2 ( cons ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) , tmp [ 0 ] ) ) ) ) ) ) ;
}
}
if ( check_sym ( atmp00010 , ef9sym ) ) {
( tmp [ 1 ] = arg_0 ( atmp00010 ) ) ;
( tmp [ 2 ] = arg_1 ( atmp00010 ) ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 1 ] ) ) ;
FUNC_EXIT ( ( * ef5 ) ( ( * ef6 ) ( lf2 ( cons ( make_list ( ( * ef2 ) ( tmp [ 3 ] ) ) , make_list ( ( * ef9 ) ( ( * ef2 ) ( tmp [ 3 ] ) , tmp [ 2 ] ) ) ) ) ) , lf_AUX_Traversals_Closure5_1 ( ( * ef1 ) ( lf2 ( cons ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) , tmp [ 0 ] ) ) ) ) ) ) ;
}
}
if ( check_sym ( atmp00010 , ef2sym ) ) {
( tmp [ 1 ] = arg_0 ( atmp00010 ) ) ;
FUNC_EXIT ( ( * ef3 ) ( ( * ef2 ) ( tmp [ 1 ] ) , lf_AUX_Traversals_Closure5_1 ( ( * ef1 ) ( lf2 ( tmp [ 0 ] ) ) ) ) ) ;
}
( atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp0000 [ 1 ] ) ;
}
}
( tmp [ 0 ] = arg_0 ( atmp00 ) ) ;
}
}
}
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
FUNC_EXIT_CONST ( constant0 , ( * ef6 ) ( lf2 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Traversals_Closure5_1sym , arg0 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

