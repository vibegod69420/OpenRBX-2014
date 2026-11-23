#include "Network/Replicator.h"

#include "decomp.h"

namespace RBX {
namespace Network {

struct ReplicatorFieldWriter
{
	void writeField(const void* field);
};

// FUNCTION: ROBLOXSTUDIO 0x00c6fe50
Replicator& __cdecl Replicator::writeFields(const void* data)
{
	const char* ptr = static_cast<const char*>(data);
	ReplicatorFieldWriter* writer = reinterpret_cast<ReplicatorFieldWriter*>(this);

	writer->writeField(ptr);
	writer->writeField(ptr + 4);
	writer->writeField(ptr + 8);

	return *this;
}

// FUNCTION: ROBLOXSTUDIO 0x00c702e0
Replicator& __cdecl Replicator::write(const void* data)
{
	reinterpret_cast<ReplicatorFieldWriter*>(this)->writeField(data);
	return *this;
}

void __cdecl replicatorWriteProperty(Replicator*, const void*);

// FUNCTION: ROBLOXSTUDIO 0x00c6fe80
Replicator& __cdecl Replicator::writeProperty(const void* data)
{
	replicatorWriteProperty(this, data);
	return *this;
}

struct ReplicatorBitStream
{
	void __thiscall writeBits(const void* data, unsigned int bitCount, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x00c70300
Replicator& __cdecl Replicator::writeByte(unsigned char value)
{
	((ReplicatorBitStream*)this)->writeBits(&value, 8, 1);
	return *this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
