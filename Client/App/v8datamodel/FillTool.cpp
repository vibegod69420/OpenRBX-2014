#include "v8datamodel/FillTool.h"

#include "decomp.h"

namespace RBX {

extern unsigned char g_FillToolWorkspaceCheck;
typedef bool (__cdecl *FillToolAssertCallback)(const char*, const char*, int);
extern FillToolAssertCallback g_FillToolAssertCallback;
void __cdecl FillToolAssertLog(int, const char*);
void* __cdecl FillToolGetCommandPtr(void*);
extern char g_FillToolCommandTarget;
typedef bool (__thiscall *FillToolCommandEnabledFn)(void*, void*);
extern FillToolCommandEnabledFn g_FillToolCommandEnabled;

// FUNCTION: ROBLOXSTUDIO 0x00b97b90
bool FillTool::isEnabled()
{
	char* ws = *(char**)((char*)*(void**)((char*)this + 0xC) + 0xBA0);

	unsigned char check = g_FillToolWorkspaceCheck;
	if (check && *(void**)(ws + 0x1B8) == 0)
	{
		FillToolAssertCallback cb = g_FillToolAssertCallback;
		if (cb)
		{
			if (cb("currentCommand.get()!=NULL",
				"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
				276))
				goto done_assert;
			check = g_FillToolWorkspaceCheck;
		}
		FillToolAssertLog((int)(unsigned char)check,
			"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
	done_assert:;
	}

	void* cmd = *(void**)(ws + 0x1B8);
	if (cmd)
	{
		void* p = FillToolGetCommandPtr(cmd);
		return g_FillToolCommandEnabled(&g_FillToolCommandTarget, p);
	}

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
