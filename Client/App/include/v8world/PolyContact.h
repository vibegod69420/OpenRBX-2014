#ifndef CLIENT_APP_INCLUDE_V8WORLD_POLYCONTACT_H
#define CLIENT_APP_INCLUDE_V8WORLD_POLYCONTACT_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class PolyContact
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void __cdecl deleteEdge(void* edge);
	void __cdecl findClosestFeature();
	void __cdecl addEdge(void* edge, unsigned char info);
	void __cdecl init(void* target, void* arg2, void* arg3);
	void __cdecl computeContact(void* out, void* param);
	void* __cdecl getEdge(void* arg2, void* arg3);
	void __cdecl updateEdges(int count);
	void __cdecl deleteFeature(void* feature);
	void __cdecl addEdge(void* edge);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8WORLD_POLYCONTACT_H
