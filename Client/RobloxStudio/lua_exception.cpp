#include "lua_exception.h"

#include "decomp.h"



// Forward declaration for callee at 0x00a35e70
void __cdecl lua_exception_throw(int state, int code, int flags);

// FUNCTION: ROBLOXSTUDIO 0x00a37120
void lua_exception::raise()
{
	lua_exception_throw(*(int*)((char*)this + 0x0C), -1, 0);
}

// AUTO-GENERATED IMPLEMENTATIONS


