#include "v8datamodel/ModelTool.h"

#include "decomp.h"

namespace RBX {

class ModelSubTool
{
public:
	void onDragEnd(int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00b46420
void ModelTool::onDragEnd()
{
	ModelSubTool* subTool = *reinterpret_cast<ModelSubTool**>(reinterpret_cast<char*>(this) + 8);
	if (subTool)
		subTool->onDragEnd(0, 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
