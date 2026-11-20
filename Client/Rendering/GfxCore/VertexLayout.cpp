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

extern void* g_glPointParameterfARB;
extern void* g_glPointParameterfvARB;

// FUNCTION: ROBLOXSTUDIO 0x005f5f10
bool VertexLayout::initARBPointParameters()
{
	void* first = g_glGetProcAddress("glPointParameterfARB");
	g_glPointParameterfARB = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glPointParameterfvARB");
	g_glPointParameterfvARB = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glBindImageTexture;
extern void* g_glMemoryBarrier;

// FUNCTION: ROBLOXSTUDIO 0x005f6890
bool VertexLayout::initGLShaderImageLoadStore()
{
	void* bindProc = g_glGetProcAddress("glBindImageTexture");
	g_glBindImageTexture = bindProc;
	bool missingBind = (bindProc == 0);

	void* barrierProc = g_glGetProcAddress("glMemoryBarrier");
	g_glMemoryBarrier = barrierProc;

	if (barrierProc == 0)
		return true;
	if (missingBind)
		return true;

	return false;
}

extern void* g_glTexPageCommitmentARB;
extern void* g_glTexturePageCommitmentEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f6db0
bool VertexLayout::initARBSparseTexture()
{
	void* first = g_glGetProcAddress("glTexPageCommitmentARB");
	g_glTexPageCommitmentARB = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glTexturePageCommitmentEXT");
	g_glTexturePageCommitmentEXT = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glTexBufferRange;
extern void* g_glTextureBufferRangeEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f6f00
bool VertexLayout::initTextureBufferRange()
{
	void* first = g_glGetProcAddress("glTexBufferRange");
	g_glTexBufferRange = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glTextureBufferRangeEXT");
	g_glTextureBufferRangeEXT = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glDrawTransformFeedbackInstanced;
extern void* g_glDrawTransformFeedbackStreamInstanced;

// FUNCTION: ROBLOXSTUDIO 0x005f72f0
bool VertexLayout::initGLDrawTransformFeedbackInstanced()
{
	void* first = g_glGetProcAddress("glDrawTransformFeedbackInstanced");
	g_glDrawTransformFeedbackInstanced = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glDrawTransformFeedbackStreamInstanced");
	g_glDrawTransformFeedbackStreamInstanced = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glMapObjectBufferATI;
extern void* g_glUnmapObjectBufferATI;

// FUNCTION: ROBLOXSTUDIO 0x005f85f0
bool VertexLayout::initATIMapObjectBuffer()
{
	void* first = g_glGetProcAddress("glMapObjectBufferATI");
	g_glMapObjectBufferATI = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glUnmapObjectBufferATI");
	g_glUnmapObjectBufferATI = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glPNTrianglesfATI;
extern void* g_glPNTrianglesiATI;

// FUNCTION: ROBLOXSTUDIO 0x005f8630
bool VertexLayout::initATIPNTriangles()
{
	void* first = g_glGetProcAddress("glPNTrianglesfATI");
	g_glPNTrianglesfATI = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glPNTrianglesiATI");
	g_glPNTrianglesiATI = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glStencilFuncSeparateATI;
extern void* g_glStencilOpSeparateATI;

// FUNCTION: ROBLOXSTUDIO 0x005f8670
bool VertexLayout::initATISeparateStencil()
{
	void* first = g_glGetProcAddress("glStencilFuncSeparateATI");
	g_glStencilFuncSeparateATI = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glStencilOpSeparateATI");
	g_glStencilOpSeparateATI = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glColorSubTableEXT;
extern void* g_glCopyColorSubTableEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f8ce0
bool VertexLayout::initEXTColorSubtable()
{
	void* first = g_glGetProcAddress("glColorSubTableEXT");
	g_glColorSubTableEXT = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glCopyColorSubTableEXT");
	g_glCopyColorSubTableEXT = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glLockArraysEXT;
extern void* g_glUnlockArraysEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f8d20
bool VertexLayout::initEXTCompiledVertexArray()
{
	void* first = g_glGetProcAddress("glLockArraysEXT");
	g_glLockArraysEXT = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glUnlockArraysEXT");
	g_glUnlockArraysEXT = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glBinormalPointerEXT;
extern void* g_glTangentPointerEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f8e90
bool VertexLayout::initEXTCoordinateFrame()
{
	void* first = g_glGetProcAddress("glBinormalPointerEXT");
	g_glBinormalPointerEXT = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glTangentPointerEXT");
	g_glTangentPointerEXT = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
