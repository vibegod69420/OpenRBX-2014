#include "Network/TagItem.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00cf3b10
__int64 TagItem::getId() const
{
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00cf40a0
__declspec(dllimport) void __stdcall TagItemDispatch(TagItem*);

void TagItem::dispatch()
{
	TagItemDispatch(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
