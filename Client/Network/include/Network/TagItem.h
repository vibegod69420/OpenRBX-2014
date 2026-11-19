#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_TAGITEM_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_TAGITEM_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class TagItem
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	__int64 getId() const;
	void dispatch();
	void send();
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_TAGITEM_H
