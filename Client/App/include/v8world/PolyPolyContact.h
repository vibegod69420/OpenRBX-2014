#ifndef CLIENT_APP_INCLUDE_V8WORLD_POLYPOLYCONTACT_H
#define CLIENT_APP_INCLUDE_V8WORLD_POLYPOLYCONTACT_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class PolyPolyContact
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_00cc[0xcc]; int field_00cc; };
		// AUTO-GENERATED FIELDS
	};

	void deleteAllConnectors();
	int getFieldCC() const;
	void __cdecl update(int value);
	void __cdecl compute(void* out, void* param);
	void __cdecl match(int a, int b);
	void __cdecl matchSeparatingEdge(int featureId, int separatingEdge);
	int __cdecl getSeparatingEdgeCandidate();
	void __cdecl accumulate(int value);
	void __cdecl compute(void* param);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8WORLD_POLYPOLYCONTACT_H
