#include "util/IndexedMesh.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00baa1e0
class IndexedMeshBase
{
public:
	void ctor();
};

IndexedMesh::IndexedMesh()
{
	((IndexedMeshBase*)this)->ctor();
	*(int*)this = 0x00EDDF9C;
	*(int*)((char*)this + 0x1C) = 0;
	*(int*)((char*)this + 0x20) = 0;
	*(int*)((char*)this + 0x24) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
