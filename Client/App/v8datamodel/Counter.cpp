#include "v8datamodel/Counter.h"

#include "decomp.h"

namespace RBX {
namespace Limits {

// FUNCTION: ROBLOXSTUDIO 0x006bda90
void Counter::destroyInstance(Counter* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Limits
} // namespace RBX
