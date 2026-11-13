#include "RobloxTreeWidgetItem.h"

// FUNCTION: ROBLOXSTUDIO 0x005378c0
void* RobloxTreeWidgetItem::getBasePtr() const
{
	return (void*)((char*)this - 0x20);
}
