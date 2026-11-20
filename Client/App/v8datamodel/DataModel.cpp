#include "v8datamodel/DataModel.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00857ca0
bool DataModel::getFlagB68() const
{
	return flag_0b68;
}

// FUNCTION: ROBLOXSTUDIO 0x00856210
DataModel* DataModel::getDataModel()
{
	return (char*)this - 0xA0 ? this : 0;
}

// FUNCTION: ROBLOXSTUDIO 0x007453c0
int DataModel::getZero() const
{
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00857d10
bool DataModel::isStateValid() const
{
	const int* state = reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x64);
	return state[0] == 8 && state[1] == 2;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
