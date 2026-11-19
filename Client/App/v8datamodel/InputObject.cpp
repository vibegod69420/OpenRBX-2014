#include "v8datamodel/InputObject.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009ccfc0
int InputObject::isInputType8()
{
	return *(int*)((char*)this + 0x84) == 8;
}

// FUNCTION: ROBLOXSTUDIO 0x009cd010
int InputObject::isInputType127()
{
	return *(int*)((char*)this + 0x84) == 0x7f;
}

// FUNCTION: ROBLOXSTUDIO 0x009cd020
int InputObject::isInputType27()
{
	return *(int*)((char*)this + 0x84) == 0x1b;
}

// FUNCTION: ROBLOXSTUDIO 0x009ccfd0
bool InputObject::isInputType13Or271()
{
	int inputType = *(int*)((char*)this + 0x84);
	return inputType == 0xD || inputType == 0x10F;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
