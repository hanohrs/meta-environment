/* This C code is generated by the AsfSdfCompiler version 0.1 */

#include  "asc-support.h"
static Symbol lf_AUX_MuASF_Signature_Ops12_2sym ;
static ATerm lf_AUX_MuASF_Signature_Ops12_2 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf_AUX_MuASF_Signature_Ops12_1sym ;
static ATerm lf_AUX_MuASF_Signature_Ops12_1 ( ATerm arg1 ) ;
void register_AUX_MuASF_Signature_Ops12 ( ) {
lf_AUX_MuASF_Signature_Ops12_2sym = ATmakeSymbol ( "prod(id(\"MuASF-Signature-Ops\"),w(\"\"),[l(\"addto-sign\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"SignatureOpt\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SignatureOpt\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Signature_Ops12_2sym ) ;
lf_AUX_MuASF_Signature_Ops12_1sym = ATmakeSymbol ( "listtype(sort(\"FuncDef\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Signature_Ops12_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"FuncDef\"),ql(\";\"))" ) , lf_AUX_MuASF_Signature_Ops12_1 , lf_AUX_MuASF_Signature_Ops12_1sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Signature-Ops\"),w(\"\"),[l(\"addto-sign\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"SignatureOpt\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SignatureOpt\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Signature_Ops12_2 , lf_AUX_MuASF_Signature_Ops12_2sym ) ;
}
void resolve_AUX_MuASF_Signature_Ops12 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"SignatureOpt\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"SignatureOpt\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[ql(\"signature\"),w(\"\"),sort(\"FuncDefList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SignatureOpt\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[ql(\"signature\"),w(\"\"),sort(\"FuncDefList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SignatureOpt\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Signature-Ops\"),w(\"\"),[sort(\"FuncDefList\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"FuncDefList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Signature-Ops\"),w(\"\"),[sort(\"FuncDefList\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"FuncDefList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_MuASF_Signature_Ops12 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_MuASF_Signature_Ops12_2 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 3 ] ;
FUNC_ENTRY ( lf_AUX_MuASF_Signature_Ops12_2sym , ATmakeAppl ( lf_AUX_MuASF_Signature_Ops12_2sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
if ( check_sym ( arg1 , lf_AUX_MuASF_Signature_Ops12_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( not_empty_list ( atmp10 ) ) {
FUNC_EXIT ( ( * ef2 ) ( ( * ef3 ) ( lf_AUX_MuASF_Signature_Ops12_1 ( make_list ( atmp10 ) ) ) ) ) ;
}
else {
FUNC_EXIT ( arg0 ) ;
}
}
}
}
if ( check_sym ( arg0 , ef2sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef3sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf_AUX_MuASF_Signature_Ops12_1sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( arg1 , lf_AUX_MuASF_Signature_Ops12_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( ! not_empty_list ( atmp0000 ) ) {
if ( not_empty_list ( atmp10 ) ) {
FUNC_EXIT ( ( * ef2 ) ( ( * ef3 ) ( lf_AUX_MuASF_Signature_Ops12_1 ( make_list ( atmp10 ) ) ) ) ) ;
}
else {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ) ) ;
}
}
else {
if ( not_empty_list ( atmp10 ) ) {
( tmp [ 0 ] = ( * ef4 ) ( ( * ef3 ) ( lf_AUX_MuASF_Signature_Ops12_1 ( make_list ( atmp0000 ) ) ) , ( * ef3 ) ( lf_AUX_MuASF_Signature_Ops12_1 ( make_list ( atmp10 ) ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , lf_AUX_MuASF_Signature_Ops12_1sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( not_empty_list ( tmp [ 2 ] ) ) {
FUNC_EXIT ( ( * ef2 ) ( ( * ef3 ) ( lf_AUX_MuASF_Signature_Ops12_1 ( make_list ( tmp [ 2 ] ) ) ) ) ) ;
}
}
}
}
else {
FUNC_EXIT ( ( * ef2 ) ( ( * ef3 ) ( lf_AUX_MuASF_Signature_Ops12_1 ( make_list ( atmp0000 ) ) ) ) ) ;
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
FUNC_EXIT ( make_nf2 ( lf_AUX_MuASF_Signature_Ops12_2sym , arg0 , arg1 ) ) ;
}
}
ATerm lf_AUX_MuASF_Signature_Ops12_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Signature_Ops12_1sym , ATmakeAppl ( lf_AUX_MuASF_Signature_Ops12_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Signature_Ops12_1sym , arg0 ) ) ;
}

