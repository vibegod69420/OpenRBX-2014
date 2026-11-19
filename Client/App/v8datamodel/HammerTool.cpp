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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
