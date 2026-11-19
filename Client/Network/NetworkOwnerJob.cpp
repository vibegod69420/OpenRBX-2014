#include "Network/NetworkOwnerJob.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c687d0
NetworkOwnerJob::NetworkOwnerJob()
{
	*(unsigned short*)((char*)this + 8) = 0xFFFF;
	*(unsigned int*)((char*)this + 0) = *(unsigned int*)0x012A5610;
	*(unsigned int*)((char*)this + 4) = *(unsigned int*)0x012A5614;
	*(unsigned short*)((char*)this + 8) = *(unsigned short*)0x012A5618;
}

unsigned int sub_CC4CE0(const void* data, int len, unsigned int seed);

// FUNCTION: ROBLOXSTUDIO 0x00c68c80
unsigned int __cdecl NetworkOwnerJob::getHash()
{
	unsigned int h = sub_CC4CE0((char*)this + 2, 2, 2);
	return sub_CC4CE0((char*)this + 4, 4, h);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
