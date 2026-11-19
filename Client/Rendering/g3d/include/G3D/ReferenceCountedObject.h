#ifndef CLIENT_RENDERING_G3D_INCLUDE_G3D_REFERENCECOUNTEDOBJECT_H
#define CLIENT_RENDERING_G3D_INCLUDE_G3D_REFERENCECOUNTEDOBJECT_H

#include "decomp.h"

namespace G3D {

// AUTO-GENERATED HELPERS

class ReferenceCountedObject
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void zeroWeakPointers();
	// AUTO-GENERATED METHODS
};

} // namespace G3D

#endif // CLIENT_RENDERING_G3D_INCLUDE_G3D_REFERENCECOUNTEDOBJECT_H
