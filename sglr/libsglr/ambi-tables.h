/* $Id */

#ifndef _AMBI_CLUSTER_H_
#define _AMBI_CLUSTER_H_  1

#include <aterm2.h>
#include "sglr.h"

void      SG_AmbiTablesDestroy();
ATermList SG_AmbiTablesGetCluster(ATerm key, size_t pos);
ATermList SG_AmbiTablesGetClusterOnIndex(ATermInt idx);
ATermInt  SG_AmbiTablesGetIndex(ATerm key, size_t pos);
void      SG_AmbiTablesUpdateCluster(ATermInt idx, ATermList cluster);

void      SG_CreateAmbCluster(tree existing, tree new, size_t pos);

#endif  /* _AMBI_CLUSTER_H_ */
