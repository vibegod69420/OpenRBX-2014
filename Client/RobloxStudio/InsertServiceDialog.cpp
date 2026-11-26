#include "InsertServiceDialog.h"

#include "decomp.h"



__declspec(dllimport) int __cdecl sub_E110A8(const char*);
__declspec(dllimport) void __cdecl sub_E10F50(int, InsertServiceDialog*, int);

// FUNCTION: ROBLOXSTUDIO 0x004625f0
void InsertServiceDialog::redrawDialog()
{
	if (*(unsigned char*)((char*)this + 0x25) == 0)
	{
		if (*(int*)((char*)this + 0x14) != 0)
		{
			int token = sub_E110A8("1redrawDialog()");
			sub_E10F50(0, this, token);
			*(unsigned char*)((char*)this + 0x25) = 1;
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


