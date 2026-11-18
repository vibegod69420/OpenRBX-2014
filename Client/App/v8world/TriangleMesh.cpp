#include "v8world/TriangleMesh.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099d310
float TriangleMesh::getGridSize() const
{
	return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x2C);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
