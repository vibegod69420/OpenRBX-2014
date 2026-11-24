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

__declspec(dllimport) void __cdecl MergeBinder_Free(void*);

struct MergeBinder_Sub1C
{
	void* _Myhead;
	void erase(void* ret, void* first, void* last);
};

struct MergeBinder_Sub08
{
	void* ptr;
	void clear();
};

// FUNCTION: ROBLOXSTUDIO 0x0048c8b0
void MergeBinder::destroyMembers()
{
	void* ret;
	void* head = ((MergeBinder_Sub1C*)((char*)this + 0x1C))->_Myhead;
	((MergeBinder_Sub1C*)((char*)this + 0x1C))->erase(&ret, *(void**)head, head);
	MergeBinder_Free(((MergeBinder_Sub1C*)((char*)this + 0x1C))->_Myhead);

	((MergeBinder_Sub08*)((char*)this + 0x8))->clear();
	MergeBinder_Free(((MergeBinder_Sub08*)((char*)this + 0x8))->ptr);
	((MergeBinder_Sub08*)((char*)this + 0x8))->ptr = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
