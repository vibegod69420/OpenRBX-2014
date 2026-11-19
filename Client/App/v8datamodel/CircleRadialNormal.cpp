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

// FUNCTION: ROBLOXSTUDIO 0x006d12a0
const Vector3& CircleRadialNormal::getUpNormal()
{
	static Vector3 v;
	static int guard = 0;
	if ((guard & 1) == 0)
	{
		guard |= 1;
		v.x = 0.0f;
		v.y = 1.0f;
		v.z = 0.0f;
	}
	return v;
}

// FUNCTION: ROBLOXSTUDIO 0x006d12e0
const Vector3& CircleRadialNormal::getCrossNormal()
{
	static Vector3 v;
	static int guard = 0;
	if ((guard & 1) == 0)
	{
		guard |= 1;
		v.x = 0.0f;
		v.y = 0.0f;
		v.z = 1.0f;
	}
	return v;
}

// FUNCTION: ROBLOXSTUDIO 0x006d1320
const Vector3& CircleRadialNormal::getRadialNormal()
{
	static Vector3 v;
	static int guard = 0;
	if ((guard & 1) == 0)
	{
		guard |= 1;
		v.x = 0.7f;
		v.y = 0.0f;
		v.z = 1.0f;
	}
	return v;
}

// FUNCTION: ROBLOXSTUDIO 0x006d1360
const Vector3& CircleRadialNormal::getUpRadialNormal()
{
	static Vector3 v;
	static int guard = 0;
	if ((guard & 1) == 0)
	{
		guard |= 1;
		v.x = 0.0f;
		v.y = 0.7f;
		v.z = 1.0f;
	}
	return v;
}

// FUNCTION: ROBLOXSTUDIO 0x006d13a0
const Vector3& CircleRadialNormal::getCrossUpNormal()
{
	static Vector3 v;
	static int guard = 0;
	if ((guard & 1) == 0)
	{
		guard |= 1;
		v.x = 1.0f;
		v.y = 1.0f;
		v.z = 0.0f;
	}
	return v;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
