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
	// AUTO-GENERATED METHODS
};



#endif // CLIENT_ROBLOXSTUDIO_LUA_EXCEPTION_H
