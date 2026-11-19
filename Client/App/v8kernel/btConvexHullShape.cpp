#include "v8kernel/btConvexHullShape.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00594f20
int btConvexHullShape::getConst17001568() const
{
	return 17001568;
}

// FUNCTION: ROBLOXSTUDIO 0x00594f30
int btConvexHullShape::getConst68() const
{
	return 68;
}

// FUNCTION: ROBLOXSTUDIO 0x00532380
int btConvexHullShape::getField84() const
{
	return field_0084;
}

// FUNCTION: ROBLOXSTUDIO 0x005323f0
struct btConvexHullShapeString
{
	int compare(int pos, int len, const char* str, int strLen);
};

int btConvexHullShape::isHttp()
{
	return ((btConvexHullShapeString*)this)->compare(0, 4, "http", 4) == 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


