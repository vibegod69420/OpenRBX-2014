#include "EnvMap.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x0061f640
void EnvMap::markDirty()
{
	*(int*)((char*)this + 0x68) = 3;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
