#include "v8datamodel/SkateboardPlatform.h"

#include "decomp.h"

namespace RBX {

namespace {

struct SkateboardPlatform_NodeB
{
	char pad_0000[0x28];
	void* ptr_0028;
};

struct SkateboardPlatform_NodeA
{
	char pad_0000[0x104];
	SkateboardPlatform_NodeB* ptr_0104;
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x00aa8790
void* SkateboardPlatform::getSkateboardController()
{
	SkateboardPlatform_NodeA* a = *(SkateboardPlatform_NodeA**)((char*)this - 0x58);
	return a->ptr_0104->ptr_0028;
}

namespace {

struct SkateboardPlatform_PtrE0
{
	char pad_0000[0x78];
	bool flag_0078;
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x00892990
bool SkateboardPlatform::getFlag0078()
{
	SkateboardPlatform_PtrE0* ptr = *(SkateboardPlatform_PtrE0**)((char*)this + 0xE0);
	return ptr->flag_0078;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
