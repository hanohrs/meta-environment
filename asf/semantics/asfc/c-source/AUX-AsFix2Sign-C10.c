#include  "support.h"
static Symbol lf_AUX_AsFix2Sign_C10_1sym ;
static ATerm lf_AUX_AsFix2Sign_C10_1 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol ef19sym ;
static funcptr ef19 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef20sym ;
static funcptr ef20 ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef17sym ;
static funcptr ef17 ;
void register_AUX_AsFix2Sign_C10 ( ) {
lf_AUX_AsFix2Sign_C10_1sym = ATmakeSymbol ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"cffunc2sign\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FNT-tuple\"),w(\"\"),no-attrs)"
 , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_AsFix2Sign_C10_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"FuncDef\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"AFun\"),ql(\".\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"Term\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
register_prod ( ATparse ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"cffunc2sign\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FNT-tuple\"),w(\"\"),no-attrs)" ) , lf_AUX_AsFix2Sign_C10_1 , lf_AUX_AsFix2Sign_C10_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"FuncDef\"),ql(\";\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"AFun\"),ql(\".\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Term\"),ql(\",\"))" ) , lf4 , lf4sym ) ;
}
void resolve_AUX_AsFix2Sign_C10 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"TermAsFix2Sign\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FNT-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"TermAsFix2Sign\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FNT-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"TermAsFixAccess\"),w(\"\"),[ql(\"is-term-production\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"TermAsFixAccess\"),w(\"\"),[ql(\"is-term-production\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"TermAsFix2Sign\"),w(\"\"),[ql(\"term-cffunc2sign\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FNT-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"TermAsFix2Sign\"),w(\"\"),[ql(\"term-cffunc2sign\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FNT-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"ParseTrees\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AFun\"),w(\"\"),ql(\".\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"ParseTrees\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AFun\"),w(\"\"),ql(\".\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix-Constructors\"),w(\"\"),[ql(\"syms\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix-Constructors\"),w(\"\"),[ql(\"syms\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"cfelems2args\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncTermTableTuple\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"cfelems2args\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncTermTableTuple\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"TermList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncTermTableTuple\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"TermList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncTermTableTuple\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"TermList\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"TermList\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix2muASFnames\"),w(\"\"),[l(\"cffunc2id\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix2muASFnames\"),w(\"\"),[l(\"cffunc2id\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix-Constructors\"),w(\"\"),[ql(\"attrs\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix-Constructors\"),w(\"\"),[ql(\"attrs\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"attrs2terms\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TermList\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"attrs2terms\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TermList\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"nt-lookup\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),sort(\"TermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IdTablePair\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"nt-lookup\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),sort(\"TermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IdTablePair\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IdTablePair\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IdTablePair\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Signs\"),w(\"\"),[l(\"make-funcdef\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),sort(\"TermList\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Signs\"),w(\"\"),[l(\"make-funcdef\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),sort(\"TermList\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
ef19 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Signs\"),w(\"\"),[sort(\"FuncDefList\"),w(\"\"),ql(\"++_ss\"),w(\"\"),sort(\"FuncDefList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef19sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Signs\"),w(\"\"),[sort(\"FuncDefList\"),w(\"\"),ql(\"++_ss\"),w(\"\"),sort(\"FuncDefList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef20 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
ef20sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
static ATerm constant2 = NULL ;
static ATerm constant3 = NULL ;
void init_AUX_AsFix2Sign_C10 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
ATprotect ( & constant2 ) ;
ATprotect ( & constant3 ) ;
}
ATerm lf_AUX_AsFix2Sign_C10_1 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
{
ATerm tmp [ 22 ] ;
FUNC_ENTRY ( lf_AUX_AsFix2Sign_C10_1sym , ATmakeAppl ( lf_AUX_AsFix2Sign_C10_1sym , arg0 , arg1 , arg2 ) ) ;
tmp [ 0 ] = ( * ef3 ) ( arg1 ) ;
if ( term_equal ( tmp [ 0 ] , ( constant0 ? constant0 : ( constant0 = ( * ef4 ) ( ) ) ) ) ) {
tmp [ 1 ] = ( * ef5 ) ( arg0 , arg1 , arg2 ) ;
if ( check_sym ( tmp [ 1 ] , ef1sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
tmp [ 3 ] = arg_1 ( tmp [ 1 ] ) ;
if ( check_sym ( tmp [ 2 ] , ef2sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 2 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( lf2 ( make_list ( tmp [ 5 ] ) ) ) , tmp [ 3 ] ) ) ;
}
}
}
}
if ( term_equal ( tmp [ 0 ] , ( constant1 ? constant1 : ( constant1 = ( * ef6 ) ( ) ) ) ) ) {
tmp [ 1 ] = ( * ef7 ) ( arg1 , ( constant2 ? constant2 : ( constant2 = lf3 ( make_list ( ( * ef8 ) ( ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 1 ] , ef9sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
tmp [ 3 ] = ( * ef10 ) ( tmp [ 2 ] , arg2 ) ;
if ( check_sym ( tmp [ 3 ] , ef11sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
tmp [ 5 ] = arg_1 ( tmp [ 3 ] ) ;
tmp [ 6 ] = arg_2 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 7 ] = arg_0 ( tmp [ 4 ] ) ;
if ( check_sym ( tmp [ 5 ] , ef12sym ) ) {
tmp [ 8 ] = arg_0 ( tmp [ 5 ] ) ;
if ( check_sym ( tmp [ 8 ] , lf4sym ) ) {
tmp [ 9 ] = arg_0 ( tmp [ 8 ] ) ;
tmp [ 10 ] = ( * ef13 ) ( arg1 ) ;
tmp [ 11 ] = ( * ef7 ) ( arg1 , ( constant3 ? constant3 : ( constant3 = lf3 ( make_list ( ( * ef14 ) ( ) ) ) ) ) ) ;
tmp [ 12 ] = ( * ef15 ) ( tmp [ 11 ] ) ;
if ( check_sym ( tmp [ 12 ] , ef12sym ) ) {
tmp [ 13 ] = arg_0 ( tmp [ 12 ] ) ;
if ( check_sym ( tmp [ 13 ] , lf4sym ) ) {
tmp [ 14 ] = arg_0 ( tmp [ 13 ] ) ;
tmp [ 15 ] = ( * ef16 ) ( tmp [ 10 ] , ( * ef12 ) ( lf4 ( make_list ( tmp [ 14 ] ) ) ) , tmp [ 6 ] ) ;
if ( check_sym ( tmp [ 15 ] , ef17sym ) ) {
tmp [ 16 ] = arg_0 ( tmp [ 15 ] ) ;
tmp [ 17 ] = arg_1 ( tmp [ 15 ] ) ;
tmp [ 18 ] = ( * ef18 ) ( tmp [ 16 ] , ( * ef12 ) ( lf4 ( make_list ( tmp [ 9 ] ) ) ) ) ;
tmp [ 19 ] = ( * ef19 ) ( ( * ef2 ) ( lf2 ( make_list ( tmp [ 18 ] ) ) ) , ( * ef2 ) ( lf2 ( make_list ( tmp [ 7 ] ) ) ) ) ;
if ( check_sym ( tmp [ 19 ] , ef2sym ) ) {
tmp [ 20 ] = arg_0 ( tmp [ 19 ] ) ;
if ( check_sym ( tmp [ 20 ] , lf2sym ) ) {
tmp [ 21 ] = arg_0 ( tmp [ 20 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( lf2 ( make_list ( tmp [ 21 ] ) ) ) , tmp [ 17 ] ) ) ;
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
tmp [ 0 ] = ( * ef13 ) ( arg1 ) ;
tmp [ 1 ] = ( * ef7 ) ( arg1 , ( constant3 ? constant3 : ( constant3 = lf3 ( make_list ( ( * ef14 ) ( ) ) ) ) ) ) ;
tmp [ 2 ] = ( * ef15 ) ( tmp [ 1 ] ) ;
if ( check_sym ( tmp [ 2 ] , ef12sym ) ) {
tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ;
if ( check_sym ( tmp [ 3 ] , lf4sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
tmp [ 5 ] = ( * ef16 ) ( tmp [ 0 ] , ( * ef12 ) ( lf4 ( make_list ( tmp [ 4 ] ) ) ) , arg2 ) ;
if ( check_sym ( tmp [ 5 ] , ef17sym ) ) {
tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ;
tmp [ 7 ] = arg_1 ( tmp [ 5 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( lf2 ( make_list ( ( * ef20 ) ( tmp [ 6 ] ) ) ) ) , tmp [ 7 ] ) ) ;
}
}
}
FUNC_EXIT ( make_nf3 ( lf_AUX_AsFix2Sign_C10_1sym , arg0 , arg1 , arg2 ) ) ;
}
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

