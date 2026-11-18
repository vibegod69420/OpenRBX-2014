#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_PROFILEDRAKPEER_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_PROFILEDRAKPEER_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class ProfiledRakPeer
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	unsigned short GetMaximumIncomingConnections() const;
	unsigned short GetNumberOfAddresses() const;
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_PROFILEDRAKPEER_H
