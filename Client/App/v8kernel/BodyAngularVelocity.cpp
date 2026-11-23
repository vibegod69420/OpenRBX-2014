#include "v8kernel/BodyAngularVelocity.h"

#include "decomp.h"

namespace RBX {

class BodyAngularVelocityCallback
{
public:
	virtual void unk0();
	virtual void unk1();
	virtual void unk2();
	virtual void callback(void* data, bool* flag);
};

// FUNCTION: ROBLOXSTUDIO 0x00a95990
void BodyAngularVelocity::update()
{
	bool flag = false;
	void* data;

	if (this)
		data = (char*)this + 0x1C;
	else
		data = 0;

	(*(BodyAngularVelocityCallback**)0x01309F00)->callback(data, &flag);
}

struct BodyAngularVelocity_BaseCtor
{
	void ctor(const char* name);
};

// FUNCTION: ROBLOXSTUDIO 0x00a94c80
BodyAngularVelocity::BodyAngularVelocity()
{
	((BodyAngularVelocity_BaseCtor*)this)->ctor("BodyVelocity");

	*(int*)((char*)this + 0x00) = 0x00EB42B4;
	*(int*)((char*)this + 0x04) = 0x00EB4334;
	*(int*)((char*)this + 0x18) = 0x00EB433C;
	*(int*)((char*)this + 0x1C) = 0x00EB4348;
	*(int*)((char*)this + 0x64) = 0x00EB435C;
	*(int*)((char*)this + 0x80) = 0x00EB43AC;
	*(int*)((char*)this + 0xF8) = 0x00EB43C8;
	*(float*)((char*)this + 0x134) = 1250.0f;
	*(float*)((char*)this + 0x138) = 4000.0f;
	*(float*)((char*)this + 0x13C) = 4000.0f;
	*(float*)((char*)this + 0x140) = 4000.0f;
	*(int*)((char*)this + 0x144) = 0;
	*(float*)((char*)this + 0x148) = 2.0f;
	*(int*)((char*)this + 0x14C) = 0;
	*(int*)((char*)this + 0x150) = 0;
	*(int*)((char*)this + 0x154) = 0;
	*(int*)((char*)this + 0x158) = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a946a0
BodyAngularVelocity* BodyAngularVelocity::reset()
{
	((BodyAngularVelocity_BaseCtor*)this)->ctor("BodyAngularVelocity");

	*(int*)((char*)this + 0x00) = 0x00EB4524;
	*(int*)((char*)this + 0x04) = 0x00EB45A4;
	*(int*)((char*)this + 0x18) = 0x00EB45AC;
	*(int*)((char*)this + 0x1C) = 0x00EB45B8;
	*(int*)((char*)this + 0x64) = 0x00EB45CC;
	*(int*)((char*)this + 0x80) = 0x00EB461C;
	*(int*)((char*)this + 0xF8) = 0x00EB4638;
	*(float*)((char*)this + 0x134) = 1250.0f;
	*(float*)((char*)this + 0x138) = 4000.0f;
	*(float*)((char*)this + 0x13C) = 4000.0f;
	*(float*)((char*)this + 0x140) = 4000.0f;
	*(int*)((char*)this + 0x144) = 0;
	*(float*)((char*)this + 0x148) = 2.0f;
	*(int*)((char*)this + 0x14C) = 0;
	*(int*)((char*)this + 0x150) = 0;
	*(int*)((char*)this + 0x154) = 0;
	*(int*)((char*)this + 0x158) = 0;

	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
