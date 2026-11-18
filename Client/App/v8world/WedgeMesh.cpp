#include "v8world/WedgeMesh.h"

#include "decomp.h"

namespace RBX {
namespace POLY {

} // namespace POLY
} // namespace RBX

void __cdecl operator delete(void*);

namespace RBX {
namespace POLY {

void __cdecl sub_00BAEE80(void* p, int arg);

namespace {

struct WedgeMesh
{
	void dispose();
};

// FUNCTION: ROBLOXSTUDIO 0x00bae620
void WedgeMesh::dispose()
{
	void* p = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x0C);
	if (p)
	{
		sub_00BAEE80(p, *reinterpret_cast<int*>(reinterpret_cast<char*>(p) + 0x0C));
		::operator delete(p);
	}
}

} // namespace

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace POLY
} // namespace RBX
