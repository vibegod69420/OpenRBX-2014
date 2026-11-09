#include "gui/EquationDisplay.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bf8370
void EquationDisplay::destroyInstance(EquationDisplay* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
