#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_REPLICATOR_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_REPLICATOR_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class Replicator
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	Replicator& __cdecl writeFields(const void* data);
	Replicator& __cdecl write(const void* data);
	Replicator& __cdecl writeProperty(const void* data);
	Replicator& __cdecl writeByte(unsigned char value);
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_REPLICATOR_H
