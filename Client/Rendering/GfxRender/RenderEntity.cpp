#include "RenderEntity.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00674290
int RenderEntity::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x006742a0
int RenderEntity::derefInt_42a0(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00674300
void* RenderEntity::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
