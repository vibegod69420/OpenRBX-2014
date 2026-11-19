#include "Device.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct DeviceNode
{
    virtual void _slot0() = 0;
    virtual void release() = 0;
    int _pad;
    DeviceNode* next;
};

// FUNCTION: ROBLOXSTUDIO 0x005eb770
void Device::releaseAll()
{
    DeviceNode* node = *reinterpret_cast<DeviceNode**>(reinterpret_cast<char*>(this) + 8);
    while (node)
    {
        node->release();
        node = node->next;
    }
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
