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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
