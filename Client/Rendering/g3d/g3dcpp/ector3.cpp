#include "G3D/ector3.h"

#include "decomp.h"

namespace G3D {

// FUNCTION: ROBLOXSTUDIO 0x0080d0d0
void* ector3::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
