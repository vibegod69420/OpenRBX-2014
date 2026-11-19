#include "v8datamodel/CustomStatsGuiJSON.h"

#include "decomp.h"

namespace RBX {

struct CustomStatsGuiJSON_Tree
{
	void* _Myhead;
	void _Erase(void* result, void* first, void* last);
};

// FUNCTION: ROBLOXSTUDIO 0x00b391b0
CustomStatsGuiJSON::~CustomStatsGuiJSON()
{
	void* it;
	*(void**)this = (void*)0x00E6DC74;

	CustomStatsGuiJSON_Tree* tree = (CustomStatsGuiJSON_Tree*)((char*)this + 4);
	void* head = tree->_Myhead;
	tree->_Erase(&it, *(void**)head, head);
	::operator delete(tree->_Myhead);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
