#include "Network/StatsUpdateJob.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c6cac0
struct StatsUpdateJobLayout
{
	unsigned int bitCount;
	unsigned int field4;
	unsigned int field8;
	unsigned char* data;

	void reserve(unsigned int bits);
};

void StatsUpdateJob::appendBit()
{
	StatsUpdateJobLayout* self = reinterpret_cast<StatsUpdateJobLayout*>(this);
	self->reserve(1);

	unsigned int bitCount = self->bitCount;
	if ((bitCount & 7) == 0)
	{
		self->data[bitCount >> 3] = 0;
	}

	++self->bitCount;
}

// FUNCTION: ROBLOXSTUDIO 0x00c6dfd0
StatsUpdateJob& __cdecl StatsUpdateJob::reserve(unsigned int bits)
{
	StatsUpdateJobLayout* self = reinterpret_cast<StatsUpdateJobLayout*>(this);
	self->reserve(bits);
	self->reserve(bits + 2);
	self->reserve(bits + 4);
	return *this;
}

// FUNCTION: ROBLOXSTUDIO 0x00c6de60
void sub_c6d640(StatsUpdateJob* job, const void* field);

StatsUpdateJob& __cdecl StatsUpdateJob::writeStats(const void* source)
{
	const char* p = reinterpret_cast<const char*>(source) + 4;
	sub_c6d640(this, p);
	sub_c6d640(this, p + 4);
	sub_c6d640(this, p + 8);

	p = reinterpret_cast<const char*>(source) + 0x10;
	sub_c6d640(this, p);
	sub_c6d640(this, p + 4);
	sub_c6d640(this, p + 8);

	return *this;
}

struct StatsUpdateJobWriteFieldThunk
{
	void __thiscall call(const void* field);
};

// FUNCTION: ROBLOXSTUDIO 0x00c6d440
StatsUpdateJob& __cdecl StatsUpdateJob::writeField(const void* field)
{
	reinterpret_cast<StatsUpdateJobWriteFieldThunk*>(this)->call(field);
	return *this;
}

void __cdecl sub_c6d460(StatsUpdateJob* job, const void* field);

// FUNCTION: ROBLOXSTUDIO 0x00c6dda0
StatsUpdateJob& __cdecl StatsUpdateJob::writeFieldValue(const void* field)
{
	sub_c6d460(this, field);
	return *this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
