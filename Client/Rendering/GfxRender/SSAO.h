#ifndef CLIENT_RENDERING_GFXRENDER_SSAO_H
#define CLIENT_RENDERING_GFXRENDER_SSAO_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e409f4
class SSAO
{
public:
	union
	{
		int _vtable_or_head;
		SSAO* ptr_0000;
		// AUTO-GENERATED FIELDS
	};

	static int derefInt(const int* p);
	static int derefInt_67a0(const int* p);
	void onDestroy();
	void resetPtr(SSAO* newPtr);
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_SSAO_H
