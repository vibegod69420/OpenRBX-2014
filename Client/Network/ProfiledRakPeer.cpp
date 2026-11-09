#include "Network/ProfiledRakPeer.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x0099d780
bool ProfiledRakPeer::canAccept(int a0, int a1, int a2) const
{
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9230
bool ProfiledRakPeer::canAccept_slot52(int a0, int a1, int a2, int a3, int a4, int a5) const
{
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x00cea7a0
int ProfiledRakPeer::getField484() const
{
	return field_0484;
}

// FUNCTION: ROBLOXSTUDIO 0x00cf2180
void ProfiledRakPeer::setFlag0C(bool value)
{
	flag_000c = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00cf2110
void ProfiledRakPeer::setFlag570(bool value)
{
	flag_0570 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00cf21e0
void ProfiledRakPeer::setField468(int value)
{
	field_0468 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00c9f4a0
void* ProfiledRakPeer::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00ce7930
void ProfiledRakPeer::setFlag46C(bool value)
{
	flag_046c = value;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
