#include "v8datamodel/SetGridSizeToTwo.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0082ef50
bool SetGridSizeToTwo::isEnabled() const
{
    return *reinterpret_cast<const bool*>(
        *reinterpret_cast<const char* const*>(
            reinterpret_cast<const char*>(this) + 0xc) + 0x1d8);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
