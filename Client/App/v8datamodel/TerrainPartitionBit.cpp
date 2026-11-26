#include "v8datamodel/TerrainPartitionBit.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b60040
void terrainPartitionBitUnlink(TerrainPartitionBit* bit, int value);

void __cdecl TerrainPartitionBit::destroy()
{
	TerrainPartitionBit* bit = this;
	if (bit)
	{
		terrainPartitionBitUnlink(bit, *(int*)((char*)bit + 12));
		::operator delete(bit);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
