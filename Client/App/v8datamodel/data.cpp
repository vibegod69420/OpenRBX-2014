#include "v8datamodel/data.h"

#include "decomp.h"

namespace RBX {
namespace worker_thread {

extern "C" __declspec(dllimport) int __stdcall CloseHandle(void* hObject);
extern "C" long __cdecl _InterlockedExchange(long volatile* Target, long Value);
#pragma intrinsic(_InterlockedExchange)

struct data_dispose_payload_sub
{
	void cleanup();
};

struct data_dispose_payload
{
	int unk0;
	void* handle;
	data_dispose_payload_sub sub;
};

// FUNCTION: ROBLOXSTUDIO 0x006bba60
void data::dispose()
{
	data_dispose_payload* px = *(data_dispose_payload**)((char*)this + 0x0C);
	if (px)
	{
		px->sub.cleanup();

		void* oldHandle = (void*)_InterlockedExchange((long volatile*)&px->handle, 0);
		if (oldHandle)
		{
			CloseHandle(oldHandle);
		}

		::operator delete(px);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace worker_thread
} // namespace RBX
