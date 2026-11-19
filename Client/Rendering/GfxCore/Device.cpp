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

struct DeviceNodeSlot2
{
	virtual void slot0() = 0;
	virtual void slot1() = 0;
	virtual void slot2() = 0;
	int pad0;
	int pad1;
	DeviceNodeSlot2* next;
};

// FUNCTION: ROBLOXSTUDIO 0x005eb790
void Device::destroyAll()
{
	DeviceNodeSlot2* node = *reinterpret_cast<DeviceNodeSlot2**>(reinterpret_cast<char*>(this) + 4);
	while (node)
	{
		node->slot2();
		node = node->next;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
