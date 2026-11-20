#ifndef CLIENT_RENDERING_GFXCORE_GL_CONTEXTGL_H
#define CLIENT_RENDERING_GFXCORE_GL_CONTEXTGL_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

// AUTO-GENERATED HELPERS

class ContextGL
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	static void assignIfNull(int* dst, const int* src);
	static void assignIfNull_59a0(int* dst, const int* src);
	static void assignIfNull_59c0(int* dst, const int* src);
	static void assignIfNull_59e0(int* dst, const int* src);
	static void assignIfNull_5a00(int* dst, const int* src);
	static void assignIfNull_5a20(int* dst, const int* src);
	static void assignIfNull_5a40(int* dst, const int* src);
	static void assignIfNull_5a60(int* dst, const int* src);
	static void assignIfNull_5a80(int* dst, const int* src);
	static void assignIfNull_5aa0(int* dst, const int* src);
	static void assignIfNull_5ac0(int* dst, const int* src);
	static void assignIfNull_5ae0(int* dst, const int* src);
	static void assignIfNull_5b00(int* dst, const int* src);
	static void assignIfNull_5b20(int* dst, const int* src);
	static void assignIfNull_5b40(int* dst, const int* src);
	static void assignIfNull_5b60(int* dst, const int* src);
	static void assignIfNull_5b80(int* dst, const int* src);
	static void assignIfNull_5ba0(int* dst, const int* src);
	static void assignIfNull_5bc0(int* dst, const int* src);
	static void assignIfNull_5be0(int* dst, const int* src);
	static void assignIfNull_5c00(int* dst, const int* src);
	static void assignIfNull_5c20(int* dst, const int* src);
	static void assignIfNull_5c40(int* dst, const int* src);
	static void assignIfNull_5c60(int* dst, const int* src);
	static void assignIfNull_5c80(int* dst, const int* src);
	static void assignIfNull_5ca0(int* dst, const int* src);
	static void assignIfNull_5cc0(int* dst, const int* src);
	static void assignIfNull_5ce0(int* dst, const int* src);
	static void assignIfNull_5d00(int* dst, const int* src);
	static void assignIfNull_5d20(int* dst, const int* src);
	static void assignIfNull_5d40(int* dst, const int* src);
	static void assignIfNull_5d60(int* dst, const int* src);
	static void assignIfNull_5d80(int* dst, const int* src);
	static void assignIfNull_5da0(int* dst, const int* src);
	static void assignIfNull_5dc0(int* dst, const int* src);
	static void assignIfNull_5de0(int* dst, const int* src);
	static void assignIfNull_5e00(int* dst, const int* src);
	static void assignIfNull_5e20(int* dst, const int* src);
	static void assignIfNull_5e40(int* dst, const int* src);
	static void assignIfNull_5e60(int* dst, const int* src);
	static void assignIfNull_5e80(int* dst, const int* src);
	static void assignIfNull_5ea0(int* dst, const int* src);
	static void assignIfNull_5ec0(int* dst, const int* src);
	static void assignIfNull_5ee0(int* dst, const int* src);
	static void assignIfNull_5f00(int* dst, const int* src);
	static void assignIfNull_5f20(int* dst, const int* src);
	static void assignIfNull_5f40(int* dst, const int* src);
	static void assignIfNull_5f60(int* dst, const int* src);
	static void assignIfNull_5f80(int* dst, const int* src);
	bool initMultiDraw();
	bool initTexScissorINTEL();
	bool initSampleMaskEXT();
	bool initMultiModeDrawIBM();
	bool initMultiDrawIndirectBindlessNV();
	bool initBlendBarrierNV();
	bool initPixelDataRangeNV();
	bool initPointParameterNV();
	bool initPrimitiveRestartNV();
	bool initDetailTexFuncSGIS();
	bool initFogFuncSGIS();
	bool initSampleMaskSGIS();
	bool initSharpenTexFuncSGIS();
	bool initTexture4DSGIS();
	bool initSceneMarkerEXT();
	bool initVertexArrayRangeNV();
	bool initTimerQueryEXT();
	bool initConditionalRenderNVX();
	bool initTexFilterFuncSGIS();
	bool initLightTextureEXT();
	bool initFramebufferTextureEXT();
	bool initMapTexture2DINTEL();
	bool initSeparateShaderObjectsEXT();
	bool initExplicitMultisampleNV();
	bool initRegisterCombiners2NV();
	bool initProgramBufferParametersNV();
	bool initDrawInstancedEXT();
	bool initColorTableEXT();
	bool initBindImageTextureAndMemoryBarrier();
	bool initConditionalRenderNV();
	bool initExtensionQueryREGAL();
	bool initParallelArraysINTEL();
	bool initGammaTableI3D();
	bool initImageBufferI3D();
	bool initFrameLockI3D();
	bool initFrameTrackingI3D();
	bool initDepthBufferFloatNV();
	bool initPointParameterEXT();
	bool initFogCoordEXT();
	bool initVideoCaptureNV();
	bool initSpriteParameterSGIX();
	bool initDrawBuffers2EXT();
	bool initPixelTransformEXT();
	bool initExtensions();
	bool initImageTransformHP();
	bool initVideoQueries();
	bool initTextureMultisampleNV();
	bool initSinglePrecisionOES();
	bool initVideoOutputNV();
	bool initSyncControlOML();
	bool initBufferRegionEXT();
	bool initTransformFeedbackEXT();
	bool initFenceNV();
	bool initOcclusionQueryNV();
	bool initTransformFeedbackNV();
	bool initReplacementCodeSUN();
	bool initTexSubImageEXT();
	bool initVertexWeightingEXT();
	bool initVertexArrayEXT();
	bool initVertexArrayListsIBM();
	bool initColorTableSGI();
	bool initDisplayColorTableEXT();
	bool initGpuAffinityNV();
	bool initEvaluatorsNV();
	bool initWGLAMDgpuAssociation();
	bool initGlobalAlphaFactorSUN();
	bool initDXInteropNV();
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXCORE_GL_CONTEXTGL_H
