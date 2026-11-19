#include "v8datamodel/indirect_streambuf.h"

#include "decomp.h"

namespace std {

// FUNCTION: ROBLOXSTUDIO 0x00c81ba0
const int* indirect_streambuf::getMemberPtr3C() const
{
	return &member_003c;
}

struct indirect_streambuf_offsets
{
	char pad_00[0x0c];
	char** ptr_0c;
	char** ptr_10;
	char pad_14[0x08];
	char** ptr_1c;
	char** ptr_20;
	char pad_24[0x08];
	int* ptr_2c;
	char** ptr_30;
	char pad_34[0x14];
	char* member_48;
	char* member_4c;
	char* member_50;
};

// FUNCTION: ROBLOXSTUDIO 0x00c86360
void indirect_streambuf::sync()
{
	indirect_streambuf_offsets* self = (indirect_streambuf_offsets*)this;

	char** p0c = self->ptr_0c;
	char* base = self->member_48;
	char* end = self->member_4c;
	*p0c = base;

	char** p1c = self->ptr_1c;
	int count = (int)(end - base);
	*p1c = base;

	int* p2c = self->ptr_2c;
	*p2c = count;

	char* base2 = self->member_48;
	if (base2)
	{
		char* limit = self->member_50;
		if (limit && base2 == limit)
		{
			char* cur = *self->ptr_20;
			if (cur)
			{
				int diff = (int)(cur - limit);
				*self->ptr_2c -= diff;
				*self->ptr_1c += diff;
				*self->ptr_10 = 0;
				*self->ptr_20 = 0;
				*self->ptr_30 = 0;
			}
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
