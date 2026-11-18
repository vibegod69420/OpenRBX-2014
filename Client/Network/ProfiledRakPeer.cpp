#include "Network/ProfiledRakPeer.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00ce9cb0
unsigned short ProfiledRakPeer::GetMaximumIncomingConnections() const
{
	return *reinterpret_cast<const unsigned short*>(reinterpret_cast<const char*>(this) + 0x10);
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9cc0
unsigned short ProfiledRakPeer::GetNumberOfAddresses() const
{
	return *reinterpret_cast<const unsigned short*>(reinterpret_cast<const char*>(this) + 0x0e);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
