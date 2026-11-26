#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CSGMESH_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CSGMESH_H

#include "decomp.h"

namespace RBX {

#ifndef NULL
#define NULL 0
#endif
// AUTO-GENERATED HELPERS

class CSGMesh
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void clear();
	void __cdecl setGlobalMesh();
	void*buyNode();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CSGMESH_H
