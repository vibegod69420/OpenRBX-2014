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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
