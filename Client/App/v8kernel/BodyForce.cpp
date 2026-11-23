#include "v8kernel/BodyForce.h"

#include "decomp.h"

namespace RBX {

struct BodyForceMassUpdater
{
	char pad[0x14];
	float mass; // 0x14
	void update(); // 0xbef550
};

// FUNCTION: ROBLOXSTUDIO 0x00a981f0
float BodyForce::getMass()
{
	BodyForceMassUpdater* updater = *(BodyForceMassUpdater**)((char*)this + 0x2C);
	float result;
	if (updater)
	{
		updater->update();
		result = updater->mass;
	}
	else
	{
		result = *(float*)((char*)this + 0x90);
	}
	return result;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
