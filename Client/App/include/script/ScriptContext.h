#ifndef CLIENT_APP_INCLUDE_SCRIPT_SCRIPTCONTEXT_H
#define CLIENT_APP_INCLUDE_SCRIPT_SCRIPTCONTEXT_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class ScriptContext
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void closeState();
	void close();
	void __cdecl reportError();
	void __cdecl reportError(void* /*unused*/);
	void __cdecl reportError(struct lua_State* /*unused*/);
	void __cdecl reportError(int /*unused*/);
	void __cdecl reportError(unsigned int /*unused*/);
	void __cdecl reportError(unsigned long /*unused*/);
	void __cdecl reportError(long /*unused*/);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_SCRIPTCONTEXT_H
