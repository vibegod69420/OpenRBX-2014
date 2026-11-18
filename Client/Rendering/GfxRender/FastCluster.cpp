#include "FastCluster.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00621790
int FastCluster::size() const
{
    return (*reinterpret_cast<const int*>((const char*)this + 0xac) -
            *reinterpret_cast<const int*>((const char*)this + 0xa8)) >> 3;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
