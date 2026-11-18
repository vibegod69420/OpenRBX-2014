#include "RobloxTreeWidgetItem.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005378c0
RobloxTreeWidgetItem* RobloxTreeWidgetItem::getThis()
{
	return reinterpret_cast<RobloxTreeWidgetItem*>(reinterpret_cast<char*>(this) - 0x20);
}

int __cdecl sub_CF67F8(int, int, int, int, int);int RobloxTreeWidgetItem::vslot1()
{
	return sub_CF67F8(
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) - 0x14),
		0,
		0x012C531C,
		0x012BF8F8,
		0);
}

// AUTO-GENERATED IMPLEMENTATIONS


