/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Sdf2_to_ADT14_2sym ;
static ATerm lf_AUX_Sdf2_to_ADT14_2 ( ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 , ATerm arg5 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol lf_AUX_Sdf2_to_ADT14_1sym ;
static ATerm lf_AUX_Sdf2_to_ADT14_1 ( ATerm arg1 ) ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef13sym ;
static funcptr ef13 ;
void register_AUX_Sdf2_to_ADT14 ( ) {
lf_AUX_Sdf2_to_ADT14_2sym = ATmakeSymbol ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-prod\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\",\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Attributes\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"
 , 5 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_to_ADT14_2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"ATerm\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf_AUX_Sdf2_to_ADT14_1sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_to_ADT14_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf_AUX_Sdf2_to_ADT14_1 , lf_AUX_Sdf2_to_ADT14_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-prod\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\",\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Attributes\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_to_ADT14_2 , lf_AUX_Sdf2_to_ADT14_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"ATerm\"),ql(\",\"))" ) , lf4 , lf4sym ) ;
}
void resolve_AUX_Sdf2_to_ADT14 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[sort(\"Sort\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[sort(\"Sort\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"afun\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"afun\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AT-Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AT-Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"at-literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AT-Literal\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"at-literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AT-Literal\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"modname-to-lit\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AT-Literal\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"modname-to-lit\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AT-Literal\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"avoid\")],w(\"\"),l(\"}\")))" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"avoid\")],w(\"\"),l(\"}\")))" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-prod-args\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-prod-args\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"sort-to-lit\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Sort\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AT-Literal\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"sort-to-lit\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Sort\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AT-Literal\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-attrs\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Attributes\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-attrs\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Attributes\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Sdf2_to_ADT14 ( ) {
}
ATerm lf_AUX_Sdf2_to_ADT14_2 ( ATerm arg0 , ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Sdf2_to_ADT14_2sym , ATmakeAppl ( lf_AUX_Sdf2_to_ADT14_2sym , arg0 , arg1 , arg2 , arg3 , arg4 ) ) ;
if ( check_sym ( arg1 , lf_AUX_Sdf2_to_ADT14_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( arg2 , ef1sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
( tmp [ 0 ] = ( * ef9 ) ( arg0 ) ) ;
( tmp [ 1 ] = ( * ef11 ) ( lf_AUX_Sdf2_to_ADT14_1 ( make_list ( atmp10 ) ) ) ) ;
if ( check_sym ( tmp [ 1 ] , ef10sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , lf4sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
( tmp [ 4 ] = ( * ef12 ) ( atmp20 ) ) ;
( tmp [ 5 ] = ( * ef13 ) ( arg3 , arg4 ) ) ;
FUNC_EXIT ( make_nf2 ( ef2sym , ( * ef3 ) ( lf3 ( ( ATerm ) ATmakeList ( 4 , char_table [ 112 ] , char_table [ 114 ] , char_table [ 111 ] , char_table [ 100 ] ) ) ) , lf4 ( cons ( make_list ( make_nf2 ( ef2sym , ( * ef3 ) ( lf3 ( ( ATerm ) ATmakeList ( 2 , char_table [ 105 ] , char_table [ 100 ] ) ) ) , lf4 ( make_list ( make_nf1 ( ef4sym , make_nf1 ( ef5sym , tmp [ 0 ] ) ) ) ) ) ) , cons ( make_list ( make_nf2 ( ef2sym , ( * ef3 ) ( lf3 ( make_list ( make_char ( 119 ) ) ) ) , lf4 ( make_list ( make_nf1 ( ef4sym , make_nf1 ( ef5sym , ( * ef6 ) ( lf3 ( ( ATerm ) ATmakeList ( 2 , char_table [ 34 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) , cons ( make_list ( make_nf1 ( ef7sym , ( * ef8 ) ( lf4 ( make_list ( tmp [ 3 ] ) ) ) ) ) , cons ( make_list ( make_nf2 ( ef2sym , ( * ef3 ) ( lf3 ( make_list ( make_char ( 119 ) ) ) ) , lf4 ( make_list ( make_nf1 ( ef4sym , make_nf1 ( ef5sym , ( * ef6 ) ( lf3 ( ( ATerm ) ATmakeList ( 2 , char_table [ 34 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) , cons ( make_list ( make_nf2 ( ef2sym , ( * ef3 ) ( lf3 ( make_list ( make_char ( 108 ) ) ) ) , lf4 ( make_list ( make_nf1 ( ef4sym , make_nf1 ( ef5sym , ( * ef6 ) ( lf3 ( ( ATerm ) ATmakeList ( 4 , char_table [ 34 ] , char_table [ 45 ] , char_table [ 62 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) , cons ( make_list ( make_nf2 ( ef2sym , ( * ef3 ) ( lf3 ( make_list ( make_char ( 119 ) ) ) ) , lf4 ( make_list ( make_nf1 ( ef4sym , make_nf1 ( ef5sym , ( * ef6 ) ( lf3 ( ( ATerm ) ATmakeList ( 2 , char_table [ 34 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) , cons ( make_list ( make_nf2 ( ef2sym , ( * ef3 ) ( lf3 ( ( ATerm ) ATmakeList ( 4 , char_table [ 115 ] , char_table [ 111 ] , char_table [ 114 ] , char_table [ 116 ] ) ) ) , lf4 ( make_list ( make_nf1 ( ef4sym , make_nf1 ( ef5sym , tmp [ 4 ] ) ) ) ) ) ) , cons ( make_list ( make_nf2 ( ef2sym , ( * ef3 ) ( lf3 ( make_list ( make_char ( 119 ) ) ) ) , lf4 ( make_list ( make_nf1 ( ef4sym , make_nf1 ( ef5sym , ( * ef6 ) ( lf3 ( ( ATerm ) ATmakeList ( 2 , char_table [ 34 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) , make_list ( tmp [ 5 ] ) ) ) ) ) ) ) ) ) ) ) ) ;
}
}
}
}
}
}
FUNC_EXIT ( make_nf5 ( lf_AUX_Sdf2_to_ADT14_2sym , arg0 , arg1 , arg2 , arg3 , arg4 ) ) ;
}
}
ATerm lf_AUX_Sdf2_to_ADT14_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Sdf2_to_ADT14_1sym , ATmakeAppl ( lf_AUX_Sdf2_to_ADT14_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Sdf2_to_ADT14_1sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}

