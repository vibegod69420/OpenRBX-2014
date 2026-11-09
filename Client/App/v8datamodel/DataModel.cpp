#include "v8datamodel/DataModel.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00857ca0
bool DataModel::getFlagB68() const
{
	return flag_0b68;
}

// FUNCTION: ROBLOXSTUDIO 0x0085f5d0
void DataModel::setFlagB68(bool value)
{
	flag_0b68 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x0085f8c0
void DataModel::setFlagC71(bool value)
{
	flag_0c71 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x0085f8d0
void DataModel::setFlagE00(bool value)
{
	flag_0e00 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x0085f900
void DataModel::setFieldBFC(int value)
{
	field_0bfc = value;
}

// FUNCTION: ROBLOXSTUDIO 0x0085fa50
void DataModel::setFlagDB0(bool value)
{
	flag_0db0 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00849ca0
void* DataModel::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00849cd0
void* DataModel::scalarDeletingDestructor_slot0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00849d00
void* DataModel::scalarDeletingDestructor_9d00(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
