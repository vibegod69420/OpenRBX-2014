#ifndef CLIENT_RENDERING_GFXRENDER_ADORNRENDER_H
#define CLIENT_RENDERING_GFXRENDER_ADORNRENDER_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e3318c
class AdornRender
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_member_0024[0x24]; int member_0024; };
		// AUTO-GENERATED FIELDS
	};

	const int* getMemberPtr24() const;
	static int derefInt(const int* p);
	static int derefInt_3960(const int* p);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_ADORNRENDER_H
