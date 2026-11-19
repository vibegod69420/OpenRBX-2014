#include "v8world/CellEdgeEdgePair.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bd4ad0
int CellEdgeEdgePair::getField2C() const
{
	return field_002c;
}

void* sub_496100(void*);

// FUNCTION: ROBLOXSTUDIO 0x00bd52d0
void* CellEdgeEdgePair::getEdge() const
{
	return sub_496100(*(void**)((char*)*(void**)((char*)this + 8) + 0x100));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
