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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
