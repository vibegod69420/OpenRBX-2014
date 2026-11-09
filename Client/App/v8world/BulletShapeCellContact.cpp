#include "v8world/BulletShapeCellContact.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bd86c0
int BulletShapeCellContact::getField2E4() const
{
	return field_02e4;
}

// FUNCTION: ROBLOXSTUDIO 0x00bd7d90
void* BulletShapeCellContact::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
