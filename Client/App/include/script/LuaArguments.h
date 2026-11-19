#ifndef CLIENT_APP_INCLUDE_SCRIPT_LUAARGUMENTS_H
#define CLIENT_APP_INCLUDE_SCRIPT_LUAARGUMENTS_H

#include "decomp.h"

namespace RBX {
namespace Lua {

// AUTO-GENERATED HELPERS

class LuaArguments
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	int size();
	void __cdecl pushAllValues(void* arg);
	void __cdecl pushAllResults(void* arg);
	void __cdecl pushAllEvents(void* arg);
	void __cdecl pushAllObjects(void* arg);
	void __cdecl pushAllArgs(void* arg);
	// AUTO-GENERATED METHODS
};

} // namespace Lua
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_LUAARGUMENTS_H
