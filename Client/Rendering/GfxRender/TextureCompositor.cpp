#include "TextureCompositor.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x0069d470
void TextureCompositor::destroyInstance(TextureCompositor* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x0069e5c0
void* TextureCompositor::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
