#include "G3D/ReferenceCountedObject.h"

#include "decomp.h"

namespace G3D {

class _WeakReferenceLinkedList {
public:
    virtual void unused();
    virtual void zero();
};

struct _WeakPtrNode {
    _WeakReferenceLinkedList* weakRef;
    _WeakPtrNode* next;
};

// FUNCTION: ROBLOXSTUDIO 0x006e84d0
void ReferenceCountedObject::zeroWeakPointers()
{
    _WeakPtrNode* cur = reinterpret_cast<_WeakPtrNode**>(this)[2];
    while (cur != 0) {
        cur->weakRef->zero();
        _WeakPtrNode* t = cur;
        cur = cur->next;
        delete t;
    }
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
