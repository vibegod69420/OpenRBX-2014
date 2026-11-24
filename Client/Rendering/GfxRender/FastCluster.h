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
	void __cdecl pushHeapHole(int hole, int top, void** value);
	void __cdecl popHeap(int hole, int bottom, void** value, void* unused);
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_FASTCLUSTER_H
