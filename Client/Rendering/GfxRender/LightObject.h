#ifndef CLIENT_RENDERING_GFXRENDER_LIGHTOBJECT_H
#define CLIENT_RENDERING_GFXRENDER_LIGHTOBJECT_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

class LightObject
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void markDirty();
	void*getSpatialOwner();
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_LIGHTOBJECT_H
