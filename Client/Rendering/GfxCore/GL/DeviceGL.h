#ifndef CLIENT_RENDERING_GFXCORE_GL_DEVICEGL_H
#define CLIENT_RENDERING_GFXCORE_GL_DEVICEGL_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e30344
class DeviceGL
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0034[0x34]; int field_0034; };
		struct { char _pad_member_000c[0xc]; int member_000c; };
		// AUTO-GENERATED FIELDS
	};

	int getField34() const;
	const int* getMemberPtr0C() const;
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXCORE_GL_DEVICEGL_H
