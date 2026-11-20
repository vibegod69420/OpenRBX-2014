#include "script/LuaArguments.h"

#include "decomp.h"

namespace RBX {
namespace Lua {

int __cdecl luaArgumentsStackSize(void* stack);

// FUNCTION: ROBLOXSTUDIO 0x008e3c90
int LuaArguments::size()
{
	return luaArgumentsStackSize(*(void**)((char*)this + 0x4c)) - 1;
}

void __cdecl sub_A389C0(void* a, void* b, void* c);

// FUNCTION: ROBLOXSTUDIO 0x008d8bf0
void __cdecl LuaArguments::pushAllValues(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EAC8);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8c10
void __cdecl LuaArguments::pushAllResults(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EAD0);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8c30
void __cdecl LuaArguments::pushAllEvents(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EB28);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8c50
void __cdecl LuaArguments::pushAllObjects(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EACC);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8c70
void __cdecl LuaArguments::pushAllArgs(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EAC4);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8c90
void __cdecl LuaArguments::pushAllYields(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EB1C);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8cb0
void __cdecl LuaArguments::pushAllThreads(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EB30);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8cf0
void __cdecl LuaArguments::pushAllFunctions(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EB20);
}

// FUNCTION: ROBLOXSTUDIO 0x008d8d10
void __cdecl LuaArguments::pushAllUserdatas(void* arg)
{
	sub_A389C0(this, arg, *(void**)0x0124EB14);
}

void __cdecl sub_B7A8D0(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a40340
void __cdecl LuaArguments::pushObject()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EACC);
	sub_B7A8D0(result, this);
}

void __cdecl sub_B7ABC0(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a40370
void __cdecl LuaArguments::pushThread()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB30);
	sub_B7ABC0(result, this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
