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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
