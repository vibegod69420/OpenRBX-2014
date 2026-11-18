#include "tool/NullTool.h"

#include "decomp.h"

namespace RBX {

extern unsigned char sAssertEnabled;
typedef unsigned char (__cdecl *AssertHandlerProc)(const char*, const char*, int);
extern AssertHandlerProc sAssertHandler;

void __cdecl RBXAssertLog(int level, const char* message);
void* __cdecl RBXCommandGetId(void* command);

class RunStateName
{
public:
	__declspec(dllimport) bool __thiscall matches(void* id);
};

extern RunStateName g_runStateName;

// FUNCTION: ROBLOXSTUDIO 0x00b98190
bool NullTool::isChecked()
{
	char* base = *(char**)((char*)this + 0x0C);
	char* workspace = *(char**)(base + 0xBA0);

	unsigned char enabled = sAssertEnabled;
	if (enabled)
	{
		if (*(void**)(workspace + 0x1B8) == NULL)
		{
			if (sAssertHandler)
			{
				if (sAssertHandler(
					"currentCommand.get()!=NULL",
					"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
					276))
					goto L_afterAssert;
				enabled = sAssertEnabled;
			}
			RBXAssertLog(
				(unsigned char)enabled,
				"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}
L_afterAssert:

	void* command = *(void**)(workspace + 0x1B8);
	if (command)
	{
		void* id = RBXCommandGetId(command);
		return g_runStateName.matches(id);
	}

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
