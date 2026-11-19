#include "v8datamodel/RbxRay.h"

#include "decomp.h"

namespace RBX {

typedef bool (__thiscall *RbxRaySlotCheckFunc)(void*, void*);
extern RbxRaySlotCheckFunc rbxRaySlotCheck;

// FUNCTION: ROBLOXSTUDIO 0x0044dec0
bool RbxRay::isTargetSlot() const
{
	void** vtable = *(void***)this;
	void* slot = vtable[4];

	if (slot == (void*)0x012C38A0)
		return true;

	return rbxRaySlotCheck((void*)0x012C38A0, slot);
}

// FUNCTION: ROBLOXSTUDIO 0x0044e0b0
bool RbxRay::isSecondaryTargetSlot() const
{
	void** vtable = *(void***)this;
	void* slot = vtable[4];

	if (slot == (void*)0x012C38C0)
		return true;

	return rbxRaySlotCheck((void*)0x012C38C0, slot);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
