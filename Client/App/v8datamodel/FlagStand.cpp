#include "v8datamodel/FlagStand.h"

#include "decomp.h"

namespace RBX {

struct Vector3;

struct Vector3
{
	float x;
	float y;
	float z;

	Vector3(float x, float y, float z) : x(x), y(y), z(z) {}
};

// FUNCTION: ROBLOXSTUDIO 0x00892900
const Vector3& FlagStand::getMinimumSize() const
{
	static Vector3 minSize(0.2f, 0.2f, 0.2f);
	return minSize;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
