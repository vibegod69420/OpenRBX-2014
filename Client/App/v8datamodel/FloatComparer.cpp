#include "v8datamodel/FloatComparer.h"

#include "decomp.h"

namespace RBX {

// Forward declaration for token destruction helper (0x00bad980)
void destroyGeometryPoolToken(void* token, void* owner);

// FUNCTION: ROBLOXSTUDIO 0x00bad080
void FloatComparer::dispose()
{
	void* px = *(void**)((char*)this + 0x0C);
	if (px)
	{
		destroyGeometryPoolToken(px, *(void**)((char*)px + 0x04));
		::operator delete(px);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
