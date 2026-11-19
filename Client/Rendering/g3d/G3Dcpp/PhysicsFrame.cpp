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

struct PhysicsFrameOneStorage
{
	int data[3];
	int initialized;
};

// FUNCTION: ROBLOXSTUDIO 0x006dea40
int* PhysicsFrame::getOneStorage()
{
	static PhysicsFrameOneStorage storage;

	if ((storage.initialized & 1) == 0)
	{
		storage.initialized |= 1;
		storage.data[0] = 0x3f800000;
		storage.data[1] = 0x3f800000;
		storage.data[2] = 0x3f800000;
	}

	return storage.data;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
