#include  "asc-support.h"
static Symbol lf_AUX_ATerm_Booleans2_1sym ;
static ATerm lf_AUX_ATerm_Booleans2_1 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
void register_AUX_ATerm_Booleans2 ( ) {
lf_AUX_ATerm_Booleans2_1sym = ATmakeSymbol ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"~\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_ATerm_Booleans2_1sym ) ;
register_prod ( ATparse ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"~\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) , lf_AUX_ATerm_Booleans2_1 , lf_AUX_ATerm_Booleans2_1sym ) ;
}
void resolve_AUX_ATerm_Booleans2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_ATerm_Booleans2 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_ATerm_Booleans2_1 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_AUX_ATerm_Booleans2_1sym , ATmakeAppl ( lf_AUX_ATerm_Booleans2_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef2 ) ( ) ) ;
}
if ( check_sym ( arg0 , ef2sym ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef1 ) ( ) ) ;
}
FUNC_EXIT ( make_nf1 ( lf_AUX_ATerm_Booleans2_1sym , arg0 ) ) ;
}

