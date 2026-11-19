#include "v8world/Primitive.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099cca0
void* Primitive::getFirstInClump()
{
	if (*(int*)((char*)this + 0x9c) > 0)
		return **(void***)((char*)this + 0x98);

	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
