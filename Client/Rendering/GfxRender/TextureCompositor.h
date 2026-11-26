#ifndef CLIENT_RENDERING_GFXRENDER_TEXTURECOMPOSITOR_H
#define CLIENT_RENDERING_GFXRENDER_TEXTURECOMPOSITOR_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

class TextureCompositor
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	static void destroyInstance(TextureCompositor* p);
	bool isUpToDate() const;
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_TEXTURECOMPOSITOR_H
