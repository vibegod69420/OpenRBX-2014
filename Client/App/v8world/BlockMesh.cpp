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

class BlockMeshId;
class RenderMesh
{
public:
	bool isBlockMesh(BlockMeshId* id);
};

BlockMeshId* getBlockMeshId();

// FUNCTION: ROBLOXSTUDIO 0x00624a70
void* BlockMesh::getOwner()
{
	RenderMesh* mesh = *reinterpret_cast<RenderMesh**>(reinterpret_cast<char*>(this) + 0x0C);
	if (mesh->isBlockMesh(getBlockMeshId()))
		return reinterpret_cast<char*>(this) - 0x1C;
	return 0;
}

void __fastcall sub_629f20(void* self);

// FUNCTION: ROBLOXSTUDIO 0x00624ce0
BlockMesh::BlockMesh()
{
	sub_629f20(this);

	reinterpret_cast<int*>(this)[10] = 0;
	reinterpret_cast<int*>(this)[11] = 0;
	reinterpret_cast<int*>(this)[12] = 0;
	reinterpret_cast<int*>(this)[13] = 0;
	reinterpret_cast<int*>(this)[14] = 0;
	reinterpret_cast<int*>(this)[15] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace POLY
} // namespace RBX
