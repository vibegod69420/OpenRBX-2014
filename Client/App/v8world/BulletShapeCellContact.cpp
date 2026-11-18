#include "v8world/BulletShapeCellContact.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bd86c0
int BulletShapeCellContact::getField2E4() const
{
	return field_02e4;
}

void __stdcall BulletShapeCellContact_stepContactHelper(void*);

// FUNCTION: ROBLOXSTUDIO 0x00bd7f90
void BulletShapeCellContact::stepContact()
{
	BulletShapeCellContact_stepContactHelper(reinterpret_cast<char*>(this) + 0x244);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
