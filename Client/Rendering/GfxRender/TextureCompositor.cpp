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

// FUNCTION: ROBLOXSTUDIO 0x006999b0
bool TextureCompositor::isUpToDate() const
{
	if (*reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x44) ==
		*reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x48))
	{
		if (*reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x50) ==
			*reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x54))
		{
			if (*reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x68) == 0)
				return true;
		}
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
