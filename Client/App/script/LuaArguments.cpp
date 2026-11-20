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

void __cdecl sub_B7AC30(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a403a0
void __cdecl LuaArguments::pushFunction()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB2C);
	sub_B7AC30(result, this);
}

void __cdecl sub_B7ACA0(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a403d0
void __cdecl LuaArguments::pushFunctionValue()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB20);
	sub_B7ACA0(result, this);
}

void __cdecl sub_B7AD10(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a40400
void __cdecl LuaArguments::pushString()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB24);
	sub_B7AD10(result, this);
}

void __cdecl sub_B7AD80(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a40430
void __cdecl LuaArguments::pushUserdata()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB14);
	sub_B7AD80(result, this);
}

void __cdecl sub_B7ADF0(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00a40460
void __cdecl LuaArguments::pushRBXScriptSignal()
{
	typedef void* (__cdecl *SubA389C0Fn)(void*, void*, void*);
	void* result = reinterpret_cast<SubA389C0Fn>(sub_A389C0)(this, (void*)1, *(void**)0x0124EB18);
	sub_B7ADF0(result, this);
}

void __cdecl sub_A39240(void*, void*, void*);
void __cdecl sub_A35CC0(void*, int, int);
void __cdecl sub_A35D10(void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00a416f0
void __cdecl LuaArguments::pushGlobal()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EAC8, (void*)0x00EA71D0);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41720
void __cdecl LuaArguments::pushGlobalResults()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EAD0, (void*)0x00EA71E0);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41750
void __cdecl LuaArguments::pushGlobalValues()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EAD4, (void*)0x00EA7278);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41780
void __cdecl LuaArguments::pushGlobalEvents()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB28, (void*)0x00EA7308);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a417b0
void __cdecl LuaArguments::pushGlobalObjects()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EACC, (void*)0x00EA7250);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a417e0
void __cdecl LuaArguments::pushGlobalArgs()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EAC4, (void*)0x00EA71C0);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41810
void __cdecl LuaArguments::pushGlobalYields()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB1C, (void*)0x00EA72D8);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a41870
void __cdecl LuaArguments::pushGlobalFunctions()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EADC, (void*)0x00EA7298);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a418a0
void __cdecl LuaArguments::pushGlobalThreads()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB30, (void*)0x00EA71B0);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// FUNCTION: ROBLOXSTUDIO 0x00a418d0
void __cdecl LuaArguments::pushGlobalFunction()
{
	void* self = this;
	sub_A39240(self, *(void**)0x0124EB2C, (void*)0x00EA7318);
	sub_A35CC0(self, -1, 1);
	sub_A35D10(self, -2);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
