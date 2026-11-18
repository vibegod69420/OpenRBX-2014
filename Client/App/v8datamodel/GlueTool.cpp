#include "v8datamodel/GlueTool.h"

#include "decomp.h"

namespace RBX {

class Workspace;

extern unsigned char g_AssertEnabled_12DE657;
typedef bool (__cdecl *AssertHookPtr)(const char*, const char*, int);
extern AssertHookPtr g_AssertHook_12DE694;

void __cdecl RBXAssertFailure_6B9740(int level, const char* message);
void* __cdecl sub_CF67D4(void* cmd);

extern void* g_CastTypeDesc_128F290;
typedef bool (__thiscall *CastCheckFunc)(void* typeDesc, void* obj);
extern CastCheckFunc g_CastCheck_E10524;

// FUNCTION: ROBLOXSTUDIO 0x00b97d10
bool GlueTool::isEnabled()
{
	void* context = *(void**)((char*)this + 0x0C);
	Workspace* workspace = *(Workspace**)((char*)context + 0xBA0);

	unsigned char assertEnabled = g_AssertEnabled_12DE657;
	if (assertEnabled)
	{
		if (*(void**)((char*)workspace + 0x1B8) == NULL)
		{
			AssertHookPtr hook = g_AssertHook_12DE694;
			if (hook)
			{
				if (hook(
					"currentCommand.get()!=NULL",
					"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
					276))
				{
					goto skipAssertFail;
				}
				assertEnabled = g_AssertEnabled_12DE657;
			}
			RBXAssertFailure_6B9740(assertEnabled, "currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}

skipAssertFail:
	void* cmd = *(void**)((char*)workspace + 0x1B8);
	if (cmd)
	{
		return g_CastCheck_E10524(&g_CastTypeDesc_128F290, sub_CF67D4(cmd));
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
