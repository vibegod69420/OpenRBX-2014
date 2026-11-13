#pragma once

#include "btCollisionShape.h"

class btTriangleMeshShape : public btCollisionShape
{
public:
	const char* getName() const;
};
