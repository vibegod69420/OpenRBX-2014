#ifndef CLIENT_RENDERING_GFXCORE_GL_SHADERPROGRAMGL_H
#define CLIENT_RENDERING_GFXCORE_GL_SHADERPROGRAMGL_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e31888
class ShaderProgramGL
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0060[0x60]; int field_0060; };
		struct { char _pad_field_0064[0x64]; int field_0064; };
		// AUTO-GENERATED FIELDS
	};

	int getField60() const;
	int getField64() const;
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXCORE_GL_SHADERPROGRAMGL_H
