#include "v8datamodel/callable.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0044aa90
extern void callable_defaultVFunc4();
extern bool (__thiscall *callable_checkVFunc4)(void*, void*);

bool callable::isDefaultVFunc4() const
{
	void* vfunc = (*(void***)this)[4];
	if (vfunc == (void*)&callable_defaultVFunc4)
		return true;
	return callable_checkVFunc4((void*)&callable_defaultVFunc4, vfunc);
}

// FUNCTION: ROBLOXSTUDIO 0x0044ac00
bool callable::isDefaultVFunc5() const
{
	void* vfunc = (*(void***)this)[4];
	if (vfunc == (void*)0x012C375C)
		return true;
	return callable_checkVFunc4((void*)0x012C375C, vfunc);
}

// FUNCTION: ROBLOXSTUDIO 0x0044ad30
bool callable::isDefaultVFunc6() const
{
	void* vfunc = (*(void***)this)[4];
	if (vfunc == (void*)0x012C3884)
		return true;
	return callable_checkVFunc4((void*)0x012C3884, vfunc);
}

// FUNCTION: ROBLOXSTUDIO 0x0044ae80
bool callable::isDefaultVFunc7() const
{
	void* vfunc = (*(void***)this)[4];
	if (vfunc == (void*)0x012C3744)
		return true;
	return callable_checkVFunc4((void*)0x012C3744, vfunc);
}

// FUNCTION: ROBLOXSTUDIO 0x0044af80
bool callable::isDefaultVFunc8() const
{
	void* vfunc = (*(void***)this)[4];
	if (vfunc == (void*)0x012C372C)
		return true;
	return callable_checkVFunc4((void*)0x012C372C, vfunc);
}

// FUNCTION: ROBLOXSTUDIO 0x0044b1d0
bool callable::isDefaultVFunc9() const
{
	void* vfunc = (*(void***)this)[4];
	if (vfunc == (void*)0x012C3428)
		return true;
	return callable_checkVFunc4((void*)0x012C3428, vfunc);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
