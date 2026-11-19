#include "QuickAccessConfigDialog.h"

#include "decomp.h"



class QuickAccessItem
{
public:
	virtual void remove(int flag);
};

class QuickAccessList
{
public:
	__declspec(dllimport) QuickAccessItem* getCurrentItem();
	__declspec(dllimport) int indexOf(QuickAccessItem* item);
	__declspec(dllimport) QuickAccessItem* getItem(int index);
	__declspec(dllimport) int count();
	void setCurrentIndex(int index);
};

// FUNCTION: ROBLOXSTUDIO 0x00502550
void QuickAccessConfigDialog::removeSelectedItem()
{
	QuickAccessItem* current = (*(QuickAccessList**)((char*)this + 0x20))->getCurrentItem();
	QuickAccessList* list = *(QuickAccessList**)((char*)this + 0x20);
	int index = list->indexOf(current);

	if (index >= 0)
	{
		QuickAccessItem* item = list->getItem(index);
		if (item)
		{
			item->remove(1);

			int count = list->count();
			if (index > count - 1)
				--index;

			list->setCurrentIndex(index);
		}
	}

	*(unsigned char*)((char*)this + 0x38) = 1;
}

// AUTO-GENERATED IMPLEMENTATIONS


