#include "v8datamodel/MergeBinder.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0048c330

struct MergeBinderRefCount
{
    int _pad[8];
    int count;
};

int __cdecl MergeBinder::release()
{
    return --((MergeBinderRefCount*)*(void**)this)->count == 0;
}

// FUNCTION: ROBLOXSTUDIO 0x0048ebe0
struct MergeBinderNode
{
	MergeBinderNode* left;
	MergeBinderNode* parent;
	MergeBinderNode* right;
};

struct MergeBinderTreeHelper
{
	void erase(MergeBinderNode* node);
};

void MergeBinder::clear()
{
	{
		MergeBinderNode* head = *(MergeBinderNode**)this;
		((MergeBinderTreeHelper*)this)->erase(head->parent);
	}
	{
		MergeBinderNode* head = *(MergeBinderNode**)this;
		head->parent = head;
	}
	{
		MergeBinderNode* head = *(MergeBinderNode**)this;
		head->left = head;
	}
	{
		MergeBinderNode* head = *(MergeBinderNode**)this;
		head->right = head;
	}
	*(int*)((char*)this + 4) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
