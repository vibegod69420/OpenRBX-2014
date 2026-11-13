#pragma once

#include "btCollisionShape.h"

class btSphereShape : public btCollisionShape
{
public:
	const char* getName() const;
};
