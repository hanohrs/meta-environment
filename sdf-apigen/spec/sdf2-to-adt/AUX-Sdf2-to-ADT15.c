/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Sdf2_to_ADT15_2_recursivesym ;
static ATerm lf_AUX_Sdf2_to_ADT15_2_recursive ( ATerm arg1 ) ;
static Symbol lf_AUX_Sdf2_to_ADT15_2sym ;
static ATerm lf_AUX_Sdf2_to_ADT15_2 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf_AUX_Sdf2_to_ADT15_1sym ;
static ATerm lf_AUX_Sdf2_to_ADT15_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
void register_AUX_Sdf2_to_ADT15 ( ) {
lf_AUX_Sdf2_to_ADT15_2_recursivesym = ATmakeSymbol ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-prod-args\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_to_ADT15_2_recursivesym ) ;
lf_AUX_Sdf2_to_ADT15_2sym = ATmakeSymbol ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-prod-args\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_to_ADT15_2sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf_AUX_Sdf2_to_ADT15_1sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_to_ADT15_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"ATerm\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf_AUX_Sdf2_to_ADT15_1 , lf_AUX_Sdf2_to_ADT15_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-prod-args\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_to_ADT15_2 , lf_AUX_Sdf2_to_ADT15_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-prod-args\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_to_ADT15_2_recursive , lf_AUX_Sdf2_to_ADT15_2_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"ATerm\"),ql(\",\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf4 , lf4sym ) ;
}
void resolve_AUX_Sdf2_to_ADT15 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"avoid\")],w(\"\"),l(\"}\")))" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"avoid\")],w(\"\"),l(\"}\")))" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-prod-arg\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-prod-arg\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"afun\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"afun\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AT-Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AT-Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"at-literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AT-Literal\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"at-literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AT-Literal\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Sdf2_to_ADT15 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Sdf2_to_ADT15_2 ( ATerm arg0 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Sdf2_to_ADT15_2sym , ATmakeAppl ( lf_AUX_Sdf2_to_ADT15_2sym , arg0 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Sdf2_to_ADT15_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
( tmp [ 2 ] = ( * ef2 ) ( tmp [ 0 ] ) ) ;
( tmp [ 3 ] = lf_AUX_Sdf2_to_ADT15_2 ( lf_AUX_Sdf2_to_ADT15_1 ( make_list ( tmp [ 1 ] ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef1sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf3sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf3 ( cons ( make_list ( tmp [ 2 ] ) , cons ( make_list ( make_nf2 ( ef3sym , ( * ef4 ) ( lf4 ( make_list ( make_char ( 119 ) ) ) ) , lf3 ( make_list ( make_nf1 ( ef5sym , make_nf1 ( ef6sym , ( * ef7 ) ( lf4 ( ( ATerm ) ATmakeList ( 2 , char_table [ 34 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) , make_list ( tmp [ 5 ] ) ) ) ) ) ) ;
}
}
}
}
else {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf3 ( make_list ( null ( ) ) ) ) ) ;
}
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf3 ( make_list ( ( * ef2 ) ( tmp [ 0 ] ) ) ) ) ) ;
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Sdf2_to_ADT15_2sym , arg0 ) ) ;
}
}
ATerm lf_AUX_Sdf2_to_ADT15_2_recursive ( ATerm arg0 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Sdf2_to_ADT15_2_recursivesym , ATmakeAppl ( lf_AUX_Sdf2_to_ADT15_2_recursivesym , arg0 ) ) ;
{
ATerm atmp00 = arg0 ;
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
( tmp [ 2 ] = ( * ef2 ) ( tmp [ 0 ] ) ) ;
( tmp [ 3 ] = lf_AUX_Sdf2_to_ADT15_2 ( lf_AUX_Sdf2_to_ADT15_1 ( make_list ( tmp [ 1 ] ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef1sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf3sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf3 ( cons ( make_list ( tmp [ 2 ] ) , cons ( make_list ( make_nf2 ( ef3sym , ( * ef4 ) ( lf4 ( make_list ( make_char ( 119 ) ) ) ) , lf3 ( make_list ( make_nf1 ( ef5sym , make_nf1 ( ef6sym , ( * ef7 ) ( lf4 ( ( ATerm ) ATmakeList ( 2 , char_table [ 34 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) , make_list ( tmp [ 5 ] ) ) ) ) ) ) ;
}
}
}
}
else {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf3 ( make_list ( null ( ) ) ) ) ) ;
}
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf3 ( make_list ( ( * ef2 ) ( tmp [ 0 ] ) ) ) ) ) ;
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Sdf2_to_ADT15_2_recursivesym , lf_AUX_Sdf2_to_ADT15_1 ( arg0 ) ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf_AUX_Sdf2_to_ADT15_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Sdf2_to_ADT15_1sym , ATmakeAppl ( lf_AUX_Sdf2_to_ADT15_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Sdf2_to_ADT15_1sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}

