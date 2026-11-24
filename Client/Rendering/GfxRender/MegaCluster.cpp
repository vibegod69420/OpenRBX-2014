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

typedef void (__fastcall *MegaClusterCleanupFunc)(void*);
static MegaClusterCleanupFunc megaClusterCleanup = 0;

void __cdecl megaClusterFree(void*);

// FUNCTION: ROBLOXSTUDIO 0x00665360
void MegaCluster::clear()
{
	if (*(void**)((char*)this + 0x0C) != 0)
	{
		megaClusterCleanup((char*)this + 0x0C);
		megaClusterFree(*(void**)((char*)this + 0x0C));

		*(void**)((char*)this + 0x0C) = 0;
		*(void**)((char*)this + 0x10) = 0;
		*(void**)((char*)this + 0x14) = 0;
	}

	if (*(void**)this != 0)
	{
		megaClusterCleanup(this);
		megaClusterFree(*(void**)this);

		*(void**)this = 0;
		*(void**)((char*)this + 0x04) = 0;
		*(void**)((char*)this + 0x08) = 0;
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00662b60
int __cdecl MegaCluster::getTableValue()
{
	return ((int*)0x00E39C4C)[*(int*)this];
}

struct MegaClusterTerrainQuery
{
	int f0;
	int f4;
	int result;
	MegaCluster* owner;
	void execute(void* p);
};

// FUNCTION: ROBLOXSTUDIO 0x00662ed0
int __cdecl MegaCluster::getData(void* param, int index)
{
	MegaClusterTerrainQuery q;
	q.f0 = index;
	q.result = 0;
	q.owner = this;
	q.execute(param);
	return q.result;
}

// FUNCTION: ROBLOXSTUDIO 0x00662f00
int __cdecl MegaCluster::getDataByIndex(void* param, int index)
{
	MegaClusterTerrainQuery q;
	q.f0 = index;
	q.result = 0;
	q.owner = this;
	q.execute(param);
	return q.result;
}

static void (__cdecl *megaClusterCleanupNoArg)() = 0;

// FUNCTION: ROBLOXSTUDIO 0x00665970
void MegaCluster::clearBuffer0()
{
	if (*(void**)this != 0)
	{
		megaClusterCleanupNoArg();
		megaClusterFree(*(void**)this);

		*(void**)this = 0;
		*(void**)((char*)this + 4) = 0;
		*(void**)((char*)this + 8) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
