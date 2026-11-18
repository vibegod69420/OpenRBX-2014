#include "RobloxTreeWidget.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00539120
void* RobloxTreeWidget::getCompleteObject()
{
	return reinterpret_cast<char*>(this) - 0x14;
}

// Helper for the subobject accessed at offset -0x50
struct RobloxTreeWidgetSubObject
{
	int sub_53DC10();
};

// FUNCTION: ROBLOXSTUDIO 0x0053dbe0
int RobloxTreeWidget::hasSelection()
{
	RobloxTreeWidgetSubObject* subObject =
		reinterpret_cast<RobloxTreeWidgetSubObject*>(reinterpret_cast<char*>(this) - 0x50);

	return subObject->sub_53DC10() != 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


