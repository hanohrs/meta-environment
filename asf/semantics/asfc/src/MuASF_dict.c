#include "MuASF_dict.h"

AFun MA_afun121;
AFun MA_afun3;
AFun MA_afun78;
AFun MA_afun48;
AFun MA_afun59;
AFun MA_afun99;
AFun MA_afun2;
AFun MA_afun47;
AFun MA_afun104;
AFun MA_afun80;
AFun MA_afun42;
AFun MA_afun75;
AFun MA_afun15;
AFun MA_afun86;
AFun MA_afun31;
AFun MA_afun43;
AFun MA_afun128;
AFun MA_afun103;
AFun MA_afun0;
AFun MA_afun84;
AFun MA_afun98;
AFun MA_afun33;
AFun MA_afun10;
AFun MA_afun13;
AFun MA_afun119;
AFun MA_afun74;
AFun MA_afun14;
AFun MA_afun40;
AFun MA_afun82;
AFun MA_afun30;
AFun MA_afun123;
AFun MA_afun101;
AFun MA_afun60;
AFun MA_afun7;
AFun MA_afun58;
AFun MA_afun79;
AFun MA_afun100;
AFun MA_afun81;
AFun MA_afun122;
AFun MA_afun29;
AFun MA_afun1;
AFun MA_afun6;
AFun MA_afun83;
AFun MA_afun61;
AFun MA_afun97;
AFun MA_afun50;
AFun MA_afun44;
AFun MA_afun102;
AFun MA_afun112;
AFun MA_afun73;
AFun MA_afun9;
AFun MA_afun107;
AFun MA_afun88;
AFun MA_afun51;
AFun MA_afun56;
AFun MA_afun85;
AFun MA_afun127;
AFun MA_afun12;
AFun MA_afun91;
AFun MA_afun64;
AFun MA_afun8;
AFun MA_afun28;
AFun MA_afun32;
AFun MA_afun106;
AFun MA_afun76;
AFun MA_afun90;
AFun MA_afun11;
AFun MA_afun62;
AFun MA_afun27;
AFun MA_afun120;
AFun MA_afun55;
AFun MA_afun108;
AFun MA_afun49;
AFun MA_afun116;
AFun MA_afun109;
AFun MA_afun36;
AFun MA_afun111;
AFun MA_afun17;
AFun MA_afun110;
AFun MA_afun92;
AFun MA_afun34;
AFun MA_afun63;
AFun MA_afun19;
AFun MA_afun26;
AFun MA_afun37;
AFun MA_afun105;
AFun MA_afun115;
AFun MA_afun25;
AFun MA_afun18;
AFun MA_afun114;
AFun MA_afun69;
AFun MA_afun54;
AFun MA_afun87;
AFun MA_afun38;
AFun MA_afun16;
AFun MA_afun77;
AFun MA_afun52;
AFun MA_afun96;
AFun MA_afun57;
AFun MA_afun35;
AFun MA_afun39;
AFun MA_afun72;
AFun MA_afun117;
AFun MA_afun22;
AFun MA_afun118;
AFun MA_afun66;
AFun MA_afun124;
AFun MA_afun129;
AFun MA_afun94;
AFun MA_afun41;
AFun MA_afun126;
AFun MA_afun53;
AFun MA_afun70;
AFun MA_afun20;
AFun MA_afun21;
AFun MA_afun65;
AFun MA_afun5;
AFun MA_afun113;
AFun MA_afun93;
AFun MA_afun89;
AFun MA_afun95;
AFun MA_afun67;
AFun MA_afun4;
AFun MA_afun23;
AFun MA_afun71;
AFun MA_afun45;
AFun MA_afun68;
AFun MA_afun125;
AFun MA_afun24;
AFun MA_afun46;


/*
 * MA_afun121 = "\\\""
 * MA_afun3 = opt(x)
 * MA_afun78 = "constant-no-annos"
 * MA_afun48 = assoc(x)
 * MA_afun59 = "ModId"
 * MA_afun99 = "assign"
 * MA_afun2 = cf(x)
 * MA_afun47 = "concat"
 * MA_afun104 = "!="
 * MA_afun80 = "constant-with-annos"
 * MA_afun42 = "translate"
 * MA_afun75 = "*"
 * MA_afun15 = cons(x)
 * MA_afun86 = "="
 * MA_afun31 = "StrCon"
 * MA_afun43 = "|"
 * MA_afun128 = "default"
 * MA_afun103 = "equal"
 * MA_afun0 = appl(x,x)
 * MA_afun84 = ";"
 * MA_afun98 = "=:"
 * MA_afun33 = "]"
 * MA_afun10 = "bottom-up"
 * MA_afun13 = attrs(x)
 * MA_afun119 = "\\t"
 * MA_afun74 = "SigArg"
 * MA_afun14 = term(x)
 * MA_afun40 = "ignored"
 * MA_afun82 = "func-with-annos"
 * MA_afun30 = "unquoted"
 * MA_afun123 = "\\\\"
 * MA_afun101 = "no-assign"
 * MA_afun60 = "Term"
 * MA_afun7 = iter(x)
 * MA_afun58 = "star"
 * MA_afun79 = "Annotations"
 * MA_afun100 = "=:!"
 * MA_afun81 = "func-no-annos"
 * MA_afun122 = "quote"
 * MA_afun29 = avoid
 * MA_afun1 = prod(x,x,x)
 * MA_afun6 = lex(x)
 * MA_afun83 = "SigArgList"
 * MA_afun61 = "var"
 * MA_afun97 = "&"
 * MA_afun50 = "+-+"
 * MA_afun44 = "traversal"
 * MA_afun102 = "=="
 * MA_afun112 = "module"
 * MA_afun73 = "_"
 * MA_afun9 = lit(x)
 * MA_afun107 = "absent"
 * MA_afun88 = "no-conds"
 * MA_afun51 = "concat-dash"
 * MA_afun56 = "plus"
 * MA_afun85 = "FuncDefList"
 * MA_afun127 = iter-star(x)
 * MA_afun12 = "TraversalStrategy"
 * MA_afun91 = "==>"
 * MA_afun64 = iter-sep(x,x)
 * MA_afun8 = list(x)
 * MA_afun28 = "IdCon"
 * MA_afun32 = "quoted"
 * MA_afun106 = "SignatureOpt"
 * MA_afun76 = "+"
 * MA_afun90 = "default-no-conds"
 * MA_afun11 = sort(x)
 * MA_afun62 = "constant"
 * MA_afun27 = "character"
 * MA_afun120 = "tab"
 * MA_afun55 = "$+"
 * MA_afun108 = "signature"
 * MA_afun49 = left
 * MA_afun116 = "\\n"
 * MA_afun109 = "present"
 * MA_afun36 = "}"
 * MA_afun111 = "rules"
 * MA_afun17 = "top-down"
 * MA_afun110 = "RulesOpt"
 * MA_afun92 = "CondList"
 * MA_afun34 = "["
 * MA_afun63 = ")"
 * MA_afun19 = "TraversalType"
 * MA_afun26 = "FunId"
 * MA_afun37 = "{"
 * MA_afun105 = "unequal"
 * MA_afun115 = "whitespace"
 * MA_afun25 = "NatCon"
 * MA_afun18 = "trafo"
 * MA_afun114 = range(x,x)
 * MA_afun69 = ":"
 * MA_afun54 = "normal"
 * MA_afun87 = "Rule"
 * MA_afun38 = "list"
 * MA_afun16 = char-class(x)
 * MA_afun77 = "FuncDef"
 * MA_afun52 = "$"
 * MA_afun96 = "Cond"
 * MA_afun57 = "$*"
 * MA_afun35 = "returns-list"
 * MA_afun39 = "IGNORE"
 * MA_afun72 = iter-star-sep(x,x)
 * MA_afun117 = "StrChar"
 * MA_afun22 = "break"
 * MA_afun118 = "newline"
 * MA_afun66 = "("
 * MA_afun124 = "backslash"
 * MA_afun129 = "digits"
 * MA_afun94 = "default-with-conds"
 * MA_afun41 = "TRANSLATE"
 * MA_afun126 = "decimal"
 * MA_afun53 = "VarId"
 * MA_afun70 = "typed"
 * MA_afun20 = "accu"
 * MA_afun21 = "accutrafo"
 * MA_afun65 = ","
 * MA_afun5 = no-attrs
 * MA_afun113 = "Module"
 * MA_afun93 = "with-conds"
 * MA_afun89 = "default:"
 * MA_afun95 = "RuleList"
 * MA_afun67 = "func"
 * MA_afun4 = layout
 * MA_afun23 = "TraversalContinuation"
 * MA_afun71 = assoc
 * MA_afun45 = "++"
 * MA_afun68 = "TermList"
 * MA_afun125 = "\\"
 * MA_afun24 = "continue"
 * MA_afun46 = complete
 *
 *
 */

static ATerm _MuASF_dict = NULL;

#define _MuASF_dict_LEN 1826

static unsigned char _MuASF_dict_baf[_MuASF_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x80,0x85,0x81,0x08,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,
0x00,0x80,0x84,0x80,0x84,0x00,0x01,0x02,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,
0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,
0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,
0x2C,0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,
0x3C,0x3D,0x3E,0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,
0x4C,0x4D,0x4E,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5A,0x5B,
0x5C,0x5D,0x5E,0x5F,0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x6B,
0x6C,0x6D,0x6E,0x6F,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7A,0x7B,
0x7C,0x7D,0x7E,0x7F,0x80,0x80,0x80,0x81,0x80,0x82,0x80,0x83,0x80,0x84,0x02,0x00,
0x01,0x02,0x5B,0x5D,0x00,0x00,0x01,0x02,0x5C,0x22,0x00,0x01,0x01,0x01,0x78,0x00,
0x00,0x01,0x03,0x6F,0x70,0x74,0x01,0x00,0x01,0x01,0x03,0x11,0x63,0x6F,0x6E,0x73,
0x74,0x61,0x6E,0x74,0x2D,0x6E,0x6F,0x2D,0x61,0x6E,0x6E,0x6F,0x73,0x00,0x01,0x01,
0x05,0x61,0x73,0x73,0x6F,0x63,0x01,0x00,0x01,0x01,0x03,0x05,0x4D,0x6F,0x64,0x49,
0x64,0x00,0x01,0x01,0x06,0x61,0x73,0x73,0x69,0x67,0x6E,0x00,0x01,0x01,0x02,0x63,
0x66,0x01,0x00,0x01,0x01,0x03,0x06,0x63,0x6F,0x6E,0x63,0x61,0x74,0x00,0x01,0x01,
0x02,0x21,0x3D,0x00,0x01,0x01,0x13,0x63,0x6F,0x6E,0x73,0x74,0x61,0x6E,0x74,0x2D,
0x77,0x69,0x74,0x68,0x2D,0x61,0x6E,0x6E,0x6F,0x73,0x00,0x01,0x01,0x09,0x74,0x72,
0x61,0x6E,0x73,0x6C,0x61,0x74,0x65,0x00,0x01,0x01,0x01,0x2A,0x00,0x01,0x01,0x04,
0x63,0x6F,0x6E,0x73,0x01,0x00,0x01,0x01,0x03,0x01,0x3D,0x00,0x01,0x01,0x06,0x53,
0x74,0x72,0x43,0x6F,0x6E,0x00,0x01,0x01,0x01,0x7C,0x00,0x01,0x01,0x07,0x64,0x65,
0x66,0x61,0x75,0x6C,0x74,0x00,0x01,0x01,0x05,0x65,0x71,0x75,0x61,0x6C,0x00,0x01,
0x01,0x04,0x61,0x70,0x70,0x6C,0x02,0x00,0x01,0x01,0x03,0x01,0x03,0x01,0x3B,0x00,
0x01,0x01,0x02,0x3D,0x3A,0x00,0x01,0x01,0x01,0x5D,0x00,0x01,0x01,0x09,0x62,0x6F,
0x74,0x74,0x6F,0x6D,0x2D,0x75,0x70,0x00,0x01,0x01,0x05,0x61,0x74,0x74,0x72,0x73,
0x01,0x00,0x01,0x01,0x03,0x02,0x5C,0x74,0x00,0x01,0x01,0x06,0x53,0x69,0x67,0x41,
0x72,0x67,0x00,0x01,0x01,0x04,0x74,0x65,0x72,0x6D,0x01,0x00,0x01,0x01,0x03,0x07,
0x69,0x67,0x6E,0x6F,0x72,0x65,0x64,0x00,0x01,0x01,0x0F,0x66,0x75,0x6E,0x63,0x2D,
0x77,0x69,0x74,0x68,0x2D,0x61,0x6E,0x6E,0x6F,0x73,0x00,0x01,0x01,0x08,0x75,0x6E,
0x71,0x75,0x6F,0x74,0x65,0x64,0x00,0x01,0x01,0x02,0x5C,0x5C,0x00,0x01,0x01,0x09,
0x6E,0x6F,0x2D,0x61,0x73,0x73,0x69,0x67,0x6E,0x00,0x01,0x01,0x04,0x54,0x65,0x72,
0x6D,0x00,0x01,0x01,0x04,0x69,0x74,0x65,0x72,0x01,0x00,0x01,0x01,0x03,0x04,0x73,
0x74,0x61,0x72,0x00,0x01,0x01,0x0B,0x41,0x6E,0x6E,0x6F,0x74,0x61,0x74,0x69,0x6F,
0x6E,0x73,0x00,0x01,0x01,0x03,0x3D,0x3A,0x21,0x00,0x01,0x01,0x0D,0x66,0x75,0x6E,
0x63,0x2D,0x6E,0x6F,0x2D,0x61,0x6E,0x6E,0x6F,0x73,0x00,0x01,0x01,0x05,0x71,0x75,
0x6F,0x74,0x65,0x00,0x01,0x01,0x05,0x61,0x76,0x6F,0x69,0x64,0x00,0x00,0x01,0x04,
0x70,0x72,0x6F,0x64,0x03,0x00,0x01,0x01,0x03,0x01,0x03,0x01,0x03,0x03,0x6C,0x65,
0x78,0x01,0x00,0x01,0x01,0x03,0x0A,0x53,0x69,0x67,0x41,0x72,0x67,0x4C,0x69,0x73,
0x74,0x00,0x01,0x01,0x03,0x76,0x61,0x72,0x00,0x01,0x01,0x01,0x26,0x00,0x01,0x01,
0x03,0x2B,0x2D,0x2B,0x00,0x01,0x01,0x09,0x74,0x72,0x61,0x76,0x65,0x72,0x73,0x61,
0x6C,0x00,0x01,0x01,0x02,0x3D,0x3D,0x00,0x01,0x01,0x06,0x6D,0x6F,0x64,0x75,0x6C,
0x65,0x00,0x01,0x01,0x01,0x5F,0x00,0x01,0x01,0x03,0x6C,0x69,0x74,0x01,0x00,0x01,
0x01,0x03,0x06,0x61,0x62,0x73,0x65,0x6E,0x74,0x00,0x01,0x01,0x08,0x6E,0x6F,0x2D,
0x63,0x6F,0x6E,0x64,0x73,0x00,0x01,0x01,0x0B,0x63,0x6F,0x6E,0x63,0x61,0x74,0x2D,
0x64,0x61,0x73,0x68,0x00,0x01,0x01,0x04,0x70,0x6C,0x75,0x73,0x00,0x01,0x01,0x0B,
0x46,0x75,0x6E,0x63,0x44,0x65,0x66,0x4C,0x69,0x73,0x74,0x00,0x01,0x01,0x09,0x69,
0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x01,0x00,0x01,0x01,0x03,0x11,0x54,0x72,
0x61,0x76,0x65,0x72,0x73,0x61,0x6C,0x53,0x74,0x72,0x61,0x74,0x65,0x67,0x79,0x00,
0x01,0x01,0x03,0x3D,0x3D,0x3E,0x00,0x01,0x01,0x08,0x69,0x74,0x65,0x72,0x2D,0x73,
0x65,0x70,0x02,0x00,0x01,0x01,0x03,0x01,0x03,0x04,0x6C,0x69,0x73,0x74,0x01,0x00,
0x01,0x01,0x03,0x05,0x49,0x64,0x43,0x6F,0x6E,0x00,0x01,0x01,0x06,0x71,0x75,0x6F,
0x74,0x65,0x64,0x00,0x01,0x01,0x0C,0x53,0x69,0x67,0x6E,0x61,0x74,0x75,0x72,0x65,
0x4F,0x70,0x74,0x00,0x01,0x01,0x01,0x2B,0x00,0x01,0x01,0x10,0x64,0x65,0x66,0x61,
0x75,0x6C,0x74,0x2D,0x6E,0x6F,0x2D,0x63,0x6F,0x6E,0x64,0x73,0x00,0x01,0x01,0x04,
0x73,0x6F,0x72,0x74,0x01,0x00,0x01,0x01,0x03,0x08,0x63,0x6F,0x6E,0x73,0x74,0x61,
0x6E,0x74,0x00,0x01,0x01,0x09,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x00,
0x01,0x01,0x03,0x74,0x61,0x62,0x00,0x01,0x01,0x02,0x24,0x2B,0x00,0x01,0x01,0x09,
0x73,0x69,0x67,0x6E,0x61,0x74,0x75,0x72,0x65,0x00,0x01,0x01,0x04,0x6C,0x65,0x66,
0x74,0x00,0x00,0x01,0x02,0x5C,0x6E,0x00,0x01,0x01,0x07,0x70,0x72,0x65,0x73,0x65,
0x6E,0x74,0x00,0x01,0x01,0x01,0x7D,0x00,0x01,0x01,0x05,0x72,0x75,0x6C,0x65,0x73,
0x00,0x01,0x01,0x08,0x74,0x6F,0x70,0x2D,0x64,0x6F,0x77,0x6E,0x00,0x01,0x01,0x08,
0x52,0x75,0x6C,0x65,0x73,0x4F,0x70,0x74,0x00,0x01,0x01,0x08,0x43,0x6F,0x6E,0x64,
0x4C,0x69,0x73,0x74,0x00,0x01,0x01,0x01,0x5B,0x00,0x01,0x01,0x01,0x29,0x00,0x01,
0x01,0x0D,0x54,0x72,0x61,0x76,0x65,0x72,0x73,0x61,0x6C,0x54,0x79,0x70,0x65,0x00,
0x01,0x01,0x05,0x46,0x75,0x6E,0x49,0x64,0x00,0x01,0x01,0x01,0x7B,0x00,0x01,0x01,
0x07,0x75,0x6E,0x65,0x71,0x75,0x61,0x6C,0x00,0x01,0x01,0x0A,0x77,0x68,0x69,0x74,
0x65,0x73,0x70,0x61,0x63,0x65,0x00,0x01,0x01,0x06,0x4E,0x61,0x74,0x43,0x6F,0x6E,
0x00,0x01,0x01,0x05,0x74,0x72,0x61,0x66,0x6F,0x00,0x01,0x01,0x05,0x72,0x61,0x6E,
0x67,0x65,0x02,0x00,0x01,0x01,0x03,0x01,0x03,0x01,0x3A,0x00,0x01,0x01,0x06,0x6E,
0x6F,0x72,0x6D,0x61,0x6C,0x00,0x01,0x01,0x04,0x52,0x75,0x6C,0x65,0x00,0x01,0x01,
0x04,0x6C,0x69,0x73,0x74,0x00,0x01,0x01,0x0A,0x63,0x68,0x61,0x72,0x2D,0x63,0x6C,
0x61,0x73,0x73,0x01,0x00,0x01,0x01,0x03,0x07,0x46,0x75,0x6E,0x63,0x44,0x65,0x66,
0x00,0x01,0x01,0x01,0x24,0x00,0x01,0x01,0x04,0x43,0x6F,0x6E,0x64,0x00,0x01,0x01,
0x02,0x24,0x2A,0x00,0x01,0x01,0x0C,0x72,0x65,0x74,0x75,0x72,0x6E,0x73,0x2D,0x6C,
0x69,0x73,0x74,0x00,0x01,0x01,0x06,0x49,0x47,0x4E,0x4F,0x52,0x45,0x00,0x01,0x01,
0x0D,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x2D,0x73,0x65,0x70,0x02,0x00,
0x01,0x01,0x03,0x01,0x03,0x07,0x53,0x74,0x72,0x43,0x68,0x61,0x72,0x00,0x01,0x01,
0x05,0x62,0x72,0x65,0x61,0x6B,0x00,0x01,0x01,0x07,0x6E,0x65,0x77,0x6C,0x69,0x6E,
0x65,0x00,0x01,0x01,0x01,0x28,0x00,0x01,0x01,0x09,0x62,0x61,0x63,0x6B,0x73,0x6C,
0x61,0x73,0x68,0x00,0x01,0x01,0x06,0x64,0x69,0x67,0x69,0x74,0x73,0x00,0x01,0x01,
0x12,0x64,0x65,0x66,0x61,0x75,0x6C,0x74,0x2D,0x77,0x69,0x74,0x68,0x2D,0x63,0x6F,
0x6E,0x64,0x73,0x00,0x01,0x01,0x09,0x54,0x52,0x41,0x4E,0x53,0x4C,0x41,0x54,0x45,
0x00,0x01,0x01,0x07,0x64,0x65,0x63,0x69,0x6D,0x61,0x6C,0x00,0x01,0x01,0x05,0x56,
0x61,0x72,0x49,0x64,0x00,0x01,0x01,0x05,0x74,0x79,0x70,0x65,0x64,0x00,0x01,0x01,
0x04,0x61,0x63,0x63,0x75,0x00,0x01,0x01,0x09,0x61,0x63,0x63,0x75,0x74,0x72,0x61,
0x66,0x6F,0x00,0x01,0x01,0x01,0x2C,0x00,0x01,0x01,0x08,0x6E,0x6F,0x2D,0x61,0x74,
0x74,0x72,0x73,0x00,0x00,0x01,0x06,0x4D,0x6F,0x64,0x75,0x6C,0x65,0x00,0x01,0x01,
0x0A,0x77,0x69,0x74,0x68,0x2D,0x63,0x6F,0x6E,0x64,0x73,0x00,0x01,0x01,0x08,0x64,
0x65,0x66,0x61,0x75,0x6C,0x74,0x3A,0x00,0x01,0x01,0x08,0x52,0x75,0x6C,0x65,0x4C,
0x69,0x73,0x74,0x00,0x01,0x01,0x04,0x66,0x75,0x6E,0x63,0x00,0x01,0x01,0x06,0x6C,
0x61,0x79,0x6F,0x75,0x74,0x00,0x00,0x01,0x15,0x54,0x72,0x61,0x76,0x65,0x72,0x73,
0x61,0x6C,0x43,0x6F,0x6E,0x74,0x69,0x6E,0x75,0x61,0x74,0x69,0x6F,0x6E,0x00,0x01,
0x01,0x05,0x61,0x73,0x73,0x6F,0x63,0x00,0x00,0x01,0x02,0x2B,0x2B,0x00,0x01,0x01,
0x08,0x54,0x65,0x72,0x6D,0x4C,0x69,0x73,0x74,0x00,0x01,0x01,0x01,0x5C,0x00,0x01,
0x01,0x08,0x63,0x6F,0x6E,0x74,0x69,0x6E,0x75,0x65,0x00,0x01,0x01,0x08,0x63,0x6F,
0x6D,0x70,0x6C,0x65,0x74,0x65,0x00,0x00,0x01,0x00,0x00,0x81,0x40,0x00,0x70,0x0F,
0xE2,0x01,0xFA,0x80,0xBE,0x60,0x0F,0xB8,0x0D,0xE1,0x01,0x7A,0x40,0x9E,0x50,0x07,
0xB4,0x0E,0xE3,0x01,0xBA,0xC0,0xAE,0x70,0x0B,0xBC,0x0C,0xE0,0x81,0x3A,0x20,0x8E,
0x48,0x03,0xB2,0x0F,0x62,0x81,0xDA,0xA0,0xB6,0x68,0x0D,0xBA,0x0D,0x61,0x81,0x5A,
0x60,0x96,0x58,0x05,0xB6,0x0E,0x63,0x81,0x9A,0xE0,0xA6,0x78,0x09,0xBE,0x0C,0x60,
0x41,0x1A,0x10,0x86,0x44,0x01,0xB1,0x0F,0xA2,0x41,0xEA,0x90,0xBA,0x64,0x0E,0xB9,
0x0D,0xA1,0x41,0x6A,0x50,0x9A,0x54,0x06,0xB5,0x0E,0xA3,0x41,0xAA,0xD0,0xAA,0x74,
0x0A,0xBD,0x0C,0xA0,0xC1,0x2A,0x30,0x8A,0x4C,0x02,0xB3,0x0F,0x22,0xC1,0xCA,0xB0,
0xB2,0x6C,0x0C,0xBB,0x0D,0x21,0xC1,0x4A,0x70,0x92,0x5C,0x04,0xB7,0x0E,0x23,0xC1,
0x8A,0xF0,0xA2,0x7C,0x08,0xBF,0x0C,0x20,0x21,0x0A,0x08,0x82,0x42,0x00,0xB0,0x8F,
0xC2,0x21,0xF2,0x88,0xBC,0x62,0x0F,0x38,0x8D,0xC1,0x21,0x72,0x48,0x9C,0x52,0x07,
0x34,0x8E,0xC3,0x21,0xB2,0xC8,0xAC,0x72,0x0B,0x3C,0x8C,0xC0,0xA1,0x32,0x28,0x8C,
0x4A,0x03,0x32,0x8F,0x42,0xA1,0xD2,0xA8,0xB4,0x6A,0x0D,0x3A,0x8D,0x41,0xA1,0x52,
0x68,0x94,0x5A,0x05,0x36,0x8E,0x43,0xA1,0x92,0xE8,0xA4,0x7A,0x09,0x3E,0x8C,0x40,
0x61,0x12,0x18,0x84,0x46,0x01,0x31,0x8F,0x82,0x61,0xE2,0x98,0xB8,0x66,0x0E,0x39,
0x8D,0x81,0x61,0x62,0x58,0x98,0x56,0x06,0x35,0x8E,0x83,0x61,0xA2,0xD8,0xA8,0x76,
0x0A,0x3D,0x8C,0x80,0xE1,0x22,0x38,0x88,0x4E,0x02,0x33,0x8F,0x02,0xE1,0xC2,0xB8,
0xB0,0x6E,0x0C,0x3B,0x8D,0x01,0xE1,0x42,0x78,0x90,0x5E,0x04,0x37,0x8E,0x03,0xE1,
0x82,0xF8,0xA0,0x7E,0x08,0x3F,0x8C,0x00,0x11,0x02,0x04,0x80,0x41,0x00,0x30,0x61,
0x06,0x02
};

void init_MuASF_dict()
{
  ATermList afuns, terms;

  _MuASF_dict = ATreadFromBinaryString(_MuASF_dict_baf, _MuASF_dict_LEN);

  ATprotect(&_MuASF_dict);

  afuns = (ATermList)ATelementAt((ATermList)_MuASF_dict, 0);

  MA_afun121 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun121);
  afuns = ATgetNext(afuns);
  MA_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun3);
  afuns = ATgetNext(afuns);
  MA_afun78 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun78);
  afuns = ATgetNext(afuns);
  MA_afun48 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun48);
  afuns = ATgetNext(afuns);
  MA_afun59 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun59);
  afuns = ATgetNext(afuns);
  MA_afun99 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun99);
  afuns = ATgetNext(afuns);
  MA_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun2);
  afuns = ATgetNext(afuns);
  MA_afun47 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun47);
  afuns = ATgetNext(afuns);
  MA_afun104 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun104);
  afuns = ATgetNext(afuns);
  MA_afun80 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun80);
  afuns = ATgetNext(afuns);
  MA_afun42 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun42);
  afuns = ATgetNext(afuns);
  MA_afun75 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun75);
  afuns = ATgetNext(afuns);
  MA_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun15);
  afuns = ATgetNext(afuns);
  MA_afun86 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun86);
  afuns = ATgetNext(afuns);
  MA_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun31);
  afuns = ATgetNext(afuns);
  MA_afun43 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun43);
  afuns = ATgetNext(afuns);
  MA_afun128 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun128);
  afuns = ATgetNext(afuns);
  MA_afun103 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun103);
  afuns = ATgetNext(afuns);
  MA_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun0);
  afuns = ATgetNext(afuns);
  MA_afun84 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun84);
  afuns = ATgetNext(afuns);
  MA_afun98 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun98);
  afuns = ATgetNext(afuns);
  MA_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun33);
  afuns = ATgetNext(afuns);
  MA_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun10);
  afuns = ATgetNext(afuns);
  MA_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun13);
  afuns = ATgetNext(afuns);
  MA_afun119 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun119);
  afuns = ATgetNext(afuns);
  MA_afun74 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun74);
  afuns = ATgetNext(afuns);
  MA_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun14);
  afuns = ATgetNext(afuns);
  MA_afun40 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun40);
  afuns = ATgetNext(afuns);
  MA_afun82 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun82);
  afuns = ATgetNext(afuns);
  MA_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun30);
  afuns = ATgetNext(afuns);
  MA_afun123 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun123);
  afuns = ATgetNext(afuns);
  MA_afun101 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun101);
  afuns = ATgetNext(afuns);
  MA_afun60 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun60);
  afuns = ATgetNext(afuns);
  MA_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun7);
  afuns = ATgetNext(afuns);
  MA_afun58 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun58);
  afuns = ATgetNext(afuns);
  MA_afun79 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun79);
  afuns = ATgetNext(afuns);
  MA_afun100 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun100);
  afuns = ATgetNext(afuns);
  MA_afun81 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun81);
  afuns = ATgetNext(afuns);
  MA_afun122 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun122);
  afuns = ATgetNext(afuns);
  MA_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun29);
  afuns = ATgetNext(afuns);
  MA_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun1);
  afuns = ATgetNext(afuns);
  MA_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun6);
  afuns = ATgetNext(afuns);
  MA_afun83 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun83);
  afuns = ATgetNext(afuns);
  MA_afun61 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun61);
  afuns = ATgetNext(afuns);
  MA_afun97 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun97);
  afuns = ATgetNext(afuns);
  MA_afun50 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun50);
  afuns = ATgetNext(afuns);
  MA_afun44 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun44);
  afuns = ATgetNext(afuns);
  MA_afun102 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun102);
  afuns = ATgetNext(afuns);
  MA_afun112 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun112);
  afuns = ATgetNext(afuns);
  MA_afun73 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun73);
  afuns = ATgetNext(afuns);
  MA_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun9);
  afuns = ATgetNext(afuns);
  MA_afun107 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun107);
  afuns = ATgetNext(afuns);
  MA_afun88 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun88);
  afuns = ATgetNext(afuns);
  MA_afun51 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun51);
  afuns = ATgetNext(afuns);
  MA_afun56 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun56);
  afuns = ATgetNext(afuns);
  MA_afun85 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun85);
  afuns = ATgetNext(afuns);
  MA_afun127 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun127);
  afuns = ATgetNext(afuns);
  MA_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun12);
  afuns = ATgetNext(afuns);
  MA_afun91 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun91);
  afuns = ATgetNext(afuns);
  MA_afun64 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun64);
  afuns = ATgetNext(afuns);
  MA_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun8);
  afuns = ATgetNext(afuns);
  MA_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun28);
  afuns = ATgetNext(afuns);
  MA_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun32);
  afuns = ATgetNext(afuns);
  MA_afun106 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun106);
  afuns = ATgetNext(afuns);
  MA_afun76 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun76);
  afuns = ATgetNext(afuns);
  MA_afun90 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun90);
  afuns = ATgetNext(afuns);
  MA_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun11);
  afuns = ATgetNext(afuns);
  MA_afun62 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun62);
  afuns = ATgetNext(afuns);
  MA_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun27);
  afuns = ATgetNext(afuns);
  MA_afun120 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun120);
  afuns = ATgetNext(afuns);
  MA_afun55 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun55);
  afuns = ATgetNext(afuns);
  MA_afun108 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun108);
  afuns = ATgetNext(afuns);
  MA_afun49 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun49);
  afuns = ATgetNext(afuns);
  MA_afun116 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun116);
  afuns = ATgetNext(afuns);
  MA_afun109 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun109);
  afuns = ATgetNext(afuns);
  MA_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun36);
  afuns = ATgetNext(afuns);
  MA_afun111 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun111);
  afuns = ATgetNext(afuns);
  MA_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun17);
  afuns = ATgetNext(afuns);
  MA_afun110 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun110);
  afuns = ATgetNext(afuns);
  MA_afun92 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun92);
  afuns = ATgetNext(afuns);
  MA_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun34);
  afuns = ATgetNext(afuns);
  MA_afun63 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun63);
  afuns = ATgetNext(afuns);
  MA_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun19);
  afuns = ATgetNext(afuns);
  MA_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun26);
  afuns = ATgetNext(afuns);
  MA_afun37 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun37);
  afuns = ATgetNext(afuns);
  MA_afun105 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun105);
  afuns = ATgetNext(afuns);
  MA_afun115 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun115);
  afuns = ATgetNext(afuns);
  MA_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun25);
  afuns = ATgetNext(afuns);
  MA_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun18);
  afuns = ATgetNext(afuns);
  MA_afun114 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun114);
  afuns = ATgetNext(afuns);
  MA_afun69 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun69);
  afuns = ATgetNext(afuns);
  MA_afun54 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun54);
  afuns = ATgetNext(afuns);
  MA_afun87 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun87);
  afuns = ATgetNext(afuns);
  MA_afun38 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun38);
  afuns = ATgetNext(afuns);
  MA_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun16);
  afuns = ATgetNext(afuns);
  MA_afun77 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun77);
  afuns = ATgetNext(afuns);
  MA_afun52 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun52);
  afuns = ATgetNext(afuns);
  MA_afun96 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun96);
  afuns = ATgetNext(afuns);
  MA_afun57 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun57);
  afuns = ATgetNext(afuns);
  MA_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun35);
  afuns = ATgetNext(afuns);
  MA_afun39 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun39);
  afuns = ATgetNext(afuns);
  MA_afun72 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun72);
  afuns = ATgetNext(afuns);
  MA_afun117 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun117);
  afuns = ATgetNext(afuns);
  MA_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun22);
  afuns = ATgetNext(afuns);
  MA_afun118 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun118);
  afuns = ATgetNext(afuns);
  MA_afun66 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun66);
  afuns = ATgetNext(afuns);
  MA_afun124 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun124);
  afuns = ATgetNext(afuns);
  MA_afun129 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun129);
  afuns = ATgetNext(afuns);
  MA_afun94 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun94);
  afuns = ATgetNext(afuns);
  MA_afun41 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun41);
  afuns = ATgetNext(afuns);
  MA_afun126 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun126);
  afuns = ATgetNext(afuns);
  MA_afun53 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun53);
  afuns = ATgetNext(afuns);
  MA_afun70 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun70);
  afuns = ATgetNext(afuns);
  MA_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun20);
  afuns = ATgetNext(afuns);
  MA_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun21);
  afuns = ATgetNext(afuns);
  MA_afun65 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun65);
  afuns = ATgetNext(afuns);
  MA_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun5);
  afuns = ATgetNext(afuns);
  MA_afun113 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun113);
  afuns = ATgetNext(afuns);
  MA_afun93 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun93);
  afuns = ATgetNext(afuns);
  MA_afun89 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun89);
  afuns = ATgetNext(afuns);
  MA_afun95 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun95);
  afuns = ATgetNext(afuns);
  MA_afun67 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun67);
  afuns = ATgetNext(afuns);
  MA_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun4);
  afuns = ATgetNext(afuns);
  MA_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun23);
  afuns = ATgetNext(afuns);
  MA_afun71 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun71);
  afuns = ATgetNext(afuns);
  MA_afun45 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun45);
  afuns = ATgetNext(afuns);
  MA_afun68 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun68);
  afuns = ATgetNext(afuns);
  MA_afun125 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun125);
  afuns = ATgetNext(afuns);
  MA_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun24);
  afuns = ATgetNext(afuns);
  MA_afun46 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(MA_afun46);
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_MuASF_dict, 1);

}
