#pragma once

// The model keeps an array object at +0x10 whose begin/end ints live at +8 and
// +0xc.
class ShortcutsModel
{
public:
	int getCount(int) const;
	int getRowSize(int) const;

private:
	char _pad[0x10];
	void* field10;
};
