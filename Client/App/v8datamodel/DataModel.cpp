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

struct DataModelBdcMember
{
	void dispatch(int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x0084dd30
void DataModel::dispatchBdcMember()
{
	reinterpret_cast<DataModelBdcMember*>(reinterpret_cast<char*>(this) + 0xBDC)->dispatch(0x00F12F2D, 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
