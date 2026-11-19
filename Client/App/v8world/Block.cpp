#include "v8world/Block.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b9ad50
void __cdecl sub_b9c680(Block* block, void* arg);
void __cdecl sub_cf6522(void* ptr);

void __cdecl Block::destroy()
{
	if (this)
	{
		sub_b9c680(this, *(void**)((char*)this + 0x0c));
		sub_cf6522(this);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
