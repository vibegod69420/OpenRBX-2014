#include "reflection/BrickColorPropertyItem.h"

#include "decomp.h"



class PropertyItem
{
public:
	bool isModified();
};

class BrickColorPropertyItem_Methods
{
public:
	void applyModified();
};

// FUNCTION: ROBLOXSTUDIO 0x00471b70
bool BrickColorPropertyItem::isModified()
{
	if (!reinterpret_cast<PropertyItem*>(this)->isModified())
		return false;

	reinterpret_cast<BrickColorPropertyItem_Methods*>(this)->applyModified();
	return true;
}

// AUTO-GENERATED IMPLEMENTATIONS


