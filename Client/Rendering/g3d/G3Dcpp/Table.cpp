#include "G3D/Table.h"

#include "decomp.h"

namespace G3D {

// FUNCTION: ROBLOXSTUDIO 0x006f67e0
struct TableInitData
{
	int dword0;
	short word4;
};

TableInitData* Table::getInitData()
{
	static int initGuard;
	static TableInitData data;

	if ((initGuard & 1) == 0)
	{
		initGuard |= 1;
		data.dword0 = 0x00010001;
		data.word4 = 1;
	}

	return &data;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
