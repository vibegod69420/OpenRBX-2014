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

// FUNCTION: ROBLOXSTUDIO 0x00cea7a0
int ProfiledRakPeer::getField484() const
{
	return field_0484;
}

namespace RakNet
{
	struct SimpleMutex
	{
		void Lock();
		void Unlock();
	};
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9e00
int ProfiledRakPeer::getField5E0() const
{
	char* base = reinterpret_cast<char*>(const_cast<ProfiledRakPeer*>(this));
	RakNet::SimpleMutex* lock = reinterpret_cast<RakNet::SimpleMutex*>(base + 0x5c8);
	lock->Lock();
	int value = *reinterpret_cast<int*>(base + 0x5e0);
	lock->Unlock();
	return value;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
