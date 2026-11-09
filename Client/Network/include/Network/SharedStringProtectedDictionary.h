#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_SHAREDSTRINGPROTECTEDDICTIONARY_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_SHAREDSTRINGPROTECTEDDICTIONARY_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00ef9b04
class SharedStringProtectedDictionary
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; SharedStringProtectedDictionary* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_SHAREDSTRINGPROTECTEDDICTIONARY_H
