#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_ONEQUARTERCLUSTERPACKETCACHE_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_ONEQUARTERCLUSTERPACKETCACHE_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class OneQuarterClusterPacketCache
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0ad8[0xad8]; int field_0ad8; };
		// AUTO-GENERATED FIELDS
	};

	int getFieldAD8() const;
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_ONEQUARTERCLUSTERPACKETCACHE_H
