#include "v8world/BulletWedgeShapeWrapper.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bae600
void BulletWedgeShapeWrapper::dispose()
{
	void* p = *(void**)((char*)this + 0x0C);
	if (p)
	{
		void __cdecl sub_BAED30(void* token, void* arg);
		sub_BAED30(p, *(void**)((char*)p + 0x0C));
		::operator delete(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
