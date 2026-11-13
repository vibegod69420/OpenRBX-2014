#pragma once

#include "btCollisionShape.h"

class btTetrahedronShapeEx : public btCollisionShape
{
public:
	const char* getName() const;
};
