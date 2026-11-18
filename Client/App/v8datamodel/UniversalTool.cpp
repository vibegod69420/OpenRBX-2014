#include "v8datamodel/UniversalTool.h"

#include "decomp.h"

namespace RBX {

extern unsigned char unk_12DE657;
typedef unsigned char (__cdecl *AssertCallback_t)(const char*, const char*, int);
extern AssertCallback_t unk_12DE694;

void __cdecl sub_6B9740(int, const char*);
void* __cdecl sub_CF67D4(void*);

class Unk128F300;
extern Unk128F300 unk_128F300;
typedef bool (__thiscall *SubE10524_t)(Unk128F300*, void*);
extern SubE10524_t unk_E10524;

// FUNCTION: ROBLOXSTUDIO 0x00b98410
bool UniversalTool::isEnabled()
{
	void* data = *(void**)((char*)this + 0x0C);
	void* workspace = *(void**)((char*)data + 0xBA0);

	unsigned char flag = unk_12DE657;
	if (flag)
	{
		if (*(void**)((char*)workspace + 0x1B8) == 0)
		{
			if (unk_12DE694)
			{
				if (unk_12DE694(
						"currentCommand.get()!=NULL",
						"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h",
						276))
					goto skipAssert;

				flag = unk_12DE657;
			}

			sub_6B9740(
				(int)(unsigned char)flag,
				"currentCommand.get()!=NULL file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\v8datamodel/Workspace.h line: 276");
		}
	}

skipAssert:
	void* currentCommand = *(void**)((char*)workspace + 0x1B8);
	if (currentCommand)
	{
		void* commandName = sub_CF67D4(currentCommand);
		return unk_E10524(&unk_128F300, commandName);
	}

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
