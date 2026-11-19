#include "v8datamodel/Message.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00aa1ed0
struct MessageBaseCtor
{
	void ctor(const char*);
};

Message::Message()
{
	reinterpret_cast<MessageBaseCtor*>(this)->ctor("Message");

	*(int*)((char*)this + 0x68) = -1;
	*(int*)((char*)this + 0x6C) = -1;
	*(int*)((char*)this + 0x70) = -1;
	*(int*)((char*)this + 0x74) = 0;
	*(int*)((char*)this + 0x78) = 0;

	*(int*)((char*)this + 0x00) = 0x00EB61FC;
	*(int*)((char*)this + 0x04) = 0x00EB6274;
	*(int*)((char*)this + 0x18) = 0x00EB627C;
	*(int*)((char*)this + 0x1C) = 0x00EB6288;
	*(int*)((char*)this + 0x64) = 0x00EB6298;

	*(int*)((char*)this + 0x90) = 0x0F;
	*(int*)((char*)this + 0x8C) = 0;
	*(unsigned char*)((char*)this + 0x7C) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
