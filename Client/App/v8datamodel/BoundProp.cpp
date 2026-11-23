#include "v8datamodel/BoundProp.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00410b90
typedef bool (__thiscall *BoundPropSlotCmp)(void*, void*);
extern BoundPropSlotCmp BoundProp_eqSlot;
extern "C" char BoundProp_defaultSlotFunc;

bool BoundProp::isDefault()
{
	void* slot = (*(void***)this)[4];
	void* target = (void*)&BoundProp_defaultSlotFunc;
	if (slot == target)
		return true;
	return BoundProp_eqSlot(target, slot);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
