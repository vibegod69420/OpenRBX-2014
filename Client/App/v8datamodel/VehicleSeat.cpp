#include "v8datamodel/VehicleSeat.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0091a6d0
void* VehicleSeat::getSlot18Value()
{
	void* ptr = *(void**)((char*)this - 0x50);
	ptr = *(void**)((char*)ptr + 0x104);
	return *(void**)((char*)ptr + 0x28);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
