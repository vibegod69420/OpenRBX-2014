#include "SSAO.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00696790
int SSAO::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x006967a0
int SSAO::derefInt_67a0(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00698490
void SSAO::resetPtr(SSAO* newPtr)
{
	SSAO* old = ptr_0000;
	ptr_0000 = newPtr;
	if (old) {
		old->onDestroy();
		rbx_free_mem(old);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00698460
void* SSAO::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
