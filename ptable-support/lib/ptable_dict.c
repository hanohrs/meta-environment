#include "ptable_dict.h"

AFun PTBL_afun4;
AFun PTBL_afun5;
AFun PTBL_afun2;
AFun PTBL_afun3;
AFun PTBL_afun0;
AFun PTBL_afun1;
AFun PTBL_afun13;
AFun PTBL_afun8;
AFun PTBL_afun9;
AFun PTBL_afun6;
AFun PTBL_afun7;
AFun PTBL_afun10;
AFun PTBL_afun11;
AFun PTBL_afun12;


/*
 * PTBL_afun4 = state-rec(x,x,x)
 * PTBL_afun5 = goto(x,x)
 * PTBL_afun2 = priorities(x)
 * PTBL_afun3 = label(x,x)
 * PTBL_afun0 = parse-table(x,x,x,x,x)
 * PTBL_afun1 = states(x)
 * PTBL_afun13 = arg-gtr-prio(x,x,x)
 * PTBL_afun8 = reduce(x,x,x,x)
 * PTBL_afun9 = shift(x)
 * PTBL_afun6 = action(x,x)
 * PTBL_afun7 = reduce(x,x,x)
 * PTBL_afun10 = accept
 * PTBL_afun11 = follow-restriction(x)
 * PTBL_afun12 = gtr-prio(x,x)
 *
 *
 */

static ATerm _ptable_dict = NULL;

#define _ptable_dict_LEN 300

static char _ptable_dict_baf[_ptable_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x11,0x20,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x10,
0x10,0x00,0x01,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
0x10,0x02,0x00,0x01,0x02,0x5B,0x5D,0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,0x09,
0x73,0x74,0x61,0x74,0x65,0x2D,0x72,0x65,0x63,0x03,0x00,0x01,0x01,0x02,0x01,0x02,
0x01,0x02,0x04,0x67,0x6F,0x74,0x6F,0x02,0x00,0x01,0x01,0x02,0x01,0x02,0x0A,0x70,
0x72,0x69,0x6F,0x72,0x69,0x74,0x69,0x65,0x73,0x01,0x00,0x01,0x01,0x02,0x05,0x6C,
0x61,0x62,0x65,0x6C,0x02,0x00,0x01,0x01,0x02,0x01,0x02,0x0B,0x70,0x61,0x72,0x73,
0x65,0x2D,0x74,0x61,0x62,0x6C,0x65,0x05,0x00,0x01,0x01,0x02,0x01,0x02,0x01,0x02,
0x01,0x02,0x01,0x02,0x06,0x73,0x74,0x61,0x74,0x65,0x73,0x01,0x00,0x01,0x01,0x02,
0x0C,0x61,0x72,0x67,0x2D,0x67,0x74,0x72,0x2D,0x70,0x72,0x69,0x6F,0x03,0x00,0x01,
0x01,0x02,0x01,0x02,0x01,0x02,0x06,0x72,0x65,0x64,0x75,0x63,0x65,0x04,0x00,0x01,
0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x05,0x73,0x68,0x69,0x66,0x74,0x01,0x00,
0x01,0x01,0x02,0x06,0x61,0x63,0x74,0x69,0x6F,0x6E,0x02,0x00,0x01,0x01,0x02,0x01,
0x02,0x06,0x72,0x65,0x64,0x75,0x63,0x65,0x03,0x00,0x01,0x01,0x02,0x01,0x02,0x01,
0x02,0x06,0x61,0x63,0x63,0x65,0x70,0x74,0x00,0x00,0x01,0x12,0x66,0x6F,0x6C,0x6C,
0x6F,0x77,0x2D,0x72,0x65,0x73,0x74,0x72,0x69,0x63,0x74,0x69,0x6F,0x6E,0x01,0x00,
0x01,0x01,0x02,0x08,0x67,0x74,0x72,0x2D,0x70,0x72,0x69,0x6F,0x02,0x00,0x01,0x01,
0x02,0x01,0x02,0x00,0x05,0x90,0x1B,0x06,0x88,0x2A,0x84,0x98,0x0B,0x87,0x04,0x32,
0x45,0x14,0x13,0x46,0x0C,0x22,0xC4,0x1C,0x03,0xD0,0xE8,0x40
};

void init_ptable_dict()
{
  ATermList afuns, terms;

  _ptable_dict = ATreadFromBinaryString(_ptable_dict_baf, _ptable_dict_LEN);

  ATprotect(&_ptable_dict);

  afuns = (ATermList)ATelementAt((ATermList)_ptable_dict, 0);

  PTBL_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PTBL_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_ptable_dict, 1);

}
