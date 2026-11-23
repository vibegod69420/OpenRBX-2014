#include "FragmentShaderD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct FragmentShaderD3D9_Resource
{
	void* ptr;
	void reset(void** out, void* a, void* b);
};

// FUNCTION: ROBLOXSTUDIO 0x005e84a0
void FragmentShaderD3D9::unload()
{
	void* local;
	FragmentShaderD3D9_Resource* res = (FragmentShaderD3D9_Resource*)((char*)this + 0x28);
	void* p = res->ptr;
	res->reset(&local, *(void**)p, p);

	operator delete(*(void**)((char*)this + 0x28));

	unsigned int field8 = *(unsigned int*)((char*)this + 8);
	if (field8)
	{
		if ((field8 & 1) == 0)
		{
			void* obj = (void*)(field8 & ~1u);
			void* arg = (char*)this + 0x10;
			typedef void (__cdecl *CleanupFn)(void*, void*, int);
			CleanupFn fn = *(CleanupFn*)obj;
			if (fn)
			{
				fn(arg, arg, 2);
			}
		}
		*(unsigned int*)((char*)this + 8) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
