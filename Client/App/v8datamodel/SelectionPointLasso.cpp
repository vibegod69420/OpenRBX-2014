#include "v8datamodel/SelectionPointLasso.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009cf710
class Instance
{
public:
	bool isDescendantOf(Instance* instance);
};

Instance* getDataModel();

void* SelectionPointLasso::getTarget()
{
	Instance* target = *(Instance**)((char*)this + 12);
	if (target->isDescendantOf(getDataModel()))
		return (char*)this - 0x1C;
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
