#include "v8datamodel/ParallelRampMesh.h"

#include "decomp.h"

namespace RBX {
namespace POLY {

// 0x00bb2b00
void rbxtoken_dispose_helper(void* token, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00bb2630
void ParallelRampMesh::dispose()
{
	void* p = ((void**)this)[3];
	if (p)
	{
		rbxtoken_dispose_helper(p, ((void**)p)[3]);
		::operator delete(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace POLY
} // namespace RBX
