#include "G3D/Sphere.h"

#include "decomp.h"

namespace G3D {

// FUNCTION: ROBLOXSTUDIO 0x006e0dc0
double Sphere::getGlobalDouble() {
    return **reinterpret_cast<double**>(0x00e10440);
}

// FUNCTION: ROBLOXSTUDIO 0x006e0dd0
double Sphere::getGlobalDouble2() {
    return **reinterpret_cast<double**>(0x00e10444);
}

// FUNCTION: ROBLOXSTUDIO 0x006e0de0
float Sphere::getGlobalFloat() {
    return **reinterpret_cast<float**>(0x00e1043c);
}

// FUNCTION: ROBLOXSTUDIO 0x006e0df0
float Sphere::getGlobalFloat2() {
    return **reinterpret_cast<float**>(0x00e10448);
}

// FUNCTION: ROBLOXSTUDIO 0x006e07d0
void* Sphere::getStaticData()
{
	int guard = *reinterpret_cast<int*>(0x012DFB80);
	if ((guard & 1) == 0)
	{
		guard |= 1;
		*reinterpret_cast<int*>(0x012DFB80) = guard;
		*reinterpret_cast<int*>(0x012DFB78) = 0;
		*reinterpret_cast<int*>(0x012DFB7C) = 0;
	}
	return reinterpret_cast<void*>(0x012DFB78);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
