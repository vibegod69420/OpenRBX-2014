#include "v8world/CornerWedgeMesh.h"

#include "decomp.h"

namespace RBX {
namespace POLY {

namespace RBX {
namespace POLY {

void __cdecl sub_BB44D0(void* obj, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00bb3d30
void __fastcall CornerWedgeMesh_dispose(void* self, void* /*edx*/)
{
	void* px = reinterpret_cast<void**>(self)[3];
	if (px)
	{
		sub_BB44D0(px, reinterpret_cast<void**>(px)[3]);
		::operator delete(px);
	}
}

} // namespace POLY
} // namespace RBX

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace POLY
} // namespace RBX
