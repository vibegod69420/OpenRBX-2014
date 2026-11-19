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

class ScheduledJob
{
public:
	void execute();
};

struct ScheduledJobEntry
{
	ScheduledJob* job;
	void* context;
};

// FUNCTION: ROBLOXSTUDIO 0x006c2710
void Thread::executeScheduledJobs()
{
	ScheduledJobEntry* cur = *(ScheduledJobEntry**)((char*)this + 0x220);
	ScheduledJobEntry* end = *(ScheduledJobEntry**)((char*)this + 0x224);

	while (cur != end)
	{
		cur->job->execute();
		++cur;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace TaskScheduler
} // namespace RBX
