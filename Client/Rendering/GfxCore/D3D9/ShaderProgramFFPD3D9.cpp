#include "ShaderProgramFFPD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x005e6910
int ShaderProgramFFPD3D9::getConst1() const
{
	return 1;
}

struct StdStringData
{
	union
	{
		char* ptr;
		char buf[16];
	};
	unsigned int size;
	unsigned int capacity;
};

// FUNCTION: ROBLOXSTUDIO 0x005e6ce0
void __cdecl ShaderProgramFFPD3D9::clearStdString()
{
	StdStringData* str = (StdStringData*)this;
	str->size = 0;
	if (str->capacity < 16)
		str->buf[0] = 0;
	else
		str->ptr[0] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
