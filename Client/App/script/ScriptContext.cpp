#include "script/ScriptContext.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008cfbc0
struct ScriptContextUnlinkHelper
{
	void __thiscall unlink(void** it, void* value, void* state);
};

void __cdecl ScriptContextDeleteState(void* state);

void ScriptContext::closeState()
{
	void* it;
	void* state = *(void**)this;

	((ScriptContextUnlinkHelper*)this)->unlink(&it, *(void**)state, state);
	ScriptContextDeleteState(*(void**)this);
}

// FUNCTION: ROBLOXSTUDIO 0x008cfc20
void ScriptContext::close()
{
	void* it;
	void* state = *(void**)this;

	((ScriptContextUnlinkHelper*)this)->unlink(&it, *(void**)state, state);
	ScriptContextDeleteState(*(void**)this);
}

struct lua_State;

const char* lua_tostring(lua_State* L, int idx);
void* luaL_checkudata(lua_State* L, int ud, const char* tname);
void scriptContextReportError(void* ud, const char* msg, lua_State* L);

extern const char* gScriptContextTypeName;

// FUNCTION: ROBLOXSTUDIO 0x008dd990
void __cdecl ScriptContext::reportError()
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008dd9c0
void __cdecl ScriptContext::reportError(void* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

struct lua_State;

// FUNCTION: ROBLOXSTUDIO 0x008dd9f0
void __cdecl ScriptContext::reportError(struct lua_State* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008dda80
void __cdecl ScriptContext::reportError(int /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddab0
void __cdecl ScriptContext::reportError(unsigned int /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddae0
void __cdecl ScriptContext::reportError(unsigned long /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddb10
void __cdecl ScriptContext::reportError(long /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddb40
void __cdecl ScriptContext::reportError(const void* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddb70
void __cdecl ScriptContext::reportError(const char* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddba0
void __cdecl ScriptContext::reportError(char* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddbd0
void __cdecl ScriptContext::reportError(unsigned char* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddc00
void __cdecl ScriptContext::reportError(const unsigned char* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddc30
void __cdecl ScriptContext::reportError(signed char* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddc60
void __cdecl ScriptContext::reportError(const signed char* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddc90
void __cdecl ScriptContext::reportError(unsigned short /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddcc0
void __cdecl ScriptContext::reportError(short /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008ddcf0
int __cdecl ScriptContext::reportError(bool /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008ddd30
int __cdecl ScriptContext::reportError(char /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008ddd70
int __cdecl ScriptContext::reportError(signed char /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008dddb0
int __cdecl ScriptContext::reportError(unsigned char /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008dde70
int __cdecl ScriptContext::reportError(wchar_t /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008ddeb0
int __cdecl ScriptContext::reportError(double /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008ddef0
int __cdecl ScriptContext::reportError(float /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008ddf70
int __cdecl ScriptContext::reportError(int* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008ddfb0
int __cdecl ScriptContext::reportError(unsigned int* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de030
int __cdecl ScriptContext::reportError(long* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de0b0
int __cdecl ScriptContext::reportError(unsigned long* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de0f0
int __cdecl ScriptContext::reportError(short* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de170
int __cdecl ScriptContext::reportError(unsigned short* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008ddff0
int __cdecl ScriptContext::reportError(__int64* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de070
int __cdecl ScriptContext::reportError(unsigned __int64* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de130
int __cdecl ScriptContext::reportError(wchar_t* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de1b0
int __cdecl ScriptContext::reportError(float* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de230
int __cdecl ScriptContext::reportError(double* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de1f0
int __cdecl ScriptContext::reportError(const double* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de270
int __cdecl ScriptContext::reportError(const float* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008de2b0
int __cdecl ScriptContext::reportError(const unsigned __int64* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008cfc50
void ScriptContext::clearState()
{
	void* it;
	void* state = *(void**)this;

	((ScriptContextUnlinkHelper*)this)->unlink(&it, *(void**)state, state);
	ScriptContextDeleteState(*(void**)this);
}

// FUNCTION: ROBLOXSTUDIO 0x008de2f0
int __cdecl ScriptContext::reportError(const __int64* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

#include <intrin.h>

struct ScriptContextSharedCount
{
	virtual void scalarDeletingDestructor(unsigned int flags);
	virtual void dispose();
	virtual void destroy();

	volatile long useCount;
	volatile long weakCount;
};

// FUNCTION: ROBLOXSTUDIO 0x008e0bd0
void __cdecl ScriptContext::releaseSharedCount(void* ptr)
{
	if (ptr)
	{
		ScriptContextSharedCount* count = static_cast<ScriptContextSharedCount*>(ptr);
		if (_InterlockedDecrement(&count->useCount) == 0)
		{
			count->dispose();
			if (_InterlockedDecrement(&count->weakCount) == 0)
			{
				count->destroy();
			}
		}
	}
}

// FUNCTION: ROBLOXSTUDIO 0x008ccab0
struct ScriptContext_StateNode;

struct ScriptContext_StateChecker
{
	unsigned char __thiscall check(void* arg);
};

struct ScriptContext_StateNode
{
	unsigned char pad00[0x1C];
	unsigned char pad1C[0x0C];
	ScriptContext_StateChecker* checker; // 0x28
	unsigned char pad2C[0x0C];
	ScriptContext_StateNode* next;       // 0x38

	ScriptContext_StateNode* __thiscall getDeepest();
	void* __thiscall tailTarget();
};

void* __cdecl ScriptContext_GetGlobalState();

void* __cdecl ScriptContext::getScriptStateNode()
{
	ScriptContext_StateNode* self = (ScriptContext_StateNode*)this;
	if (!self)
		goto fail;

	{
		ScriptContext_StateNode* result;
		ScriptContext_StateNode* p = self->next;
		if (p)
		{
			ScriptContext_StateNode* p2 = p->next;
			if (p2)
				result = p2->getDeepest();
			else
				result = p;
		}
		else
		{
			result = self;
		}

		if (!result)
			goto fail;

		unsigned char* sub = (unsigned char*)result + 0x1C;
		if (!sub)
			goto fail;

		ScriptContext_StateChecker* checker = *(ScriptContext_StateChecker**)(sub + 0x0C);
		void* globalState = ScriptContext_GetGlobalState();
		if (!checker->check(globalState))
			goto fail;

		ScriptContext_StateNode* target = (ScriptContext_StateNode*)(sub - 0x1C);
		if (!target)
			goto fail;

		return target->tailTarget();
	}

fail:
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008ccb10
void* __cdecl ScriptContext::getScriptStateNode(void* context)
{
	ScriptContext_StateNode* self = (ScriptContext_StateNode*)context;
	if (!self)
		goto fail;

	{
		ScriptContext_StateNode* result;
		ScriptContext_StateNode* p = self->next;
		if (p)
		{
			ScriptContext_StateNode* p2 = p->next;
			if (p2)
				result = p2->getDeepest();
			else
				result = p;
		}
		else
		{
			result = self;
		}

		if (!result)
			goto fail;

		unsigned char* sub = (unsigned char*)result + 0x1C;
		if (!sub)
			goto fail;

		ScriptContext_StateChecker* checker = *(ScriptContext_StateChecker**)(sub + 0x0C);
		void* globalState = ScriptContext_GetGlobalState();
		if (!checker->check(globalState))
			goto fail;

		ScriptContext_StateNode* target = (ScriptContext_StateNode*)(sub - 0x1C);
		if (!target)
			goto fail;

		return target->tailTarget();
	}

fail:
	return 0;
}

struct lua_State;

void lua_pushlightuserdata(lua_State* L, void* p);
void lua_gettable(lua_State* L, int idx);
int lua_isnil(lua_State* L, int idx);
void* lua_newuserdata(lua_State* L, size_t sz);
void lua_getfield(lua_State* L, int idx, const char* k);
void lua_settop(lua_State* L, int idx);
int lua_setmetatable(lua_State* L, int objindex);
void lua_pushvalue(lua_State* L, int idx);
void lua_settable(lua_State* L, int idx);
void lua_remove(lua_State* L, int idx);

extern unsigned char g_luaBridgeAssertEnabled;
extern unsigned char (__cdecl* g_luaBridgeAssertCallback)(const char*, const char*, int);
void __cdecl luaBridgeAssertReport(unsigned char level, const char* message);
extern const char* g_luaBridgeSharedMetatable;

// FUNCTION: ROBLOXSTUDIO 0x008dfe30
void __cdecl ScriptContext::pushObject(void* object)
{
	lua_State* L = (lua_State*)this;

	lua_pushlightuserdata(L, (void*)0x008dfe30);
	lua_gettable(L, -10000);

	if (g_luaBridgeAssertEnabled)
	{
		if (!lua_isnil(L, -1))
		{
			if (g_luaBridgeAssertCallback)
			{
				if (g_luaBridgeAssertCallback(
					"!lua_isnil( L, -1 )",
					"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\Lua/LuaBridge.h",
					250))
				{
					goto assert_ok;
				}
			}
			luaBridgeAssertReport(
				g_luaBridgeAssertEnabled,
				"!lua_isnil( L, -1 ) file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\Lua/LuaBridge.h line: 250");
		}
	}
assert_ok:
	{
		void* obj = object;
		lua_pushlightuserdata(L, obj);
		lua_gettable(L, -2);
		if (!lua_isnil(L, -1))
		{
			lua_settop(L, -2);
			void* ud = lua_newuserdata(L, 4);
			if (ud)
				*(void**)ud = obj;

			lua_getfield(L, -10000, g_luaBridgeSharedMetatable);
			lua_setmetatable(L, -2);
			lua_pushlightuserdata(L, obj);
			lua_pushvalue(L, -2);
			lua_settable(L, -4);
		}
		lua_remove(L, -2);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x008cfbf0
void ScriptContext::releaseState()
{
	void* it;
	void* state = *(void**)this;

	((ScriptContextUnlinkHelper*)this)->unlink(&it, *(void**)state, state);
	ScriptContextDeleteState(*(void**)this);
}

struct lua_State;
void lua_pushstring(lua_State* L, const char* s);
void lua_setfield(lua_State* L, int idx, const char* k);

// FUNCTION: ROBLOXSTUDIO 0x008dfac0
void __cdecl ScriptContext::lockMetatable(int idx)
{
	lua_State* L = (lua_State*)this;
	lua_pushstring(L, "The metatable is locked");
	lua_setfield(L, idx - 1, "__metatable");
}

// FUNCTION: ROBLOXSTUDIO 0x008dd840
void __cdecl ScriptContext::reportError(bool* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008dd870
void __cdecl ScriptContext::reportError(const bool* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008dd8a0
void __cdecl ScriptContext::reportError(const void** /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008dd8d0
void __cdecl ScriptContext::reportError(void** /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008dd900
void __cdecl ScriptContext::reportError(char** /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008dd930
void __cdecl ScriptContext::reportError(const char** /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008dd960
void __cdecl ScriptContext::reportError(unsigned char** /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008dda50
void __cdecl ScriptContext::reportError(const struct lua_State* /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
}

// FUNCTION: ROBLOXSTUDIO 0x008dde30
int __cdecl ScriptContext::reportError(__int64 /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x008ddf30
int __cdecl ScriptContext::reportError(unsigned __int64 /*unused*/)
{
	lua_State* L = (lua_State*)this;
	const char* msg = lua_tostring(L, 2);
	void* ud = luaL_checkudata(L, 1, gScriptContextTypeName);
	scriptContextReportError(ud, msg, L);
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
