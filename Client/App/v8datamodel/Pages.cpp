#include "v8datamodel/Pages.h"

#include "decomp.h"

namespace RBX {

void __fastcall sub_95B480(Pages*);

// FUNCTION: ROBLOXSTUDIO 0x0095cae0
Pages::Pages()
{
	sub_95B480(this);
	*(void**)this = (void*)0x00E84BF4;
	*(void**)((char*)this + 4) = (void*)0x00E84C70;
	*(void**)((char*)this + 0x18) = (void*)0x00E84C78;
	*(void**)((char*)this + 0x1C) = (void*)0x00E84C84;
	*((unsigned char*)this + 0x64) = 0;
	*(int*)((char*)this + 0x68) = 0;
	*(int*)((char*)this + 0x6C) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
