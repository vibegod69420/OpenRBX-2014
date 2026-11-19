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

class ScriptContext
{
public:
	void sub_8E0460(Script* script);
	void sub_8E2CC0(Script* script);
};

ScriptContext* __fastcall sub_7C9470(Script* script);

// FUNCTION: ROBLOXSTUDIO 0x007ca820
void Script::sub_7CA820()
{
	ScriptContext* newContext = sub_7C9470(this);
	ScriptContext* oldContext = *(ScriptContext**)((char*)this + 0x80);

	if (oldContext != newContext)
	{
		if (oldContext)
		{
			*(ScriptContext**)((char*)this + 0x80) = 0;
			oldContext->sub_8E0460(this);
		}

		*(ScriptContext**)((char*)this + 0x80) = newContext;

		if (newContext)
		{
			newContext->sub_8E2CC0(this);
		}
	}
}

// FUNCTION: ROBLOXSTUDIO 0x007ca790
const char* Script::sub_7CA790() const
{
	return (*(const int*)((const char*)this + 0x74) == 0) ? (const char*)this + 0xA4 : (const char*)0x011EF03C;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
