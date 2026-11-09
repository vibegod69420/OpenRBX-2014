#include "Network/ClientReplicator.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00cae2b0
void ClientReplicator::setField14(int value)
{
	field_0014 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00ca6810
int ClientReplicator::getField14()
{
	// mov eax, [ecx + 0x20d4]
	int value = *(int*)((char*)this + 0x20d4);

	// test eax, eax; je ...
	if (value)
	{
		// mov eax, [eax + 0x178]
		return *(int*)((char*)value + 0x178);
	}

	// xor eax, eax; ret
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
