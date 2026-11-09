#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_SERVERREPLICATOR_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_SERVERREPLICATOR_H

#include "decomp.h"

namespace RBX {
namespace Network {

extern int s_value_00cb94e0;
// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00efdc4c
class ServerReplicator
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_46ac[0x46ac]; int field_46ac; };
		// AUTO-GENERATED FIELDS
	};

	int getField46AC() const;
	int getGlobal_94e0() const;
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_SERVERREPLICATOR_H
