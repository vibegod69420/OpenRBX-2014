#ifndef CLIENT_RENDERING_GFXCORE_GL_SHADERPROGRAMGL_H
#define CLIENT_RENDERING_GFXCORE_GL_SHADERPROGRAMGL_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

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
	int __cdecl getProgramiv(unsigned int pname);
	int __cdecl getProgramiv(unsigned int program, unsigned int pname);
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXCORE_GL_SHADERPROGRAMGL_H
