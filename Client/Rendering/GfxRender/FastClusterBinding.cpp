#include "FastClusterBinding.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

extern unsigned char g_FastClusterDFLog;
void __cdecl FastClusterLogf(int level, const char* fmt, ...);

struct FastClusterEntity
{
	virtual void vfunc0();
	virtual void invalidateEntity();
};

// FUNCTION: ROBLOXSTUDIO 0x006203c0
void FastClusterBinding::onTransparencyChanged()
{
	unsigned char level = g_FastClusterDFLog;
	if (level)
	{
		FastClusterLogf(level,
			"FastCluster[%p]: part %p with binding %p requests transparency change",
			*(void**)((char*)this + 0x1C),
			*(void**)((char*)this + 0x04),
			this);
	}

	FastClusterEntity* cluster = *(FastClusterEntity**)((char*)this + 0x1C);
	cluster->invalidateEntity();
	*(unsigned char*)((char*)(*(void**)((char*)this + 0x1C)) + 0xCE) = 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
