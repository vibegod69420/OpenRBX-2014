#include "Emitter.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00672a20
void Emitter::destroySubPtr0C()
{
	Emitter* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

struct EmitterSubPart
{
	void init();
};

// FUNCTION: ROBLOXSTUDIO 0x00672ce0
Emitter::Emitter()
{
	((int*)this)[0] = 0;
	((int*)this)[1] = 0;
	((int*)this)[2] = 0;

	((EmitterSubPart*)((char*)this + 0x0c))->init();
	((EmitterSubPart*)((char*)this + 0x4c))->init();
	((EmitterSubPart*)((char*)this + 0x8c))->init();

	*(int*)((char*)this + 0xcc) = 0;
	*(int*)((char*)this + 0xd8) = 0;
	*(int*)((char*)this + 0xd4) = 0;
	*(int*)((char*)this + 0xd0) = 0;
	*(int*)((char*)this + 0xdc) = 0;
	*(int*)((char*)this + 0xe0) = 0;
	*(int*)((char*)this + 0xe4) = 0;
	*(int*)((char*)this + 0xf4) = 0;
	*(int*)((char*)this + 0xf0) = 0;
	*(int*)((char*)this + 0xec) = 0;
	*(int*)((char*)this + 0xe8) = 0;
	*(int*)((char*)this + 0xf8) = 0;
	*(int*)((char*)this + 0xfc) = 0;
	*(int*)((char*)this + 0x100) = 0;
	*(int*)((char*)this + 0x110) = 0;
	*(int*)((char*)this + 0x10c) = 0;
	*(int*)((char*)this + 0x108) = 0;
	*(int*)((char*)this + 0x104) = 0;
	*(int*)((char*)this + 0x114) = 0;
	*(int*)((char*)this + 0x118) = 0;
	*(int*)((char*)this + 0x11c) = 0;
	*(int*)((char*)this + 0x12c) = 0;
	*(int*)((char*)this + 0x128) = 0;
	*(int*)((char*)this + 0x124) = 0;
	*(int*)((char*)this + 0x120) = 0;
	*(int*)((char*)this + 0x130) = 0;
	*(int*)((char*)this + 0x134) = 0;
	*(int*)((char*)this + 0x138) = 0;
	*(int*)((char*)this + 0x148) = 0;
	*(int*)((char*)this + 0x144) = 0;
	*(int*)((char*)this + 0x140) = 0;
	*(int*)((char*)this + 0x13c) = 0;
	*(int*)((char*)this + 0x14c) = 0;
	*(int*)((char*)this + 0x150) = 0;
	*(int*)((char*)this + 0x154) = 0;
	*(int*)((char*)this + 0x164) = 0;
	*(int*)((char*)this + 0x160) = 0;
	*(int*)((char*)this + 0x15c) = 0;
	*(int*)((char*)this + 0x158) = 0;
	*(int*)((char*)this + 0x168) = 0;
	*(int*)((char*)this + 0x16c) = 0;
	*(int*)((char*)this + 0x170) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
