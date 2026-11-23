#include "FastCluster.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00621790
int FastCluster::size() const
{
    return (*reinterpret_cast<const int*>((const char*)this + 0xac) -
            *reinterpret_cast<const int*>((const char*)this + 0xa8)) >> 3;
}

struct FastClusterBatcher
{
	void invalidateEntity(class FastCluster* cluster);
};

struct FastClusterOwner
{
	char pad[0x198];
	FastClusterBatcher* batcher;
};

// FUNCTION: ROBLOXSTUDIO 0x00620f40
void FastCluster::invalidateEntity()
{
	extern unsigned char g_FastClusterInvalidateEntityLog;
	if (g_FastClusterInvalidateEntityLog)
	{
		extern void fastLogInvalidateEntity(int level, const char* fmt, FastCluster* cluster);
		fastLogInvalidateEntity(g_FastClusterInvalidateEntityLog, "FastCluster[%p]: invalidateEntity", this);
	}

	unsigned char& invalidated = *(unsigned char*)((char*)this + 0xCD);
	if (invalidated == 0)
	{
		FastClusterOwner* owner = *(FastClusterOwner**)((char*)this + 0x38);
		invalidated = 1;
		owner->batcher->invalidateEntity(this);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00622460
int FastCluster::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00622470
int FastCluster::derefInt_2470(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00622430
void* FastCluster::getEntityBuffer()
{
	char* base = *(char**)((char*)*(void**)((char*)this + 0x38) + 0x1C8);

	if (*(int*)((char*)this + 0xC4) != 0)
		return base + 0xB4;

	if (*(unsigned char*)((char*)this + 0xCC) != 0)
		return base + 0xAC;

	return base + 0xA4;
}

// FUNCTION: ROBLOXSTUDIO 0x00623850
void __cdecl FastCluster::pushHeapHole(int hole, int top, void** value)
{
	void** arr = reinterpret_cast<void**>(this);
	int parent = (hole - 1) / 2;

	if (top < hole)
	{
		do
		{
			void* parentFirst = arr[parent * 2];
			unsigned int valueFlags = *(unsigned int*)((char*)value[0] + 0x14) & 4;
			unsigned int parentFlags = *(unsigned int*)((char*)parentFirst + 0x14) & 4;
			if (parentFlags <= valueFlags)
				break;
			arr[hole * 2] = parentFirst;
			arr[hole * 2 + 1] = arr[parent * 2 + 1];
			hole = parent;
			parent = (hole - 1) / 2;
		} while (top < hole);
	}

	arr[hole * 2] = value[0];
	arr[hole * 2 + 1] = value[1];
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
