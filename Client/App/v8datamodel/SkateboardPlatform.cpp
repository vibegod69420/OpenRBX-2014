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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
