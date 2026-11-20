#ifndef CLIENT_APP_INCLUDE_SCRIPT_LUAARGUMENTS_H
#define CLIENT_APP_INCLUDE_SCRIPT_LUAARGUMENTS_H

#include "decomp.h"

namespace RBX {
namespace Lua {

// AUTO-GENERATED HELPERS

class LuaArguments
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	int size();
	void __cdecl pushAllValues(void* arg);
	void __cdecl pushAllResults(void* arg);
	void __cdecl pushAllEvents(void* arg);
	void __cdecl pushAllObjects(void* arg);
	void __cdecl pushAllArgs(void* arg);
	void __cdecl pushAllYields(void* arg);
	void __cdecl pushAllThreads(void* arg);
	void __cdecl pushAllFunctions(void* arg);
	void __cdecl pushAllUserdatas(void* arg);
	void __cdecl pushObject();
	void __cdecl pushThread();
	void __cdecl pushFunction();
	void __cdecl pushFunctionValue();
	void __cdecl pushString();
	void __cdecl pushUserdata();
	void __cdecl pushRBXScriptSignal();
	void __cdecl pushGlobal();
	void __cdecl pushGlobalResults();
	void __cdecl pushGlobalValues();
	void __cdecl pushGlobalEvents();
	void __cdecl pushGlobalObjects();
	void __cdecl pushGlobalArgs();
	void __cdecl pushGlobalYields();
	void __cdecl pushGlobalFunctions();
	void __cdecl pushGlobalThreads();
	void __cdecl pushGlobalFunction();
	void __cdecl pushGlobalFunctionValue();
	void __cdecl pushGlobalString();
	void __cdecl pushGlobalUserdata();
	void __cdecl pushGlobalRBXScriptSignal();
	bool __cdecl getYield(void* arg, void* out);
	bool __cdecl getThread(void* arg, void* out);
	bool __cdecl getUserdata(void* arg, void* out);
	bool __cdecl getArg(void* arg, void* out);
	bool __cdecl getString(void* arg, void* out);
	bool __cdecl getFunctionValue(void* arg, void* out);
	bool __cdecl getValue(void* arg, void* out);
	bool __cdecl getRBXScriptSignal(void* arg, void* out);
	// AUTO-GENERATED METHODS
};

} // namespace Lua
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_LUAARGUMENTS_H
