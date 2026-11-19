#include "Geometry.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099eb50
int Geometry::getCount() const
{
    const char* const* data = reinterpret_cast<const char* const*>(this);
    return (data[1] - data[0]) / 36;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
