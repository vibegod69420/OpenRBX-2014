#include "v8kernel/D6Link.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b5e4a0
void __fastcall D6Link_ConstructPart(void* part);
int __cdecl D6Link_NextId();

D6Link::D6Link()
{
	void* part0 = (char*)this + 8;
	*(int*)((char*)this + 4) = 0;
	D6Link_ConstructPart(part0);

	D6Link_ConstructPart((char*)this + 0x38);
	D6Link_ConstructPart((char*)this + 0x68);
	D6Link_ConstructPart((char*)this + 0x98);

	*(int*)((char*)this + 0xC8) = D6Link_NextId();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
