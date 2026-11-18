#include "v8datamodel/VirtualHardwareDevice.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a644f0
void VirtualHardwareDevice::initViewportSize()
{
	*(float*)((char*)this + 0x238) = 400.0f;
	*(float*)((char*)this + 0x23c) = 300.0f;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
