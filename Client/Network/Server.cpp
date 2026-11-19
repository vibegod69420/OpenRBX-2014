#include "Network/Server.h"

#include "decomp.h"

namespace RBX {
namespace Network {

struct ServerCalleeC9C650
{
	void sub_c9c650(int arg);
};

// FUNCTION: ROBLOXSTUDIO 0x00c9b2f0
void Server::sub_c9b2f0()
{
	int local;
	if (*reinterpret_cast<unsigned char*>(this))
	{
		reinterpret_cast<ServerCalleeC9C650*>(this)->sub_c9c650(local);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
