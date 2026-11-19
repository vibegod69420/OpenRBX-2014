#include "ArchiveBinder.h"

#include "decomp.h"



// Forward declarations for callees/callback
struct MergeBinderBase
{
	bool slot2();
};

void* __cdecl sub_905D60(void* a1, void* a2, void* a3, void* a4);
void __cdecl sub_907150();

// FUNCTION: ROBLOXSTUDIO 0x00907410
bool ArchiveBinder::slot2()
{
	void* node = *(void**)((char*)this + 0x18);
	void* found = sub_905D60(*(void**)node, node, (void*)&sub_907150, this);

	if (((MergeBinderBase*)this)->slot2() && found == *(void**)((char*)this + 0x1C))
		return true;

	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x00906130
void __cdecl sub_CF6522(void* ptr);
void __cdecl sub_48EA60(void* a, void* b, void* c, void* d);

struct ArchiveBinder_Node10
{
	void __thiscall sub_BE8210(void* out, void* a, void* b);
};

typedef void (__thiscall *ArchiveBinder_FuncE10268)(void*);
extern ArchiveBinder_FuncE10268 g_funcE10268;

void ArchiveBinder::sub_906130()
{
	void* local8;
	char local1;
	void* head;
	void* node;

	head = *(void**)((char*)this + 0x18);
	node = *(void**)head;
	*(void**)head = head;
	*(void**)((char*)(*(void**)((char*)this + 0x18)) + 4) = *(void**)((char*)this + 0x18);
	*(int*)((char*)this + 0x1c) = 0;

	if (node != *(void**)((char*)this + 0x18))
	{
		do
		{
			void* next = *(void**)node;
			sub_CF6522(node);
			node = next;
		}
		while (node != *(void**)((char*)this + 0x18));
	}

	sub_CF6522(*(void**)((char*)this + 0x18));

	{
		void* saved = *(void**)((char*)this + 0x10);
		((ArchiveBinder_Node10*)((char*)this + 0x10))->sub_BE8210(&local8, *(void**)saved, saved);
	}

	sub_CF6522(*(void**)((char*)this + 0x10));

	if (*(void**)((char*)this + 4) != 0)
	{
		g_funcE10268((char*)this + 4);
		sub_48EA60(*(void**)((char*)this + 4), *(void**)((char*)this + 8), &local1, local8);
		sub_CF6522(*(void**)((char*)this + 4));
		*(void**)((char*)this + 4) = 0;
		*(void**)((char*)this + 8) = 0;
		*(void**)((char*)this + 0xc) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


