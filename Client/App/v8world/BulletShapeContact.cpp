#include "v8world/BulletShapeContact.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bd7630
int BulletShapeContact::getFieldD4() const
{
	return field_00d4;
}

// Callee: ROBLOXSTUDIO 0x00bd6ef0
void __stdcall BulletShapeContact_clearManifolds(void* manifolds);

// FUNCTION: ROBLOXSTUDIO 0x00bd6ee0
void BulletShapeContact::deleteAllManifolds()
{
	BulletShapeContact_clearManifolds(reinterpret_cast<char*>(this) + 0x34);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
