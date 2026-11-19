#include "v8datamodel/TypedStatsItem.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x004956d0
int TypedStatsItem::getField04() const
{
	return field_0004;
}

// FUNCTION: ROBLOXSTUDIO 0x006801d0
int TypedStatsItem::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x006801e0
int TypedStatsItem::derefInt_01e0(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00682000
int TypedStatsItem::checkField17C() const
{
	return *(const int*)((const char*)this + 0x17C) != 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
