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

// FUNCTION: ROBLOXSTUDIO 0x00b9ad70
void __cdecl sub_b9c7d0(Block* block, void* arg);

void __cdecl Block::destruct()
{
	if (this)
	{
		sub_b9c7d0(this, *(void**)((char*)this + 0x0c));
		sub_cf6522(this);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00b9ad90
void __cdecl sub_b9c920(Block* block, void* arg);

void __cdecl Block::release()
{
    if (this)
    {
        sub_b9c920(this, (void*)(*(int*)((char*)this + 0xc)));
        sub_cf6522(this);
    }
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
