#include  "asc-support.h"
static Symbol lf_AUX_Transform_Constructors1_2sym ;
static ATerm lf_AUX_Transform_Constructors1_2 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_Transform_Constructors1_4sym ;
static ATerm lf_AUX_Transform_Constructors1_4 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_Transform_Constructors1_3sym ;
static ATerm lf_AUX_Transform_Constructors1_3 ( ATerm arg1 ) ;
static Symbol lf_AUX_Transform_Constructors1_1sym ;
static ATerm lf_AUX_Transform_Constructors1_1 ( ATerm arg1 ) ;
void register_AUX_Transform_Constructors1 ( ) {
lf_AUX_Transform_Constructors1_2sym = ATmakeSymbol ( "prod(id(\"Transform-Constructors\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TCE\"),w(\"\"),no-attrs)"
 , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Transform_Constructors1_2sym ) ;
lf_AUX_Transform_Constructors1_4sym = ATmakeSymbol ( "prod(id(\"Transform-Constructors\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TsCE\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Transform_Constructors1_4sym ) ;
lf_AUX_Transform_Constructors1_3sym = ATmakeSymbol ( "listtype(sort(\"Term\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Transform_Constructors1_3sym ) ;
lf_AUX_Transform_Constructors1_1sym = ATmakeSymbol ( "listtype(sort(\"Cond\"),ql(\"&\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Transform_Constructors1_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Cond\"),ql(\"&\"))" ) , lf_AUX_Transform_Constructors1_1 , lf_AUX_Transform_Constructors1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Transform-Constructors\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TCE\"),w(\"\"),no-attrs)" ) , lf_AUX_Transform_Constructors1_2 , lf_AUX_Transform_Constructors1_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Term\"),ql(\",\"))" ) , lf_AUX_Transform_Constructors1_3 , lf_AUX_Transform_Constructors1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"Transform-Constructors\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TsCE\"),w(\"\"),no-attrs)" ) , lf_AUX_Transform_Constructors1_4 , lf_AUX_Transform_Constructors1_4sym ) ;
}
void resolve_AUX_Transform_Constructors1 ( ) {
}
void init_AUX_Transform_Constructors1 ( ) {
}
ATerm lf_AUX_Transform_Constructors1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Transform_Constructors1_1sym , ATmakeAppl ( lf_AUX_Transform_Constructors1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Transform_Constructors1_1sym , arg0 ) ) ;
}
ATerm lf_AUX_Transform_Constructors1_3 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Transform_Constructors1_3sym , ATmakeAppl ( lf_AUX_Transform_Constructors1_3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Transform_Constructors1_3sym , arg0 ) ) ;
}
ATerm lf_AUX_Transform_Constructors1_4 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_Transform_Constructors1_4sym , ATmakeAppl ( lf_AUX_Transform_Constructors1_4sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_Transform_Constructors1_4sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_Transform_Constructors1_2 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_Transform_Constructors1_2sym , ATmakeAppl ( lf_AUX_Transform_Constructors1_2sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_Transform_Constructors1_2sym , arg0 , arg1 , arg2 ) ) ;
}

