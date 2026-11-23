#include "SceneUpdater.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00686b50
int SceneUpdater::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00686b60
int SceneUpdater::derefInt_6b60(const int* p)
{
	return *p;
}

struct SceneUpdaterRenderNodeResult
{
	int pad;
	int id;
};

class SceneUpdaterRenderNodeTarget
{
public:
	SceneUpdaterRenderNodeResult* getRenderNode();
};

// FUNCTION: ROBLOXSTUDIO 0x006868c0
int SceneUpdater::getRenderNodeId()
{
	char* scene = *(char**)((char*)this + 0x180);
	SceneUpdaterRenderNodeTarget* target = *(SceneUpdaterRenderNodeTarget**)(scene + 0x1cc);
	if (target)
	{
		SceneUpdaterRenderNodeResult* node = target->getRenderNode();
		if (node)
			return node->id;
	}
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
