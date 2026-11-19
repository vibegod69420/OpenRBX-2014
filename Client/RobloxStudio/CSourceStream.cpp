#include "CSourceStream.h"

#include "decomp.h"



__declspec(dllimport) int __stdcall CloseHandle(void* hObject);

// FUNCTION: ROBLOXSTUDIO 0x006b37c0
void CSourceStream::Close()
{
	if (_vtable_or_head)
		CloseHandle((void*)_vtable_or_head);
}

// AUTO-GENERATED IMPLEMENTATIONS


