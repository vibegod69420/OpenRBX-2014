#include "tool/MoveResizeJoinTool.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c0a010
const float* MoveResizeJoinTool::getSnapValues()
{
	static float values[3];
	static int initialized;
	if (!(initialized & 1))
	{
		initialized |= 1;
		values[0] = 0.1f;
		values[1] = 0.6f;
		values[2] = 1.0f;
	}
	return values;
}

class MoveResizeJoinTool_TypeDesc
{
public:
	__declspec(dllimport) bool __thiscall isA(void* obj);
};

typedef unsigned char (__cdecl *MoveResizeJoinTool_AssertHandler)(const char*, const char*, int);

extern unsigned char g_MoveResizeJoinTool_AssertFlag;
extern MoveResizeJoinTool_AssertHandler g_MoveResizeJoinTool_AssertHandler;
void __cdecl MoveResizeJoinTool_AssertLog(int, const char*);
void* __cdecl MoveResizeJoinTool_GetCommandObject(void*);

// FUNCTION: ROBLOXSTUDIO 0x00b98110
bool MoveResizeJoinTool::isEnabled()
{
	char* holder = *(char**)((char*)this + 0x0C);
	char* workspace = *(char**)(holder + 0xBA0);

	unsigned char flag = g_MoveResizeJoinTool_AssertFlag;
	if (flag)
	{
		if (*(void**)(workspace + 0x1B8) == 0)
		{
			MoveResizeJoinTool_AssertHandler handler = g_MoveResizeJoinTool_AssertHandler;
			if (handler)
			{
				if (handler(
						"currentCommand.get()!=NULL",
						"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
						276))
					goto done;
				flag = g_MoveResizeJoinTool_AssertFlag;
			}
			MoveResizeJoinTool_AssertLog(
				(int)flag,
				"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}

done:
	{
		void* currentCommand = *(void**)(workspace + 0x1B8);
		if (currentCommand)
		{
			void* obj = MoveResizeJoinTool_GetCommandObject(currentCommand);
			return ((MoveResizeJoinTool_TypeDesc*)0x0128F24C)->isA(obj);
		}
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
