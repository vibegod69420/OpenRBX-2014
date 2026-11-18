#include "ContextGLWin32.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

typedef struct HGLRC__* HGLRC;
typedef struct HDC__* HDC;

extern "C" __declspec(dllimport) HGLRC __stdcall wglGetCurrentContext();
extern "C" __declspec(dllimport) int __stdcall SwapBuffers(HDC);

void __cdecl sub_6B9740(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00606300
void ContextGLWin32::swapBuffers()
{
	if (*(unsigned char*)0x012DE657)
	{
		if (wglGetCurrentContext() != *(HGLRC*)((char*)this + 12))
		{
			typedef unsigned char(__cdecl *AssertHandler)(const char*, const char*, int);
			AssertHandler handler = *(AssertHandler*)0x012DE694;
			if (handler == 0 || handler("wglGetCurrentContext() == hglrc",
			                            "D:\\BuildAgent\\work\\Trunk2012\\Client\\Rendering\\GfxCore\\GL\\ContextGLWin32.cpp",
			                            103) == 0)
			{
				sub_6B9740(*(unsigned char*)0x012DE657,
				           "wglGetCurrentContext() == hglrc file: D:\\BuildAgent\\work\\Trunk2012\\Client\\Rendering\\GfxCore\\GL\\ContextGLWin32.cpp line: 103");
			}
		}
	}

	SwapBuffers(*(HDC*)((char*)this + 8));
}

extern "C" __declspec(dllimport) int __stdcall wglMakeCurrent(HDC, HGLRC);

// FUNCTION: ROBLOXSTUDIO 0x00606290
void ContextGLWin32::makeCurrent()
{
	HGLRC hglrc = *(HGLRC*)((char*)this + 12);
	if (wglGetCurrentContext() == hglrc)
		return;

	int result = wglMakeCurrent(*(HDC*)((char*)this + 8), hglrc);

	unsigned char flag = *(unsigned char*)0x012DE657;
	if (flag == 0)
		return;

	if (result != 0)
		return;

	typedef unsigned char(__cdecl *AssertHandler)(const char*, const char*, int);
	AssertHandler handler = *(AssertHandler*)0x012DE694;
	if (handler != 0)
	{
		if (handler("result",
		            "D:\\BuildAgent\\work\\Trunk2012\\Client\\Rendering\\GfxCore\\GL\\ContextGLWin32.cpp",
		            97) != 0)
		{
			return;
		}

		flag = *(unsigned char*)0x012DE657;
	}

	sub_6B9740(flag,
	           "result file: D:\\BuildAgent\\work\\Trunk2012\\Client\\Rendering\\GfxCore\\GL\\ContextGLWin32.cpp line: 97");
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
