#include "v8datamodel/Counter.h"

#include "decomp.h"

namespace RBX {
namespace Limits {

// FUNCTION: ROBLOXSTUDIO 0x00c637a0
void Counter::freeMember0C()
{
	rbx_free_mem(alloc_000c);
}

} // namespace Limits
} // namespace RBX

typedef void* HANDLE;
extern "C" __declspec(dllimport) unsigned long __stdcall WaitForSingleObject(HANDLE hHandle, unsigned long dwMilliseconds);

namespace RBX {
namespace Limits {

// FUNCTION: ROBLOXSTUDIO 0x006bca60
void Counter::wait()
{
	WaitForSingleObject((HANDLE)_vtable_or_head, 0xFFFFFFFFu);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Limits
} // namespace RBX
