#include "v8kernel/btTriangleIndexVertexArray.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00595fa0
int btTriangleIndexVertexArray::getField24() const
{
	return field_0024;
}

// FUNCTION: ROBLOXSTUDIO 0x00595e70
int btTriangleIndexVertexArray::getConst28() const
{
	return 28;
}

// FUNCTION: ROBLOXSTUDIO 0x005961a0
int btTriangleIndexVertexArray::hasPremadeAabb() const
{
	return (&field_0024)[6] == 1;
}

// AUTO-GENERATED IMPLEMENTATIONS


