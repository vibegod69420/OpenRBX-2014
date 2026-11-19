#include "G3D/PhysicsFrame.h"

#include "decomp.h"

namespace G3D {

struct PhysicsFrameZeroStorage
{
	int data[3];
	int initialized;
};

// FUNCTION: ROBLOXSTUDIO 0x006dea00
int* PhysicsFrame::getZeroStorage()
{
	static PhysicsFrameZeroStorage storage;

	if ((storage.initialized & 1) == 0)
	{
		storage.initialized |= 1;
		storage.data[0] = 0;
		storage.data[1] = 0;
		storage.data[2] = 0;
	}

	return storage.data;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
