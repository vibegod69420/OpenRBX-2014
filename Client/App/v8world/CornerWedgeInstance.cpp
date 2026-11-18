#include "v8world/CornerWedgeInstance.h"

#include "decomp.h"

namespace RBX {

namespace {

struct CornerWedgeVector3
{
	float x;
	float y;
	float z;

	CornerWedgeVector3(float x_, float y_, float z_)
		: x(x_), y(y_), z(z_)
	{
	}
};

}

// FUNCTION: ROBLOXSTUDIO 0x008928c0
const void* CornerWedgeInstance::getMeshScale() const
{
	static CornerWedgeVector3 meshScale(1.0f, 1.0f, 1.0f);
	return &meshScale;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
