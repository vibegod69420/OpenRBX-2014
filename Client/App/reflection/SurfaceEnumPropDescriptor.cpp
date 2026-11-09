#include "reflection/SurfaceEnumPropDescriptor.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a26f70
void SurfaceEnumPropDescriptor::destroyInstance(SurfaceEnumPropDescriptor* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a26f90
void SurfaceEnumPropDescriptor::destroyInstance_6f90(SurfaceEnumPropDescriptor* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
