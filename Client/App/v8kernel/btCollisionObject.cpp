#include "btCollisionObject.h"

// FUNCTION: ROBLOXSTUDIO 0x00594b20
int btCollisionObject::calculateSerializeBufferSize() const
{
	return 0x100;
}

// FUNCTION: ROBLOXSTUDIO 0x00594b00
void btCollisionObject::assignTwoFieldsAndBump(void* value)
{
	void* copy = value;
	++*(int*)((char*)this + 0x110);
	*(void**)((char*)this + 0xcc) = copy;
	*(void**)((char*)this + 0xd4) = copy;
}
