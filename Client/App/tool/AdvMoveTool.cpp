#include "tool/AdvMoveTool.h"

#include "decomp.h"

namespace RBX {

struct AdvMoveToolWorkspace
{
	char pad[0x1B8];
	void* currentCommand;
};

struct AdvMoveToolContainer
{
	char pad[0xBA0];
	AdvMoveToolWorkspace* workspace;
};

extern unsigned char byte_12DE657;
typedef bool (__cdecl *AssertCallback)(const char*, const char*, int);
extern AssertCallback dword_12DE694;

void __cdecl sub_6B9740(int level, const char* message);
void* __cdecl sub_CF67D4(void* command);

typedef bool (__thiscall *CommandCheckProc)(void*, void*);
extern CommandCheckProc dword_E10524;

// FUNCTION: ROBLOXSTUDIO 0x00b97890
bool AdvMoveTool::isEnabled()
{
	AdvMoveToolWorkspace* workspace =
		(*(AdvMoveToolContainer**)((char*)this + 0xC))->workspace;

	unsigned char flag = byte_12DE657;
	if (flag)
	{
		if (workspace->currentCommand == 0)
		{
			AssertCallback assertAction = dword_12DE694;
			if (assertAction)
			{
				if (assertAction(
						"currentCommand.get()!=NULL",
						"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
						276))
					goto checkCommand;

				flag = byte_12DE657;
			}

			sub_6B9740(
				flag,
				"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}

checkCommand:
	void* currentCommand = workspace->currentCommand;
	if (currentCommand)
	{
		void* commandObject = sub_CF67D4(currentCommand);
		return dword_E10524((void*)0x012D1FC0, commandObject);
	}

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
