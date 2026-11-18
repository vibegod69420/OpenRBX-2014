#include "v8datamodel/MegaClusterMesh.h"

#include "decomp.h"

namespace RBX {
namespace POLY {

struct MegaClusterMeshToken
{
	unsigned char padding[0x0C];
	void* owner;
};

void releaseMegaClusterMeshToken(MegaClusterMeshToken* token, void* owner);

// FUNCTION: ROBLOXSTUDIO 0x00b613f0
void MegaClusterMesh::dispose()
{
	struct Layout
	{
		void* vftable;
		int pad4;
		int pad8;
		MegaClusterMeshToken* token;
	};

	MegaClusterMeshToken* token = reinterpret_cast<Layout*>(this)->token;
	if (token)
	{
		releaseMegaClusterMeshToken(token, token->owner);
		::operator delete(token);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace POLY
} // namespace RBX
