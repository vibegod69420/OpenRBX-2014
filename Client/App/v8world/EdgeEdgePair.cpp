#include "v8world/EdgeEdgePair.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bd3030
extern "C" int __cdecl EdgeEdgePairIdentity(int value);

int EdgeEdgePair::getEdgeEdgePairField()
{
    return EdgeEdgePairIdentity(*reinterpret_cast<int*>((*reinterpret_cast<char**>(reinterpret_cast<char*>(this) + 4)) + 0x100));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
