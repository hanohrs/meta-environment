/* This C code is generated by the AsfSdfCompiler version 0.1 */

#include  "asc-support.h"
static Symbol lf_AUX_Matching1_1sym ;
static ATerm lf_AUX_Matching1_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_Matching1_2sym ;
static ATerm lf_AUX_Matching1_2 ( ) ;
void register_AUX_Matching1 ( ) {
lf_AUX_Matching1_1sym = ATmakeSymbol ( "prod(id(\"Matching\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Subs\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Matching1_1sym ) ;
lf_AUX_Matching1_2sym = ATmakeSymbol ( "prod(id(\"Matching\"),w(\"\"),[l(\"nomatch\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Subs\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Matching1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Matching\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Subs\"),w(\"\"),no-attrs)" ) , lf_AUX_Matching1_1 , lf_AUX_Matching1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Matching\"),w(\"\"),[l(\"nomatch\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Subs\"),w(\"\"),no-attrs)" ) , lf_AUX_Matching1_2 , lf_AUX_Matching1_2sym ) ;
}
void resolve_AUX_Matching1 ( ) {
}
void init_AUX_Matching1 ( ) {
}
ATerm lf_AUX_Matching1_2 ( ) {
CONS_ENTRY ( lf_AUX_Matching1_2sym , ATmakeAppl0 ( lf_AUX_Matching1_2sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Matching1_2sym ) ) ;
}
ATerm lf_AUX_Matching1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Matching1_1sym , ATmakeAppl ( lf_AUX_Matching1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Matching1_1sym , arg0 ) ) ;
}

