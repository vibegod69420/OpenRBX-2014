#ifndef CLIENT_APP_INCLUDE_V8WORLD_TRIANGLEMESH_H
#define CLIENT_APP_INCLUDE_V8WORLD_TRIANGLEMESH_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class TriangleMesh
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	float getGridSize() const;
	bool update();
	int getTriangleCount() const;
	void*getPart() const;
	void*getPrimitive() const;
	void*getGrid() const;
	int __cdecl getValue();
	void __cdecl stringGfindRenamed();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8WORLD_TRIANGLEMESH_H
