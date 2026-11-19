#include "v8datamodel/DataModelArbiter.h"

#include "decomp.h"

namespace RBX {

void sub_986a30(DataModelArbiter* self, int a2, int* a3);

// FUNCTION: ROBLOXSTUDIO 0x00986a00
DataModelArbiter* __cdecl DataModelArbiter::sub_986a00(int a2, int a3)
{
	volatile int local = 0;
	sub_986a30(this, a2, &a3);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
