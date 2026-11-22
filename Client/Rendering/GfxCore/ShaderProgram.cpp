#include "ShaderProgram.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00610600
void ShaderProgram::popLastString()
{
	char* end = *((char**)this + 1);
	if (*((char**)this) == end)
		return;

	if (*(unsigned int*)(end - 4) >= 0x10)
	{
		::operator delete(*(void**)(end - 24));
	}

	*(unsigned int*)(end - 4) = 15;
	*(unsigned int*)(end - 8) = 0;
	*(end - 24) = 0;

	*((char**)this + 1) -= 24;
}

class ShaderProgramCallee690730
{
public:
	void call(void* a1, void* a2, int a3);
};

// FUNCTION: ROBLOXSTUDIO 0x00690730
ShaderProgram* __cdecl ShaderProgram::func690730(void* a1, void* a2, int a3)
{
	((ShaderProgramCallee690730*)a1)->call(this, a2, a3);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
