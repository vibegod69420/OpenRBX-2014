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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
