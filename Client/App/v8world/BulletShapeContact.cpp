#include "v8world/BulletShapeContact.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bd7630
int BulletShapeContact::getFieldD4() const
{
	return field_00d4;
}

// FUNCTION: ROBLOXSTUDIO 0x00bd6cf0
void* BulletShapeContact::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
