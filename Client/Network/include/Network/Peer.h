#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_PEER_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_PEER_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class Peer
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	static void destroyInstance(Peer* p);
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_PEER_H
