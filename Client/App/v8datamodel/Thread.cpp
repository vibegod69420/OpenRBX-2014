#include "v8datamodel/Thread.h"

#include "decomp.h"

namespace RBX {
namespace TaskScheduler {

// FUNCTION: ROBLOXSTUDIO 0x006c2660
void Thread::destroySubPtr0C()
{
	Thread* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x006c1f30
void Thread::destroyInstance(Thread* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace TaskScheduler
} // namespace RBX
