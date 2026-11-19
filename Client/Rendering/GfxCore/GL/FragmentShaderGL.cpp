#include "FragmentShaderGL.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct FragmentShaderGL_B69050
{
	void __thiscall sub_b69050(void** out, void* a, void* b);
};

// FUNCTION: ROBLOXSTUDIO 0x0060db00
void FragmentShaderGL::sub_0060db00()
{
	void* local;
	void* p = (void*)_vtable_or_head;
	((FragmentShaderGL_B69050*)this)->sub_b69050(&local, *(void**)p, p);
	operator delete((void*)_vtable_or_head);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
