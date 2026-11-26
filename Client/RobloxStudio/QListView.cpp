#include "QListView.h"

#include "decomp.h"



extern void __cdecl rbxs_45ada0(void* dest, void const* src);

// FUNCTION: ROBLOXSTUDIO 0x0045a700
QListView* __cdecl QListView::copyConstruct(QListView const& other)
{
	rbxs_45ada0(this, &other);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


