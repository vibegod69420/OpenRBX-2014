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

struct PhysicsFrameXAxisStorage
{
	int data[3];
	int initialized;
};

// FUNCTION: ROBLOXSTUDIO 0x006dea80
int* PhysicsFrame::getXAxisStorage()
{
	static PhysicsFrameXAxisStorage storage;

	if ((storage.initialized & 1) == 0)
	{
		storage.initialized |= 1;
		storage.data[0] = 0x3f800000;
		storage.data[1] = 0;
		storage.data[2] = 0;
	}

	return storage.data;
}

struct PhysicsFrameYAxisStorage
{
	int data[3];
	int initialized;
};

// FUNCTION: ROBLOXSTUDIO 0x006deac0
int* PhysicsFrame::getYAxisStorage()
{
	static PhysicsFrameYAxisStorage storage;

	if ((storage.initialized & 1) == 0)
	{
		storage.initialized |= 1;
		storage.data[0] = 0;
		storage.data[1] = 0x3f800000;
		storage.data[2] = 0;
	}

	return storage.data;
}

struct PhysicsFrameMinFiniteStorage
{
	int data[3];
	int initialized;
};

// FUNCTION: ROBLOXSTUDIO 0x006dec40
int* PhysicsFrame::getMinFiniteStorage()
{
	static PhysicsFrameMinFiniteStorage storage;

	if ((storage.initialized & 1) == 0)
	{
		storage.initialized |= 1;
		storage.data[0] = 0xff7fffff;
		storage.data[1] = 0xff7fffff;
		storage.data[2] = 0xff7fffff;
	}

	return storage.data;
}

struct PhysicsFrameMaxFiniteStorage
{
	int data[3];
	int initialized;
};

// FUNCTION: ROBLOXSTUDIO 0x006dec80
int* PhysicsFrame::getMaxFiniteStorage()
{
	static PhysicsFrameMaxFiniteStorage storage;

	if ((storage.initialized & 1) == 0)
	{
		storage.initialized |= 1;
		storage.data[0] = 0x7f7fffff;
		storage.data[1] = 0x7f7fffff;
		storage.data[2] = 0x7f7fffff;
	}

	return storage.data;
}

struct PhysicsFrameZAxisStorage
{
	int data[3];
	int initialized;
};

// FUNCTION: ROBLOXSTUDIO 0x006deb00
int* PhysicsFrame::getZAxisStorage()
{
	static PhysicsFrameZAxisStorage storage;

	if ((storage.initialized & 1) == 0)
	{
		storage.initialized |= 1;
		storage.data[0] = 0;
		storage.data[1] = 0;
		storage.data[2] = 0x3f800000;
	}

	return storage.data;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
