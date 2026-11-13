#pragma once

#include "btCollisionShape.h"

class btTriangleShape : public btCollisionShape
{
public:
	const char* getName() const;
	void zeroQuad(int, int* out) const;
};
