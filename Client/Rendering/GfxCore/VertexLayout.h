#ifndef CLIENT_RENDERING_GFXCORE_VERTEXLAYOUT_H
#define CLIENT_RENDERING_GFXCORE_VERTEXLAYOUT_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

class VertexLayout
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	bool initAppleBufferExtensions();
	bool initAppleTextureExtensions();
	bool initGLBindFragDataLocationIndexed();
	bool initGLDrawIndirect();
	bool initGLMultiDrawIndirectCountARB();
	bool initGLMapBufferRange();
	bool initARBPointParameters();
	bool initGLShaderImageLoadStore();
	bool initARBSparseTexture();
	bool initTextureBufferRange();
	bool initGLDrawTransformFeedbackInstanced();
	bool initATIMapObjectBuffer();
	bool initATIPNTriangles();
	bool initATISeparateStencil();
	bool initEXTColorSubtable();
	bool initEXTCompiledVertexArray();
	bool initEXTCoordinateFrame();
	bool initEXTCullVertex();
	bool initAppleVertexArrayRange();
	bool initARBBaseInstance();
	bool initARBGetProgramBinary();
	bool initARBTimerQuery();
	bool initARBVertexShader();
	bool initATIDrawElementArray();
	bool initATIVertexArrayObject();
	bool initAMDSparseTexture();
	bool initARBBufferStorage();
	bool initARBClearTexture();
	bool initGLMultiDrawIndirect();
	bool initARBTessellationShader();
	bool initGL12();
	bool initGL31();
	bool initAMDDebugOutput();
	bool initAppleVertexArrayObject();
	bool initARBClearBufferObject();
	bool initARBDrawBuffersBlend();
	bool initARBDrawElementsBaseVertex();
	bool initARBFramebufferNoAttachments();
	bool initARBTextureMultisample();
	bool initARBTransformFeedback2();
	bool initARBVertexArrayObject();
	bool initARBGeometryShader4();
	bool initARBTransposeMatrix();
	bool initATITexBump();
	bool initGL32();
	bool initARBInvalidateSubdata();
	bool initEXTCopyTexture();
	bool initARBDebugOutput();
	bool initARBInstancedArrays();
	bool initARBMultiBind();
	bool initGL40();
	bool initARBShadingLanguageInclude();
	bool initGL21();
	bool initARBComputeShader();
	bool initAppleVertexProgramEvaluators();
	bool initARBSync();
	bool initAppleFence();
	bool initARBTextureStorage();
	bool initARBES2Compatibility();
	bool initARBMatrixPalette();
	bool initAMDDrawBuffersBlend();
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXCORE_VERTEXLAYOUT_H
