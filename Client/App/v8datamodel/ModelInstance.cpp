#include "v8datamodel/ModelInstance.h"

#include "decomp.h"

namespace RBX {

struct ModelInstanceElement0x4C
{
	char data[0x4C];
	void clear();
};

// FUNCTION: ROBLOXSTUDIO 0x0052e280
static void modelInstance_clearElements(void* elements, int count)
{
	if (count != 0)
	{
		ModelInstanceElement0x4C* p = (ModelInstanceElement0x4C*)elements;
		do
		{
			if (p)
				p->clear();
			++p;
			--count;
		}
		while (count != 0);
	}
}

void ModelInstance::clearElements(void* elements, int count)
{
	modelInstance_clearElements(elements, count);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
