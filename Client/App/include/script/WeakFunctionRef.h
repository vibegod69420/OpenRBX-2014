#ifndef CLIENT_APP_INCLUDE_SCRIPT_WEAKFUNCTIONREF_H
#define CLIENT_APP_INCLUDE_SCRIPT_WEAKFUNCTIONREF_H

#include "decomp.h"

namespace RBX {
namespace Lua {

// AUTO-GENERATED HELPERS

class WeakFunctionRef
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void dispose();
	void*clone();
	// AUTO-GENERATED METHODS
};

} // namespace Lua
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_WEAKFUNCTIONREF_H
