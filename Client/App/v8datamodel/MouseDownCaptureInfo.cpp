#include "v8datamodel/MouseDownCaptureInfo.h"

#include "decomp.h"

namespace RBX {
namespace HandlesBase {

// FUNCTION: ROBLOXSTUDIO 0x00a9c2e0
void MouseDownCaptureInfo::dispose()
{
	void* p = *(void**)((char*)this + 0xC);
	if (p)
	{
		operator delete(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HandlesBase
} // namespace RBX
