#ifndef CLIENT_RENDERING_GFXRENDER_MEGACLUSTER_H
#define CLIENT_RENDERING_GFXRENDER_MEGACLUSTER_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e3a364
class MegaCluster
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_flag_0041[0x41]; bool flag_0041; };
		// AUTO-GENERATED FIELDS
	};

	void setFlag41(bool value);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_MEGACLUSTER_H
