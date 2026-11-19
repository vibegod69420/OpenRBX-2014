#include "v8kernel/btConvexPolyhedron.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005d5920
void* btConvexPolyhedron::initialize()
{
	int i = 0;
	int count = *(int*)((char*)this + 4);
	void* p = *(void**)this;

	if (count > 0)
	{
		do
		{
			++i;
			*(void**)p = (i < count) ? (char*)p + 0x70 : 0;
			count = *(int*)((char*)this + 4);
			p = (char*)p + 0x70;
		}
		while (i < count);

		return *(void**)this;
	}

	return p;
}

// AUTO-GENERATED IMPLEMENTATIONS


