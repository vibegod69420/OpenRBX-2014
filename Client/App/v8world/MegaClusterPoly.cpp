#include "v8world/MegaClusterPoly.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b61fa0
const int* MegaClusterPoly::getMemberPtr04() const
{
	return &member_0004;
}

struct MegaClusterPolyElement
{
	char data[36];
};

struct MegaClusterPolyData
{
	char padding[0x18];
	MegaClusterPolyElement* begin;
	MegaClusterPolyElement* end;
};

// FUNCTION: ROBLOXSTUDIO 0x0099d2b0
int MegaClusterPoly::getNumFaces() const
{
	MegaClusterPolyData* data = *(MegaClusterPolyData**)((const char*)this + 0x18);
	return (int)(data->end - data->begin);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
