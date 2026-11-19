#include "lua_exception.h"

#include "decomp.h"



// Forward declaration for callee at 0x00a35e70
void __cdecl lua_exception_throw(int state, int code, int flags);

// FUNCTION: ROBLOXSTUDIO 0x00a37120
void lua_exception::raise()
{
	lua_exception_throw(*(int*)((char*)this + 0x0C), -1, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x00a37a80
int __cdecl lua_exception::getCode()
{
	return *(int*)((char*)this + 0x44);
}

// FUNCTION: ROBLOXSTUDIO 0x00a37a90
int __cdecl lua_exception::getLine()
{
	return *(int*)((char*)this + 0x3C);
}

// FUNCTION: ROBLOXSTUDIO 0x00a35de0
int __cdecl lua_exception::getType()
{
    return *(unsigned char*)((char*)this + 6);
}

// FUNCTION: ROBLOXSTUDIO 0x00a37aa0
int __cdecl lua_exception::getLevel()
{
	return *(unsigned char*)((char*)this + 0x38);
}

// FUNCTION: ROBLOXSTUDIO 0x00a39240
void __cdecl lua_exception_dispatch(int, int, int, int);

void __cdecl lua_exception::raise(int arg1, int arg2)
{
	lua_exception_dispatch((int)this, arg1, arg2, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x00a38660
void __cdecl lua_exception::initContext(void* context)
{
	char* p = (char*)context;
	*(void**)(p + 8) = this;
	*(char**)(p + 0) = p + 0x0C;
	*(int*)(p + 4) = 0;
}

// Forward declaration for callee at 0x00a389c0
void __cdecl lua_exception_dispatchGlobal(int arg1, int arg2, int arg3);

// FUNCTION: ROBLOXSTUDIO 0x00a3cd40
int __cdecl lua_exception::dispatchGlobal()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EACC);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3cd80
int __cdecl lua_exception::dispatchGlobalState()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EB2C);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3cda0
int __cdecl lua_exception::dispatchGlobalState2()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EB20);
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


