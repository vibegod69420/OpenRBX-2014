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
	void __cdecl pushVector2(void* arg);
	int __cdecl pushVector2int16();
	bool __cdecl getScript(void* arg, void* out);
	void __cdecl pushVector3(void* arg);
	bool __cdecl getScriptShared(void* arg, void* out);
	bool __cdecl getGlobal(void* arg, void* out);
	bool __cdecl getResult(void* arg, void* out);
	bool __cdecl getValues(void* arg, void* out);
	bool __cdecl getEvent(void* arg, void* out);
	bool __cdecl getObject(void* arg, void* out);
	bool __cdecl getFunctions(void* arg, void* out);
	bool __cdecl getFunction(void* arg, void* out);
	int __cdecl pushVector3();
	int __cdecl pushVector2Sub();
	int __cdecl pushVector3Sub();
	void __cdecl registerObject(void* arg1, void* arg2);
	void __cdecl registerFunctions(void* arg1, void* arg2);
	void __cdecl registerString(void* arg1, void* arg2);
	void __cdecl registerUserdata(void* arg1, void* arg2);
	void __cdecl registerRBXScriptSignal(void* arg1, void* arg2);
	void* __cdecl getFunction(void* arg);
	// AUTO-GENERATED METHODS
};

} // namespace Lua
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_LUAARGUMENTS_H
