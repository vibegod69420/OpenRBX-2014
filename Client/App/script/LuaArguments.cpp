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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
