#include "VisualEngine.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x006ad930
int VisualEngine::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x006ad940
int VisualEngine::derefInt_d940(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x006adea0
void* VisualEngine::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
