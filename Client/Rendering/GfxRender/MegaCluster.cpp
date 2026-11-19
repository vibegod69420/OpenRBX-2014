#include "MegaCluster.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x0061ba90
int MegaCluster::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x0061baa0
int MegaCluster::derefInt_baa0(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00770e20
int MegaCluster::getSize() const
{
	return ((unsigned int)_vtable_or_head < 0x03D09000u) ? 512 : 1024;
}

// FUNCTION: ROBLOXSTUDIO 0x0061b580
int MegaCluster::getCount() const
{
	int delta = *(int*)((char*)this + 0x20) - *(int*)((char*)this + 0x1c);
	return delta / 56;
}

class MegaClusterDevice
{
public:
	virtual void m0();
	virtual void m1();
	virtual void m2();
	virtual void m3();
	virtual void m4();
};

// FUNCTION: ROBLOXSTUDIO 0x0061c020
void MegaCluster::unload()
{
	MegaClusterDevice* device = *(MegaClusterDevice**)((char*)this + 4);
	if (device != 0)
	{
		if (*(int*)((char*)this + 0x44) != 0)
		{
			device->m4();

			*(int*)((char*)this + 0x4c) = 0;
			*(int*)((char*)this + 0x48) = 0;
			*(int*)((char*)this + 0x44) = 0;
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
