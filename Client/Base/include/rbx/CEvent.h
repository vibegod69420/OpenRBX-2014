#ifndef CLIENT_BASE_INCLUDE_RBX_CEVENT_H
#define CLIENT_BASE_INCLUDE_RBX_CEVENT_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e4484c
class CEvent
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; CEvent* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_BASE_INCLUDE_RBX_CEVENT_H
