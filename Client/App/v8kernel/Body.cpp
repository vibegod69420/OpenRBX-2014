#include "v8kernel/Body.h"

#include "decomp.h"

namespace RBX {

static int s_nextStateIndex;

// FUNCTION: ROBLOXSTUDIO 0x00ba8ed0
void Body::advanceStateIndex()
{
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xA0) = ++s_nextStateIndex;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
