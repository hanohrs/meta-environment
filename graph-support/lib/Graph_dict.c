/*
 * Generated at Mon Jul 14 13:46:17 2003
 */

#include "Graph_dict.h"

AFun afun17;
AFun afun22;
AFun afun3;
AFun afun9;
AFun afun19;
AFun afun26;
AFun afun2;
AFun afun12;
AFun afun15;
AFun afun25;
AFun afun18;
AFun afun20;
AFun afun8;
AFun afun21;
AFun afun0;
AFun afun11;
AFun afun5;
AFun afun27;
AFun afun16;
AFun afun10;
AFun afun4;
AFun afun13;
AFun afun14;
AFun afun23;
AFun afun7;
AFun afun24;
AFun afun1;
AFun afun6;

ATerm patternPointDefault = NULL;
ATerm patternPolygonMulti = NULL;
ATerm patternPolygonEmpty = NULL;
ATerm patternEdgeDefault = NULL;
ATerm patternEdgeListMulti = NULL;
ATerm patternEdgeListEmpty = NULL;
ATerm patternDirectionNone = NULL;
ATerm patternDirectionBoth = NULL;
ATerm patternDirectionBack = NULL;
ATerm patternDirectionForward = NULL;
ATerm patternShapeOctagon = NULL;
ATerm patternShapeHexagon = NULL;
ATerm patternShapeHouse = NULL;
ATerm patternShapeParallelogram = NULL;
ATerm patternShapeTrapezium = NULL;
ATerm patternShapeDiamond = NULL;
ATerm patternShapeBox = NULL;
ATerm patternShapeTriangle = NULL;
ATerm patternShapeEgg = NULL;
ATerm patternShapeCircle = NULL;
ATerm patternShapeEllipse = NULL;
ATerm patternShapePlaintext = NULL;
ATerm patternAttributeInfo = NULL;
ATerm patternAttributeDirection = NULL;
ATerm patternAttributeBoundingBox = NULL;
ATerm patternAttributeCurvePoints = NULL;
ATerm patternAttributeSize = NULL;
ATerm patternAttributeLocation = NULL;
ATerm patternAttributeShape = NULL;
ATerm patternAttributeLabel = NULL;
ATerm patternAttributeListMulti = NULL;
ATerm patternAttributeListEmpty = NULL;
ATerm patternNodeIdDefault = NULL;
ATerm patternNodeDefault = NULL;
ATerm patternNodeListMulti = NULL;
ATerm patternNodeListEmpty = NULL;
ATerm patternGraphDefault = NULL;

/*
 * afun17 = trapezium
 * afun22 = forward
 * afun3 = shape(x)
 * afun9 = info(x,x)
 * afun19 = house
 * afun26 = edge(x,x,x)
 * afun2 = label(x)
 * afun12 = circle
 * afun15 = box
 * afun25 = none
 * afun18 = parallelogram
 * afun20 = hexagon
 * afun8 = direction(x)
 * afun21 = octagon
 * afun0 = graph(x,x,x)
 * afun11 = ellipse
 * afun5 = size(x,x)
 * afun27 = point(x,x)
 * afun16 = diamond
 * afun10 = plaintext
 * afun4 = location(x,x)
 * afun13 = egg
 * afun14 = triangle
 * afun23 = back
 * afun7 = bounding-box(x,x)
 * afun24 = both
 * afun1 = node(x,x)
 * afun6 = curve-points(x)
 *
 * patternPointDefault = point(<int>,<int>)
 * patternPolygonMulti = [<term>,<list>]
 * patternPolygonEmpty = []
 * patternEdgeDefault = edge(<term>,<term>,<term>)
 * patternEdgeListMulti = [<term>,<list>]
 * patternEdgeListEmpty = []
 * patternDirectionNone = none
 * patternDirectionBoth = both
 * patternDirectionBack = back
 * patternDirectionForward = forward
 * patternShapeOctagon = octagon
 * patternShapeHexagon = hexagon
 * patternShapeHouse = house
 * patternShapeParallelogram = parallelogram
 * patternShapeTrapezium = trapezium
 * patternShapeDiamond = diamond
 * patternShapeBox = box
 * patternShapeTriangle = triangle
 * patternShapeEgg = egg
 * patternShapeCircle = circle
 * patternShapeEllipse = ellipse
 * patternShapePlaintext = plaintext
 * patternAttributeInfo = info(<str>,<term>)
 * patternAttributeDirection = direction(<term>)
 * patternAttributeBoundingBox = bounding-box(<term>,<term>)
 * patternAttributeCurvePoints = curve-points(<term>)
 * patternAttributeSize = size(<int>,<int>)
 * patternAttributeLocation = location(<int>,<int>)
 * patternAttributeShape = shape(<term>)
 * patternAttributeLabel = label(<str>)
 * patternAttributeListMulti = [<term>,<list>]
 * patternAttributeListEmpty = []
 * patternNodeIdDefault = <str>
 * patternNodeDefault = node(<term>,<term>)
 * patternNodeListMulti = [<term>,<list>]
 * patternNodeListEmpty = []
 * patternGraphDefault = graph(<term>,<term>,<term>)
 *
 */

static ATermList _Graph_dict = NULL;

#define _Graph_dict_LEN 614

static char _Graph_dict_baf[_Graph_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x24,0x77,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x04,0x04,0x04,
0x05,0x06,0x03,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x45,0x1F,0x01,0x02,0x00,
0x07,0x08,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,
0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x02,0x01,0x02,0x02,
0x5B,0x5D,0x00,0x00,0x01,0x03,0x69,0x6E,0x74,0x00,0x00,0x01,0x03,0x73,0x74,0x72,
0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,
0x00,0x00,0x01,0x09,0x74,0x72,0x61,0x70,0x65,0x7A,0x69,0x75,0x6D,0x00,0x00,0x01,
0x07,0x66,0x6F,0x72,0x77,0x61,0x72,0x64,0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,
0x05,0x73,0x68,0x61,0x70,0x65,0x01,0x00,0x02,0x02,0x00,0x09,0x04,0x69,0x6E,0x66,
0x6F,0x02,0x00,0x02,0x02,0x00,0x09,0x02,0x00,0x09,0x05,0x68,0x6F,0x75,0x73,0x65,
0x00,0x00,0x01,0x04,0x65,0x64,0x67,0x65,0x03,0x00,0x02,0x02,0x00,0x09,0x02,0x00,
0x09,0x02,0x00,0x09,0x05,0x6C,0x61,0x62,0x65,0x6C,0x01,0x00,0x02,0x02,0x00,0x09,
0x06,0x63,0x69,0x72,0x63,0x6C,0x65,0x00,0x00,0x01,0x03,0x62,0x6F,0x78,0x00,0x00,
0x01,0x04,0x6E,0x6F,0x6E,0x65,0x00,0x00,0x01,0x0D,0x70,0x61,0x72,0x61,0x6C,0x6C,
0x65,0x6C,0x6F,0x67,0x72,0x61,0x6D,0x00,0x00,0x01,0x07,0x68,0x65,0x78,0x61,0x67,
0x6F,0x6E,0x00,0x00,0x01,0x09,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x6F,0x6E,0x01,
0x00,0x02,0x02,0x00,0x09,0x07,0x6F,0x63,0x74,0x61,0x67,0x6F,0x6E,0x00,0x00,0x01,
0x05,0x67,0x72,0x61,0x70,0x68,0x03,0x00,0x02,0x02,0x00,0x09,0x02,0x00,0x09,0x02,
0x00,0x09,0x07,0x65,0x6C,0x6C,0x69,0x70,0x73,0x65,0x00,0x00,0x01,0x04,0x73,0x69,
0x7A,0x65,0x02,0x00,0x02,0x02,0x00,0x09,0x02,0x00,0x09,0x05,0x70,0x6F,0x69,0x6E,
0x74,0x02,0x00,0x02,0x02,0x00,0x09,0x02,0x00,0x09,0x07,0x64,0x69,0x61,0x6D,0x6F,
0x6E,0x64,0x00,0x00,0x01,0x09,0x70,0x6C,0x61,0x69,0x6E,0x74,0x65,0x78,0x74,0x00,
0x00,0x01,0x08,0x6C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x02,0x00,0x02,0x02,0x00,
0x09,0x02,0x00,0x09,0x03,0x65,0x67,0x67,0x00,0x00,0x01,0x08,0x74,0x72,0x69,0x61,
0x6E,0x67,0x6C,0x65,0x00,0x00,0x01,0x04,0x62,0x61,0x63,0x6B,0x00,0x00,0x01,0x0C,
0x62,0x6F,0x75,0x6E,0x64,0x69,0x6E,0x67,0x2D,0x62,0x6F,0x78,0x02,0x00,0x02,0x02,
0x00,0x09,0x02,0x00,0x09,0x04,0x62,0x6F,0x74,0x68,0x00,0x00,0x01,0x04,0x6E,0x6F,
0x64,0x65,0x02,0x00,0x02,0x02,0x00,0x09,0x02,0x00,0x09,0x0C,0x63,0x75,0x72,0x76,
0x65,0x2D,0x70,0x6F,0x69,0x6E,0x74,0x73,0x01,0x00,0x02,0x02,0x00,0x09,0x01,0x06,
0xCC,0x0B,0x08,0x4C,0xA1,0x03,0x18,0x51,0xD3,0x83,0x41,0x15,0x15,0x24,0x41,0x45,
0x19,0x34,0x24,0x31,0x12,0xC0,0x47,0x1E,0x3C,0x43,0x80,0x96,0x22,0x54,0x18,0x49,
0xA3,0x25,0x0A,0x0A,0x51,0x22,0xA0,0x86,0x9C,0x3A,0x50,0xC0,0x65,0x09,0x84,0x16,
0x60,0xD9,0x42,0x03,0x90,0x2E,0x50,0x01,0xE5,0x18,0x40,0x84,0xB0,0x30,0x08,0x20,
0xB8,0x88,0x83,0x88,0x52,0x00,0xC0,0xFC,0x28,0x84,0x20,0xF8,0x17,0x0B,0xD0,0x0F,
0x18,0xDC,0x71,0x72,0xC9,0xC4,0x07,0x04,0xEC,0xE1,0xB7,0x0A,0xD6,0x0B,0x60,0xCD,
0x51,0x36,0x88,0xD3,0x03,0x0C,0xF4,0xA1,0xD2,0x4B,0x4D,0x0D,0x32,0x30,0x21,0xAB,
0xD1,0x05,0x5B,0x88,0x42,0x53,0xE2,0x02,0xB3,0x00,0x07,0x2E,0xC0,0x00,0xCA,0x91,
0x0A,0x52,0x8C,0x12,0x05,0xC3,0x14,0x04,0x48,0xC4,0x2B,0xC4,0x20,0x08,0x17,0x0F,
0x90,0x1E,0x46,0x21,0x09,0x40
};

void init_Graph_dict()
{
  ATermList afuns, terms;

  _Graph_dict = (ATermList)ATreadFromBinaryString(_Graph_dict_baf, _Graph_dict_LEN);

  ATprotect((ATerm *)&_Graph_dict);

  afuns = (ATermList)ATelementAt(_Graph_dict, 0);

  afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt(_Graph_dict, 1);

  patternPointDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternPolygonMulti = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternPolygonEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternEdgeDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternEdgeListMulti = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternEdgeListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternDirectionNone = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternDirectionBoth = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternDirectionBack = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternDirectionForward = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeOctagon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeHexagon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeHouse = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeParallelogram = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeTrapezium = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeDiamond = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeBox = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeTriangle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeEgg = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeCircle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeEllipse = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapePlaintext = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeInfo = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeDirection = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeBoundingBox = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeCurvePoints = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeSize = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeShape = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeLabel = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeListMulti = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNodeIdDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNodeDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNodeListMulti = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNodeListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternGraphDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
