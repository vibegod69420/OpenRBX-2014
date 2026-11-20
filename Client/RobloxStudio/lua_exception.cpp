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

// FUNCTION: ROBLOXSTUDIO 0x00a3cdc0
int __cdecl lua_exception::dispatchGlobalState3()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EB24);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3cde0
int __cdecl lua_exception::dispatchGlobalState4()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EB14);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a3ce00
int __cdecl lua_exception::dispatchGlobalState5()
{
	lua_exception_dispatchGlobal((int)this, 1, *(int*)0x0124EB18);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a35670
void __cdecl lua_exception::pushValue(int value)
{
	char* top = *(char**)((char*)this + 8);
	*(int*)top = value;
	*(int*)(top + 8) = 2;
	*(char**)((char*)this + 8) += 16;
}

// Forward declaration for callee at 0x00a34c10
void* __cdecl index2adr(int state, int index);

// FUNCTION: ROBLOXSTUDIO 0x00a35cc0
void __cdecl lua_exception::setStackTag(int index, unsigned char tag)
{
	void** slot = (void**)index2adr((int)this, index);
	*((unsigned char*)*slot + 7) = tag;
}

// FUNCTION: ROBLOXSTUDIO 0x00a36100
const char* __cdecl lua_exception::getTypeName(int type)
{
	if (type == -1)
		return (const char*)0x00EA6EA0;

	return ((const char**)0x00EE1BC0)[type];
}

// FUNCTION: ROBLOXSTUDIO 0x00a35560
void __cdecl lua_exception::pushBoolean(int value)
{
	char* top = *(char**)((char*)this + 8);
	*(int*)(top + 8) = 1;
	*(int*)top = (value != 0);
	*(char**)((char*)this + 8) += 16;
}

// FUNCTION: ROBLOXSTUDIO 0x00a38320
int __cdecl lua_exception::popError(int* pPair, int* outCode)
{
	if (pPair[1] == 0)
		return 0;

	*outCode = pPair[1];
	pPair[1] = 0;
	return pPair[0];
}

// FUNCTION: ROBLOXSTUDIO 0x00a360d0
int __cdecl lua_exception::getStackType(int index)
{
	char* o = (char*)index2adr((int)this, index);
	if (o == (char*)0x00EA7E68)
		return -1;
	return *(int*)(o + 8);
}

// FUNCTION: ROBLOXSTUDIO 0x00a35780
int __cdecl lua_exception::pushThread()
{
	char* top = *(char**)((char*)this + 8);
	*(int*)top = (int)this;
	*(int*)(top + 8) = 8;

	char* g = *(char**)((char*)this + 0x10);
	*(char**)((char*)this + 8) += 16;

	return *(void**)(g + 0x70) == this;
}

// FUNCTION: ROBLOXSTUDIO 0x00a379c0
const char* __cdecl luaO_pushvfstring(lua_exception* L, const char* fmt, char* argp);
void __cdecl luaG_addinfo(lua_exception* L, const char* msg);
void __cdecl luaG_errormsg(lua_exception* L);

void __cdecl lua_exception::runError(const char* fmt, ...)
{
	const char* msg = luaO_pushvfstring(this, fmt, (char*)(&fmt + 1));
	luaG_addinfo(this, msg);
	luaG_errormsg(this);
}

// Forward declarations for callees
void* __cdecl lua_newstate(void* f, void* ud);
void* __cdecl lua_atpanic(void* L, void* panicf);

// FUNCTION: ROBLOXSTUDIO 0x00a39020
void* __cdecl lua_exception::luaL_newstate()
{
	void* L = lua_newstate((void*)0x00A38350, 0);
	if (L)
	{
		lua_atpanic(L, (void*)0x00A39370);
	}
	return L;
}

// Forward declaration for callee at 0x00bcc7e0
void __cdecl luaV_settable(lua_exception* L, void* t, void* key, void* val);

// FUNCTION: ROBLOXSTUDIO 0x00a35ce0
void __cdecl lua_exception::setTable(int index)
{
	void* t = index2adr((int)this, index);
	char* top = *(char**)((char*)this + 8);
	luaV_settable(this, t, top - 0x20, top - 0x10);
	*(char**)((char*)this + 8) += -0x20;
}

// FUNCTION: ROBLOXSTUDIO 0x00a357b0
void __cdecl lua_exception::pushValueAtIndex(int index)
{
	char* src = (char*)index2adr((int)this, index);
	char* top = *(char**)((char*)this + 8);

	*(int*)top = *(int*)src;
	*(int*)(top + 4) = *(int*)(src + 4);
	*(int*)(top + 8) = *(int*)(src + 8);

	*(char**)((char*)this + 8) += 16;
}

// Forward declarations for callees
void __cdecl luaC_step(lua_exception* L);
void __cdecl luaD_call(lua_exception* L, int a, int b);

// FUNCTION: ROBLOXSTUDIO 0x00a357e0
void __cdecl lua_exception::call(int a, int b)
{
	char* g = *(char**)((char*)this + 0x10);
	if (*(unsigned int*)(g + 0x44) >= *(unsigned int*)(g + 0x40))
	{
		luaC_step(this);
	}
	luaD_call(this, a, b);
}

// FUNCTION: ROBLOXSTUDIO 0x00a38710
int __cdecl lua_type(lua_exception* L, int index);
void __cdecl luaL_argerror(lua_exception* L, int narg, const char* extramsg);

void __cdecl lua_exception::checkAny(int index)
{
	if (lua_type(this, index) == -1)
	{
		luaL_argerror(this, index, "value expected");
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a35620
void __cdecl luaC_step(lua_exception* L);
void __cdecl luaG_runerror(lua_exception* L, const char* fmt, void* argp);

void __cdecl lua_exception::runErrorV(const char* fmt, ...)
{
	char* g = *(char**)((char*)this + 0x10);
	if (*(unsigned int*)(g + 0x44) >= *(unsigned int*)(g + 0x40))
	{
		luaC_step(this);
	}
	luaG_runerror(this, fmt, (void*)(&fmt + 1));
}

// FUNCTION: ROBLOXSTUDIO 0x00a37c30
int __cdecl lua_exception::setErrorData(int code, int level, int line)
{
	int resultCode = code;
	int resultLevel;

	if (resultCode == 0)
		goto clear;

	resultLevel = level;
	if (resultLevel != 0)
		goto store;

clear:
	resultLevel = 0;
	resultCode = 0;

store:
	*(int*)((char*)this + 0x44) = resultCode;
	*(int*)((char*)this + 0x3C) = line;
	*(int*)((char*)this + 0x40) = line;
	*(unsigned char*)((char*)this + 0x38) = (unsigned char)resultLevel;
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00a37800
const char* __cdecl lua_exception::getString(int index)
{
	if (index & 0x100)
	{
		int idx = index & ~0x100;
		idx += idx;
		char* base = *(char**)((char*)this + 8);
		if (*(int*)(base + idx * 8 + 8) == 4)
		{
			return *(char**)(base + idx * 8) + 0x10;
		}
	}
	return (const char*)0x0101EB04;
}

// AUTO-GENERATED IMPLEMENTATIONS


