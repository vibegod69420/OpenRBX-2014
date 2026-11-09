#include "v8datamodel/TypedStatsItem.h"

#include "decomp.h"

namespace RBX {

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

// FUNCTION: ROBLOXSTUDIO 0x0067fd50
void TypedStatsItem::setFlag28(bool value)
{
	flag_0028 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00682010
void TypedStatsItem::setFlag1D9(bool value)
{
	flag_01d9 = value;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
