#include "btTriangleShape.h"

// FUNCTION: ROBLOXSTUDIO 0x00590a80
const char* btTriangleShape::getName() const
{
	return "Triangle";
}

// FUNCTION: ROBLOXSTUDIO 0x00590750
void btTriangleShape::zeroQuad(int, int* out) const
{
	out[0] = 0;
	out[1] = 0;
	out[2] = 0;
	out[3] = 0;
}
