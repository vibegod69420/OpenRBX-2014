#include "RobloxIDEDoc.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004bb180
int RobloxIDEDoc::getField80() const
{
	return field_0080;
}

// FUNCTION: ROBLOXSTUDIO 0x004b6bf0
struct RobloxIDEDoc_Helper4C8A80
{
	void fn(void* out, void* node, void* head);
};

__declspec(dllimport) void __cdecl RobloxIDEDoc_Delete(void* ptr);

void RobloxIDEDoc::releaseData()
{
	void* local;
	void* head = *(void**)this;
	((RobloxIDEDoc_Helper4C8A80*)this)->fn(&local, *(void**)head, head);
	RobloxIDEDoc_Delete(*(void**)this);
}

// AUTO-GENERATED IMPLEMENTATIONS


