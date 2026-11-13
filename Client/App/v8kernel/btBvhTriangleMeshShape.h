#pragma once

#include "btCollisionShape.h"

class btBvhTriangleMeshShape : public btCollisionShape
{
public:
	const char* getName() const;
	int calculateSerializeBufferSize() const;
};
