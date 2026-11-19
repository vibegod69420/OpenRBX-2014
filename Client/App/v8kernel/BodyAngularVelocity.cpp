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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
