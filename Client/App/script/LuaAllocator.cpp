#include "script/LuaAllocator.h"

#include "decomp.h"

namespace RBX {

struct LuaAllocatorVtbl
{
	virtual void* slot0(void* ptr, unsigned int osize, unsigned int nsize);
};

// FUNCTION: ROBLOXSTUDIO 0x00b82c10
void* __cdecl LuaAllocator::alloc(void* ptr, unsigned int osize, unsigned int nsize)
{
	return ((LuaAllocatorVtbl*)this)->slot0(ptr, osize, nsize);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
