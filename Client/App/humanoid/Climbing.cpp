#include "humanoid/Climbing.h"

#include "decomp.h"

namespace RBX {
namespace HUMAN {

class Humanoid;

class Humanoid
{
public:
	bool canClimb();
};

struct ClimbingData
{
	void* vftable;
	int unknown4;
	Humanoid* humanoid;
	int unknownC;
	int climbValue;
};

// FUNCTION: ROBLOXSTUDIO 0x00bb6c20
bool Climbing::computeClimb()
{
	ClimbingData* data = reinterpret_cast<ClimbingData*>(this);
	if (data->humanoid->canClimb())
	{
		data->climbValue = 0;
		return true;
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
