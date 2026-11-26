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

extern "C" __declspec(dllimport) void __stdcall glGetProgramiv(unsigned int program, unsigned int pname, int* params);

// FUNCTION: ROBLOXSTUDIO 0x0060bfc0
int __cdecl ShaderProgramGL::getProgramiv(unsigned int pname)
{
	int params;
	glGetProgramiv((unsigned int)this, pname, &params);
	return params;
}

// FUNCTION: ROBLOXSTUDIO 0x0060bfe0
int __cdecl ShaderProgramGL::getProgramiv(unsigned int program, unsigned int pname)
{
	int params;
	glGetProgramiv(program, pname, &params);
	return params;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
