#include "UploadVideoThread.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0047d270
void* UploadVideoThread::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


