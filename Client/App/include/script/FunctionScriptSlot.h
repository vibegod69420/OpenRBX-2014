#ifndef CLIENT_APP_INCLUDE_SCRIPT_FUNCTIONSCRIPTSLOT_H
#define CLIENT_APP_INCLUDE_SCRIPT_FUNCTIONSCRIPTSLOT_H

#include "decomp.h"

namespace RBX {
namespace Lua {

// AUTO-GENERATED HELPERS

class FunctionScriptSlot
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void dispose();
	int __cdecl call();
	// AUTO-GENERATED METHODS
};

} // namespace Lua
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_FUNCTIONSCRIPTSLOT_H
