#pragma once

// Slot 2 hands back a pointer 0x20 bytes before the item.
class RobloxTreeWidgetItem
{
public:
	void* getBasePtr() const;
};
