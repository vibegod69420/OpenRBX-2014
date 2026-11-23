#include "v8datamodel/AnchorTool.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b97990
extern unsigned char byte_12DE657;
typedef unsigned char (__cdecl *CheckFn_12DE694)(const char*, const char*, int);
extern CheckFn_12DE694 dword_12DE694;
void __cdecl sub_6B9740(int, const char*);
void* __cdecl sub_CF67D4(void*);
typedef bool (__thiscall *Fn_E10524)(void*, void*);
extern Fn_E10524 dword_E10524;

bool AnchorTool::isChecked()
{
	char* esi = *(char**)(*(char**)((char*)this + 0x0C) + 0xBA0);
	unsigned char flag = byte_12DE657;

	if (flag)
	{
		if (*(void**)(esi + 0x1B8) == 0)
		{
			if (dword_12DE694)
			{
				if (dword_12DE694(
					"currentCommand.get()!=NULL",
					"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
					276) != 0)
				{
					goto checkCommand;
				}
				flag = byte_12DE657;
			}
			sub_6B9740((unsigned char)flag,
				"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}

checkCommand:
	void* currentCommand = *(void**)(esi + 0x1B8);
	if (currentCommand)
	{
		void* obj = sub_CF67D4(currentCommand);
		return dword_E10524((void*)0x0128F390, obj);
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
