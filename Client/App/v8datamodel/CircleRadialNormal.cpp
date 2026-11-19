#include "v8datamodel/CircleRadialNormal.h"

#include "decomp.h"

namespace RBX {

struct Vector3
{
	float x;
	float y;
	float z;
};

// FUNCTION: ROBLOXSTUDIO 0x006d1260
const Vector3& CircleRadialNormal::getNormal()
{
	static Vector3 v;
	static int guard = 0;
	if ((guard & 1) == 0)
	{
		guard |= 1;
		v.x = 1.0f;
		v.y = 0.0f;
		v.z = 0.0f;
	}
	return v;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
