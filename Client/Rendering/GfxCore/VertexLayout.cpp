#include "VertexLayout.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

typedef void* (__stdcall *GetProcAddressFn)(const char*);

extern GetProcAddressFn g_glGetProcAddress;
extern void* g_glBufferParameteriAPPLE;
extern void* g_glFlushMappedBufferRangeAPPLE;

// FUNCTION: ROBLOXSTUDIO 0x005f4870
bool VertexLayout::initAppleBufferExtensions()
{
	g_glBufferParameteriAPPLE = g_glGetProcAddress("glBufferParameteriAPPLE");
	bool firstMissing = (g_glBufferParameteriAPPLE == 0);

	g_glFlushMappedBufferRangeAPPLE = g_glGetProcAddress("glFlushMappedBufferRangeAPPLE");

	if (g_glFlushMappedBufferRangeAPPLE == 0 || firstMissing)
		return true;

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
