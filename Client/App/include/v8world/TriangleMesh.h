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
	void __cdecl checkStack();
	int __cdecl getOptInt3();
	int __cdecl checkCondition();
	int __cdecl openCoroutine();
	int __cdecl openString();
	int __cdecl mathOp();
	int __cdecl func_B6E2C0();
	int __cdecl func_B6E300();
	int __cdecl func_B6F130();
	int __cdecl func_B6F060();
	int __cdecl func_B6E340();
	int __cdecl func_B6F380();
	int __cdecl func_B6E5F0();
	int __cdecl func_B6EFA0();
	int __cdecl func_B6FFF0();
	int __cdecl func_B6EA30();
	int __cdecl func_B71520(const char* s, const char* p, int what);
	int __cdecl func_B6EB00();
	int __cdecl func_B6E0A0();
	int __cdecl func_B6EFF0();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8WORLD_TRIANGLEMESH_H
