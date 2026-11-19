#ifndef CLIENT_ROBLOXSTUDIO_LUA_EXCEPTION_H
#define CLIENT_ROBLOXSTUDIO_LUA_EXCEPTION_H

#include "decomp.h"



// AUTO-GENERATED HELPERS

class lua_exception
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void raise();
	int __cdecl getCode();
	int __cdecl getLine();
	int __cdecl getType();
	int __cdecl getLevel();
	void __cdecl raise(int arg1, int arg2);
	void __cdecl initContext(void* context);
	// AUTO-GENERATED METHODS
};



#endif // CLIENT_ROBLOXSTUDIO_LUA_EXCEPTION_H
