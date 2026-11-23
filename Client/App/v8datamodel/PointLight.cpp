#include "v8datamodel/PointLight.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00939b10
struct PointLightInit
{
	void init(const char*);
};

PointLight::PointLight()
{
	((PointLightInit*)this)->init("SpotLight");
	*(int*)((char*)this + 0) = 0x00E827BC;
	*(int*)((char*)this + 4) = 0x00E82834;
	*(int*)((char*)this + 0x18) = 0x00E8283C;
	*(int*)((char*)this + 0x1C) = 0x00E82848;
	*(int*)((char*)this + 0x64) = 0x00E82858;
	*(float*)((char*)this + 0x7C) = 16.0f;
	*(float*)((char*)this + 0x80) = 90.0f;
	*(int*)((char*)this + 0x84) = 5;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
