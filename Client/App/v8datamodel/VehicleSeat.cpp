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

// FUNCTION: ROBLOXSTUDIO 0x0091bb70
int VehicleSeat::isOccupied()
{
	void* p = *(void**)((char*)this + 0x1B4);
	if (p)
		p = *(void**)((char*)p + 4);
	else
		p = 0;

	return p != 0;
}

// FUNCTION: ROBLOXSTUDIO 0x0091a7f0
extern "C" void* rbx_vehicleseat_helper_0x9d8750(void*);

void* VehicleSeat::getVehicle()
{
    return rbx_vehicleseat_helper_0x9d8750(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
