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

// FUNCTION: ROBLOXSTUDIO 0x005f4cf0
extern void* g_glBindFragDataLocationIndexed;
extern void* g_glGetFragDataIndex;

bool VertexLayout::initGLBindFragDataLocationIndexed()
{
	void* bindProc = g_glGetProcAddress("glBindFragDataLocationIndexed");
	g_glBindFragDataLocationIndexed = bindProc;
	bool missingBind = (bindProc == 0);

	void* indexProc = g_glGetProcAddress("glGetFragDataIndex");
	g_glGetFragDataIndex = indexProc;

	if (indexProc == 0)
		return true;
	if (missingBind)
		return true;

	return false;
}

extern void* g_glDrawArraysIndirect;
extern void* g_glDrawElementsIndirect;

// FUNCTION: ROBLOXSTUDIO 0x005f5070
bool VertexLayout::initGLDrawIndirect()
{
	void* drawArraysProc = g_glGetProcAddress("glDrawArraysIndirect");
	g_glDrawArraysIndirect = drawArraysProc;
	bool missingDrawArrays = (drawArraysProc == 0);

	void* drawElementsProc = g_glGetProcAddress("glDrawElementsIndirect");
	g_glDrawElementsIndirect = drawElementsProc;

	if (drawElementsProc == 0)
		return true;
	if (missingDrawArrays)
		return true;

	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x005f5840
extern void* g_glMultiDrawArraysIndirectCountARB;
extern void* g_glMultiDrawElementsIndirectCountARB;

bool VertexLayout::initGLMultiDrawIndirectCountARB()
{
	void* arraysProc = g_glGetProcAddress("glMultiDrawArraysIndirectCountARB");
	g_glMultiDrawArraysIndirectCountARB = arraysProc;
	bool missingArrays = (arraysProc == 0);

	void* elementsProc = g_glGetProcAddress("glMultiDrawElementsIndirectCountARB");
	g_glMultiDrawElementsIndirectCountARB = elementsProc;

	if (elementsProc == 0)
		return true;
	if (missingArrays)
		return true;

	return false;
}

extern void* g_glFlushMappedBufferRange;
extern void* g_glMapBufferRange;

// FUNCTION: ROBLOXSTUDIO 0x005f59a0
bool VertexLayout::initGLMapBufferRange()
{
	void* flushProc = g_glGetProcAddress("glFlushMappedBufferRange");
	g_glFlushMappedBufferRange = flushProc;
	bool missingFlush = (flushProc == 0);

	void* mapProc = g_glGetProcAddress("glMapBufferRange");
	g_glMapBufferRange = mapProc;

	if (mapProc == 0)
		return true;
	if (missingFlush)
		return true;

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
