#include "script/LuaStatsItem.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b85870
int LuaStatsItem::getCount() const
{
	return (*(const int*)((const char*)this + 8) - *(const int*)((const char*)this + 4)) / 24;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
