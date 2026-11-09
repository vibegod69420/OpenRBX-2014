#ifndef CLIENT_RENDERING_GFXCORE_D3D9_SHADERPROGRAMD3D9_H
#define CLIENT_RENDERING_GFXCORE_D3D9_SHADERPROGRAMD3D9_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct Sub_ShaderProgramD3D9_28_34 { char pad[52]; int val; };
struct Sub_ShaderProgramD3D9_30_2c { char pad[44]; int val; };
// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e1ada0
class ShaderProgramD3D9
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_sub_0028_34[0x28]; Sub_ShaderProgramD3D9_28_34* sub_0028_34; };
		struct { char _pad_sub_0030_2c[0x30]; Sub_ShaderProgramD3D9_30_2c* sub_0030_2c; };
		// AUTO-GENERATED FIELDS
	};

	int getSubField28_34() const;
	int getSubField30_2C() const;
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXCORE_D3D9_SHADERPROGRAMD3D9_H
