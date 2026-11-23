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

// FUNCTION: ROBLOXSTUDIO 0x00b81c20
void __cdecl luaAllocatorSub_A35670(void* L, void* p);
void __cdecl luaAllocatorSub_A34E50(void* L, int a, int b);
void __cdecl luaAllocatorSub_A358D0(void* L, int code);

void __cdecl LuaAllocator::allocationError()
{
	void* L = this;
	luaAllocatorSub_A35670(L, (void*)0x00B81C20);
	luaAllocatorSub_A34E50(L, 0, 0);
	luaAllocatorSub_A358D0(L, -10000);
}

// FUNCTION: ROBLOXSTUDIO 0x00b81780
void __cdecl LuaAllocator::raiseAllocationError()
{
	void* L = this;
	luaAllocatorSub_A35670(L, (void*)0x00B81410);
	luaAllocatorSub_A34E50(L, 0, 0);
	luaAllocatorSub_A358D0(L, -10000);
	luaAllocatorSub_A35670(L, (void*)0x00B81C20);
	luaAllocatorSub_A34E50(L, 0, 0);
	luaAllocatorSub_A358D0(L, -10000);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
