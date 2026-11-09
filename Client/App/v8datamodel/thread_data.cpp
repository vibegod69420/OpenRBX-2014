#include "v8datamodel/thread_data.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c59530
void thread_data::destroyInstance(thread_data* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
