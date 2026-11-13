#include "ShortcutsModel.h"

// FUNCTION: ROBLOXSTUDIO 0x004d3ca0
int ShortcutsModel::getCount(int) const
{
	const int* array = (const int*)field10;
	return array[3] - array[2];
}

// FUNCTION: ROBLOXSTUDIO 0x004d3cb0
int ShortcutsModel::getRowSize(int) const
{
	return 3;
}
