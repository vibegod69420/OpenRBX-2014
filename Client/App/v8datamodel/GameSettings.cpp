#include "v8datamodel/GameSettings.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00908e40
void GameSettings::destroyInstance(GameSettings* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

class DataModel;

class Instance
{
public:
	bool isDescendantOf(DataModel* ancestor);
};

class DataModel
{
public:
	static DataModel* get();
};

// FUNCTION: ROBLOXSTUDIO 0x00908fb0
DataModel* GameSettings::getDataModel()
{
	Instance* instance = *(Instance**)((char*)this + 0x0C);
	DataModel* dataModel = DataModel::get();

	if (instance->isDescendantOf(dataModel))
		return (DataModel*)((char*)this - 0x1C);

	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
