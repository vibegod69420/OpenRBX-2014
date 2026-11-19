#include "v8datamodel/DataStore.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00be9a10
int DataStore::getConst15617916() const
{
	return 15617916;
}

void __stdcall DataStoreUnlinkHelper(void* out, void* value, void* node);
void __cdecl DataStoreFreeNode(void* ptr);

// FUNCTION: ROBLOXSTUDIO 0x00be5210
void DataStore::ReleaseHead()
{
	void* out;
	DataStoreUnlinkHelper(&out, *(void**)(void*)this->_vtable_or_head, (void*)this->_vtable_or_head);
	DataStoreFreeNode((void*)this->_vtable_or_head);
}

// FUNCTION: ROBLOXSTUDIO 0x00be5240
void DataStore::RemoveHead()
{
	void* out;
	DataStoreUnlinkHelper(&out, *(void**)(void*)this->_vtable_or_head, (void*)this->_vtable_or_head);
	DataStoreFreeNode((void*)this->_vtable_or_head);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
