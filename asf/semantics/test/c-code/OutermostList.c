/* This C code is generated by the asf compiler version 2.2 */

#include  "asc-support-me.h"
static Symbol lf_list_1sym ;
static ATerm lf_list_1 ( ATerm arg1 ) ;
void register_OutermostList ( ) {
lf_list_1sym = ATmakeSymbol ( "list(cf(iter-star(sort(\"ID\"))))"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_list_1sym ) ;
register_prod ( ATparse ( "list(cf(iter-star(sort(\"ID\"))))" ) , lf_list_1 , lf_list_1sym ) ;
}
void resolve_OutermostList ( ) {
}
void init_OutermostList ( ) {
}
ATerm lf_list_1 ( ATerm arg0 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_list_1sym , ATmakeAppl ( lf_list_1sym , arg0 ) ) ;
{
ATerm ltmp [ 1 ] ;
lbl_lf_list_1 : ltmp [ 0 ] = arg0 ;
( tmp [ 0 ] = ltmp [ 0 ] ) ;
{
ATerm atmp01110 ;
ATerm atmp0110 [ 2 ] ;
ATerm atmp010 ;
ATerm atmp00 [ 2 ] ;
( atmp00 [ 0 ] = tmp [ 0 ] ) ;
( atmp00 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
( atmp010 = list_head ( tmp [ 0 ] ) ) ;
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
( atmp0110 [ 0 ] = tmp [ 0 ] ) ;
( atmp0110 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
( atmp01110 = list_head ( tmp [ 0 ] ) ) ;
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
if ( term_equal ( atmp010 , atmp01110 ) ) {
( arg0 = cons ( slice ( atmp00 [ 0 ] , atmp00 [ 1 ] ) , cons ( make_list ( atmp010 ) , cons ( slice ( atmp0110 [ 0 ] , atmp0110 [ 1 ] ) , tmp [ 0 ] ) ) ) ) ;
goto lbl_lf_list_1 ;
}
( atmp0110 [ 1 ] = list_tail ( atmp0110 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp0110 [ 1 ] ) ;
}
( atmp00 [ 1 ] = list_tail ( atmp00 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp00 [ 1 ] ) ;
}
}
FUNC_EXIT ( make_nf1 ( lf_list_1sym , ltmp [ 0 ] ) ) ;
}
}
}
#ifdef ASF_MAIN                                           
int main(int argc, char *argv[])                         
{                                                        
  return asc_support_main(argc, argv,                    
                          register_OutermostList,                   
                          resolve_OutermostList,                    
                          init_OutermostList);                      
}                                                        
#endif                                                   

