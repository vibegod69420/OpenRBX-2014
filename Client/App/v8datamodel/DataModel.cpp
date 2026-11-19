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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
