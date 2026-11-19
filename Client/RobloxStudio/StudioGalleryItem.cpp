#include "StudioGalleryItem.h"

#include "decomp.h"



class StudioGalleryItemExceptionBase
{
public:
	__declspec(dllimport) void __thiscall init(const char* const& msg, int flag);
};

extern void* StudioGalleryItem_vftable;

// FUNCTION: ROBLOXSTUDIO 0x0045feb0
StudioGalleryItem::StudioGalleryItem()
{
	const char* msg = "bad allocation";
	((StudioGalleryItemExceptionBase*)this)->init(msg, 1);
	*(void**)this = &StudioGalleryItem_vftable;
}

// AUTO-GENERATED IMPLEMENTATIONS


