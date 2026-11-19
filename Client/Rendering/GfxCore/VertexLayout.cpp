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

// FUNCTION: ROBLOXSTUDIO 0x005f4900
extern void* g_glGetTexParameterPointervAPPLE;
extern void* g_glTextureRangeAPPLE;

bool VertexLayout::initAppleTextureExtensions()
{
    void* first = g_glGetProcAddress("glGetTexParameterPointervAPPLE");
    g_glGetTexParameterPointervAPPLE = first;
    unsigned char bl = (first == 0);

    void* second = g_glGetProcAddress("glTextureRangeAPPLE");
    g_glTextureRangeAPPLE = second;

    if (second == 0)
        return true;

    if (bl)
        return true;

    return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
