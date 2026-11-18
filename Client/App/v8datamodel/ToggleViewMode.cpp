#include "v8datamodel/ToggleViewMode.h"

#include "decomp.h"

namespace RBX {

struct ToggleViewModeSub_A0
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual int getValue();
};

// FUNCTION: ROBLOXSTUDIO 0x0082f080
bool ToggleViewMode::isEnabled()
{
	void* base = *(void**)((char*)this + 0x0C);
	ToggleViewModeSub_A0* target = (ToggleViewModeSub_A0*)((char*)base + 0xA0);
	return target->getValue() > 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
