#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_PEERSTATSITEM_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_PEERSTATSITEM_H

#include "decomp.h"

namespace RBX {
namespace Network {

class Peer;
// AUTO-GENERATED HELPERS

class PeerStatsItem
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	static void destroyInstance(PeerStatsItem* p);
	Peer*getPeer();
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_PEERSTATSITEM_H
