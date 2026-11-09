#ifndef CLIENT_RENDERING_GFXRENDER_MATERIAL_H
#define CLIENT_RENDERING_GFXRENDER_MATERIAL_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e39bc8
class Material
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; Material* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	static void destroyInstance(Material* p);
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_MATERIAL_H
