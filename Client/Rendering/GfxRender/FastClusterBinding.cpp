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

// FUNCTION: ROBLOXSTUDIO 0x00620400
void FastClusterBinding::onSpecialShapeChanged()
{
	unsigned char level = g_FastClusterDFLog;
	if (level)
	{
		FastClusterLogf(level,
			"FastCluster[%p]: part %p with binding %p requests special shape change",
			*(void**)((char*)this + 0x1C),
			*(void**)((char*)this + 0x04),
			this);
	}

	FastClusterEntity* cluster = *(FastClusterEntity**)((char*)this + 0x1C);
	cluster->invalidateEntity();
	*(unsigned char*)((char*)(*(void**)((char*)this + 0x1C)) + 0xCE) = 1;
}

struct FastClusterFrameHelper
{
	void notify(FastClusterEntity* cluster, unsigned char flag);
};

// FUNCTION: ROBLOXSTUDIO 0x006202e0
void FastClusterBinding::onCoordinateFrameChanged()
{
	FastClusterEntity* cluster = *(FastClusterEntity**)((char*)this + 0x1C);
	if (*(unsigned char*)((char*)cluster + 0xCC) == 0)
		return;

	unsigned char level = g_FastClusterDFLog;
	if (level)
	{
		FastClusterLogf(level,
			"FastCluster[%p]: part %p with binding %p requests coordinate frame change",
			cluster,
			*(void**)((char*)this + 0x04),
			this);
	}

	cluster = *(FastClusterEntity**)((char*)this + 0x1C);
	cluster->invalidateEntity();

	cluster = *(FastClusterEntity**)((char*)this + 0x1C);
	if (*(int*)((char*)cluster + 0xC8) != 0)
	{
		FastClusterFrameHelper* helper =
			*(FastClusterFrameHelper**)((char*)*(void**)((char*)cluster + 0x38) + 0x198);
		helper->notify(cluster, *(unsigned char*)((char*)cluster + 0xCC));
	}

	*(unsigned char*)((char*)(*(FastClusterEntity**)((char*)this + 0x1C)) + 0xCE) = 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
