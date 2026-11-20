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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
