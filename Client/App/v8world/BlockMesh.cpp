#include "v8world/BlockMesh.h"

#include "decomp.h"

namespace RBX {
namespace POLY {

// callee 0x00b9c7d0
void __cdecl BlockMesh_dispose_helper(void* token, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00b9b6e0
void BlockMesh::dispose()
{
	void* token = reinterpret_cast<void**>(this)[3];
	if (token)
	{
		BlockMesh_dispose_helper(token, reinterpret_cast<void**>(token)[3]);
		::operator delete(token);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace POLY
} // namespace RBX
