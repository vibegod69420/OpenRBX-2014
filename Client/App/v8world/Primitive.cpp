#include "v8world/Primitive.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099cca0
void* Primitive::getFirstInClump()
{
	if (*(int*)((char*)this + 0x9c) > 0)
		return **(void***)((char*)this + 0x98);

	return 0;
}

void __cdecl sub_B58C10(void*);
void __cdecl sub_B587F0(void*);

// FUNCTION: ROBLOXSTUDIO 0x0099af80
void Primitive::clearDirtyFlags()
{
	if (*(int*)((char*)this + 0x18) != 0)
		sub_B58C10((char*)this + 8);

	sub_B587F0((char*)this + 8);
	*(unsigned char*)((char*)this + 0x14) = 0;
}

struct PrimitiveSubB8
{
	void* get(int);
};

// FUNCTION: ROBLOXSTUDIO 0x0099ccc0
void* Primitive::getAssemblyPrimitive()
{
	if (*(int*)((char*)this + 0xc0) > 0)
		return ((PrimitiveSubB8*)((char*)this + 0xb8))->get(0);

	if (*(int*)((char*)this + 0x9c) > 0)
		return **(void***)((char*)this + 0x98);

	return 0;
}

struct PrimitiveSetClumpHelper
{
	void setClump(void*);
};

// FUNCTION: ROBLOXSTUDIO 0x0099ccf0
void Primitive::setClumpFromAssembly()
{
	void* arg;
	if (*(int*)((char*)this + 0xc0) > 0)
		arg = **(void***)((char*)this + 0xbc);
	else
		arg = 0;
	((PrimitiveSetClumpHelper*)this)->setClump(arg);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
