#include "v8datamodel/NonFactoryProduct.h"

#include "decomp.h"

namespace RBX {

struct NonFactoryProductInitData
{
	void* creator;
	int* pResult;
	int result;
};

void __stdcall registerFactoryInit(NonFactoryProductInitData* data);

// FUNCTION: ROBLOXSTUDIO 0x007b3b40
int NonFactoryProduct::initFactoryData()
{
	NonFactoryProductInitData data;
	data.pResult = &data.result;
	data.result = 4;
	data.creator = (void*)0x007B1B30;
	registerFactoryInit(&data);
	return data.result;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
