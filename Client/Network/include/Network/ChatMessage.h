#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_CHATMESSAGE_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_CHATMESSAGE_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00eef9f4
class ChatMessage
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; ChatMessage* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_CHATMESSAGE_H
