#include "v8datamodel/RightAngleRampMesh.h"

#include "decomp.h"

namespace RBX {
namespace POLY {

namespace RBX {
namespace POLY {

void __cdecl sub_BB33F0(void* px, void* arg);

namespace {

struct RightAngleRampMesh
{
	void* vftable;
	int use_count;
	int weak_count;
	void* px;

	void dispose();
};

// FUNCTION: ROBLOXSTUDIO 0x00bb31a0
void RightAngleRampMesh::dispose()
{
	void* p = this->px;
	if (p)
	{
		sub_BB33F0(p, *((void**)p + 3));
		::operator delete(p);
	}
}

} // namespace

} // namespace POLY
} // namespace RBX

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace POLY
} // namespace RBX
