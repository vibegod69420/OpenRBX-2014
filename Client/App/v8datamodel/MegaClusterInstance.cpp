#include "v8datamodel/MegaClusterInstance.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008928b0
float MegaClusterInstance::getMinimumSize() const
{
	return 0.01f;
}

struct MegaClusterData
{
	void* data;
	void* end;
	void* capacity;

	__declspec(dllimport) void tidy();
};

struct MegaClusterHelper
{
	void sub_8A2CC0(void* ptr, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x008a0cc0
void MegaClusterInstance::clear()
{
	MegaClusterData* clusterData = (MegaClusterData*)((char*)this + 0x1C);
	if (clusterData->data)
	{
		clusterData->tidy();
		::operator delete(clusterData->data);
		clusterData->data = NULL;
		clusterData->end = NULL;
		clusterData->capacity = NULL;
	}

	void* buffer = *(void**)((char*)this + 0x14);
	if (buffer)
	{
		if (*(int*)((char*)this + 0x08))
		{
			void* ptr = (char*)buffer + *(int*)((char*)this + 0x04) * 4;
			((MegaClusterHelper*)this)->sub_8A2CC0(ptr, 0);
		}

		::operator delete(*(void**)((char*)this + 0x14));
		*(void**)((char*)this + 0x14) = NULL;
		*(void**)((char*)this + 0x10) = NULL;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
