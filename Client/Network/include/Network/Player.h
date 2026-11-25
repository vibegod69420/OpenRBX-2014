#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_PLAYER_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_PLAYER_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class Player
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_01e4[0x1e4]; int field_01e4; };
		// AUTO-GENERATED FIELDS
	};

	void fireEventTarget();
	void*getReplicator();
	void*getServerReplicator();
	int getField1E4() const;
	void frontendProcessing();
	void clearConnections();
	void*getHandleTarget();
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_PLAYER_H
