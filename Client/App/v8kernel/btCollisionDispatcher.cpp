#include "v8kernel/btCollisionDispatcher.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004956c0
int btCollisionDispatcher::getField0C() const
{
	return field_000c;
}

// FUNCTION: ROBLOXSTUDIO 0x0058f690
void* btCollisionDispatcher::getInternalManifoldPointer()
{
	if (field_000c)
	{
		return *(void**)((char*)this + 0x14);
	}
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


