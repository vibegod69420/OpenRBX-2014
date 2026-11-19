#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_MARKER_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_MARKER_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class Marker
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_08c0[0x8c0]; int field_08c0; };
		// AUTO-GENERATED FIELDS
	};

	int getField8C0() const;
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_MARKER_H
