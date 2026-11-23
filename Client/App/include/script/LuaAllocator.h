#ifndef CLIENT_APP_INCLUDE_SCRIPT_LUAALLOCATOR_H
#define CLIENT_APP_INCLUDE_SCRIPT_LUAALLOCATOR_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class LuaAllocator
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void* __cdecl alloc(void* ptr, unsigned int osize, unsigned int nsize);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_LUAALLOCATOR_H
