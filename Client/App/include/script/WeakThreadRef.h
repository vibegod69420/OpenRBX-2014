#ifndef CLIENT_APP_INCLUDE_SCRIPT_WEAKTHREADREF_H
#define CLIENT_APP_INCLUDE_SCRIPT_WEAKTHREADREF_H

#include "decomp.h"

namespace RBX {
namespace Lua {

// AUTO-GENERATED HELPERS

class WeakThreadRef
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void removeRef();
	// AUTO-GENERATED METHODS
};

} // namespace Lua
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_WEAKTHREADREF_H
