#include "Network/Item.h"

#include "decomp.h"

namespace RBX {
namespace Stats {

// Forward declarations and helpers for 0x00932930

struct ItemUpdateContext
{
    bool contains(void*);
};

struct ItemUpdateTarget
{
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2C();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual void vf3C();
    virtual void vf40();
    virtual void vf44();
    virtual void vf48();
    virtual void vf4C();
    virtual void vf50();
    virtual void vf54();
    virtual void vf58();
    virtual void vf5C();
    virtual void vf60();
    virtual void vf64();
    virtual void vf68();
    virtual void vf6C();
    virtual void vf70();
    virtual void update();
};

void* GetItemUpdateContext();

// FUNCTION: ROBLOXSTUDIO 0x00932930
void Item::update()
{
    void* target = *(void**)((char*)this + 0x38);
    if (target == 0)
        return;

    char* node = (char*)target + 0x1C;
    if (node == 0)
        return;

    ItemUpdateContext* context = *(ItemUpdateContext**)(node + 0x0C);
    void* globalContext = GetItemUpdateContext();
    if (context->contains(globalContext))
    {
        ItemUpdateTarget* base = (ItemUpdateTarget*)((char*)node - 0x1C);
        if (base != 0)
            base->update();
    }
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Stats
} // namespace RBX
