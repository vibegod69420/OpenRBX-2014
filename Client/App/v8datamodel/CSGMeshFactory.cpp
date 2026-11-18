#include "v8datamodel/CSGMeshFactory.h"

#include "decomp.h"

namespace RBX {

struct CSGMeshFactoryLayout
{
	void* vtable;        // +0x00
	int field_4;         // +0x04
	int field_8;         // +0x08
	unsigned char field_C; // +0x0C
	// 3 bytes padding
	int field_10;        // +0x10
	int field_14;        // +0x14
	int field_18;        // +0x18
	int field_1C;        // +0x1C
	int field_20;        // +0x20
	int field_24;        // +0x24
};

// FUNCTION: ROBLOXSTUDIO 0x00984ba0
CSGMeshFactory* CSGMeshFactory::create()
{
	CSGMeshFactoryLayout* self =
		(CSGMeshFactoryLayout*)::operator new(sizeof(CSGMeshFactoryLayout));

	if (self)
	{
		self->vtable = (void*)0x00E89C58;
		self->field_4 = 2;
		self->field_8 = 1;
		self->field_C = 0;
		self->field_10 = 0;
		self->field_14 = 0;
		self->field_18 = 0;
		self->field_1C = 0;
		self->field_20 = 0;
		self->field_24 = 0;
		return (CSGMeshFactory*)self;
	}

	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
