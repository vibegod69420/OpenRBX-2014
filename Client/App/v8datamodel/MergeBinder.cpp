#include "v8datamodel/MergeBinder.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0048c330

struct MergeBinderRefCount
{
    int _pad[8];
    int count;
};

int __cdecl MergeBinder::release()
{
    return --((MergeBinderRefCount*)*(void**)this)->count == 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
