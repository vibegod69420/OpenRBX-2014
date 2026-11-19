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

// FUNCTION: ROBLOXSTUDIO 0x004a40e0
void sub_4A4460();

NonFactoryProduct::NonFactoryProduct()
{
	volatile int var = 0;
	sub_4A4460();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
