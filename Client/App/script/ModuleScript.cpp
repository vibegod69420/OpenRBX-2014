#include "script/ModuleScript.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00826180
extern "C" void free(void*);

class ModuleScriptYielded
{
public:
	virtual void destruct();
	virtual void resume(int state);
};

extern void (*g_ModuleScriptYieldSync)(void);

void ModuleScript::clearYieldedScripts()
{
	void** data = reinterpret_cast<void**>(this);
	if (data[0] == 0)
		return;

	g_ModuleScriptYieldSync();

	char* end = reinterpret_cast<char*>(data[1]);
	char* it = reinterpret_cast<char*>(data[0]);
	while (it != end)
	{
		reinterpret_cast<ModuleScriptYielded*>(it)->resume(0);
		it += 0x1C;
	}

	free(data[0]);
	data[0] = 0;
	data[1] = 0;
	data[2] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
