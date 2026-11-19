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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
