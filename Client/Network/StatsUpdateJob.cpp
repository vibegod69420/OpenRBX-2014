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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
