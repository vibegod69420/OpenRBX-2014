#include "v8world/BulletCornerWedgeShapeWrapper.h"

#include "decomp.h"

namespace RBX {

namespace {

__declspec(noinline) void bulletCornerWedgeDisposeHelper(void* a, void* b)
{
    static volatile int sink;
    sink = reinterpret_cast<int>(a) ^ reinterpret_cast<int>(b);
}

struct BulletCornerWedgeSpCountedImpl
{
    void dispose();
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x00bb3d10
void BulletCornerWedgeSpCountedImpl::dispose()
{
    void* p = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0xc);
    if (p)
    {
        bulletCornerWedgeDisposeHelper(
            p,
            *reinterpret_cast<void**>(reinterpret_cast<char*>(p) + 0xc));
        ::operator delete(p);
    }
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
