#ifndef CLIENT_ROBLOXSTUDIO_LUA_EXCEPTION_H
#define CLIENT_ROBLOXSTUDIO_LUA_EXCEPTION_H

#include "decomp.h"



// AUTO-GENERATED HELPERS

class lua_exception
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void raise();
	int __cdecl getCode();
	int __cdecl getLine();
	int __cdecl getType();
	int __cdecl getLevel();
	void __cdecl raise(int arg1, int arg2);
	void __cdecl initContext(void* context);
	int __cdecl dispatchGlobal();
	int __cdecl dispatchGlobalState();
	int __cdecl dispatchGlobalState2();
	int __cdecl dispatchGlobalState3();
	int __cdecl dispatchGlobalState4();
	int __cdecl dispatchGlobalState5();
	void __cdecl pushValue(int value);
	void __cdecl setStackTag(int index, unsigned char tag);
	const char* __cdecl getTypeName(int type);
	void __cdecl pushBoolean(int value);
	int __cdecl popError(int* pPair, int* outCode);
	int __cdecl getStackType(int index);
	int __cdecl pushThread();
	void __cdecl runError(const char* fmt, ...);
	void* __cdecl luaL_newstate();
	void __cdecl setTable(int index);
	void __cdecl pushValueAtIndex(int index);
	void __cdecl call(int a, int b);
	void __cdecl checkAny(int index);
	void __cdecl runErrorV(const char* fmt, ...);
	int __cdecl setErrorData(int code, int level, int line);
	const char* __cdecl getString(int index);
	char* __cdecl prepBuffer();
	void* __cdecl sub_A3B1D0(int value);
	int __cdecl yield(int nresults);
	void __cdecl rawgeti(int index, int n);
	int __cdecl orderError(void* p1, void* p2);
	int __cdecl findLocal(void* ci, int n);
	void* __cdecl sub_A3AFF0(int value);
	void __cdecl setTop(int n);
	void* __cdecl sub_A3B450(float arg1, float arg2);
	double __cdecl tonumber(int index);
	void __cdecl rawget(int index);
	void __cdecl sub_A39150();
	int __cdecl rawequal(int index1, int index2);
	void* __cdecl sub_A3AFB0(int value);
	void __cdecl remove(int index);
	int __cdecl equal(int index1, int index2);
	void* __cdecl sub_A3B400(int arg1, int arg2);
	void* __cdecl sub_A3B350(int arg1, int arg2, int arg3);
	void* __cdecl sub_A3B4A0(int arg1, int arg2, int arg3);
	void* __cdecl sub_A353E0(lua_exception* L, int size);
	void __cdecl sub_A377A0();
	void __cdecl sub_A384B0(const char* src, int len);
	const char* __cdecl tolstring(int index, int* len);
	void __cdecl sub_A36E80(int arg);
	void __cdecl rawseti(int index, int n);
	void __cdecl rawset(int index);
	void __cdecl sub_A35580(int arg2, int arg3);
	void __cdecl sub_A378D0();
	void __cdecl sub_A37320(void* p);
	void __cdecl replace(int idx);
	void __cdecl pushNil();
	int __cdecl sub_A38350(int a1, int a2, int a3);
	int __cdecl toboolean(int index);
	void* __cdecl touserdata(int index);
	void __cdecl getTable(int index);
	void __cdecl sub_A35690(void* L, void* buf, int size);
	void __cdecl typeError(int narg, int t);
	const char* __cdecl luaL_checklstring(int narg, int* len);
	int __cdecl luaL_newmetatable(const char* tname);
	void __cdecl sub_A35BD0(void* dest);
	// AUTO-GENERATED METHODS
};



#endif // CLIENT_ROBLOXSTUDIO_LUA_EXCEPTION_H
