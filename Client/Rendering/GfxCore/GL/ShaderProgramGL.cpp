#include "ShaderProgramGL.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x0060bbb0
int ShaderProgramGL::getField60() const
{
	return field_0060;
}

// FUNCTION: ROBLOXSTUDIO 0x0060bbc0
int ShaderProgramGL::getField64() const
{
	return field_0064;
}

// FUNCTION: ROBLOXSTUDIO 0x0060dd20
void* ShaderProgramGL::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
