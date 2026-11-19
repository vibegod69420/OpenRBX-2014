#include "v8world/CylinderMesh.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00629630
#pragma intrinsic(_InterlockedExchangeAdd, _interlockedbittestandset)

extern "C"
{
	long _InterlockedExchangeAdd(long volatile* Addend, long Value);
	unsigned char _interlockedbittestandset(long volatile* Base, long Offset);
	__declspec(dllimport) int __stdcall SetEvent(void* hEvent);
}

struct CylinderMeshPool
{
	long state;
	void* field4;
	void* head;

	void acquire();
	void* getEvent();
};

struct CylinderMeshFreeList
{
	void* head;

	void* allocate();
};

CylinderMeshPool* getCylinderMeshPool();

void* CylinderMesh::allocate()
{
	CylinderMeshPool* pool = getCylinderMeshPool();
	pool->acquire();

	void* node = pool->head;
	if (node)
	{
		pool->head = *(void**)node;
	}
	else
	{
		node = reinterpret_cast<CylinderMeshFreeList*>(&pool->head)->allocate();
	}

	long oldState = _InterlockedExchangeAdd(&pool->state, 0x80000000);
	if ((oldState & 0x40000000) == 0 && oldState > (long)0x80000000)
	{
		if (_interlockedbittestandset(&pool->state, 30) == 0)
		{
			SetEvent(pool->getEvent());
		}
	}

	return node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
