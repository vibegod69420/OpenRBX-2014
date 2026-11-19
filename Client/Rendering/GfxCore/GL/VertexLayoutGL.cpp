#include "VertexLayoutGL.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

typedef void (__stdcall *GLGenBuffersProc)(int, unsigned int*);
typedef void (__stdcall *GLBindBufferProc)(unsigned int, unsigned int);
typedef void (__stdcall *GLBufferDataProc)(unsigned int, int, const void*, unsigned int);
typedef unsigned char (__cdecl *AssertCallbackProc)(const char*, const char*, int);

extern GLGenBuffersProc glGenBuffers_12DA264;
extern GLBindBufferProc glBindBuffer_12DA218;
extern GLBufferDataProc glBufferData_12DA228;
extern unsigned int gBufferUsageTable_E30F78[];
extern unsigned char gGraphicsDebugFlag_12DE657;
extern AssertCallbackProc gAssertCallback_12DE694;

void __cdecl GraphicsAssertReport_6B9740(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x0060aaf0
void VertexLayoutGL::upload()
{
	unsigned int* id = reinterpret_cast<unsigned int*>(this) + 14;

	glGenBuffers_12DA264(1, id);

	unsigned char flag = gGraphicsDebugFlag_12DE657;
	if (flag)
	{
		if (*id == 0)
		{
			if (gAssertCallback_12DE694)
			{
				if (gAssertCallback_12DE694(
						"id",
						"D:\\BuildAgent\\work\\Trunk2012\\Client\\Rendering\\GfxCore\\GL\\GeometryGL.cpp",
						118))
				{
					goto bind;
				}
				flag = gGraphicsDebugFlag_12DE657;
			}
			GraphicsAssertReport_6B9740(
				flag,
				"id file: D:\\BuildAgent\\work\\Trunk2012\\Client\\Rendering\\GfxCore\\GL\\GeometryGL.cpp line: 118");
		}
	}

bind:
	glBindBuffer_12DA218(reinterpret_cast<unsigned int*>(this)[13], *id);
	glBufferData_12DA228(
		reinterpret_cast<unsigned int*>(this)[13],
		reinterpret_cast<int*>(this)[11] * reinterpret_cast<int*>(this)[10],
		0,
		gBufferUsageTable_E30F78[reinterpret_cast<unsigned int*>(this)[12]]);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
