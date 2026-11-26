#include "v8datamodel/Sky.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00693720
int Sky::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00693730
int Sky::derefInt_3730(const int* p)
{
	return *p;
}

struct SkyReleaseSlotHelper
{
	void releaseSlot(int* p, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x00693f10
void Sky::destroy()
{
	int* ptr = *(int**)((char*)this + 0x14);
	if (ptr)
	{
		if (*(int*)((char*)this + 8) != 0)
		{
			int index = *(int*)((char*)this + 4);
			((SkyReleaseSlotHelper*)this)->releaseSlot(&ptr[index], 0);
		}

		operator delete(*(int**)((char*)this + 0x14));
		*(int**)((char*)this + 0x14) = 0;
		*(int*)((char*)this + 0x10) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
