#include "QTreeWidgetItem.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00449aa0
QTreeWidgetItem* QTreeWidgetItem::sub_449aa0()
{
	char* vptr = *(char**)this;
	char* p = *(char**)(vptr + 0x5C);

	if (p)
		*(char**)this = p - 0x5C;
	else
		*(char**)this = 0;

	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


