#include "v8datamodel/MaterialTool.h"

#include "decomp.h"

namespace RBX {

extern unsigned char g_MaterialToolDebugFlag_12DE657;
typedef unsigned char (__cdecl *MaterialToolDebugLogFunc)(const char*, const char*, int);
extern MaterialToolDebugLogFunc g_MaterialToolDebugLogFunc_12DE694;
void __cdecl MaterialToolDebugReport_6B9740(int, const char*);
void* __cdecl MaterialToolGetCommandPtr_CF67D4(void*);
typedef bool (__thiscall *MaterialToolCastFunc_E10524)(void*, void*);
extern MaterialToolCastFunc_E10524 g_MaterialToolCastFunc_E10524;

// FUNCTION: ROBLOXSTUDIO 0x00b98090
bool MaterialTool::isChecked()
{
	void* workspace = *(void**)((char*)this + 0xC);
	void* holder = *(void**)((char*)workspace + 0xBA0);

	unsigned char flag = g_MaterialToolDebugFlag_12DE657;
	if (flag)
	{
		if (*(int*)((char*)holder + 0x1B8) == 0)
		{
			if (g_MaterialToolDebugLogFunc_12DE694)
			{
				if (g_MaterialToolDebugLogFunc_12DE694(
						"currentCommand.get()!=NULL",
						"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
						0x114))
				{
					goto done;
				}
				flag = g_MaterialToolDebugFlag_12DE657;
			}
			MaterialToolDebugReport_6B9740(
				(int)flag,
				"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}

done:
	{
		void* cmd = *(void**)((char*)holder + 0x1B8);
		if (cmd)
		{
			void* p = MaterialToolGetCommandPtr_CF67D4(cmd);
			return g_MaterialToolCastFunc_E10524((void*)0x128F3CC, p);
		}
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
