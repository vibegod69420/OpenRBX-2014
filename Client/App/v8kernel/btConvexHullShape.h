#pragma once

#include "btCollisionShape.h"

class btConvexHullShape : public btCollisionShape
{
public:
	const char* getName() const;
	int calculateSerializeBufferSize() const;
};
