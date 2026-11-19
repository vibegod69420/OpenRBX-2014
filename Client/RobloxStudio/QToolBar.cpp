#include "QToolBar.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004f4c70
void __fastcall QToolBar::destroyStringRange(void* end)
{
	char* first = (char*)this;
	char* last = (char*)end;
	if (first == last)
		return;

	void (__cdecl *dealloc)(void*) = *(void (__cdecl**)(void*))0x00E10508;
	char* p = first + 0x1c;
	do
	{
		if (*(unsigned int*)p >= 0x10u)
		{
			dealloc(*(void**)(p - 0x14));
		}
		*(unsigned int*)p = 0x0Fu;
		*(unsigned int*)(p - 4) = 0;
		*(p - 0x14) = 0;
		p += 0x20;
	} while ((p - 0x1c) != last);
}

// AUTO-GENERATED IMPLEMENTATIONS


