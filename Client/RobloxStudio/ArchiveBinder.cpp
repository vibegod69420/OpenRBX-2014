#include "ArchiveBinder.h"

#include "decomp.h"



// Forward declarations for callees/callback
struct MergeBinderBase
{
	bool slot2();
};

void* __cdecl sub_905D60(void* a1, void* a2, void* a3, void* a4);
void __cdecl sub_907150();

// FUNCTION: ROBLOXSTUDIO 0x00907410
bool ArchiveBinder::slot2()
{
	void* node = *(void**)((char*)this + 0x18);
	void* found = sub_905D60(*(void**)node, node, (void*)&sub_907150, this);

	if (((MergeBinderBase*)this)->slot2() && found == *(void**)((char*)this + 0x1C))
		return true;

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS


