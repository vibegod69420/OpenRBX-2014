#include "v8datamodel/CharacterMesh.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009fe0f0
void CharacterMesh::destroyInstance(CharacterMesh* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
