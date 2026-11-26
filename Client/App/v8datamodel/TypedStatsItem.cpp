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

struct TypedStatsItemInitBase
{
	void init();
};

// FUNCTION: ROBLOXSTUDIO 0x006804c0
TypedStatsItem::TypedStatsItem()
{
	reinterpret_cast<TypedStatsItemInitBase*>(this)->init();

	int* p = reinterpret_cast<int*>(this);
	p[19] = 0;
	p[18] = 0;
	p[17] = 0;
	p[16] = 0;
	p[23] = 0;
	p[22] = 0;
	p[21] = 0;
	p[20] = 0;
	p[27] = 0;
	p[26] = 0;
	p[25] = 0;
	p[24] = 0;
	p[31] = 0;
	p[30] = 0;
	p[29] = 0;
	p[28] = 0;
	p[35] = 0;
	p[34] = 0;
	p[33] = 0;
	p[32] = 0;
	p[39] = 0;
	p[38] = 0;
	p[37] = 0;
	p[36] = 0;
	p[43] = 0;
	p[42] = 0;
	p[41] = 0;
	p[40] = 0;
	p[47] = 0;
	p[46] = 0;
	p[45] = 0;
	p[44] = 0;
	p[51] = 0;
	p[50] = 0;
	p[49] = 0;
	p[48] = 0;
	p[55] = 0;
	p[54] = 0;
	p[53] = 0;
	p[52] = 0;
	p[59] = 0;
	p[58] = 0;
	p[57] = 0;
	p[56] = 0;
	p[63] = 0;
	p[62] = 0;
	p[61] = 0;
	p[60] = 0;
	p[67] = 0;
	p[66] = 0;
	p[65] = 0;
	p[64] = 0;
	p[71] = 0;
	p[70] = 0;
	p[69] = 0;
	p[68] = 0;
	p[75] = 0;
	p[74] = 0;
	p[73] = 0;
	p[72] = 0;
	p[79] = 0;
	p[78] = 0;
	p[77] = 0;
	p[76] = 0;
	p[83] = 0;
	p[82] = 0;
	p[81] = 0;
	p[80] = 0;
	p[87] = 0;
	p[86] = 0;
	p[85] = 0;
	p[84] = 0;
	p[91] = 0;
	p[90] = 0;
	p[89] = 0;
	p[88] = 0;
	p[95] = 0;
	p[94] = 0;
	p[93] = 0;
	p[92] = 0;
	p[99] = 0;
	p[98] = 0;
	p[97] = 0;
	p[96] = 0;
	p[103] = 0;
	p[102] = 0;
	p[101] = 0;
	p[100] = 0;
}

struct TypedStatsItemInitHelper
{
	void init(const char* name, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0067aa70
TypedStatsItem* __cdecl TypedStatsItem::getOrCreateChildItem(const char* name)
{
	volatile int local = 0;
	reinterpret_cast<TypedStatsItemInitHelper*>(this)->init(name, 1);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0067aa90
TypedStatsItem* __cdecl TypedStatsItem::getOrCreateChild(const char* name)
{
	volatile int local = 0;
	reinterpret_cast<TypedStatsItemInitHelper*>(this)->init(name, 1);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0067aab0
TypedStatsItem* __cdecl TypedStatsItem::getOrCreateTypedChildItem(const char* name)
{
	volatile int local = 0;
	reinterpret_cast<TypedStatsItemInitHelper*>(this)->init(name, 1);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0067aad0
TypedStatsItem* __cdecl TypedStatsItem::getOrCreateTypedChild(const char* name)
{
	volatile int local = 0;
	reinterpret_cast<TypedStatsItemInitHelper*>(this)->init(name, 1);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0067aa50
TypedStatsItem* __cdecl TypedStatsItem::getOrCreateItem(const char* name)
{
	volatile int local = 0;
	reinterpret_cast<TypedStatsItemInitHelper*>(this)->init(name, 1);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
