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

// FUNCTION: ROBLOXSTUDIO 0x00cf40b0
__declspec(dllimport) void __stdcall TagItemDispatch(TagItem*);

void TagItem::send()
{
	TagItemDispatch(this);
}

// FUNCTION: ROBLOXSTUDIO 0x00cf4090
__declspec(dllimport) void __stdcall TagItemRead(TagItem*);

TagItem* TagItem::read()
{
	TagItemRead(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
