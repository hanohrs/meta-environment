#include  "asc-support.h"
static Symbol lf_AUX_MuASF_Conds2C9_4sym ;
static ATerm lf_AUX_MuASF_Conds2C9_4 ( ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 , ATerm arg5 , ATerm arg6 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef29sym ;
static funcptr ef29 ;
static Symbol ef32sym ;
static funcptr ef32 ;
static Symbol ef28sym ;
static funcptr ef28 ;
static Symbol ef30sym ;
static funcptr ef30 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol lf6sym ;
static ATerm lf6 ( ATerm arg1 ) ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef33sym ;
static funcptr ef33 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol ef25sym ;
static funcptr ef25 ;
static Symbol ef26sym ;
static funcptr ef26 ;
static Symbol ef27sym ;
static funcptr ef27 ;
static Symbol lf_AUX_MuASF_Conds2C9_1sym ;
static ATerm lf_AUX_MuASF_Conds2C9_1 ( ATerm arg1 ) ;
static Symbol ef31sym ;
static funcptr ef31 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef34sym ;
static funcptr ef34 ;
static Symbol lf_AUX_MuASF_Conds2C9_2sym ;
static ATerm lf_AUX_MuASF_Conds2C9_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_MuASF_Conds2C9_3sym ;
static ATerm lf_AUX_MuASF_Conds2C9_3 ( ATerm arg1 ) ;
static Symbol ef35sym ;
static funcptr ef35 ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol ef17sym ;
static funcptr ef17 ;
static Symbol lf7sym ;
static ATerm lf7 ( ATerm arg1 ) ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol ef36sym ;
static funcptr ef36 ;
static Symbol ef37sym ;
static funcptr ef37 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef19sym ;
static funcptr ef19 ;
static Symbol ef20sym ;
static funcptr ef20 ;
static Symbol lf5sym ;
static ATerm lf5 ( ATerm arg1 ) ;
static Symbol ef21sym ;
static funcptr ef21 ;
static Symbol ef22sym ;
static funcptr ef22 ;
static Symbol lf8sym ;
static ATerm lf8 ( ATerm arg1 ) ;
static Symbol ef23sym ;
static funcptr ef23 ;
static Symbol ef24sym ;
static funcptr ef24 ;
void register_AUX_MuASF_Conds2C9 ( ) {
lf_AUX_MuASF_Conds2C9_4sym = ATmakeSymbol ( "prod(id(\"MuASF-Conds2C\"),w(\"\"),[l(\"listcondspattern2cstats\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)"
 , 6 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Conds2C9_4sym ) ;
lf6sym = ATmakeSymbol ( "listtype(sort(\"TE-pair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf6sym ) ;
lf_AUX_MuASF_Conds2C9_1sym = ATmakeSymbol ( "listtype(sort(\"Term\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Conds2C9_1sym ) ;
lf_AUX_MuASF_Conds2C9_2sym = ATmakeSymbol ( "listtype(sort(\"C-Rule\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Conds2C9_2sym ) ;
lf_AUX_MuASF_Conds2C9_3sym = ATmakeSymbol ( "listtype(sort(\"NamePair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Conds2C9_3sym ) ;
lf7sym = ATmakeSymbol ( "listtype(sort(\"Statement\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf7sym ) ;
lf5sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf5sym ) ;
lf8sym = ATmakeSymbol ( "listtype(sort(\"Expression\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf8sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Term\"),ql(\",\"))" ) , lf_AUX_MuASF_Conds2C9_1 , lf_AUX_MuASF_Conds2C9_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"C-Rule\"),ql(\";\"))" ) , lf_AUX_MuASF_Conds2C9_2 , lf_AUX_MuASF_Conds2C9_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"NamePair\"),ql(\",\"))" ) , lf_AUX_MuASF_Conds2C9_3 , lf_AUX_MuASF_Conds2C9_3sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Conds2C\"),w(\"\"),[l(\"listcondspattern2cstats\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Conds2C9_4 , lf_AUX_MuASF_Conds2C9_4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf5 , lf5sym ) ;
register_prod ( ATparse ( "listtype(sort(\"TE-pair\"),ql(\",\"))" ) , lf6 , lf6sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Statement\"))" ) , lf7 , lf7sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Expression\"),ql(\",\"))" ) , lf8 , lf8sym ) ;
}
void resolve_AUX_MuASF_Conds2C9 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[l(\"make-c-temp\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[l(\"make-c-temp\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"add-env\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"add-env\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"TE-pair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-env\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"TE-pair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-env\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TE-pair\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TE-pair\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleList\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"Integers-Extended\"),w(\"\"),[l(\"succ\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"Integers-Extended\"),w(\"\"),[l(\"succ\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter(sort(\"Statement\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[l(\"if\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[l(\"if\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef19 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef19sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef20 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef20sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef21 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef21sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef22 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef22sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef23 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef23sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef24 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef24sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef25 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef25sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef26 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef26sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef27 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef27sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef28 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-star-var\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef28sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-star-var\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef29 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[l(\"while\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef29sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[l(\"while\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef30 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-plus-var\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef30sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-plus-var\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef31 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef31sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef32 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef32sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Equations-Ops\"),w(\"\"),[l(\"is-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef33 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-c-expression\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef33sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-c-expression\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef34 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Conds2C\"),w(\"\"),[l(\"conds2cstats\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef34sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Conds2C\"),w(\"\"),[l(\"conds2cstats\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef35 = lookup_func ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef35sym = lookup_sym ( ATreadFromString ( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef36 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Unary-operator\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef36sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[sort(\"Unary-operator\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef37 = lookup_func ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[ql(\"!\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Unary-operator\"),w(\"\"),no-attrs)" ) ) ;
ef37sym = lookup_sym ( ATreadFromString ( "prod(id(\"C\"),w(\"\"),[ql(\"!\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Unary-operator\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_MuASF_Conds2C9 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_MuASF_Conds2C9_4 ( ATerm arg0 , ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 , ATerm arg5 ) {
{
ATerm tmp [ 14 ] ;
FUNC_ENTRY ( lf_AUX_MuASF_Conds2C9_4sym , ATmakeAppl ( lf_AUX_MuASF_Conds2C9_4sym , arg0 , arg1 , arg2 , arg3 , arg4 , arg5 ) ) ;
{
ATerm ltmp [ 6 ] ;
lbl_lf_AUX_MuASF_Conds2C9_4 : ltmp [ 0 ] = arg0 ;
( ltmp [ 1 ] = arg1 ) ;
( ltmp [ 2 ] = arg2 ) ;
( ltmp [ 3 ] = arg3 ) ;
( ltmp [ 4 ] = arg4 ) ;
( ltmp [ 5 ] = arg5 ) ;
if ( check_sym ( ltmp [ 0 ] , ef3sym ) ) {
if ( check_sym ( ltmp [ 1 ] , lf_AUX_MuASF_Conds2C9_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( ltmp [ 2 ] , lf_AUX_MuASF_Conds2C9_2sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
if ( check_sym ( ltmp [ 4 ] , lf_AUX_MuASF_Conds2C9_3sym ) ) {
{
ATerm atmp40 = arg_0 ( arg4 ) ;
if ( not_empty_list ( atmp10 ) ) {
( tmp [ 0 ] = list_head ( atmp10 ) ) ;
{
( tmp [ 1 ] = list_tail ( atmp10 ) ) ;
{
if ( not_empty_list ( tmp [ 1 ] ) ) {
if ( not_empty_list ( atmp20 ) ) {
if ( term_equal ( ( * ef5 ) ( tmp [ 0 ] ) , ( constant0 ? constant0 : ( constant0 = ( * ef6 ) ( ) ) ) ) ) {
if ( term_equal ( ( * ef7 ) ( tmp [ 0 ] ) , ltmp [ 0 ] ) ) {
( tmp [ 2 ] = ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( ltmp [ 5 ] ) ) ) ) ;
( tmp [ 3 ] = ( * ef11 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , ( * ef12 ) ( lf6 ( make_list ( ( * ef13 ) ( tmp [ 0 ] , tmp [ 2 ] ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef14sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf_AUX_MuASF_Conds2C9_2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
( tmp [ 6 ] = lf_AUX_MuASF_Conds2C9_4 ( ltmp [ 0 ] , lf_AUX_MuASF_Conds2C9_1 ( make_list ( tmp [ 1 ] ) ) , lf_AUX_MuASF_Conds2C9_2 ( make_list ( tmp [ 5 ] ) ) , ltmp [ 3 ] , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ( * ef15 ) ( ltmp [ 5 ] ) ) ) ;
if ( check_sym ( tmp [ 6 ] , ef4sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
( tmp [ 8 ] = arg_1 ( tmp [ 6 ] ) ) ;
( tmp [ 9 ] = arg_2 ( tmp [ 6 ] ) ) ;
( tmp [ 10 ] = ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef18 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 14 , char_table [ 110 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 112 ] , char_table [ 116 ] , char_table [ 121 ] , char_table [ 95 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) , ( * ef23 ) ( ( * ef24 ) ( ) , ( * ef25 ) ( ( * ef16 ) ( ( * ef17 ) ( lf7 ( cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 2 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 104 ] , char_table [ 101 ] , char_table [ 97 ] , char_table [ 100 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) , make_list ( ( * ef26 ) ( ( * ef27 ) ( ltmp [ 3 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 116 ] , char_table [ 97 ] , char_table [ 105 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) ) ) ) ) , tmp [ 8 ] ) ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef4 ) ( tmp [ 7 ] , tmp [ 10 ] , tmp [ 9 ] ) ) ;
}
}
}
}
}
}
if ( check_sym ( tmp [ 0 ] , ef31sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( term_equal ( ( * ef32 ) ( ( * ef31 ) ( tmp [ 2 ] ) ) , ltmp [ 0 ] ) ) {
( tmp [ 3 ] = ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( ltmp [ 5 ] ) ) ) ) ;
( tmp [ 4 ] = ( * ef33 ) ( tmp [ 2 ] , tmp [ 3 ] , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) ) ) ;
( tmp [ 5 ] = lf_AUX_MuASF_Conds2C9_4 ( ltmp [ 0 ] , lf_AUX_MuASF_Conds2C9_1 ( make_list ( tmp [ 1 ] ) ) , lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , ltmp [ 3 ] , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ( * ef15 ) ( ltmp [ 5 ] ) ) ) ;
if ( check_sym ( tmp [ 5 ] , ef4sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
( tmp [ 7 ] = arg_1 ( tmp [ 5 ] ) ) ;
( tmp [ 8 ] = arg_2 ( tmp [ 5 ] ) ) ;
( tmp [ 9 ] = ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef18 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 14 , char_table [ 110 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 112 ] , char_table [ 116 ] , char_table [ 121 ] , char_table [ 95 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) , ( * ef23 ) ( ( * ef24 ) ( ) , ( * ef25 ) ( ( * ef16 ) ( ( * ef17 ) ( lf7 ( cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 3 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 104 ] , char_table [ 101 ] , char_table [ 97 ] , char_table [ 100 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) , make_list ( ( * ef26 ) ( ( * ef27 ) ( ltmp [ 3 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 116 ] , char_table [ 97 ] , char_table [ 105 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) ) ) ) ) , ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef18 ) ( tmp [ 4 ] , ( * ef23 ) ( ( * ef24 ) ( ) , tmp [ 7 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef4 ) ( tmp [ 6 ] , tmp [ 9 ] , tmp [ 8 ] ) ) ;
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
if ( check_sym ( ltmp [ 0 ] , ef6sym ) ) {
if ( check_sym ( ltmp [ 1 ] , lf_AUX_MuASF_Conds2C9_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( ltmp [ 2 ] , lf_AUX_MuASF_Conds2C9_2sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
if ( check_sym ( ltmp [ 4 ] , lf_AUX_MuASF_Conds2C9_3sym ) ) {
{
ATerm atmp40 = arg_0 ( arg4 ) ;
if ( not_empty_list ( atmp10 ) ) {
( tmp [ 0 ] = list_head ( atmp10 ) ) ;
{
( tmp [ 1 ] = list_tail ( atmp10 ) ) ;
{
if ( not_empty_list ( tmp [ 1 ] ) ) {
if ( not_empty_list ( atmp20 ) ) {
if ( term_equal ( ( * ef5 ) ( tmp [ 0 ] ) , ltmp [ 0 ] ) ) {
if ( term_equal ( ( * ef7 ) ( tmp [ 0 ] ) , ( constant1 ? constant1 : ( constant1 = ( * ef3 ) ( ) ) ) ) ) {
( tmp [ 2 ] = ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( ltmp [ 5 ] ) ) ) ) ;
( tmp [ 3 ] = ( * ef11 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , ( * ef12 ) ( lf6 ( make_list ( ( * ef13 ) ( tmp [ 0 ] , tmp [ 2 ] ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef14sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf_AUX_MuASF_Conds2C9_2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
( tmp [ 6 ] = lf_AUX_MuASF_Conds2C9_4 ( ( * ef3 ) ( ) , lf_AUX_MuASF_Conds2C9_1 ( make_list ( tmp [ 1 ] ) ) , lf_AUX_MuASF_Conds2C9_2 ( make_list ( tmp [ 5 ] ) ) , ltmp [ 3 ] , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ( * ef15 ) ( ltmp [ 5 ] ) ) ) ;
if ( check_sym ( tmp [ 6 ] , ef4sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
( tmp [ 8 ] = arg_1 ( tmp [ 6 ] ) ) ;
( tmp [ 9 ] = arg_2 ( tmp [ 6 ] ) ) ;
( tmp [ 10 ] = ( * ef25 ) ( ( * ef16 ) ( ( * ef17 ) ( lf7 ( cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 2 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 104 ] , char_table [ 101 ] , char_table [ 97 ] , char_table [ 100 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) , make_list ( ( * ef26 ) ( ( * ef27 ) ( ltmp [ 3 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 116 ] , char_table [ 97 ] , char_table [ 105 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) ) ) ) ) , tmp [ 8 ] ) ) ;
FUNC_EXIT ( ( * ef4 ) ( tmp [ 7 ] , tmp [ 10 ] , tmp [ 9 ] ) ) ;
}
}
}
}
}
}
if ( check_sym ( tmp [ 0 ] , ef31sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( term_equal ( ( * ef32 ) ( ( * ef31 ) ( tmp [ 2 ] ) ) , ( constant1 ? constant1 : ( constant1 = ( * ef3 ) ( ) ) ) ) ) {
( tmp [ 3 ] = ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( ltmp [ 5 ] ) ) ) ) ;
( tmp [ 4 ] = ( * ef33 ) ( tmp [ 2 ] , tmp [ 3 ] , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) ) ) ;
( tmp [ 5 ] = lf_AUX_MuASF_Conds2C9_4 ( ( * ef3 ) ( ) , lf_AUX_MuASF_Conds2C9_1 ( make_list ( tmp [ 1 ] ) ) , lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , ltmp [ 3 ] , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ( * ef15 ) ( ltmp [ 5 ] ) ) ) ;
if ( check_sym ( tmp [ 5 ] , ef4sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
( tmp [ 7 ] = arg_1 ( tmp [ 5 ] ) ) ;
( tmp [ 8 ] = arg_2 ( tmp [ 5 ] ) ) ;
( tmp [ 9 ] = ( * ef25 ) ( ( * ef16 ) ( ( * ef17 ) ( lf7 ( cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 3 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 104 ] , char_table [ 101 ] , char_table [ 97 ] , char_table [ 100 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) , make_list ( ( * ef26 ) ( ( * ef27 ) ( ltmp [ 3 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 116 ] , char_table [ 97 ] , char_table [ 105 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) ) ) ) ) , ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef18 ) ( tmp [ 4 ] , ( * ef23 ) ( ( * ef24 ) ( ) , tmp [ 7 ] ) ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef4 ) ( tmp [ 6 ] , tmp [ 9 ] , tmp [ 8 ] ) ) ;
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
if ( check_sym ( ltmp [ 1 ] , lf_AUX_MuASF_Conds2C9_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( ltmp [ 2 ] , lf_AUX_MuASF_Conds2C9_2sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
if ( check_sym ( ltmp [ 4 ] , lf_AUX_MuASF_Conds2C9_3sym ) ) {
{
ATerm atmp40 = arg_0 ( arg4 ) ;
if ( is_single_element ( atmp10 ) ) {
( tmp [ 0 ] = list_head ( atmp10 ) ) ;
{
if ( not_empty_list ( atmp20 ) ) {
( tmp [ 1 ] = list_head ( atmp20 ) ) ;
( tmp [ 2 ] = list_tail ( atmp20 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef1sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 4 ] = arg_1 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , ef2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 5 ] , lf5sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf_AUX_MuASF_Conds2C9_1sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( not_empty_list ( tmp [ 6 ] ) ) {
if ( term_equal ( list_head ( tmp [ 6 ] ) , make_char ( 99 ) ) ) {
( tmp [ 8 ] = list_tail ( tmp [ 6 ] ) ) ;
if ( not_empty_list ( tmp [ 8 ] ) ) {
if ( term_equal ( list_head ( tmp [ 8 ] ) , make_char ( 111 ) ) ) {
( tmp [ 9 ] = list_tail ( tmp [ 8 ] ) ) ;
if ( not_empty_list ( tmp [ 9 ] ) ) {
if ( term_equal ( list_head ( tmp [ 9 ] ) , make_char ( 110 ) ) ) {
( tmp [ 10 ] = list_tail ( tmp [ 9 ] ) ) ;
if ( is_single_element ( tmp [ 10 ] ) ) {
if ( term_equal ( list_head ( tmp [ 10 ] ) , make_char ( 115 ) ) ) {
if ( not_empty_list ( tmp [ 7 ] ) ) {
( tmp [ 11 ] = list_head ( tmp [ 7 ] ) ) ;
( tmp [ 12 ] = list_tail ( tmp [ 7 ] ) ) ;
if ( is_single_element ( tmp [ 12 ] ) ) {
( tmp [ 13 ] = list_head ( tmp [ 12 ] ) ) ;
( arg1 = lf_AUX_MuASF_Conds2C9_1 ( cons ( make_list ( tmp [ 11 ] ) , make_list ( tmp [ 13 ] ) ) ) ) ;
( arg2 = lf_AUX_MuASF_Conds2C9_2 ( cons ( make_list ( tmp [ 1 ] ) , make_list ( tmp [ 2 ] ) ) ) ) ;
( arg4 = lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) ) ;
goto lbl_lf_AUX_MuASF_Conds2C9_4 ;
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
( tmp [ 1 ] = ( * ef5 ) ( tmp [ 0 ] ) ) ;
if ( term_equal ( tmp [ 1 ] , ( constant0 ? constant0 : ( constant0 = ( * ef6 ) ( ) ) ) ) ) {
( tmp [ 2 ] = ( * ef6 ) ( ) ) ;
if ( term_equal ( ( * ef30 ) ( tmp [ 0 ] ) , tmp [ 2 ] ) ) {
( tmp [ 3 ] = ( * ef11 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , ( * ef12 ) ( lf6 ( make_list ( ( * ef13 ) ( tmp [ 0 ] , ltmp [ 3 ] ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef14sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf_AUX_MuASF_Conds2C9_2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
( tmp [ 6 ] = ( * ef34 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( tmp [ 5 ] ) ) , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ltmp [ 5 ] ) ) ;
if ( check_sym ( tmp [ 6 ] , ef35sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
( tmp [ 8 ] = arg_1 ( tmp [ 6 ] ) ) ;
( tmp [ 9 ] = ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef18 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 14 , char_table [ 110 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 112 ] , char_table [ 116 ] , char_table [ 121 ] , char_table [ 95 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) , ( * ef23 ) ( ( * ef24 ) ( ) , tmp [ 7 ] ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef4 ) ( ( * ef24 ) ( ) , tmp [ 9 ] , tmp [ 8 ] ) ) ;
}
}
}
}
}
if ( term_equal ( ( * ef28 ) ( tmp [ 0 ] ) , tmp [ 2 ] ) ) {
( tmp [ 3 ] = ( * ef11 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , ( * ef12 ) ( lf6 ( make_list ( ( * ef13 ) ( tmp [ 0 ] , ltmp [ 3 ] ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef14sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf_AUX_MuASF_Conds2C9_2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
( tmp [ 6 ] = ( * ef34 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( tmp [ 5 ] ) ) , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ltmp [ 5 ] ) ) ;
if ( check_sym ( tmp [ 6 ] , ef35sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
( tmp [ 8 ] = arg_1 ( tmp [ 6 ] ) ) ;
FUNC_EXIT ( ( * ef4 ) ( ( * ef24 ) ( ) , tmp [ 7 ] , tmp [ 8 ] ) ) ;
}
}
}
}
}
if ( term_equal ( ( * ef7 ) ( tmp [ 0 ] ) , ( constant1 ? constant1 : ( constant1 = ( * ef3 ) ( ) ) ) ) ) {
( tmp [ 3 ] = ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( ltmp [ 5 ] ) ) ) ) ;
( tmp [ 4 ] = ( * ef11 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , ( * ef12 ) ( lf6 ( make_list ( ( * ef13 ) ( tmp [ 0 ] , tmp [ 3 ] ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 4 ] , ef14sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
if ( check_sym ( tmp [ 5 ] , lf_AUX_MuASF_Conds2C9_2sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
if ( not_empty_list ( tmp [ 6 ] ) ) {
( tmp [ 7 ] = ( * ef34 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( tmp [ 6 ] ) ) , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ( * ef15 ) ( ltmp [ 5 ] ) ) ) ;
if ( check_sym ( tmp [ 7 ] , ef35sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
( tmp [ 9 ] = arg_1 ( tmp [ 7 ] ) ) ;
( tmp [ 10 ] = ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef18 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 17 , char_table [ 105 ] , char_table [ 115 ] , char_table [ 95 ] , char_table [ 115 ] , char_table [ 105 ] , char_table [ 110 ] , char_table [ 103 ] , char_table [ 108 ] , char_table [ 101 ] , char_table [ 95 ] , char_table [ 101 ] , char_table [ 108 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 101 ] , char_table [ 110 ] , char_table [ 116 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) , ( * ef23 ) ( ( * ef24 ) ( ) , ( * ef25 ) ( ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 3 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 104 ] , char_table [ 101 ] , char_table [ 97 ] , char_table [ 100 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) ) ) ) , tmp [ 8 ] ) ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef4 ) ( ( * ef24 ) ( ) , tmp [ 10 ] , tmp [ 9 ] ) ) ;
}
}
}
}
}
}
{
if ( check_sym ( tmp [ 0 ] , ef31sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( ! term_equal ( tmp [ 2 ] , ( * ef2 ) ( lf5 ( cons ( make_list ( make_char ( 110 ) ) , cons ( make_list ( make_char ( 117 ) ) , cons ( make_list ( make_char ( 108 ) ) , make_list ( make_char ( 108 ) ) ) ) ) ) ) ) ) {
( tmp [ 3 ] = ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( ltmp [ 5 ] ) ) ) ) ;
( tmp [ 4 ] = ( * ef33 ) ( tmp [ 2 ] , tmp [ 3 ] , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) ) ) ;
( tmp [ 5 ] = ( * ef34 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ( * ef15 ) ( ltmp [ 5 ] ) ) ) ;
if ( check_sym ( tmp [ 5 ] , ef35sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
( tmp [ 7 ] = arg_1 ( tmp [ 5 ] ) ) ;
( tmp [ 8 ] = ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef18 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 17 , char_table [ 105 ] , char_table [ 115 ] , char_table [ 95 ] , char_table [ 115 ] , char_table [ 105 ] , char_table [ 110 ] , char_table [ 103 ] , char_table [ 108 ] , char_table [ 101 ] , char_table [ 95 ] , char_table [ 101 ] , char_table [ 108 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 101 ] , char_table [ 110 ] , char_table [ 116 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) , ( * ef23 ) ( ( * ef24 ) ( ) , ( * ef25 ) ( ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 3 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 104 ] , char_table [ 101 ] , char_table [ 97 ] , char_table [ 100 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) ) ) ) , ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef18 ) ( tmp [ 4 ] , ( * ef23 ) ( ( * ef24 ) ( ) , tmp [ 6 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef4 ) ( ( * ef24 ) ( ) , tmp [ 8 ] , tmp [ 7 ] ) ) ;
}
}
if ( check_sym ( tmp [ 2 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf5sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( not_empty_list ( tmp [ 4 ] ) ) {
if ( term_equal ( list_head ( tmp [ 4 ] ) , make_char ( 110 ) ) ) {
( tmp [ 5 ] = list_tail ( tmp [ 4 ] ) ) ;
if ( not_empty_list ( tmp [ 5 ] ) ) {
if ( term_equal ( list_head ( tmp [ 5 ] ) , make_char ( 117 ) ) ) {
( tmp [ 6 ] = list_tail ( tmp [ 5 ] ) ) ;
if ( not_empty_list ( tmp [ 6 ] ) ) {
if ( term_equal ( list_head ( tmp [ 6 ] ) , make_char ( 108 ) ) ) {
( tmp [ 7 ] = list_tail ( tmp [ 6 ] ) ) ;
if ( is_single_element ( tmp [ 7 ] ) ) {
if ( term_equal ( list_head ( tmp [ 7 ] ) , make_char ( 108 ) ) ) {
( tmp [ 8 ] = ( * ef34 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ltmp [ 5 ] ) ) ;
if ( check_sym ( tmp [ 8 ] , ef35sym ) ) {
( tmp [ 9 ] = arg_0 ( tmp [ 8 ] ) ) ;
( tmp [ 10 ] = arg_1 ( tmp [ 8 ] ) ) ;
( tmp [ 11 ] = ( * ef16 ) ( ( * ef17 ) ( lf7 ( make_list ( ( * ef18 ) ( ( * ef36 ) ( ( * ef37 ) ( ) , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 14 , char_table [ 110 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 112 ] , char_table [ 116 ] , char_table [ 121 ] , char_table [ 95 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) , ( * ef23 ) ( ( * ef24 ) ( ) , tmp [ 9 ] ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef4 ) ( ( * ef24 ) ( ) , tmp [ 11 ] , tmp [ 10 ] ) ) ;
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
{
if ( not_empty_list ( atmp10 ) ) {
( tmp [ 0 ] = list_head ( atmp10 ) ) ;
{
( tmp [ 1 ] = list_tail ( atmp10 ) ) ;
{
if ( not_empty_list ( tmp [ 1 ] ) ) {
if ( not_empty_list ( atmp20 ) ) {
( tmp [ 2 ] = ( * ef5 ) ( tmp [ 0 ] ) ) ;
if ( term_equal ( tmp [ 2 ] , ( constant0 ? constant0 : ( constant0 = ( * ef6 ) ( ) ) ) ) ) {
( tmp [ 3 ] = ( * ef6 ) ( ) ) ;
if ( term_equal ( ( * ef30 ) ( tmp [ 0 ] ) , tmp [ 3 ] ) ) {
( tmp [ 4 ] = ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( ltmp [ 5 ] ) ) ) ) ;
( tmp [ 5 ] = ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( ( * ef15 ) ( ltmp [ 5 ] ) ) ) ) ) ;
( tmp [ 6 ] = ( * ef11 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , ( * ef12 ) ( lf6 ( make_list ( ( * ef13 ) ( tmp [ 0 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 5 , char_table [ 115 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 99 ] , char_table [ 101 ] ) ) ) ) , ( * ef22 ) ( lf8 ( cons ( make_list ( tmp [ 4 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 6 ] , ef14sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
if ( check_sym ( tmp [ 7 ] , lf_AUX_MuASF_Conds2C9_2sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
if ( not_empty_list ( tmp [ 8 ] ) ) {
( tmp [ 9 ] = lf_AUX_MuASF_Conds2C9_4 ( ( * ef6 ) ( ) , lf_AUX_MuASF_Conds2C9_1 ( make_list ( tmp [ 1 ] ) ) , lf_AUX_MuASF_Conds2C9_2 ( make_list ( tmp [ 8 ] ) ) , ltmp [ 3 ] , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ( * ef15 ) ( ( * ef15 ) ( ltmp [ 5 ] ) ) ) ) ;
if ( check_sym ( tmp [ 9 ] , ef4sym ) ) {
( tmp [ 10 ] = arg_0 ( tmp [ 9 ] ) ) ;
( tmp [ 11 ] = arg_1 ( tmp [ 9 ] ) ) ;
( tmp [ 12 ] = arg_2 ( tmp [ 9 ] ) ) ;
( tmp [ 13 ] = ( * ef16 ) ( ( * ef17 ) ( lf7 ( cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 4 ] , ltmp [ 3 ] ) ) ) , make_list ( ( * ef18 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 14 , char_table [ 110 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 112 ] , char_table [ 116 ] , char_table [ 121 ] , char_table [ 95 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) , ( * ef23 ) ( ( * ef24 ) ( ) , ( * ef16 ) ( ( * ef17 ) ( lf7 ( cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( ltmp [ 3 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 116 ] , char_table [ 97 ] , char_table [ 105 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) ) ) ) , cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 5 ] , ltmp [ 3 ] ) ) ) , make_list ( ( * ef29 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 14 , char_table [ 110 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 112 ] , char_table [ 116 ] , char_table [ 121 ] , char_table [ 95 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) , ( * ef23 ) ( ( * ef24 ) ( ) , ( * ef25 ) ( tmp [ 11 ] , ( * ef16 ) ( ( * ef17 ) ( lf7 ( cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 5 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 116 ] , char_table [ 97 ] , char_table [ 105 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( tmp [ 5 ] ) ) ) ) ) ) ) ) ) , make_list ( ( * ef26 ) ( ( * ef27 ) ( ltmp [ 3 ] , tmp [ 5 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef4 ) ( tmp [ 10 ] , tmp [ 13 ] , tmp [ 12 ] ) ) ;
}
}
}
}
}
if ( term_equal ( ( * ef28 ) ( tmp [ 0 ] ) , tmp [ 3 ] ) ) {
( tmp [ 4 ] = ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( ltmp [ 5 ] ) ) ) ) ;
( tmp [ 5 ] = ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( ( * ef15 ) ( ltmp [ 5 ] ) ) ) ) ) ;
( tmp [ 6 ] = ( * ef11 ) ( lf_AUX_MuASF_Conds2C9_2 ( make_list ( atmp20 ) ) , ( * ef12 ) ( lf6 ( make_list ( ( * ef13 ) ( tmp [ 0 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 5 , char_table [ 115 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 99 ] , char_table [ 101 ] ) ) ) ) , ( * ef22 ) ( lf8 ( cons ( make_list ( tmp [ 4 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 6 ] , ef14sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
if ( check_sym ( tmp [ 7 ] , lf_AUX_MuASF_Conds2C9_2sym ) ) {
( tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ) ;
if ( not_empty_list ( tmp [ 8 ] ) ) {
( tmp [ 9 ] = lf_AUX_MuASF_Conds2C9_4 ( ( * ef6 ) ( ) , lf_AUX_MuASF_Conds2C9_1 ( make_list ( tmp [ 1 ] ) ) , lf_AUX_MuASF_Conds2C9_2 ( make_list ( tmp [ 8 ] ) ) , ltmp [ 3 ] , lf_AUX_MuASF_Conds2C9_3 ( make_list ( atmp40 ) ) , ( * ef15 ) ( ( * ef15 ) ( ltmp [ 5 ] ) ) ) ) ;
if ( check_sym ( tmp [ 9 ] , ef4sym ) ) {
( tmp [ 10 ] = arg_0 ( tmp [ 9 ] ) ) ;
( tmp [ 11 ] = arg_1 ( tmp [ 9 ] ) ) ;
( tmp [ 12 ] = arg_2 ( tmp [ 9 ] ) ) ;
( tmp [ 13 ] = ( * ef16 ) ( ( * ef17 ) ( lf7 ( cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 4 ] , ltmp [ 3 ] ) ) ) , cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 5 ] , ltmp [ 3 ] ) ) ) , make_list ( ( * ef29 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 14 , char_table [ 110 ] , char_table [ 111 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 112 ] , char_table [ 116 ] , char_table [ 121 ] , char_table [ 95 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( ltmp [ 3 ] ) ) ) ) ) ) , ( * ef23 ) ( ( * ef24 ) ( ) , ( * ef25 ) ( tmp [ 11 ] , ( * ef16 ) ( ( * ef17 ) ( lf7 ( cons ( make_list ( ( * ef26 ) ( ( * ef27 ) ( tmp [ 5 ] , ( * ef8 ) ( ( * ef9 ) ( ( * ef19 ) ( ( * ef20 ) ( ( * ef21 ) ( lf5 ( ( ATerm ) ATmakeList ( 9 , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 116 ] , char_table [ 97 ] , char_table [ 105 ] , char_table [ 108 ] ) ) ) ) , ( * ef22 ) ( lf8 ( make_list ( tmp [ 5 ] ) ) ) ) ) ) ) ) ) , make_list ( ( * ef26 ) ( ( * ef27 ) ( ltmp [ 3 ] , tmp [ 5 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
FUNC_EXIT ( ( * ef4 ) ( tmp [ 10 ] , tmp [ 13 ] , tmp [ 12 ] ) ) ;
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
FUNC_EXIT ( make_nf6 ( lf_AUX_MuASF_Conds2C9_4sym , ltmp [ 0 ] , ltmp [ 1 ] , ltmp [ 2 ] , ltmp [ 3 ] , ltmp [ 4 ] , ltmp [ 5 ] ) ) ;
}
}
}
ATerm lf8 ( ATerm arg0 ) {
CONS_ENTRY ( lf8sym , ATmakeAppl ( lf8sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf8sym , arg0 ) ) ;
}
ATerm lf5 ( ATerm arg0 ) {
CONS_ENTRY ( lf5sym , ATmakeAppl ( lf5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf5sym , arg0 ) ) ;
}
ATerm lf7 ( ATerm arg0 ) {
CONS_ENTRY ( lf7sym , ATmakeAppl ( lf7sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf7sym , arg0 ) ) ;
}
ATerm lf_AUX_MuASF_Conds2C9_3 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Conds2C9_3sym , ATmakeAppl ( lf_AUX_MuASF_Conds2C9_3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Conds2C9_3sym , arg0 ) ) ;
}
ATerm lf_AUX_MuASF_Conds2C9_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Conds2C9_2sym , ATmakeAppl ( lf_AUX_MuASF_Conds2C9_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Conds2C9_2sym , arg0 ) ) ;
}
ATerm lf_AUX_MuASF_Conds2C9_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_MuASF_Conds2C9_1sym , ATmakeAppl ( lf_AUX_MuASF_Conds2C9_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_MuASF_Conds2C9_1sym , arg0 ) ) ;
}
ATerm lf6 ( ATerm arg0 ) {
CONS_ENTRY ( lf6sym , ATmakeAppl ( lf6sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf6sym , arg0 ) ) ;
}

