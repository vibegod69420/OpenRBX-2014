#ifndef CLIENT_APP_INCLUDE_V8WORLD_MEGACLUSTERPOLY_H
#define CLIENT_APP_INCLUDE_V8WORLD_MEGACLUSTERPOLY_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class MegaClusterPoly
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_member_0004[0x4]; int member_0004; };
		// AUTO-GENERATED FIELDS
	};

	const int* getMemberPtr04() const;
	int getNumFaces() const;
	void*getMesh();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8WORLD_MEGACLUSTERPOLY_H
