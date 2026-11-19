#ifndef CLIENT_RENDERING_GFXCORE_VERTEXLAYOUT_H
#define CLIENT_RENDERING_GFXCORE_VERTEXLAYOUT_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

class VertexLayout
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	bool initAppleBufferExtensions();
	bool initAppleTextureExtensions();
	bool initGLBindFragDataLocationIndexed();
	bool initGLDrawIndirect();
	bool initGLMultiDrawIndirectCountARB();
	bool initGLMapBufferRange();
	bool initARBPointParameters();
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXCORE_VERTEXLAYOUT_H
