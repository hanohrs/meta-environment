/* This C code is generated by the AsfSdfCompiler version 1.0 */

#include  "asc-support.h"
static Symbol lf_AUX_Traversals_Imports2_1sym ;
static ATerm lf_AUX_Traversals_Imports2_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Traversals_Imports2 ( ) {
lf_AUX_Traversals_Imports2_1sym = ATmakeSymbol ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"find_imports\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Module\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Traversals_Imports2_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Import\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"find_imports\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Module\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) , lf_AUX_Traversals_Imports2_1 , lf_AUX_Traversals_Imports2_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Import\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Traversals_Imports2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Import\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Import\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"all_imports_of\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Module\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"all_imports_of\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Module\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"find_set\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ImportSet\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImportSet\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"find_set\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ImportSet\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImportSet\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"[\"),w(\"\"),iter(sort(\"Import\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImportSet\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"[\"),w(\"\"),iter(sort(\"Import\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImportSet\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Traversals_Imports2 ( ) {
}
ATerm lf_AUX_Traversals_Imports2_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Traversals_Imports2_1sym , ATmakeAppl ( lf_AUX_Traversals_Imports2_1sym , arg0 , arg1 ) ) ;
( tmp [ 0 ] = ( * ef2 ) ( arg1 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef1sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , lf2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
( tmp [ 3 ] = ( * ef3 ) ( arg0 , ( * ef4 ) ( lf2 ( make_list ( tmp [ 2 ] ) ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef4sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf2 ( make_list ( tmp [ 5 ] ) ) ) ) ;
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Traversals_Imports2_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

