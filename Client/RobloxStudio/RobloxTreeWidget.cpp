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

extern "C" int __cdecl rbxtree_external_invoke(int, int, int, int, int);

// FUNCTION: ROBLOXSTUDIO 0x0053f7e0
int RobloxTreeWidget::getSelectionIndex()
{
	int val = *(int*)((char*)this + 0x84);
	int *field84 = (int*)((char*)this + 0x84);

	if (val == -1)
	{
		if (rbxtree_external_invoke(*(int*)((char*)this + 0x38), 0, 0x12BDBF4, 0x12BFA08, 0))
		{
			int ret = rbxtree_external_invoke(*(int*)((char*)this + 0x38), 0, 0x12BDBF4, 0x12BFA08, 0);
			if (((RobloxTreeWidget*)ret)->getSelectionIndex())
				return 1;
		}
		return 0;
	}

	int zero;
	int *p = (val >= 0) ? field84 : &zero;
	zero = 0;
	return *p;
}

// AUTO-GENERATED IMPLEMENTATIONS


