#include  "asc-support.h"
static Symbol lf_AUX_AsFix2muASF12_1sym ;
static ATerm lf_AUX_AsFix2muASF12_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_AsFix2muASF12 ( ) {
lf_AUX_AsFix2muASF12_1sym = ATmakeSymbol ( "prod(id(\"AsFix2muASF\"),w(\"\"),[l(\"listarg2muasf\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncTermTableTuple\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_AsFix2muASF12_1sym ) ;
register_prod ( ATparse ( "prod(id(\"AsFix2muASF\"),w(\"\"),[l(\"listarg2muasf\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncTermTableTuple\"),w(\"\"),no-attrs)" ) , lf_AUX_AsFix2muASF12_1 , lf_AUX_AsFix2muASF12_1sym ) ;
}
void resolve_AUX_AsFix2muASF12 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix2muASF\"),w(\"\"),[l(\"aterm2muasf\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"AFun\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncTermTableTuple\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix2muASF\"),w(\"\"),[l(\"aterm2muasf\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"AFun\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncTermTableTuple\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"ParseTrees\"),w(\"\"),[l(\"get-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"ParseTrees\"),w(\"\"),[l(\"get-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_AsFix2muASF12 ( ) {
}
ATerm lf_AUX_AsFix2muASF12_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_AsFix2muASF12_1sym , ATmakeAppl ( lf_AUX_AsFix2muASF12_1sym , arg0 , arg1 ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( arg0 ) , arg0 , arg1 ) ) ;
FUNC_EXIT ( make_nf2 ( lf_AUX_AsFix2muASF12_1sym , arg0 , arg1 ) ) ;
}

