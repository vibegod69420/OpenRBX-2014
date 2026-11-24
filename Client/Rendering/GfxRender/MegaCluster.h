#ifndef CLIENT_RENDERING_GFXRENDER_MEGACLUSTER_H
#define CLIENT_RENDERING_GFXRENDER_MEGACLUSTER_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

class MegaCluster
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	static int derefInt(const int* p);
	static int derefInt_baa0(const int* p);
	int getSize() const;
	int getCount() const;
	void unload();
	void clear();
	int __cdecl getTableValue();
	int __cdecl getData(void* param, int index);
	int __cdecl getDataByIndex(void* param, int index);
	void clearBuffer0();
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_MEGACLUSTER_H
