#include "v8datamodel/PhysicsJob.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008c5810
int PhysicsJob::getErrorEmphasis() const
{
	if (*(const unsigned char*)0x012FCE30)
		return 0x400;
	return 1;
}

class PhysicsSleepCounter
{
public:
	float getSleepTime();
};

// FUNCTION: ROBLOXSTUDIO 0x008c6960
float PhysicsJob::getSleepTime() const
{
	PhysicsSleepCounter* counter = *(PhysicsSleepCounter**)((const char*)this + 0x68);
	if (counter)
		return counter->getSleepTime();
	return 0.0f;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
