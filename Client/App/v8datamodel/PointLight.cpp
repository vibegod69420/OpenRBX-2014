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

// FUNCTION: ROBLOXSTUDIO 0x00939ad0
PointLight* PointLight::initialize()
{
	((PointLightInit*)this)->init("PointLight");
	*(int*)((char*)this + 0) = 0xe825dc;
	*(int*)((char*)this + 4) = 0xe82654;
	*(int*)((char*)this + 0x18) = 0xe8265c;
	*(int*)((char*)this + 0x1c) = 0xe82668;
	*(int*)((char*)this + 0x64) = 0xe82678;
	*(int*)((char*)this + 0x7c) = 0x41000000;
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
