#include "script/WeakFunctionRef.h"

#include "decomp.h"

namespace RBX {
namespace Lua {

namespace {

struct WeakFunctionRefVTable
{
	virtual void slot0() = 0;
	virtual void dispose(int) = 0;
};

} // anonymous namespace

// FUNCTION: ROBLOXSTUDIO 0x00be8170
void WeakFunctionRef::dispose()
{
	if (*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x10))
	{
		reinterpret_cast<WeakFunctionRefVTable*>(reinterpret_cast<char*>(this) + 0x14)->dispose(0);
		*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x10) = 0;
	}
}

__declspec(dllimport) __declspec(noreturn) void __cdecl weakFunctionRefAllocFail();

// FUNCTION: ROBLOXSTUDIO 0x00be5e40
void* WeakFunctionRef::clone()
{
	void* mem = ::operator new(0x90u);
	if (!mem)
		weakFunctionRefAllocFail();

	*reinterpret_cast<int*>(mem) = _vtable_or_head;

	int* slot = reinterpret_cast<int*>(reinterpret_cast<char*>(mem) + 4);
	if (slot)
		*slot = _vtable_or_head;

	slot = reinterpret_cast<int*>(reinterpret_cast<char*>(mem) + 8);
	if (slot)
		*slot = _vtable_or_head;

	return mem;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
