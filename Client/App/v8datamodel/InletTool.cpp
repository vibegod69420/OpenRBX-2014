#include "v8datamodel/InletTool.h"

#include "decomp.h"

namespace RBX {

class CommandChecker
{
public:
	__declspec(dllimport) bool __thiscall check(void* cmd);
};

extern void __cdecl RBX_ReportAssertFailure(int, const char*);
extern void* __cdecl RBX_GetCommandPtr(void*);

// FUNCTION: ROBLOXSTUDIO 0x00b97f10
bool InletTool::isEnabled()
{
	char* workspace = *(char**)(*(char**)((char*)this + 0xC) + 0xBA0);

	unsigned char flag = *(unsigned char*)0x12DE657;
	if (flag)
	{
		if (*(int*)(workspace + 0x1B8) == 0)
		{
			typedef int (__cdecl *AssertCallback)(const char*, const char*, int);
			AssertCallback cb = *(AssertCallback*)0x12DE694;
			if (cb)
		 {
				if ((unsigned char)cb(
					"currentCommand.get()!=NULL",
					"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
					276))
				{
					goto check_cmd;
				}
				flag = *(unsigned char*)0x12DE657;
			}
			RBX_ReportAssertFailure(
				(int)flag,
				"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}

check_cmd:
	void* cmd = *(void**)(workspace + 0x1B8);
	if (cmd)
	{
		void* cmdPtr = RBX_GetCommandPtr(cmd);
		return ((CommandChecker*)0x128F2E4)->check(cmdPtr);
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
