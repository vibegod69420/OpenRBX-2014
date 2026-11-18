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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
