#include "AdornRender.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00613570
const int* AdornRender::getMemberPtr24() const
{
	return &member_0024;
}

// FUNCTION: ROBLOXSTUDIO 0x00613950
int AdornRender::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00613960
int AdornRender::derefInt_3960(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00618ef0
void* AdornRender::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
