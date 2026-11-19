#include "MegaCluster.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x0061ba90
int MegaCluster::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x0061baa0
int MegaCluster::derefInt_baa0(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00770e20
int MegaCluster::getSize() const
{
	return ((unsigned int)_vtable_or_head < 0x03D09000u) ? 512 : 1024;
}

// FUNCTION: ROBLOXSTUDIO 0x0061b580
int MegaCluster::getCount() const
{
	int delta = *(int*)((char*)this + 0x20) - *(int*)((char*)this + 0x1c);
	return delta / 56;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
