#include "v8world/PyramidPoly.h"

#include "decomp.h"

namespace RBX {

extern "C"
{
    long _InterlockedExchangeAdd(long volatile *Addend, long Value);
    unsigned char _interlockedbittestandset(long volatile *Base, long Offset);
}
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_interlockedbittestandset)

void* __cdecl PyramidPoly_GetPool();
void __fastcall PyramidPoly_Lock(void*);
void* __fastcall PyramidPoly_AllocSlow(void*);
void* __fastcall PyramidPoly_GetEvent(void*);
extern void (__stdcall *PyramidPoly_SignalEvent)(void*);

// FUNCTION: ROBLOXSTUDIO 0x00bb1dd0
void* PyramidPoly::allocate()
{
    void* pool = PyramidPoly_GetPool();
    PyramidPoly_Lock(pool);

    void* node = *(void**)((char*)pool + 8);
    if (node)
    {
        *(void**)((char*)pool + 8) = *(void**)node;
    }
    else
    {
        node = PyramidPoly_AllocSlow((char*)pool + 8);
    }

    long old = _InterlockedExchangeAdd((long volatile*)pool, (long)0x80000000);
    if (old & 0x40000000)
        goto done;
    if (old <= (long)0x80000000)
        goto done;
    if (_interlockedbittestandset((long volatile*)pool, 30))
        goto done;

    PyramidPoly_SignalEvent(PyramidPoly_GetEvent(pool));

done:
    return node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
