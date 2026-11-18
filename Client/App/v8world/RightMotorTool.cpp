#include "v8world/RightMotorTool.h"

#include "decomp.h"

namespace RBX {

class CommandChecker
{
public:
	__declspec(dllimport) bool __thiscall isRightMotorCommand(void* command);
};

extern unsigned char g_assertsEnabled;
typedef unsigned char (__cdecl *AssertHandler)(const char*, const char*, int);
extern AssertHandler g_assertHandler;

void __cdecl RBXAssert(int mode, const char* message);
void* __cdecl getCommandPointer(void* currentCommand);

extern CommandChecker g_commandChecker;

// FUNCTION: ROBLOXSTUDIO 0x00b98290
bool RightMotorTool::isEnabled()
{
	void* data = *(void**)((char*)this + 0x0C);
	void* workspace = *(void**)((char*)data + 0xBA0);

	unsigned char assertsEnabled = g_assertsEnabled;
	if (assertsEnabled)
	{
		if (*(void**)((char*)workspace + 0x1B8) == NULL)
		{
			if (g_assertHandler)
			{
				if (g_assertHandler(
						"currentCommand.get()!=NULL",
						"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
						276))
				{
					goto checkCommand;
				}

				assertsEnabled = g_assertsEnabled;
			}

			RBXAssert(
				(int)assertsEnabled,
				"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}

checkCommand:
	void* currentCommand = *(void**)((char*)workspace + 0x1B8);
	if (currentCommand)
		return g_commandChecker.isRightMotorCommand(getCommandPointer(currentCommand));

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
