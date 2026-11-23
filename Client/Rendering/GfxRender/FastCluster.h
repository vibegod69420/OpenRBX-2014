#ifndef CLIENT_RENDERING_GFXRENDER_FASTCLUSTER_H
#define CLIENT_RENDERING_GFXRENDER_FASTCLUSTER_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

class FastCluster
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	int size() const;
	void invalidateEntity();
	static int derefInt(const int* p);
	static int derefInt_2470(const int* p);
	void*getEntityBuffer();
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_FASTCLUSTER_H
