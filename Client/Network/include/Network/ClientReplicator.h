#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_CLIENTREPLICATOR_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_CLIENTREPLICATOR_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class ClientReplicator
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void sendDataOutStep();
	int getDataPing();
	void __cdecl addReplicationDataSize(int* dataSize);
	void __cdecl addReplicationDataSizeForItem(int* dataSize);
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_CLIENTREPLICATOR_H
