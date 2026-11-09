#include "Network/ChatMessage.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c2f640
void ChatMessage::destroySubPtr0C()
{
	ChatMessage* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
