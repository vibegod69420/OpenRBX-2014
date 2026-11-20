#include "v8datamodel/ContentProviderJob.h"

#include "decomp.h"

namespace RBX {

struct ContentProviderJobData
{
	char pad_0[0x0C];
	int (__cdecl *callback)(void *context, int a2, int a3, int a4);
	void *context;
	char pad_14[0x30];
	int bytesProcessed;
};

void __cdecl ContentProviderJob_SetState(ContentProviderJob *job, int state);

// FUNCTION: ROBLOXSTUDIO 0x00bc6400
int __cdecl ContentProviderJob::process(int a2, int a3, int a4)
{
	ContentProviderJobData *data = *(ContentProviderJobData **)((char *)this + 0x10);
	int result = data->callback(data->context, a2, a3, a4);

	if (result == 0 && a4 != 0)
	{
		ContentProviderJob_SetState(this, 4);
	}

	data->bytesProcessed += a4 - a3;
	return result;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
