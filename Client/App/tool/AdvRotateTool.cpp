#include "tool/AdvRotateTool.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c0e210
bool AdvRotateTool::getFlag_e210() const
{
	return s_flag_00c0e210;
}

extern unsigned char byte_12DE657;
typedef unsigned char (__cdecl *AssertCheckFunc)(const char*, const char*, int);
extern AssertCheckFunc dword_12DE694;
void __cdecl sub_6B9740(int, const char*);
void* __cdecl sub_CF67D4(void*);
extern char unk_12D1FA0;
typedef bool (__thiscall *FuncE10524)(void*, void*);
extern FuncE10524 dword_E10524;

// FUNCTION: ROBLOXSTUDIO 0x00b97910
bool AdvRotateTool::isEnabled()
{
	void* workspace = *(void**)((char*)this + 0x0C);
	void* holder = *(void**)((char*)workspace + 0xBA0);

	unsigned char flag = byte_12DE657;
	if (flag)
	{
		if (*(void**)((char*)holder + 0x1B8) == NULL)
		{
			AssertCheckFunc check = dword_12DE694;
			if (check)
			{
				if (check(
						"currentCommand.get()!=NULL",
						"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
						276))
				{
					goto checkCommand;
				}
				flag = byte_12DE657;
			}
			sub_6B9740((int)flag, "currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}

checkCommand:
	void* currentCommand = *(void**)((char*)holder + 0x1B8);
	if (currentCommand)
	{
		return dword_E10524(&unk_12D1FA0, sub_CF67D4(currentCommand));
	}

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
