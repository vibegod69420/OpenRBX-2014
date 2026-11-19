#include "v8datamodel/HammerTool.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c045a0
class HammerToolTarget
{
public:
	virtual void destroy(int);
};

void HammerTool::clearTarget()
{
	HammerToolTarget* target = reinterpret_cast<HammerToolTarget*>(_vtable_or_head);
	if (target)
	{
		target->destroy(1);
	}
	_vtable_or_head = 0;
}

class HammerToolSubobject
{
public:
	void init();
};

// FUNCTION: ROBLOXSTUDIO 0x00c048d0
HammerTool::HammerTool()
{
	HammerToolSubobject* sub = reinterpret_cast<HammerToolSubobject*>(reinterpret_cast<char*>(this) + 12);
	reinterpret_cast<int*>(this)[1] = 0;
	reinterpret_cast<int*>(this)[2] = -1;
	sub->init();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
