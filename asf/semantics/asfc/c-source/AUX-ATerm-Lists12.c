#include  "asc-support.h"
static Symbol lf_AUX_ATerm_Lists12_1sym ;
static ATerm lf_AUX_ATerm_Lists12_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef8sym ;
static funcptr ef8 ;
void register_AUX_ATerm_Lists12 ( ) {
lf_AUX_ATerm_Lists12_1sym = ATmakeSymbol ( "prod(id(\"ATerm-Lists\"),w(\"\"),[l(\"delete1\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_ATerm_Lists12_1sym ) ;
register_prod ( ATparse ( "prod(id(\"ATerm-Lists\"),w(\"\"),[l(\"delete1\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) , lf_AUX_ATerm_Lists12_1 , lf_AUX_ATerm_Lists12_1sym ) ;
}
void resolve_AUX_ATerm_Lists12 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Lists\"),w(\"\"),[l(\"rest\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Lists\"),w(\"\"),[l(\"rest\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Operations\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\"==\"),w(\"\"),sort(\"ATerm\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Operations\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\"==\"),w(\"\"),sort(\"ATerm\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Lists\"),w(\"\"),[l(\"first\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Lists\"),w(\"\"),[l(\"first\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Lists\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Lists\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_ATerm_Lists12 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_ATerm_Lists12_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_ATerm_Lists12_1sym , ATmakeAppl ( lf_AUX_ATerm_Lists12_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
FUNC_EXIT ( arg0 ) ;
}
if ( check_sym ( arg0 , ef2sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( term_equal ( ( * ef4 ) ( ( * ef5 ) ( arg0 ) , arg1 ) , ( constant0 ? constant0 : ( constant0 = ( * ef6 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef3 ) ( arg0 ) ) ;
}
( tmp [ 0 ] = ( * ef5 ) ( arg0 ) ) ;
if ( term_equal ( ( * ef4 ) ( tmp [ 0 ] , arg1 ) , ( constant1 ? constant1 : ( constant1 = ( * ef8 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef7 ) ( tmp [ 0 ] , lf_AUX_ATerm_Lists12_1 ( ( * ef3 ) ( arg0 ) , arg1 ) ) ) ;
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_ATerm_Lists12_1sym , arg0 , arg1 ) ) ;
}
}

