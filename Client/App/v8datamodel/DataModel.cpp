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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
