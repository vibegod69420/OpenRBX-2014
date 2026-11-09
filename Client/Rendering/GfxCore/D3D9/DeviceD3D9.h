#ifndef CLIENT_RENDERING_GFXCORE_D3D9_DEVICED3D9_H
#define CLIENT_RENDERING_GFXCORE_D3D9_DEVICED3D9_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e191b4
class DeviceD3D9
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0040[0x40]; int field_0040; };
		struct { char _pad_member_001c[0x1c]; int member_001c; };
		// AUTO-GENERATED FIELDS
	};

	int getField40() const;
	const int* getMemberPtr1C() const;
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXCORE_D3D9_DEVICED3D9_H
