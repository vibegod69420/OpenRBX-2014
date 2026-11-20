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

extern void* g_glCullParameterdvEXT;
extern void* g_glCullParameterfvEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f8f50
bool VertexLayout::initEXTCullVertex()
{
	void* first = g_glGetProcAddress("glCullParameterdvEXT");
	g_glCullParameterdvEXT = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glCullParameterfvEXT");
	g_glCullParameterfvEXT = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glFlushVertexArrayRangeAPPLE;
extern void* g_glVertexArrayParameteriAPPLE;
extern void* g_glVertexArrayRangeAPPLE;

// FUNCTION: ROBLOXSTUDIO 0x005f49b0
bool VertexLayout::initAppleVertexArrayRange()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glFlushVertexArrayRangeAPPLE");
	g_glFlushVertexArrayRangeAPPLE = p;
	unsigned char missing = (p == 0);

	p = proc("glVertexArrayParameteriAPPLE");
	g_glVertexArrayParameteriAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexArrayRangeAPPLE");
	g_glVertexArrayRangeAPPLE = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glDrawArraysInstancedBaseInstance;
extern void* g_glDrawElementsInstancedBaseInstance;
extern void* g_glDrawElementsInstancedBaseVertexBaseInstance;

// FUNCTION: ROBLOXSTUDIO 0x005f4b30
bool VertexLayout::initARBBaseInstance()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glDrawArraysInstancedBaseInstance");
	g_glDrawArraysInstancedBaseInstance = p;
	unsigned char missing = (p == 0);

	p = proc("glDrawElementsInstancedBaseInstance");
	g_glDrawElementsInstancedBaseInstance = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glDrawElementsInstancedBaseVertexBaseInstance");
	g_glDrawElementsInstancedBaseVertexBaseInstance = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glGetProgramBinary;
extern void* g_glProgramBinary;
extern void* g_glProgramParameteri;

// FUNCTION: ROBLOXSTUDIO 0x005f5360
bool VertexLayout::initARBGetProgramBinary()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glGetProgramBinary");
	g_glGetProgramBinary = p;
	unsigned char missing = (p == 0);

	p = proc("glProgramBinary");
	g_glProgramBinary = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glProgramParameteri");
	g_glProgramParameteri = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glGetQueryObjecti64v;
extern void* g_glGetQueryObjectui64v;
extern void* g_glQueryCounter;

// FUNCTION: ROBLOXSTUDIO 0x005f7180
bool VertexLayout::initARBTimerQuery()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glGetQueryObjecti64v");
	g_glGetQueryObjecti64v = p;
	unsigned char missing = (p == 0);

	p = proc("glGetQueryObjectui64v");
	g_glGetQueryObjectui64v = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glQueryCounter");
	g_glQueryCounter = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBindAttribLocationARB;
extern void* g_glGetActiveAttribARB;
extern void* g_glGetAttribLocationARB;

// FUNCTION: ROBLOXSTUDIO 0x005f7dd0
bool VertexLayout::initARBVertexShader()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBindAttribLocationARB");
	g_glBindAttribLocationARB = p;
	unsigned char missing = (p == 0);

	p = proc("glGetActiveAttribARB");
	g_glGetActiveAttribARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetAttribLocationARB");
	g_glGetAttribLocationARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glDrawElementArrayATI;
extern void* g_glDrawRangeElementArrayATI;
extern void* g_glElementPointerATI;

// FUNCTION: ROBLOXSTUDIO 0x005f83f0
bool VertexLayout::initATIDrawElementArray()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glDrawElementArrayATI");
	g_glDrawElementArrayATI = p;
	unsigned char missing = (p == 0);

	p = proc("glDrawRangeElementArrayATI");
	g_glDrawRangeElementArrayATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glElementPointerATI");
	g_glElementPointerATI = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glGetVertexAttribArrayObjectfvATI;
extern void* g_glGetVertexAttribArrayObjectivATI;
extern void* g_glVertexAttribArrayObjectATI;

// FUNCTION: ROBLOXSTUDIO 0x005f87d0
bool VertexLayout::initATIVertexArrayObject()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glGetVertexAttribArrayObjectfvATI");
	g_glGetVertexAttribArrayObjectfvATI = p;
	unsigned char missing = (p == 0);

	p = proc("glGetVertexAttribArrayObjectivATI");
	g_glGetVertexAttribArrayObjectivATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribArrayObjectATI");
	g_glVertexAttribArrayObjectATI = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glTexStorageSparseAMD;
extern void* g_glTextureStorageSparseAMD;

// FUNCTION: ROBLOXSTUDIO 0x005f44e0
bool VertexLayout::initAMDSparseTexture()
{
	void* first = g_glGetProcAddress("glTexStorageSparseAMD");
	g_glTexStorageSparseAMD = first;
	unsigned char missing = (first == 0);

	void* second = g_glGetProcAddress("glTextureStorageSparseAMD");
	g_glTextureStorageSparseAMD = second;

	if (second == 0)
		return true;
	if (missing)
		return true;

	return false;
}

extern void* g_glBufferStorage;
extern void* g_glNamedBufferStorageEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f4d30
bool VertexLayout::initARBBufferStorage()
{
	void* bufferStorageProc = g_glGetProcAddress("glBufferStorage");
	g_glBufferStorage = bufferStorageProc;
	bool missingBufferStorage = (bufferStorageProc == 0);

	void* namedBufferStorageProc = g_glGetProcAddress("glNamedBufferStorageEXT");
	g_glNamedBufferStorageEXT = namedBufferStorageProc;

	if (namedBufferStorageProc == 0)
		return true;
	if (missingBufferStorage)
		return true;

	return false;
}

extern void* g_glClearTexImage;
extern void* g_glClearTexSubImage;

// FUNCTION: ROBLOXSTUDIO 0x005f4e00
bool VertexLayout::initARBClearTexture()
{
	void* first = g_glGetProcAddress("glClearTexImage");
	g_glClearTexImage = first;
	unsigned char bl = (first == 0);

	void* second = g_glGetProcAddress("glClearTexSubImage");
	g_glClearTexSubImage = second;

	if (second == 0)
		return true;

	if (bl)
		return true;

	return false;
}

extern void* g_glMultiDrawArraysIndirect;
extern void* g_glMultiDrawElementsIndirect;

// FUNCTION: ROBLOXSTUDIO 0x005f5af0
bool VertexLayout::initGLMultiDrawIndirect()
{
	void* multiDrawArraysProc = g_glGetProcAddress("glMultiDrawArraysIndirect");
	g_glMultiDrawArraysIndirect = multiDrawArraysProc;
	bool missingMultiDrawArrays = (multiDrawArraysProc == 0);

	void* multiDrawElementsProc = g_glGetProcAddress("glMultiDrawElementsIndirect");
	g_glMultiDrawElementsIndirect = multiDrawElementsProc;

	if (multiDrawElementsProc == 0)
		return true;
	if (missingMultiDrawArrays)
		return true;

	return false;
}

extern void* g_glPatchParameterfv;
extern void* g_glPatchParameteri;

// FUNCTION: ROBLOXSTUDIO 0x005f6ea0
bool VertexLayout::initARBTessellationShader()
{
	void* first = g_glGetProcAddress("glPatchParameterfv");
	g_glPatchParameterfv = first;
	unsigned char missingFirst = (first == 0);

	void* second = g_glGetProcAddress("glPatchParameteri");
	g_glPatchParameteri = second;

	if (second == 0)
		return true;
	if (missingFirst)
		return true;

	return false;
}

extern void* g_glCopyTexSubImage3D;
extern void* g_glDrawRangeElements;
extern void* g_glTexImage3D;
extern void* g_glTexSubImage3D;

// FUNCTION: ROBLOXSTUDIO 0x005f2900
bool VertexLayout::initGL12()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glCopyTexSubImage3D");
	g_glCopyTexSubImage3D = p;
	unsigned char missing = (p == 0);

	p = proc("glDrawRangeElements");
	g_glDrawRangeElements = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexImage3D");
	g_glTexImage3D = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexSubImage3D");
	g_glTexSubImage3D = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glDrawArraysInstanced;
extern void* g_glDrawElementsInstanced;
extern void* g_glPrimitiveRestartIndex;
extern void* g_glTexBuffer;

// FUNCTION: ROBLOXSTUDIO 0x005f40b0
bool VertexLayout::initGL31()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glDrawArraysInstanced");
	g_glDrawArraysInstanced = p;
	unsigned char missing = (p == 0);

	p = proc("glDrawElementsInstanced");
	g_glDrawElementsInstanced = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glPrimitiveRestartIndex");
	g_glPrimitiveRestartIndex = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexBuffer");
	g_glTexBuffer = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glDebugMessageCallbackAMD;
extern void* g_glDebugMessageEnableAMD;
extern void* g_glDebugMessageInsertAMD;
extern void* g_glGetDebugMessageLogAMD;

// FUNCTION: ROBLOXSTUDIO 0x005f4230
bool VertexLayout::initAMDDebugOutput()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glDebugMessageCallbackAMD");
	g_glDebugMessageCallbackAMD = p;
	unsigned char missing = (p == 0);

	p = proc("glDebugMessageEnableAMD");
	g_glDebugMessageEnableAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glDebugMessageInsertAMD");
	g_glDebugMessageInsertAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetDebugMessageLogAMD");
	g_glGetDebugMessageLogAMD = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBindVertexArrayAPPLE;
extern void* g_glDeleteVertexArraysAPPLE;
extern void* g_glGenVertexArraysAPPLE;
extern void* g_glIsVertexArrayAPPLE;

// FUNCTION: ROBLOXSTUDIO 0x005f4940
bool VertexLayout::initAppleVertexArrayObject()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBindVertexArrayAPPLE");
	g_glBindVertexArrayAPPLE = p;
	unsigned char missing = (p == 0);

	p = proc("glDeleteVertexArraysAPPLE");
	g_glDeleteVertexArraysAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenVertexArraysAPPLE");
	g_glGenVertexArraysAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsVertexArrayAPPLE");
	g_glIsVertexArrayAPPLE = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glClearBufferData;
extern void* g_glClearBufferSubData;
extern void* g_glClearNamedBufferDataEXT;
extern void* g_glClearNamedBufferSubDataEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f4d90
bool VertexLayout::initARBClearBufferObject()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glClearBufferData");
	g_glClearBufferData = p;
	unsigned char missing = (p == 0);

	p = proc("glClearBufferSubData");
	g_glClearBufferSubData = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glClearNamedBufferDataEXT");
	g_glClearNamedBufferDataEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glClearNamedBufferSubDataEXT");
	g_glClearNamedBufferSubDataEXT = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBlendEquationSeparateiARB;
extern void* g_glBlendEquationiARB;
extern void* g_glBlendFuncSeparateiARB;
extern void* g_glBlendFunciARB;

// FUNCTION: ROBLOXSTUDIO 0x005f4f90
bool VertexLayout::initARBDrawBuffersBlend()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBlendEquationSeparateiARB");
	g_glBlendEquationSeparateiARB = p;
	unsigned char missing = (p == 0);

	p = proc("glBlendEquationiARB");
	g_glBlendEquationiARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBlendFuncSeparateiARB");
	g_glBlendFuncSeparateiARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBlendFunciARB");
	g_glBlendFunciARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glDrawElementsBaseVertex;
extern void* g_glDrawElementsInstancedBaseVertex;
extern void* g_glDrawRangeElementsBaseVertex;
extern void* g_glMultiDrawElementsBaseVertex;

// FUNCTION: ROBLOXSTUDIO 0x005f5000
bool VertexLayout::initARBDrawElementsBaseVertex()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glDrawElementsBaseVertex");
	g_glDrawElementsBaseVertex = p;
	unsigned char bl = (p == 0);

	p = proc("glDrawElementsInstancedBaseVertex");
	g_glDrawElementsInstancedBaseVertex = p;
	if (p == 0 || bl)
		bl = 1;

	p = proc("glDrawRangeElementsBaseVertex");
	g_glDrawRangeElementsBaseVertex = p;
	if (p == 0 || bl)
		bl = 1;

	p = proc("glMultiDrawElementsBaseVertex");
	g_glMultiDrawElementsBaseVertex = p;
	if (p == 0 || bl)
		return true;

	return false;
}

extern void* g_glFramebufferParameteri;
extern void* g_glGetFramebufferParameteriv;
extern void* g_glGetNamedFramebufferParameterivEXT;
extern void* g_glNamedFramebufferParameteriEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f50b0
bool VertexLayout::initARBFramebufferNoAttachments()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glFramebufferParameteri");
	g_glFramebufferParameteri = p;
	unsigned char missing = (p == 0);

	p = proc("glGetFramebufferParameteriv");
	g_glGetFramebufferParameteriv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetNamedFramebufferParameterivEXT");
	g_glGetNamedFramebufferParameterivEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glNamedFramebufferParameteriEXT");
	g_glNamedFramebufferParameteriEXT = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glGetMultisamplefv;
extern void* g_glSampleMaski;
extern void* g_glTexImage2DMultisample;
extern void* g_glTexImage3DMultisample;

// FUNCTION: ROBLOXSTUDIO 0x005f6ff0
bool VertexLayout::initARBTextureMultisample()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glGetMultisamplefv");
	g_glGetMultisamplefv = p;
	unsigned char missing = (p == 0);

	p = proc("glSampleMaski");
	g_glSampleMaski = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexImage2DMultisample");
	g_glTexImage2DMultisample = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexImage3DMultisample");
	g_glTexImage3DMultisample = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBeginQueryIndexed;
extern void* g_glDrawTransformFeedbackStream;
extern void* g_glEndQueryIndexed;
extern void* g_glGetQueryIndexediv;

// FUNCTION: ROBLOXSTUDIO 0x005f7280
bool VertexLayout::initARBTransformFeedback2()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBeginQueryIndexed");
	g_glBeginQueryIndexed = p;
	unsigned char missing = (p == 0);

	p = proc("glDrawTransformFeedbackStream");
	g_glDrawTransformFeedbackStream = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glEndQueryIndexed");
	g_glEndQueryIndexed = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetQueryIndexediv");
	g_glGetQueryIndexediv = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBindVertexArray;
extern void* g_glDeleteVertexArrays;
extern void* g_glGenVertexArrays;
extern void* g_glIsVertexArray;

// FUNCTION: ROBLOXSTUDIO 0x005f7490
bool VertexLayout::initARBVertexArrayObject()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBindVertexArray");
	g_glBindVertexArray = p;
	unsigned char missing = (p == 0);

	p = proc("glDeleteVertexArrays");
	g_glDeleteVertexArrays = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenVertexArrays");
	g_glGenVertexArrays = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsVertexArray");
	g_glIsVertexArray = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glFramebufferTextureARB;
extern void* g_glFramebufferTextureFaceARB;
extern void* g_glFramebufferTextureLayerARB;
extern void* g_glProgramParameteriARB;

// FUNCTION: ROBLOXSTUDIO 0x005f52f0
bool VertexLayout::initARBGeometryShader4()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glFramebufferTextureARB");
	g_glFramebufferTextureARB = p;
	unsigned char missing = (p == 0);

	p = proc("glFramebufferTextureFaceARB");
	g_glFramebufferTextureFaceARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glFramebufferTextureLayerARB");
	g_glFramebufferTextureLayerARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glProgramParameteriARB");
	g_glProgramParameteriARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glLoadTransposeMatrixdARB;
extern void* g_glLoadTransposeMatrixfARB;
extern void* g_glMultTransposeMatrixdARB;
extern void* g_glMultTransposeMatrixfARB;

// FUNCTION: ROBLOXSTUDIO 0x005f7330
bool VertexLayout::initARBTransposeMatrix()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glLoadTransposeMatrixdARB");
	g_glLoadTransposeMatrixdARB = p;
	unsigned char missing = (p == 0);

	p = proc("glLoadTransposeMatrixfARB");
	g_glLoadTransposeMatrixfARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultTransposeMatrixdARB");
	g_glMultTransposeMatrixdARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultTransposeMatrixfARB");
	g_glMultTransposeMatrixfARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x005f8440
extern void* g_glGetTexBumpParameterfvATI;
extern void* g_glGetTexBumpParameterivATI;
extern void* g_glTexBumpParameterfvATI;
extern void* g_glTexBumpParameterivATI;

bool VertexLayout::initATITexBump()
{
	void* p = g_glGetProcAddress("glGetTexBumpParameterfvATI");
	g_glGetTexBumpParameterfvATI = p;
	unsigned char missing = (p == 0);

	p = g_glGetProcAddress("glGetTexBumpParameterivATI");
	g_glGetTexBumpParameterivATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = g_glGetProcAddress("glTexBumpParameterfvATI");
	g_glTexBumpParameterfvATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = g_glGetProcAddress("glTexBumpParameterivATI");
	g_glTexBumpParameterivATI = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glFramebufferTexture;
extern void* g_glGetBufferParameteri64v;
extern void* g_glGetInteger64i_v;

// FUNCTION: ROBLOXSTUDIO 0x005f4120
bool VertexLayout::initGL32()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glFramebufferTexture");
	g_glFramebufferTexture = p;
	unsigned char missing = (p == 0);

	p = proc("glGetBufferParameteri64v");
	g_glGetBufferParameteri64v = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetInteger64i_v");
	g_glGetInteger64i_v = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glInvalidateBufferData;
extern void* g_glInvalidateBufferSubData;
extern void* g_glInvalidateFramebuffer;
extern void* g_glInvalidateSubFramebuffer;
extern void* g_glInvalidateTexImage;
extern void* g_glInvalidateTexSubImage;

// FUNCTION: ROBLOXSTUDIO 0x005f5910
bool VertexLayout::initARBInvalidateSubdata()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glInvalidateBufferData");
	g_glInvalidateBufferData = p;
	unsigned char missing = (p == 0);

	p = proc("glInvalidateBufferSubData");
	g_glInvalidateBufferSubData = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glInvalidateFramebuffer");
	g_glInvalidateFramebuffer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glInvalidateSubFramebuffer");
	g_glInvalidateSubFramebuffer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glInvalidateTexImage");
	g_glInvalidateTexImage = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glInvalidateTexSubImage");
	g_glInvalidateTexSubImage = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glCopyTexImage1DEXT;
extern void* g_glCopyTexImage2DEXT;
extern void* g_glCopyTexSubImage1DEXT;
extern void* g_glCopyTexSubImage2DEXT;
extern void* g_glCopyTexSubImage3DEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f8ed0
bool VertexLayout::initEXTCopyTexture()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glCopyTexImage1DEXT");
	g_glCopyTexImage1DEXT = p;
	unsigned char missing = (p == 0);

	p = proc("glCopyTexImage2DEXT");
	g_glCopyTexImage2DEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glCopyTexSubImage1DEXT");
	g_glCopyTexSubImage1DEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glCopyTexSubImage2DEXT");
	g_glCopyTexSubImage2DEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glCopyTexSubImage3DEXT");
	g_glCopyTexSubImage3DEXT = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glDebugMessageCallbackARB;
extern void* g_glDebugMessageControlARB;
extern void* g_glDebugMessageInsertARB;
extern void* g_glGetDebugMessageLogARB;

// FUNCTION: ROBLOXSTUDIO 0x005f4f00
bool VertexLayout::initARBDebugOutput()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glDebugMessageCallbackARB");
	g_glDebugMessageCallbackARB = p;
	unsigned char missing = (p == 0);

	p = proc("glDebugMessageControlARB");
	g_glDebugMessageControlARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glDebugMessageInsertARB");
	g_glDebugMessageInsertARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetDebugMessageLogARB");
	g_glGetDebugMessageLogARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glDrawArraysInstancedARB;
extern void* g_glDrawElementsInstancedARB;
extern void* g_glVertexAttribDivisorARB;

// FUNCTION: ROBLOXSTUDIO 0x005f5880
bool VertexLayout::initARBInstancedArrays()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glDrawArraysInstancedARB");
	g_glDrawArraysInstancedARB = p;
	unsigned char missing = (p == 0);

	p = proc("glDrawElementsInstancedARB");
	g_glDrawElementsInstancedARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribDivisorARB");
	g_glVertexAttribDivisorARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBindBuffersBase;
extern void* g_glBindBuffersRange;
extern void* g_glBindImageTextures;
extern void* g_glBindSamplers;
extern void* g_glBindTextures;
extern void* g_glBindVertexBuffers;

// FUNCTION: ROBLOXSTUDIO 0x005f5a60
bool VertexLayout::initARBMultiBind()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBindBuffersBase");
	g_glBindBuffersBase = p;
	unsigned char missing = (p == 0);

	p = proc("glBindBuffersRange");
	g_glBindBuffersRange = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBindImageTextures");
	g_glBindImageTextures = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBindSamplers");
	g_glBindSamplers = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBindTextures");
	g_glBindTextures = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBindVertexBuffers");
	g_glBindVertexBuffers = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBlendEquationSeparatei;
extern void* g_glBlendEquationi;
extern void* g_glBlendFuncSeparatei;
extern void* g_glBlendFunci;
extern void* g_glMinSampleShading;

// FUNCTION: ROBLOXSTUDIO 0x005f4190
bool VertexLayout::initGL40()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBlendEquationSeparatei");
	g_glBlendEquationSeparatei = p;
	unsigned char missing = (p == 0);

	p = proc("glBlendEquationi");
	g_glBlendEquationi = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBlendFuncSeparatei");
	g_glBlendFuncSeparatei = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBlendFunci");
	g_glBlendFunci = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMinSampleShading");
	g_glMinSampleShading = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glCompileShaderIncludeARB;
extern void* g_glDeleteNamedStringARB;
extern void* g_glGetNamedStringARB;
extern void* g_glGetNamedStringivARB;
extern void* g_glIsNamedStringARB;
extern void* g_glNamedStringARB;

// FUNCTION: ROBLOXSTUDIO 0x005f6d20
bool VertexLayout::initARBShadingLanguageInclude()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glCompileShaderIncludeARB");
	g_glCompileShaderIncludeARB = p;
	unsigned char missing = (p == 0);

	p = proc("glDeleteNamedStringARB");
	g_glDeleteNamedStringARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetNamedStringARB");
	g_glGetNamedStringARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetNamedStringivARB");
	g_glGetNamedStringivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsNamedStringARB");
	g_glIsNamedStringARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glNamedStringARB");
	g_glNamedStringARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glUniformMatrix2x3fv;
extern void* g_glUniformMatrix2x4fv;
extern void* g_glUniformMatrix3x2fv;
extern void* g_glUniformMatrix3x4fv;
extern void* g_glUniformMatrix4x2fv;
extern void* g_glUniformMatrix4x3fv;

// FUNCTION: ROBLOXSTUDIO 0x005f3b50
bool VertexLayout::initGL21()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glUniformMatrix2x3fv");
	g_glUniformMatrix2x3fv = p;
	unsigned char missing = (p == 0);

	p = proc("glUniformMatrix2x4fv");
	g_glUniformMatrix2x4fv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix3x2fv");
	g_glUniformMatrix3x2fv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix3x4fv");
	g_glUniformMatrix3x4fv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix4x2fv");
	g_glUniformMatrix4x2fv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix4x3fv");
	g_glUniformMatrix4x3fv = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glDispatchCompute;
extern void* g_glDispatchComputeIndirect;

// FUNCTION: ROBLOXSTUDIO 0x005f4e60
bool VertexLayout::initARBComputeShader()
{
	void* first = g_glGetProcAddress("glDispatchCompute");
	g_glDispatchCompute = first;
	unsigned char missing = (first == 0);

	void* second = g_glGetProcAddress("glDispatchComputeIndirect");
	g_glDispatchComputeIndirect = second;

	if (second == 0)
		return true;

	if (missing)
		return true;

	return false;
}

extern void* g_glDisableVertexAttribAPPLE;
extern void* g_glEnableVertexAttribAPPLE;
extern void* g_glIsVertexAttribEnabledAPPLE;
extern void* g_glMapVertexAttrib1dAPPLE;
extern void* g_glMapVertexAttrib1fAPPLE;
extern void* g_glMapVertexAttrib2dAPPLE;
extern void* g_glMapVertexAttrib2fAPPLE;

// FUNCTION: ROBLOXSTUDIO 0x005f4a00
bool VertexLayout::initAppleVertexProgramEvaluators()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glDisableVertexAttribAPPLE");
	g_glDisableVertexAttribAPPLE = p;
	unsigned char missing = (p == 0);

	p = proc("glEnableVertexAttribAPPLE");
	g_glEnableVertexAttribAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsVertexAttribEnabledAPPLE");
	g_glIsVertexAttribEnabledAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMapVertexAttrib1dAPPLE");
	g_glMapVertexAttrib1dAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMapVertexAttrib1fAPPLE");
	g_glMapVertexAttrib1fAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMapVertexAttrib2dAPPLE");
	g_glMapVertexAttrib2dAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMapVertexAttrib2fAPPLE");
	g_glMapVertexAttrib2fAPPLE = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glClientWaitSync;
extern void* g_glDeleteSync;
extern void* g_glFenceSync;
extern void* g_glGetInteger64v;
extern void* g_glGetSynciv;
extern void* g_glIsSync;
extern void* g_glWaitSync;

// FUNCTION: ROBLOXSTUDIO 0x005f6df0
bool VertexLayout::initARBSync()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glClientWaitSync");
	g_glClientWaitSync = p;
	unsigned char missing = (p == 0);

	p = proc("glDeleteSync");
	g_glDeleteSync = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glFenceSync");
	g_glFenceSync = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetInteger64v");
	g_glGetInteger64v = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetSynciv");
	g_glGetSynciv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsSync");
	g_glIsSync = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glWaitSync");
	g_glWaitSync = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glDeleteFencesAPPLE;
extern void* g_glFinishFenceAPPLE;
extern void* g_glFinishObjectAPPLE;
extern void* g_glGenFencesAPPLE;
extern void* g_glIsFenceAPPLE;
extern void* g_glSetFenceAPPLE;
extern void* g_glTestFenceAPPLE;
extern void* g_glTestObjectAPPLE;

// FUNCTION: ROBLOXSTUDIO 0x005f47b0
bool VertexLayout::initAppleFence()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glDeleteFencesAPPLE");
	g_glDeleteFencesAPPLE = p;
	unsigned char missing = (p == 0);

	p = proc("glFinishFenceAPPLE");
	g_glFinishFenceAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glFinishObjectAPPLE");
	g_glFinishObjectAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenFencesAPPLE");
	g_glGenFencesAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsFenceAPPLE");
	g_glIsFenceAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSetFenceAPPLE");
	g_glSetFenceAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTestFenceAPPLE");
	g_glTestFenceAPPLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTestObjectAPPLE");
	g_glTestObjectAPPLE = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glTexStorage1D;
extern void* g_glTexStorage2D;
extern void* g_glTexStorage3D;
extern void* g_glTextureStorage1DEXT;
extern void* g_glTextureStorage2DEXT;
extern void* g_glTextureStorage3DEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f7060
bool VertexLayout::initARBTextureStorage()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glTexStorage1D");
	g_glTexStorage1D = p;
	unsigned char missing = (p == 0);

	p = proc("glTexStorage2D");
	g_glTexStorage2D = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexStorage3D");
	g_glTexStorage3D = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTextureStorage1DEXT");
	g_glTextureStorage1DEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTextureStorage2DEXT");
	g_glTextureStorage2DEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTextureStorage3DEXT");
	g_glTextureStorage3DEXT = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glClearDepthf;
extern void* g_glDepthRangef;
extern void* g_glGetShaderPrecisionFormat;
extern void* g_glReleaseShaderCompiler;
extern void* g_glShaderBinary;

// FUNCTION: ROBLOXSTUDIO 0x005f4ab0
bool VertexLayout::initARBES2Compatibility()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glClearDepthf");
	g_glClearDepthf = p;
	unsigned char missing = (p == 0);

	p = proc("glDepthRangef");
	g_glDepthRangef = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetShaderPrecisionFormat");
	g_glGetShaderPrecisionFormat = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glReleaseShaderCompiler");
	g_glReleaseShaderCompiler = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glShaderBinary");
	g_glShaderBinary = p;
	if (p == 0 || missing)
		return true;

	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x005f59e0
extern void* g_glCurrentPaletteMatrixARB;
extern void* g_glMatrixIndexPointerARB;
extern void* g_glMatrixIndexubvARB;
extern void* g_glMatrixIndexuivARB;
extern void* g_glMatrixIndexusvARB;

bool VertexLayout::initARBMatrixPalette()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glCurrentPaletteMatrixARB");
	g_glCurrentPaletteMatrixARB = p;
	unsigned char bl = (p == 0);

	p = proc("glMatrixIndexPointerARB");
	g_glMatrixIndexPointerARB = p;
	if (p == 0 || bl)
		bl = 1;

	p = proc("glMatrixIndexubvARB");
	g_glMatrixIndexubvARB = p;
	if (p == 0 || bl)
		bl = 1;

	p = proc("glMatrixIndexuivARB");
	g_glMatrixIndexuivARB = p;
	if (p == 0 || bl)
		bl = 1;

	p = proc("glMatrixIndexusvARB");
	g_glMatrixIndexusvARB = p;
	if (p == 0 || bl)
		return true;

	return false;
}

extern void* g_glBlendEquationIndexedAMD;
extern void* g_glBlendEquationSeparateIndexedAMD;
extern void* g_glBlendFuncIndexedAMD;
extern void* g_glBlendFuncSeparateIndexedAMD;

// FUNCTION: ROBLOXSTUDIO 0x005f42a0
bool VertexLayout::initAMDDrawBuffersBlend()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBlendEquationIndexedAMD");
	g_glBlendEquationIndexedAMD = p;
	unsigned char missing = (p == 0);

	p = proc("glBlendEquationSeparateIndexedAMD");
	g_glBlendEquationSeparateIndexedAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBlendFuncIndexedAMD");
	g_glBlendFuncIndexedAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBlendFuncSeparateIndexedAMD");
	g_glBlendFuncSeparateIndexedAMD = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glInsertEventMarkerEXT;
extern void* g_glPopGroupMarkerEXT;
extern void* g_glPushGroupMarkerEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f8f90
bool VertexLayout::initEXTDebugMarker()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glInsertEventMarkerEXT");
	g_glInsertEventMarkerEXT = p;
	unsigned char missing = (p == 0);

	p = proc("glPopGroupMarkerEXT");
	g_glPopGroupMarkerEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glPushGroupMarkerEXT");
	g_glPushGroupMarkerEXT = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glTessellationFactorAMD;
extern void* g_glTessellationModeAMD;

// FUNCTION: ROBLOXSTUDIO 0x005f4540
bool VertexLayout::initAMDVertexShaderTessellator()
{
	void* p = g_glGetProcAddress("glTessellationFactorAMD");
	g_glTessellationFactorAMD = p;
	unsigned char missing = (p == 0);

	p = g_glGetProcAddress("glTessellationModeAMD");
	g_glTessellationModeAMD = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glTexStorage2DMultisample;
extern void* g_glTexStorage3DMultisample;
extern void* g_glTextureStorage2DMultisampleEXT;
extern void* g_glTextureStorage3DMultisampleEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f70f0
bool VertexLayout::initARBTextureStorageMultisample()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glTexStorage2DMultisample");
	g_glTexStorage2DMultisample = p;
	unsigned char missing = (p == 0);

	p = proc("glTexStorage3DMultisample");
	g_glTexStorage3DMultisample = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTextureStorage2DMultisampleEXT");
	g_glTextureStorage2DMultisampleEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTextureStorage3DMultisampleEXT");
	g_glTextureStorage3DMultisampleEXT = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBindVertexBuffer;
extern void* g_glVertexAttribBinding;
extern void* g_glVertexAttribFormat;
extern void* g_glVertexAttribIFormat;
extern void* g_glVertexAttribLFormat;
extern void* g_glVertexBindingDivisor;

// FUNCTION: ROBLOXSTUDIO 0x005f75f0
bool VertexLayout::initARBVertexAttribBinding()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBindVertexBuffer");
	g_glBindVertexBuffer = p;
	unsigned char missing = (p == 0);

	p = proc("glVertexAttribBinding");
	g_glVertexAttribBinding = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribFormat");
	g_glVertexAttribFormat = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribIFormat");
	g_glVertexAttribIFormat = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribLFormat");
	g_glVertexAttribLFormat = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexBindingDivisor");
	g_glVertexBindingDivisor = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glCompressedTexImage1DARB;
extern void* g_glCompressedTexImage2DARB;
extern void* g_glCompressedTexImage3DARB;
extern void* g_glCompressedTexSubImage1DARB;
extern void* g_glCompressedTexSubImage2DARB;
extern void* g_glCompressedTexSubImage3DARB;
extern void* g_glGetCompressedTexImageARB;

// FUNCTION: ROBLOXSTUDIO 0x005f6f40
bool VertexLayout::initARBTextureCompression()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glCompressedTexImage1DARB");
	g_glCompressedTexImage1DARB = p;
	unsigned char missing = (p == 0);

	p = proc("glCompressedTexImage2DARB");
	g_glCompressedTexImage2DARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glCompressedTexImage3DARB");
	g_glCompressedTexImage3DARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glCompressedTexSubImage1DARB");
	g_glCompressedTexSubImage1DARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glCompressedTexSubImage2DARB");
	g_glCompressedTexSubImage2DARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glCompressedTexSubImage3DARB");
	g_glCompressedTexSubImage3DARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetCompressedTexImageARB");
	g_glGetCompressedTexImageARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBindTransformFeedback;
extern void* g_glDeleteTransformFeedbacks;
extern void* g_glDrawTransformFeedback;
extern void* g_glGenTransformFeedbacks;
extern void* g_glIsTransformFeedback;
extern void* g_glPauseTransformFeedback;
extern void* g_glResumeTransformFeedback;

// FUNCTION: ROBLOXSTUDIO 0x005f71d0
bool VertexLayout::initARBTransformFeedback()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBindTransformFeedback");
	g_glBindTransformFeedback = p;
	unsigned char missing = (p == 0);

	p = proc("glDeleteTransformFeedbacks");
	g_glDeleteTransformFeedbacks = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glDrawTransformFeedback");
	g_glDrawTransformFeedback = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenTransformFeedbacks");
	g_glGenTransformFeedbacks = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsTransformFeedback");
	g_glIsTransformFeedback = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glPauseTransformFeedback");
	g_glPauseTransformFeedback = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glResumeTransformFeedback");
	g_glResumeTransformFeedback = p;
	if (p == 0 || missing)
		return true;

	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x005f5e50
extern void* g_glGenQueriesARB;
extern void* g_glDeleteQueriesARB;
extern void* g_glBeginQueryARB;
extern void* g_glEndQueryARB;
extern void* g_glGetQueryObjectivARB;
extern void* g_glGetQueryObjectuivARB;
extern void* g_glGetQueryivARB;
extern void* g_glIsQueryARB;

bool VertexLayout::initGLQueryObjectsARB()
{
    GetProcAddressFn proc = g_glGetProcAddress;
    void* p = proc("glGenQueriesARB");
    g_glGenQueriesARB = p;
    unsigned char missing = (p == 0);

    p = proc("glDeleteQueriesARB");
    g_glDeleteQueriesARB = p;
    if (p == 0 || missing)
        missing = 1;

    p = proc("glBeginQueryARB");
    g_glBeginQueryARB = p;
    if (p == 0 || missing)
        missing = 1;

    p = proc("glEndQueryARB");
    g_glEndQueryARB = p;
    if (p == 0 || missing)
        missing = 1;

    p = proc("glGetQueryObjectivARB");
    g_glGetQueryObjectivARB = p;
    if (p == 0 || missing)
        missing = 1;

    p = proc("glGetQueryObjectuivARB");
    g_glGetQueryObjectuivARB = p;
    if (p == 0 || missing)
        missing = 1;

    p = proc("glGetQueryivARB");
    g_glGetQueryivARB = p;
    if (p == 0 || missing)
        missing = 1;

    p = proc("glIsQueryARB");
    g_glIsQueryARB = p;
    if (p == 0 || missing)
        missing = 1;

    return (bool)missing;
}

extern void* g_glGetActiveSubroutineName;
extern void* g_glGetActiveSubroutineUniformName;
extern void* g_glGetActiveSubroutineUniformiv;
extern void* g_glGetProgramStageiv;
extern void* g_glGetSubroutineIndex;
extern void* g_glGetSubroutineUniformLocation;
extern void* g_glGetUniformSubroutineuiv;
extern void* g_glUniformSubroutinesuiv;

// FUNCTION: ROBLOXSTUDIO 0x005f6c60
bool VertexLayout::initARBShaderSubroutine()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glGetActiveSubroutineName");
	g_glGetActiveSubroutineName = p;
	unsigned char missing = (p == 0);

	p = proc("glGetActiveSubroutineUniformName");
	g_glGetActiveSubroutineUniformName = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetActiveSubroutineUniformiv");
	g_glGetActiveSubroutineUniformiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetProgramStageiv");
	g_glGetProgramStageiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetSubroutineIndex");
	g_glGetSubroutineIndex = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetSubroutineUniformLocation");
	g_glGetSubroutineUniformLocation = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetUniformSubroutineuiv");
	g_glGetUniformSubroutineuiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformSubroutinesuiv");
	g_glUniformSubroutinesuiv = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glGetUniformBufferSizeEXT;
extern void* g_glGetUniformOffsetEXT;
extern void* g_glUniformBufferEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f8c10
bool VertexLayout::initEXTBindableUniform()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glGetUniformBufferSizeEXT");
	g_glGetUniformBufferSizeEXT = p;
	unsigned char missing = (p == 0);

	p = proc("glGetUniformOffsetEXT");
	g_glGetUniformOffsetEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformBufferEXT");
	g_glUniformBufferEXT = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBindBufferBase;
extern void* g_glBindBufferRange;
extern void* g_glGetActiveUniformBlockName;
extern void* g_glGetActiveUniformBlockiv;
extern void* g_glGetActiveUniformName;
extern void* g_glGetActiveUniformsiv;
extern void* g_glGetIntegeri_v;
extern void* g_glGetUniformBlockIndex;
extern void* g_glGetUniformIndices;
extern void* g_glUniformBlockBinding;

// FUNCTION: ROBLOXSTUDIO 0x005f73a0
bool VertexLayout::initARBUniformBufferObject()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBindBufferBase");
	g_glBindBufferBase = p;
	unsigned char missing = (p == 0);

	p = proc("glBindBufferRange");
	g_glBindBufferRange = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetActiveUniformBlockName");
	g_glGetActiveUniformBlockName = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetActiveUniformBlockiv");
	g_glGetActiveUniformBlockiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetActiveUniformName");
	g_glGetActiveUniformName = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetActiveUniformsiv");
	g_glGetActiveUniformsiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetIntegeri_v");
	g_glGetIntegeri_v = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetUniformBlockIndex");
	g_glGetUniformBlockIndex = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetUniformIndices");
	g_glGetUniformIndices = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformBlockBinding");
	g_glUniformBlockBinding = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glGetVertexAttribLdv;
extern void* g_glVertexAttribL1d;
extern void* g_glVertexAttribL1dv;
extern void* g_glVertexAttribL2d;
extern void* g_glVertexAttribL2dv;
extern void* g_glVertexAttribL3d;
extern void* g_glVertexAttribL3dv;
extern void* g_glVertexAttribL4d;
extern void* g_glVertexAttribL4dv;
extern void* g_glVertexAttribLPointer;

// FUNCTION: ROBLOXSTUDIO 0x005f7500
bool VertexLayout::initARBVertexAttrib64bit()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glGetVertexAttribLdv");
	g_glGetVertexAttribLdv = p;
	unsigned char missing = (p == 0);

	p = proc("glVertexAttribL1d");
	g_glVertexAttribL1d = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribL1dv");
	g_glVertexAttribL1dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribL2d");
	g_glVertexAttribL2d = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribL2dv");
	g_glVertexAttribL2dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribL3d");
	g_glVertexAttribL3d = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribL3dv");
	g_glVertexAttribL3dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribL4d");
	g_glVertexAttribL4d = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribL4dv");
	g_glVertexAttribL4dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribLPointer");
	g_glVertexAttribLPointer = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glVertexBlendARB;
extern void* g_glWeightPointerARB;
extern void* g_glWeightbvARB;
extern void* g_glWeightdvARB;
extern void* g_glWeightfvARB;
extern void* g_glWeightivARB;
extern void* g_glWeightsvARB;
extern void* g_glWeightubvARB;
extern void* g_glWeightuivARB;
extern void* g_glWeightusvARB;

// FUNCTION: ROBLOXSTUDIO 0x005f7680
bool VertexLayout::initARBVertexBlend()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glVertexBlendARB");
	g_glVertexBlendARB = p;
	unsigned char missing = (p == 0);

	p = proc("glWeightPointerARB");
	g_glWeightPointerARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glWeightbvARB");
	g_glWeightbvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glWeightdvARB");
	g_glWeightdvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glWeightfvARB");
	g_glWeightfvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glWeightivARB");
	g_glWeightivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glWeightsvARB");
	g_glWeightsvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glWeightubvARB");
	g_glWeightubvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glWeightuivARB");
	g_glWeightuivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glWeightusvARB");
	g_glWeightusvARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glDepthRangeArrayv;
extern void* g_glDepthRangeIndexed;
extern void* g_glGetDoublei_v;
extern void* g_glGetFloati_v;
extern void* g_glScissorArrayv;
extern void* g_glScissorIndexed;
extern void* g_glScissorIndexedv;
extern void* g_glViewportArrayv;
extern void* g_glViewportIndexedf;
extern void* g_glViewportIndexedfv;

// FUNCTION: ROBLOXSTUDIO 0x005f8170
bool VertexLayout::initARBViewportArray()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glDepthRangeArrayv");
	g_glDepthRangeArrayv = p;
	unsigned char missing = (p == 0);

	p = proc("glDepthRangeIndexed");
	g_glDepthRangeIndexed = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetDoublei_v");
	g_glGetDoublei_v = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetFloati_v");
	g_glGetFloati_v = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glScissorArrayv");
	g_glScissorArrayv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glScissorIndexed");
	g_glScissorIndexed = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glScissorIndexedv");
	g_glScissorIndexedv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glViewportArrayv");
	g_glViewportArrayv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glViewportIndexedf");
	g_glViewportIndexedf = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glViewportIndexedfv");
	g_glViewportIndexedfv = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBindBufferARB;
extern void* g_glBufferDataARB;
extern void* g_glBufferSubDataARB;
extern void* g_glDeleteBuffersARB;
extern void* g_glGenBuffersARB;
extern void* g_glGetBufferParameterivARB;
extern void* g_glGetBufferPointervARB;
extern void* g_glGetBufferSubDataARB;
extern void* g_glIsBufferARB;
extern void* g_glMapBufferARB;
extern void* g_glUnmapBufferARB;

// FUNCTION: ROBLOXSTUDIO 0x005f7770
bool VertexLayout::initARBVertexBufferObject()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBindBufferARB");
	g_glBindBufferARB = p;
	unsigned char missing = (p == 0);

	p = proc("glBufferDataARB");
	g_glBufferDataARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBufferSubDataARB");
	g_glBufferSubDataARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glDeleteBuffersARB");
	g_glDeleteBuffersARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenBuffersARB");
	g_glGenBuffersARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetBufferParameterivARB");
	g_glGetBufferParameterivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetBufferPointervARB");
	g_glGetBufferPointervARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetBufferSubDataARB");
	g_glGetBufferSubDataARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsBufferARB");
	g_glIsBufferARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMapBufferARB");
	g_glMapBufferARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUnmapBufferARB");
	g_glUnmapBufferARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x005f43c0
extern void* g_glBeginPerfMonitorAMD;
extern void* g_glDeletePerfMonitorsAMD;
extern void* g_glEndPerfMonitorAMD;
extern void* g_glGenPerfMonitorsAMD;
extern void* g_glGetPerfMonitorCounterDataAMD;
extern void* g_glGetPerfMonitorCounterInfoAMD;
extern void* g_glGetPerfMonitorCounterStringAMD;
extern void* g_glGetPerfMonitorCountersAMD;
extern void* g_glGetPerfMonitorGroupStringAMD;
extern void* g_glGetPerfMonitorGroupsAMD;
extern void* g_glSelectPerfMonitorCountersAMD;

bool VertexLayout::initAMDPerformanceMonitor()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBeginPerfMonitorAMD");
	g_glBeginPerfMonitorAMD = p;
	unsigned char missing = (p == 0);

	p = proc("glDeletePerfMonitorsAMD");
	g_glDeletePerfMonitorsAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glEndPerfMonitorAMD");
	g_glEndPerfMonitorAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenPerfMonitorsAMD");
	g_glGenPerfMonitorsAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetPerfMonitorCounterDataAMD");
	g_glGetPerfMonitorCounterDataAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetPerfMonitorCounterInfoAMD");
	g_glGetPerfMonitorCounterInfoAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetPerfMonitorCounterStringAMD");
	g_glGetPerfMonitorCounterStringAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetPerfMonitorCountersAMD");
	g_glGetPerfMonitorCountersAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetPerfMonitorGroupStringAMD");
	g_glGetPerfMonitorGroupStringAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetPerfMonitorGroupsAMD");
	g_glGetPerfMonitorGroupsAMD = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSelectPerfMonitorCountersAMD");
	g_glSelectPerfMonitorCountersAMD = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBeginQueryANGLE;
extern void* g_glDeleteQueriesANGLE;
extern void* g_glEndQueryANGLE;
extern void* g_glGenQueriesANGLE;
extern void* g_glGetQueryObjecti64vANGLE;
extern void* g_glGetQueryObjectivANGLE;
extern void* g_glGetQueryObjectui64vANGLE;
extern void* g_glGetQueryObjectuivANGLE;
extern void* g_glGetQueryivANGLE;
extern void* g_glIsQueryANGLE;
extern void* g_glQueryCounterANGLE;

// FUNCTION: ROBLOXSTUDIO 0x005f4610
bool VertexLayout::initANGLETimerQuery()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBeginQueryANGLE");
	g_glBeginQueryANGLE = p;
	unsigned char missing = (p == 0);

	p = proc("glDeleteQueriesANGLE");
	g_glDeleteQueriesANGLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glEndQueryANGLE");
	g_glEndQueryANGLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenQueriesANGLE");
	g_glGenQueriesANGLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetQueryObjecti64vANGLE");
	g_glGetQueryObjecti64vANGLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetQueryObjectivANGLE");
	g_glGetQueryObjectivANGLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetQueryObjectui64vANGLE");
	g_glGetQueryObjectui64vANGLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetQueryObjectuivANGLE");
	g_glGetQueryObjectuivANGLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetQueryivANGLE");
	g_glGetQueryivANGLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsQueryANGLE");
	g_glIsQueryANGLE = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glQueryCounterANGLE");
	g_glQueryCounterANGLE = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glConvolutionFilter1DEXT;
extern void* g_glConvolutionFilter2DEXT;
extern void* g_glConvolutionParameterfEXT;
extern void* g_glConvolutionParameterfvEXT;
extern void* g_glConvolutionParameteriEXT;
extern void* g_glConvolutionParameterivEXT;
extern void* g_glCopyConvolutionFilter1DEXT;
extern void* g_glCopyConvolutionFilter2DEXT;
extern void* g_glGetConvolutionFilterEXT;
extern void* g_glGetConvolutionParameterfvEXT;
extern void* g_glGetConvolutionParameterivEXT;
extern void* g_glGetSeparableFilterEXT;
extern void* g_glSeparableFilter2DEXT;

// FUNCTION: ROBLOXSTUDIO 0x005f8d60
bool VertexLayout::initEXTConvolution()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glConvolutionFilter1DEXT");
	g_glConvolutionFilter1DEXT = p;
	unsigned char missing = (p == 0);

	p = proc("glConvolutionFilter2DEXT");
	g_glConvolutionFilter2DEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glConvolutionParameterfEXT");
	g_glConvolutionParameterfEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glConvolutionParameterfvEXT");
	g_glConvolutionParameterfvEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glConvolutionParameteriEXT");
	g_glConvolutionParameteriEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glConvolutionParameterivEXT");
	g_glConvolutionParameterivEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glCopyConvolutionFilter1DEXT");
	g_glCopyConvolutionFilter1DEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glCopyConvolutionFilter2DEXT");
	g_glCopyConvolutionFilter2DEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetConvolutionFilterEXT");
	g_glGetConvolutionFilterEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetConvolutionParameterfvEXT");
	g_glGetConvolutionParameterfvEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetConvolutionParameterivEXT");
	g_glGetConvolutionParameterivEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetSeparableFilterEXT");
	g_glGetSeparableFilterEXT = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSeparableFilter2DEXT");
	g_glSeparableFilter2DEXT = p;
	if (p == 0 || missing)
		return true;

	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x005f61f0
extern void* g_glBindSampler;
extern void* g_glDeleteSamplers;
extern void* g_glGenSamplers;
extern void* g_glGetSamplerParameterIiv;
extern void* g_glGetSamplerParameterIuiv;
extern void* g_glGetSamplerParameterfv;
extern void* g_glGetSamplerParameteriv;
extern void* g_glIsSampler;
extern void* g_glSamplerParameterIiv;
extern void* g_glSamplerParameterIuiv;
extern void* g_glSamplerParameterf;
extern void* g_glSamplerParameterfv;
extern void* g_glSamplerParameteri;
extern void* g_glSamplerParameteriv;

bool VertexLayout::initARBSamplerObjects()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBindSampler");
	g_glBindSampler = p;
	unsigned char missing = (p == 0);

	p = proc("glDeleteSamplers");
	g_glDeleteSamplers = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenSamplers");
	g_glGenSamplers = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetSamplerParameterIiv");
	g_glGetSamplerParameterIiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetSamplerParameterIuiv");
	g_glGetSamplerParameterIuiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetSamplerParameterfv");
	g_glGetSamplerParameterfv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetSamplerParameteriv");
	g_glGetSamplerParameteriv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsSampler");
	g_glIsSampler = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSamplerParameterIiv");
	g_glSamplerParameterIiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSamplerParameterIuiv");
	g_glSamplerParameterIuiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSamplerParameterf");
	g_glSamplerParameterf = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSamplerParameterfv");
	g_glSamplerParameterfv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSamplerParameteri");
	g_glSamplerParameteri = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSamplerParameteriv");
	g_glSamplerParameteriv = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glAlphaFragmentOp1ATI;
extern void* g_glAlphaFragmentOp2ATI;
extern void* g_glAlphaFragmentOp3ATI;
extern void* g_glBeginFragmentShaderATI;
extern void* g_glBindFragmentShaderATI;
extern void* g_glColorFragmentOp1ATI;
extern void* g_glColorFragmentOp2ATI;
extern void* g_glColorFragmentOp3ATI;
extern void* g_glDeleteFragmentShaderATI;
extern void* g_glEndFragmentShaderATI;
extern void* g_glGenFragmentShadersATI;
extern void* g_glPassTexCoordATI;
extern void* g_glSampleMapATI;
extern void* g_glSetFragmentShaderConstantATI;

// FUNCTION: ROBLOXSTUDIO 0x005f84b0
bool VertexLayout::initATIFragmentShader()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glAlphaFragmentOp1ATI");
	g_glAlphaFragmentOp1ATI = p;
	unsigned char missing = (p == 0);

	p = proc("glAlphaFragmentOp2ATI");
	g_glAlphaFragmentOp2ATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glAlphaFragmentOp3ATI");
	g_glAlphaFragmentOp3ATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBeginFragmentShaderATI");
	g_glBeginFragmentShaderATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBindFragmentShaderATI");
	g_glBindFragmentShaderATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glColorFragmentOp1ATI");
	g_glColorFragmentOp1ATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glColorFragmentOp2ATI");
	g_glColorFragmentOp2ATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glColorFragmentOp3ATI");
	g_glColorFragmentOp3ATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glDeleteFragmentShaderATI");
	g_glDeleteFragmentShaderATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glEndFragmentShaderATI");
	g_glEndFragmentShaderATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenFragmentShadersATI");
	g_glGenFragmentShadersATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glPassTexCoordATI");
	g_glPassTexCoordATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSampleMapATI");
	g_glSampleMapATI = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSetFragmentShaderConstantATI");
	g_glSetFragmentShaderConstantATI = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glGetImageHandleARB;
extern void* g_glGetTextureHandleARB;
extern void* g_glGetTextureSamplerHandleARB;
extern void* g_glGetVertexAttribLui64vARB;
extern void* g_glIsImageHandleResidentARB;
extern void* g_glIsTextureHandleResidentARB;
extern void* g_glMakeImageHandleNonResidentARB;
extern void* g_glMakeImageHandleResidentARB;
extern void* g_glMakeTextureHandleNonResidentARB;
extern void* g_glMakeTextureHandleResidentARB;
extern void* g_glProgramUniformHandleui64ARB;
extern void* g_glProgramUniformHandleui64vARB;
extern void* g_glUniformHandleui64ARB;
extern void* g_glUniformHandleui64vARB;
extern void* g_glVertexAttribL1ui64ARB;
extern void* g_glVertexAttribL1ui64vARB;

// FUNCTION: ROBLOXSTUDIO 0x005f4b80
bool VertexLayout::initARBBindlessTexture()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glGetImageHandleARB");
	g_glGetImageHandleARB = p;
	unsigned char missing = (p == 0);

	p = proc("glGetTextureHandleARB");
	g_glGetTextureHandleARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetTextureSamplerHandleARB");
	g_glGetTextureSamplerHandleARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetVertexAttribLui64vARB");
	g_glGetVertexAttribLui64vARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsImageHandleResidentARB");
	g_glIsImageHandleResidentARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsTextureHandleResidentARB");
	g_glIsTextureHandleResidentARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMakeImageHandleNonResidentARB");
	g_glMakeImageHandleNonResidentARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMakeImageHandleResidentARB");
	g_glMakeImageHandleResidentARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMakeTextureHandleNonResidentARB");
	g_glMakeTextureHandleNonResidentARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMakeTextureHandleResidentARB");
	g_glMakeTextureHandleResidentARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glProgramUniformHandleui64ARB");
	g_glProgramUniformHandleui64ARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glProgramUniformHandleui64vARB");
	g_glProgramUniformHandleui64vARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformHandleui64ARB");
	g_glUniformHandleui64ARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformHandleui64vARB");
	g_glUniformHandleui64vARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribL1ui64ARB");
	g_glVertexAttribL1ui64ARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribL1ui64vARB");
	g_glVertexAttribL1ui64vARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x005f8260
bool VertexLayout::initARBWindowPos()
{
    GetProcAddressFn proc = g_glGetProcAddress;
    unsigned char missing = (proc("glWindowPos2dARB") == 0);

    void* p = proc("glWindowPos2dvARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos2fARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos2fvARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos2iARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos2ivARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos2sARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos2svARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos3dARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos3dvARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos3fARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos3fvARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos3iARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos3ivARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos3sARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glWindowPos3svARB");
    if (p == 0 || missing)
        missing = 1;

    p = proc("glDrawBuffersATI");
    if (p == 0 || missing)
        missing = 1;

    return (bool)missing;
}

extern void* g_glGetUniformdv;
extern void* g_glUniform1d;
extern void* g_glUniform1dv;
extern void* g_glUniform2d;
extern void* g_glUniform2dv;
extern void* g_glUniform3d;
extern void* g_glUniform3dv;
extern void* g_glUniform4d;
extern void* g_glUniform4dv;
extern void* g_glUniformMatrix2dv;
extern void* g_glUniformMatrix2x3dv;
extern void* g_glUniformMatrix2x4dv;
extern void* g_glUniformMatrix3dv;
extern void* g_glUniformMatrix3x2dv;
extern void* g_glUniformMatrix3x4dv;
extern void* g_glUniformMatrix4dv;
extern void* g_glUniformMatrix4x2dv;
extern void* g_glUniformMatrix4x3dv;

// FUNCTION: ROBLOXSTUDIO 0x005f53b0
bool VertexLayout::initARBGPUShaderFP64()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glGetUniformdv");
	g_glGetUniformdv = p;
	unsigned char missing = (p == 0);

	p = proc("glUniform1d");
	g_glUniform1d = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniform1dv");
	g_glUniform1dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniform2d");
	g_glUniform2d = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniform2dv");
	g_glUniform2dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniform3d");
	g_glUniform3d = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniform3dv");
	g_glUniform3dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniform4d");
	g_glUniform4d = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniform4dv");
	g_glUniform4dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix2dv");
	g_glUniformMatrix2dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix2x3dv");
	g_glUniformMatrix2x3dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix2x4dv");
	g_glUniformMatrix2x4dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix3dv");
	g_glUniformMatrix3dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix3x2dv");
	g_glUniformMatrix3x2dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix3x4dv");
	g_glUniformMatrix3x4dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix4dv");
	g_glUniformMatrix4dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix4x2dv");
	g_glUniformMatrix4x2dv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUniformMatrix4x3dv");
	g_glUniformMatrix4x3dv = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBeginQuery;
extern void* g_glBindBuffer;
extern void* g_glBufferData;
extern void* g_glBufferSubData;
extern void* g_glDeleteBuffers;
extern void* g_glDeleteQueries;
extern void* g_glEndQuery;
extern void* g_glGenBuffers;
extern void* g_glGenQueries;
extern void* g_glGetBufferParameteriv;
extern void* g_glGetBufferPointerv;
extern void* g_glGetBufferSubData;
extern void* g_glGetQueryObjectiv;
extern void* g_glGetQueryObjectuiv;
extern void* g_glGetQueryiv;
extern void* g_glIsBuffer;
extern void* g_glIsQuery;
extern void* g_glMapBuffer;
extern void* g_glUnmapBuffer;

// FUNCTION: ROBLOXSTUDIO 0x005f3190
bool VertexLayout::initGL15()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBeginQuery");
	g_glBeginQuery = p;
	unsigned char missing = (p == 0);

	p = proc("glBindBuffer");
	g_glBindBuffer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBufferData");
	g_glBufferData = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBufferSubData");
	g_glBufferSubData = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glDeleteBuffers");
	g_glDeleteBuffers = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glDeleteQueries");
	g_glDeleteQueries = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glEndQuery");
	g_glEndQuery = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenBuffers");
	g_glGenBuffers = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenQueries");
	g_glGenQueries = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetBufferParameteriv");
	g_glGetBufferParameteriv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetBufferPointerv");
	g_glGetBufferPointerv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetBufferSubData");
	g_glGetBufferSubData = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetQueryObjectiv");
	g_glGetQueryObjectiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetQueryObjectuiv");
	g_glGetQueryObjectuiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetQueryiv");
	g_glGetQueryiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsBuffer");
	g_glIsBuffer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsQuery");
	g_glIsQuery = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMapBuffer");
	g_glMapBuffer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glUnmapBuffer");
	g_glUnmapBuffer = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glBindFramebuffer;
extern void* g_glBindRenderbuffer;
extern void* g_glBlitFramebuffer;
extern void* g_glCheckFramebufferStatus;
extern void* g_glDeleteFramebuffers;
extern void* g_glDeleteRenderbuffers;
extern void* g_glFramebufferRenderbuffer;
extern void* g_glFramebufferTexture1D;
extern void* g_glFramebufferTexture2D;
extern void* g_glFramebufferTexture3D;
extern void* g_glFramebufferTextureLayer;
extern void* g_glGenFramebuffers;
extern void* g_glGenRenderbuffers;
extern void* g_glGenerateMipmap;
extern void* g_glGetFramebufferAttachmentParameteriv;
extern void* g_glGetRenderbufferParameteriv;
extern void* g_glIsFramebuffer;
extern void* g_glIsRenderbuffer;
extern void* g_glRenderbufferStorage;
extern void* g_glRenderbufferStorageMultisample;

// FUNCTION: ROBLOXSTUDIO 0x005f5120
bool VertexLayout::initGL30()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glBindFramebuffer");
	g_glBindFramebuffer = p;
	unsigned char missing = (p == 0);

	p = proc("glBindRenderbuffer");
	g_glBindRenderbuffer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glBlitFramebuffer");
	g_glBlitFramebuffer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glCheckFramebufferStatus");
	g_glCheckFramebufferStatus = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glDeleteFramebuffers");
	g_glDeleteFramebuffers = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glDeleteRenderbuffers");
	g_glDeleteRenderbuffers = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glFramebufferRenderbuffer");
	g_glFramebufferRenderbuffer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glFramebufferTexture1D");
	g_glFramebufferTexture1D = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glFramebufferTexture2D");
	g_glFramebufferTexture2D = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glFramebufferTexture3D");
	g_glFramebufferTexture3D = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glFramebufferTextureLayer");
	g_glFramebufferTextureLayer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenFramebuffers");
	g_glGenFramebuffers = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenRenderbuffers");
	g_glGenRenderbuffers = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGenerateMipmap");
	g_glGenerateMipmap = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetFramebufferAttachmentParameteriv");
	g_glGetFramebufferAttachmentParameteriv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetRenderbufferParameteriv");
	g_glGetRenderbufferParameteriv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsFramebuffer");
	g_glIsFramebuffer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glIsRenderbuffer");
	g_glIsRenderbuffer = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glRenderbufferStorage");
	g_glRenderbufferStorage = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glRenderbufferStorageMultisample");
	g_glRenderbufferStorageMultisample = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glGetGraphicsResetStatusARB;
extern void* g_glGetnColorTableARB;
extern void* g_glGetnCompressedTexImageARB;
extern void* g_glGetnConvolutionFilterARB;
extern void* g_glGetnHistogramARB;
extern void* g_glGetnMapdvARB;
extern void* g_glGetnMapfvARB;
extern void* g_glGetnMapivARB;
extern void* g_glGetnMinmaxARB;
extern void* g_glGetnPixelMapfvARB;
extern void* g_glGetnPixelMapuivARB;
extern void* g_glGetnPixelMapusvARB;
extern void* g_glGetnPolygonStippleARB;
extern void* g_glGetnSeparableFilterARB;
extern void* g_glGetnTexImageARB;
extern void* g_glGetnUniformdvARB;
extern void* g_glGetnUniformfvARB;
extern void* g_glGetnUniformivARB;
extern void* g_glGetnUniformuivARB;
extern void* g_glReadnPixelsARB;

// FUNCTION: ROBLOXSTUDIO 0x005f6000
bool VertexLayout::initARBRobustness()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glGetGraphicsResetStatusARB");
	g_glGetGraphicsResetStatusARB = p;
	unsigned char missing = (p == 0);

	p = proc("glGetnColorTableARB");
	g_glGetnColorTableARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnCompressedTexImageARB");
	g_glGetnCompressedTexImageARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnConvolutionFilterARB");
	g_glGetnConvolutionFilterARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnHistogramARB");
	g_glGetnHistogramARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnMapdvARB");
	g_glGetnMapdvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnMapfvARB");
	g_glGetnMapfvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnMapivARB");
	g_glGetnMapivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnMinmaxARB");
	g_glGetnMinmaxARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnPixelMapfvARB");
	g_glGetnPixelMapfvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnPixelMapuivARB");
	g_glGetnPixelMapuivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnPixelMapusvARB");
	g_glGetnPixelMapusvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnPolygonStippleARB");
	g_glGetnPolygonStippleARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnSeparableFilterARB");
	g_glGetnSeparableFilterARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnTexImageARB");
	g_glGetnTexImageARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnUniformdvARB");
	g_glGetnUniformdvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnUniformfvARB");
	g_glGetnUniformfvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnUniformivARB");
	g_glGetnUniformivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glGetnUniformuivARB");
	g_glGetnUniformuivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glReadnPixelsARB");
	g_glReadnPixelsARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glActiveTextureARB;
extern void* g_glClientActiveTextureARB;
extern void* g_glMultiTexCoord1dARB;
extern void* g_glMultiTexCoord1dvARB;
extern void* g_glMultiTexCoord1fARB;
extern void* g_glMultiTexCoord1fvARB;
extern void* g_glMultiTexCoord1iARB;
extern void* g_glMultiTexCoord1ivARB;
extern void* g_glMultiTexCoord1sARB;
extern void* g_glMultiTexCoord1svARB;
extern void* g_glMultiTexCoord2dARB;
extern void* g_glMultiTexCoord2dvARB;
extern void* g_glMultiTexCoord2fARB;
extern void* g_glMultiTexCoord2fvARB;
extern void* g_glMultiTexCoord2iARB;
extern void* g_glMultiTexCoord2ivARB;
extern void* g_glMultiTexCoord2sARB;
extern void* g_glMultiTexCoord2svARB;
extern void* g_glMultiTexCoord3dARB;
extern void* g_glMultiTexCoord3dvARB;
extern void* g_glMultiTexCoord3fARB;
extern void* g_glMultiTexCoord3fvARB;
extern void* g_glMultiTexCoord3iARB;
extern void* g_glMultiTexCoord3ivARB;
extern void* g_glMultiTexCoord3sARB;
extern void* g_glMultiTexCoord3svARB;
extern void* g_glMultiTexCoord4dARB;
extern void* g_glMultiTexCoord4dvARB;
extern void* g_glMultiTexCoord4fARB;
extern void* g_glMultiTexCoord4fvARB;
extern void* g_glMultiTexCoord4iARB;
extern void* g_glMultiTexCoord4ivARB;
extern void* g_glMultiTexCoord4sARB;
extern void* g_glMultiTexCoord4svARB;

// FUNCTION: ROBLOXSTUDIO 0x005f5b50
bool VertexLayout::initARBMultitexture()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glActiveTextureARB");
	g_glActiveTextureARB = p;
	unsigned char missing = (p == 0);

	p = proc("glClientActiveTextureARB");
	g_glClientActiveTextureARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord1dARB");
	g_glMultiTexCoord1dARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord1dvARB");
	g_glMultiTexCoord1dvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord1fARB");
	g_glMultiTexCoord1fARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord1fvARB");
	g_glMultiTexCoord1fvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord1iARB");
	g_glMultiTexCoord1iARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord1ivARB");
	g_glMultiTexCoord1ivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord1sARB");
	g_glMultiTexCoord1sARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord1svARB");
	g_glMultiTexCoord1svARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord2dARB");
	g_glMultiTexCoord2dARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord2dvARB");
	g_glMultiTexCoord2dvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord2fARB");
	g_glMultiTexCoord2fARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord2fvARB");
	g_glMultiTexCoord2fvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord2iARB");
	g_glMultiTexCoord2iARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord2ivARB");
	g_glMultiTexCoord2ivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord2sARB");
	g_glMultiTexCoord2sARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord2svARB");
	g_glMultiTexCoord2svARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord3dARB");
	g_glMultiTexCoord3dARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord3dvARB");
	g_glMultiTexCoord3dvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord3fARB");
	g_glMultiTexCoord3fARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord3fvARB");
	g_glMultiTexCoord3fvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord3iARB");
	g_glMultiTexCoord3iARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord3ivARB");
	g_glMultiTexCoord3ivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord3sARB");
	g_glMultiTexCoord3sARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord3svARB");
	g_glMultiTexCoord3svARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord4dARB");
	g_glMultiTexCoord4dARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord4dvARB");
	g_glMultiTexCoord4dvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord4fARB");
	g_glMultiTexCoord4fARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord4fvARB");
	g_glMultiTexCoord4fvARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord4iARB");
	g_glMultiTexCoord4iARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord4ivARB");
	g_glMultiTexCoord4ivARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord4sARB");
	g_glMultiTexCoord4sARB = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoord4svARB");
	g_glMultiTexCoord4svARB = p;
	if (p == 0 || missing)
		return true;

	return false;
}

extern void* g_glColorP3ui;
extern void* g_glColorP3uiv;
extern void* g_glColorP4ui;
extern void* g_glColorP4uiv;
extern void* g_glMultiTexCoordP1ui;
extern void* g_glMultiTexCoordP1uiv;
extern void* g_glMultiTexCoordP2ui;
extern void* g_glMultiTexCoordP2uiv;
extern void* g_glMultiTexCoordP3ui;
extern void* g_glMultiTexCoordP3uiv;
extern void* g_glMultiTexCoordP4ui;
extern void* g_glMultiTexCoordP4uiv;
extern void* g_glNormalP3ui;
extern void* g_glNormalP3uiv;
extern void* g_glSecondaryColorP3ui;
extern void* g_glSecondaryColorP3uiv;
extern void* g_glTexCoordP1ui;
extern void* g_glTexCoordP1uiv;
extern void* g_glTexCoordP2ui;
extern void* g_glTexCoordP2uiv;
extern void* g_glTexCoordP3ui;
extern void* g_glTexCoordP3uiv;
extern void* g_glTexCoordP4ui;
extern void* g_glTexCoordP4uiv;
extern void* g_glVertexAttribP1ui;
extern void* g_glVertexAttribP1uiv;
extern void* g_glVertexAttribP2ui;
extern void* g_glVertexAttribP2uiv;
extern void* g_glVertexAttribP3ui;
extern void* g_glVertexAttribP3uiv;
extern void* g_glVertexAttribP4ui;
extern void* g_glVertexAttribP4uiv;
extern void* g_glVertexP2ui;
extern void* g_glVertexP2uiv;
extern void* g_glVertexP3ui;
extern void* g_glVertexP3uiv;
extern void* g_glVertexP4ui;
extern void* g_glVertexP4uiv;

// FUNCTION: ROBLOXSTUDIO 0x005f7e20
bool VertexLayout::initARBVertexType2101010Rev()
{
	GetProcAddressFn proc = g_glGetProcAddress;

	void* p = proc("glColorP3ui");
	g_glColorP3ui = p;
	unsigned char missing = (p == 0);

	p = proc("glColorP3uiv");
	g_glColorP3uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glColorP4ui");
	g_glColorP4ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glColorP4uiv");
	g_glColorP4uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoordP1ui");
	g_glMultiTexCoordP1ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoordP1uiv");
	g_glMultiTexCoordP1uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoordP2ui");
	g_glMultiTexCoordP2ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoordP2uiv");
	g_glMultiTexCoordP2uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoordP3ui");
	g_glMultiTexCoordP3ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoordP3uiv");
	g_glMultiTexCoordP3uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoordP4ui");
	g_glMultiTexCoordP4ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glMultiTexCoordP4uiv");
	g_glMultiTexCoordP4uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glNormalP3ui");
	g_glNormalP3ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glNormalP3uiv");
	g_glNormalP3uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSecondaryColorP3ui");
	g_glSecondaryColorP3ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glSecondaryColorP3uiv");
	g_glSecondaryColorP3uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexCoordP1ui");
	g_glTexCoordP1ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexCoordP1uiv");
	g_glTexCoordP1uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexCoordP2ui");
	g_glTexCoordP2ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexCoordP2uiv");
	g_glTexCoordP2uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexCoordP3ui");
	g_glTexCoordP3ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexCoordP3uiv");
	g_glTexCoordP3uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexCoordP4ui");
	g_glTexCoordP4ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glTexCoordP4uiv");
	g_glTexCoordP4uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribP1ui");
	g_glVertexAttribP1ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribP1uiv");
	g_glVertexAttribP1uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribP2ui");
	g_glVertexAttribP2ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribP2uiv");
	g_glVertexAttribP2uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribP3ui");
	g_glVertexAttribP3ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribP3uiv");
	g_glVertexAttribP3uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribP4ui");
	g_glVertexAttribP4ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexAttribP4uiv");
	g_glVertexAttribP4uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexP2ui");
	g_glVertexP2ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexP2uiv");
	g_glVertexP2uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexP3ui");
	g_glVertexP3ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexP3uiv");
	g_glVertexP3uiv = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexP4ui");
	g_glVertexP4ui = p;
	if (p == 0 || missing)
		missing = 1;

	p = proc("glVertexP4uiv");
	g_glVertexP4uiv = p;
	if (p == 0 || missing)
		return true;

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
