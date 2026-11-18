#include "v8datamodel/DropperTool.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b97b10
extern unsigned char g_assertAction;
typedef bool (__cdecl *AssertCallback)(const char*, const char*, int);
extern AssertCallback g_assertCallback;
void __cdecl doAssert(int action, const char* message);

void* __cdecl getCommandObject(void* command);
struct DropperCommandDescriptorType {};
extern DropperCommandDescriptorType g_dropperCommandDescriptor;
typedef bool (__thiscall *IsDropperCommandFunc)(DropperCommandDescriptorType*, void*);
extern IsDropperCommandFunc g_isDropperCommand;

bool DropperTool::isChecked()
{
	void* container = *(void**)((char*)this + 0xC);
	void* workspace = *(void**)((char*)container + 0xBA0);

	unsigned char action = g_assertAction;
	if (action)
	{
		if (*(void**)((char*)workspace + 0x1B8) == 0)
		{
			if (g_assertCallback)
			{
				if (g_assertCallback(
						"currentCommand.get()!=NULL",
						"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
						276))
					goto skipAssert;
				action = g_assertAction;
			}
			doAssert(
				action,
				"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		skipAssert:;
		}
	}

	void* command = *(void**)((char*)workspace + 0x1B8);
	if (command)
	{
		void* target = getCommandObject(command);
		return g_isDropperCommand(&g_dropperCommandDescriptor, target);
	}

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
