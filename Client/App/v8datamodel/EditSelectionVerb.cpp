#include "v8datamodel/EditSelectionVerb.h"

#include "decomp.h"

namespace RBX {

extern "C" long __cdecl _InterlockedDecrement(long volatile* Addend);

// FUNCTION: ROBLOXSTUDIO 0x006b9800
int EditSelectionVerb::release()
{
    return _InterlockedDecrement(reinterpret_cast<long volatile*>(&_vtable_or_head));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
