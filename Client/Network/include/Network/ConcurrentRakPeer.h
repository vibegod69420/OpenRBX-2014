#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_CONCURRENTRAKPEER_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_CONCURRENTRAKPEER_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class ConcurrentRakPeer
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; ConcurrentRakPeer* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_CONCURRENTRAKPEER_H
