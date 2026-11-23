#include "v8world/OscillateMotorTool.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b98210
extern unsigned char byte_12DE657;
typedef unsigned char (__cdecl *AssertHandler_12DE694)(const char*, const char*, int);
extern AssertHandler_12DE694 dword_12DE694;
void __cdecl sub_6B9740(int, const char*);
void* __cdecl sub_CF67D4(void*);

struct Desc_128F340
{
	__declspec(dllimport) bool __thiscall check(void*);
};
extern Desc_128F340 g_desc_128F340;

bool OscillateMotorTool::isChecked()
{
	void* workspace = ((void**)this)[3];
	char* holder = *(char**)((char*)workspace + 0xBA0);
	void* cmd;

	unsigned char flag = byte_12DE657;
	if (flag)
	{
		if (*(void**)(holder + 0x1B8) == 0)
		{
			AssertHandler_12DE694 handler = dword_12DE694;
			if (handler)
			{
				if (handler(
					"currentCommand.get()!=NULL",
					"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
					276))
					goto checkCmd;
				flag = byte_12DE657;
			}
			sub_6B9740((int)flag,
				"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}

checkCmd:
	cmd = *(void**)(holder + 0x1B8);
	if (cmd)
	{
		cmd = sub_CF67D4(cmd);
		return g_desc_128F340.check(cmd);
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
