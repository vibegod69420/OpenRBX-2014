#include "FastCluster.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x0061ba90
int FastCluster::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x0061baa0
int FastCluster::derefInt_baa0(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00622460
int FastCluster::derefInt_2460(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00622470
int FastCluster::derefInt_2470(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00626900
void* FastCluster::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
