#include "VertexBufferD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct VertexBufferTableEntry
{
	void* ptr;
	void* data;
};

extern VertexBufferTableEntry g_vertexBufferTable[];

void* sub_5E5560(void* device, void* elementCount, void* elementSize, unsigned int index);

// FUNCTION: ROBLOXSTUDIO 0x005e5140
void VertexBufferD3D9::upload()
{
	unsigned int index = ((unsigned int*)this)[12];
	if (g_vertexBufferTable[index].ptr == 0)
	{
		void* deviceWrapper = ((void**)this)[1];
		((void**)this)[13] = sub_5E5560(
			((void**)deviceWrapper)[5],
			((void**)this)[10],
			((void**)this)[11],
			index);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
