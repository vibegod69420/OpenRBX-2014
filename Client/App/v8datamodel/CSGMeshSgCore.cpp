#include "v8datamodel/CSGMeshSgCore.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x005dce80
int CSGMeshSgCore::isValid() const
{
	return *(const int*)((const char*)this + 0x28) != 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
