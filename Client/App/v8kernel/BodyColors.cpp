#include "v8kernel/BodyColors.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0063b460
void BodyColors::destroyInstance(BodyColors* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

class BodyColorsGlobal
{
public:
	bool check(BodyColorsGlobal* arg);
};

BodyColorsGlobal* getBodyColorsGlobal();

// FUNCTION: ROBLOXSTUDIO 0x0063c010
BodyColorsGlobal* BodyColors::getContextOwner()
{
	BodyColorsGlobal* obj = *(BodyColorsGlobal**)((char*)this + 0x0C);
	BodyColorsGlobal* global = getBodyColorsGlobal();
	if (obj->check(global))
		return (BodyColorsGlobal*)((char*)this - 0x1C);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x0063c040
BodyColorsGlobal* BodyColors::getContextOwner() const
{
	BodyColorsGlobal* obj = *(BodyColorsGlobal**)((char*)this + 0x0C);
	BodyColorsGlobal* global = getBodyColorsGlobal();
	if (obj->check(global))
		return (BodyColorsGlobal*)((char*)this - 0x1C);
	return 0;
}

class BodyColorsBase
{
public:
	void init();
};

// FUNCTION: ROBLOXSTUDIO 0x009fb9e0
BodyColors::BodyColors()
{
	((BodyColorsBase*)this)->init();

	*(int*)this = 0x00E9AD24;
	*(int*)((char*)this + 4) = 0x00E9ADA8;
	*(int*)((char*)this + 0x18) = 0x00E9ADB0;
	*(int*)((char*)this + 0x1C) = 0x00E9ADBC;
	*(int*)((char*)this + 0x64) = 0x00E9ADCC;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
