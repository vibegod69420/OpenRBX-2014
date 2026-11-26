#include "v8world/Clump.h"

#include "decomp.h"

namespace RBX {

extern int Clump_vftable[];
void __fastcall clump_base_ctor(void* self);

// FUNCTION: ROBLOXSTUDIO 0x00b59fd0
Clump::Clump()
{
	clump_base_ctor(this);
	this->_vtable_or_head = reinterpret_cast<int>(Clump_vftable);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
