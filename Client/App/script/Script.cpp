#include "script/Script.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x007ca780
int Script::getConst18804796() const
{
	return 18804796;
}

void __cdecl sub_7CA2C0(Script* dst, const Script& src);

// FUNCTION: ROBLOXSTUDIO 0x007ca2a0
Script* __cdecl Script::sub_7CA2A0(const Script& src)
{
	volatile int local = 0;
	sub_7CA2C0(this, src);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
