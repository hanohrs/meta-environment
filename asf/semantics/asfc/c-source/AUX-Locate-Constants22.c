#include  "asc-support.h"
static Symbol lf_AUX_Locate_Constants22_1sym ;
static ATerm lf_AUX_Locate_Constants22_1 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef12sym ;
static funcptr ef12 ;
void register_AUX_Locate_Constants22 ( ) {
lf_AUX_Locate_Constants22_1sym = ATmakeSymbol ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"flatten-list-of-chars\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Locate_Constants22_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Expression\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"flatten-list-of-chars\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) , lf_AUX_Locate_Constants22_1 , lf_AUX_Locate_Constants22_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Expression\"),ql(\",\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Locate_Constants22 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"compose-list-of-chars\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"compose-list-of-chars\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"flatten-arguments\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"flatten-arguments\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"is-function-call\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"is-function-call\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Locate_Constants22 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Locate_Constants22_1 ( ATerm arg0 ) {
{
ATerm tmp [ 43 ] ;
FUNC_ENTRY ( lf_AUX_Locate_Constants22_1sym , ATmakeAppl ( lf_AUX_Locate_Constants22_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , ef3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( atmp0000 , ef4sym ) ) {
{
ATerm atmp00000 = arg_0 ( atmp0000 ) ;
if ( check_sym ( atmp00000 , ef5sym ) ) {
{
ATerm atmp000000 = arg_0 ( atmp00000 ) ;
if ( check_sym ( atmp000000 , lf2sym ) ) {
{
ATerm atmp0000000 = arg_0 ( atmp000000 ) ;
{
ATerm atmp0001 = arg_1 ( atmp000 ) ;
if ( check_sym ( atmp0001 , ef6sym ) ) {
{
ATerm atmp00010 = arg_0 ( atmp0001 ) ;
if ( check_sym ( atmp00010 , lf3sym ) ) {
{
ATerm atmp000100 = arg_0 ( atmp00010 ) ;
if ( not_empty_list ( atmp0000000 ) ) {
if ( term_equal ( list_head ( atmp0000000 ) , make_char ( 99 ) ) ) {
( tmp [ 0 ] = list_tail ( atmp0000000 ) ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
if ( term_equal ( list_head ( tmp [ 0 ] ) , make_char ( 111 ) ) ) {
( tmp [ 1 ] = list_tail ( tmp [ 0 ] ) ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
if ( term_equal ( list_head ( tmp [ 1 ] ) , make_char ( 110 ) ) ) {
( tmp [ 2 ] = list_tail ( tmp [ 1 ] ) ) ;
if ( is_single_element ( tmp [ 2 ] ) ) {
if ( term_equal ( list_head ( tmp [ 2 ] ) , make_char ( 115 ) ) ) {
if ( not_empty_list ( atmp000100 ) ) {
( tmp [ 3 ] = list_head ( atmp000100 ) ) ;
( tmp [ 4 ] = list_tail ( atmp000100 ) ) ;
if ( is_single_element ( tmp [ 4 ] ) ) {
( tmp [ 5 ] = list_head ( tmp [ 4 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , ef1sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 6 ] , ef2sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
if ( check_sym ( tmp [ 7 ] , ef3sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
( tmp [ 9 ] = arg_1 ( tmp [ 7 ] ) ) ;
if ( check_sym ( tmp [ 8 ] , ef4sym ) ) {
( tmp [ 10 ] = arg_0 ( tmp [ 8 ] ) ) ;
if ( check_sym ( tmp [ 10 ] , ef5sym ) ) {
( tmp [ 11 ] = arg_0 ( tmp [ 10 ] ) ) ;
if ( check_sym ( tmp [ 11 ] , lf2sym ) ) {
( tmp [ 12 ] = arg_0 ( tmp [ 11 ] ) ) ;
if ( check_sym ( tmp [ 9 ] , ef6sym ) ) {
( tmp [ 13 ] = arg_0 ( tmp [ 9 ] ) ) ;
if ( check_sym ( tmp [ 13 ] , lf3sym ) ) {
( tmp [ 14 ] = arg_0 ( tmp [ 13 ] ) ) ;
if ( not_empty_list ( tmp [ 12 ] ) ) {
if ( term_equal ( list_head ( tmp [ 12 ] ) , make_char ( 109 ) ) ) {
( tmp [ 15 ] = list_tail ( tmp [ 12 ] ) ) ;
if ( not_empty_list ( tmp [ 15 ] ) ) {
if ( term_equal ( list_head ( tmp [ 15 ] ) , make_char ( 97 ) ) ) {
( tmp [ 16 ] = list_tail ( tmp [ 15 ] ) ) ;
if ( not_empty_list ( tmp [ 16 ] ) ) {
if ( term_equal ( list_head ( tmp [ 16 ] ) , make_char ( 107 ) ) ) {
( tmp [ 17 ] = list_tail ( tmp [ 16 ] ) ) ;
if ( not_empty_list ( tmp [ 17 ] ) ) {
if ( term_equal ( list_head ( tmp [ 17 ] ) , make_char ( 101 ) ) ) {
( tmp [ 18 ] = list_tail ( tmp [ 17 ] ) ) ;
if ( not_empty_list ( tmp [ 18 ] ) ) {
if ( term_equal ( list_head ( tmp [ 18 ] ) , make_char ( 95 ) ) ) {
( tmp [ 19 ] = list_tail ( tmp [ 18 ] ) ) ;
if ( not_empty_list ( tmp [ 19 ] ) ) {
if ( term_equal ( list_head ( tmp [ 19 ] ) , make_char ( 108 ) ) ) {
( tmp [ 20 ] = list_tail ( tmp [ 19 ] ) ) ;
if ( not_empty_list ( tmp [ 20 ] ) ) {
if ( term_equal ( list_head ( tmp [ 20 ] ) , make_char ( 105 ) ) ) {
( tmp [ 21 ] = list_tail ( tmp [ 20 ] ) ) ;
if ( not_empty_list ( tmp [ 21 ] ) ) {
if ( term_equal ( list_head ( tmp [ 21 ] ) , make_char ( 115 ) ) ) {
( tmp [ 22 ] = list_tail ( tmp [ 21 ] ) ) ;
if ( is_single_element ( tmp [ 22 ] ) ) {
if ( term_equal ( list_head ( tmp [ 22 ] ) , make_char ( 116 ) ) ) {
if ( is_single_element ( tmp [ 14 ] ) ) {
( tmp [ 23 ] = list_head ( tmp [ 14 ] ) ) ;
if ( check_sym ( tmp [ 23 ] , ef1sym ) ) {
( tmp [ 24 ] = arg_0 ( tmp [ 23 ] ) ) ;
if ( check_sym ( tmp [ 24 ] , ef2sym ) ) {
( tmp [ 25 ] = arg_0 ( tmp [ 24 ] ) ) ;
if ( check_sym ( tmp [ 25 ] , ef3sym ) ) {
( tmp [ 26 ] = arg_0 ( tmp [ 25 ] ) ) ;
( tmp [ 27 ] = arg_1 ( tmp [ 25 ] ) ) ;
if ( check_sym ( tmp [ 26 ] , ef4sym ) ) {
( tmp [ 28 ] = arg_0 ( tmp [ 26 ] ) ) ;
if ( check_sym ( tmp [ 28 ] , ef5sym ) ) {
( tmp [ 29 ] = arg_0 ( tmp [ 28 ] ) ) ;
if ( check_sym ( tmp [ 29 ] , lf2sym ) ) {
( tmp [ 30 ] = arg_0 ( tmp [ 29 ] ) ) ;
if ( check_sym ( tmp [ 27 ] , ef6sym ) ) {
( tmp [ 31 ] = arg_0 ( tmp [ 27 ] ) ) ;
if ( check_sym ( tmp [ 31 ] , lf3sym ) ) {
( tmp [ 32 ] = arg_0 ( tmp [ 31 ] ) ) ;
if ( not_empty_list ( tmp [ 30 ] ) ) {
if ( term_equal ( list_head ( tmp [ 30 ] ) , make_char ( 109 ) ) ) {
( tmp [ 33 ] = list_tail ( tmp [ 30 ] ) ) ;
if ( not_empty_list ( tmp [ 33 ] ) ) {
if ( term_equal ( list_head ( tmp [ 33 ] ) , make_char ( 97 ) ) ) {
( tmp [ 34 ] = list_tail ( tmp [ 33 ] ) ) ;
if ( not_empty_list ( tmp [ 34 ] ) ) {
if ( term_equal ( list_head ( tmp [ 34 ] ) , make_char ( 107 ) ) ) {
( tmp [ 35 ] = list_tail ( tmp [ 34 ] ) ) ;
if ( not_empty_list ( tmp [ 35 ] ) ) {
if ( term_equal ( list_head ( tmp [ 35 ] ) , make_char ( 101 ) ) ) {
( tmp [ 36 ] = list_tail ( tmp [ 35 ] ) ) ;
if ( not_empty_list ( tmp [ 36 ] ) ) {
if ( term_equal ( list_head ( tmp [ 36 ] ) , make_char ( 95 ) ) ) {
( tmp [ 37 ] = list_tail ( tmp [ 36 ] ) ) ;
if ( not_empty_list ( tmp [ 37 ] ) ) {
if ( term_equal ( list_head ( tmp [ 37 ] ) , make_char ( 99 ) ) ) {
( tmp [ 38 ] = list_tail ( tmp [ 37 ] ) ) ;
if ( not_empty_list ( tmp [ 38 ] ) ) {
if ( term_equal ( list_head ( tmp [ 38 ] ) , make_char ( 104 ) ) ) {
( tmp [ 39 ] = list_tail ( tmp [ 38 ] ) ) ;
if ( not_empty_list ( tmp [ 39 ] ) ) {
if ( term_equal ( list_head ( tmp [ 39 ] ) , make_char ( 97 ) ) ) {
( tmp [ 40 ] = list_tail ( tmp [ 39 ] ) ) ;
if ( is_single_element ( tmp [ 40 ] ) ) {
if ( term_equal ( list_head ( tmp [ 40 ] ) , make_char ( 114 ) ) ) {
if ( is_single_element ( tmp [ 32 ] ) ) {
( tmp [ 41 ] = list_head ( tmp [ 32 ] ) ) ;
( tmp [ 42 ] = lf_AUX_Locate_Constants22_1 ( tmp [ 5 ] ) ) ;
FUNC_EXIT ( ( * ef7 ) ( tmp [ 41 ] , tmp [ 42 ] ) ) ;
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
}
if ( check_sym ( arg0 , ef9sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
( tmp [ 0 ] = lf_AUX_Locate_Constants22_1 ( atmp01 ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef10 ) ( ( * ef9 ) ( atmp00 , tmp [ 0 ] ) ) ) ) ) ;
}
}
}
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , ef3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
{
ATerm atmp0001 = arg_1 ( atmp000 ) ;
if ( check_sym ( atmp0001 , ef6sym ) ) {
{
ATerm atmp00010 = arg_0 ( atmp0001 ) ;
if ( check_sym ( atmp00010 , lf3sym ) ) {
{
ATerm atmp000100 = arg_0 ( atmp00010 ) ;
( tmp [ 0 ] = ( * ef8 ) ( lf3 ( make_list ( atmp000100 ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef6sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , lf3sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef3 ) ( atmp0000 , ( * ef6 ) ( lf3 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) ) ;
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
}
}
}
if ( term_equal ( ( * ef11 ) ( arg0 ) , ( constant0 ? constant0 : ( constant0 = ( * ef12 ) ( ) ) ) ) ) {
FUNC_EXIT ( arg0 ) ;
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Locate_Constants22_1sym , arg0 ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

