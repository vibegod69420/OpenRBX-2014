#include "v8kernel/btGjkPairDetector.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005c7ee0
struct GjkPairDetectorListNode
{
	char _pad[0x2c];
	btGjkPairDetector* prev;
	btGjkPairDetector* next;
};

struct GjkPairDetectorList
{
	btGjkPairDetector* head;
	int count;
};

void __fastcall btGjkPairDetector::remove(btGjkPairDetector* node)
{
	GjkPairDetectorListNode* n = reinterpret_cast<GjkPairDetectorListNode*>(node);
	GjkPairDetectorList* l = reinterpret_cast<GjkPairDetectorList*>(this);

	btGjkPairDetector* next = n->next;
	if (next)
		reinterpret_cast<GjkPairDetectorListNode*>(next)->prev = n->prev;

	btGjkPairDetector* prev = n->prev;
	if (prev)
		reinterpret_cast<GjkPairDetectorListNode*>(prev)->next = n->next;

	if (node == l->head)
		l->head = n->next;

	--l->count;
}

// FUNCTION: ROBLOXSTUDIO 0x005c8cb0
struct GjkPairDetectorNode
{
	char pad0[0x10];
	float value;
	char pad14[0x18];
	GjkPairDetectorNode* prev;
	GjkPairDetectorNode* next;
};

btGjkPairDetector* btGjkPairDetector::getClosestPoint()
{
	GjkPairDetectorNode* best = *(GjkPairDetectorNode**)((char*)this + 0x2854);
	GjkPairDetectorNode* cur = best->next;
	float bestSq = best->value;
	bestSq *= bestSq;

	if (cur)
	{
		do
		{
			float curSq = cur->value;
			curSq *= curSq;
			if (bestSq > curSq)
			{
				best = cur;
				bestSq = curSq;
			}
			cur = cur->next;
		}
		while (cur);
	}

	return reinterpret_cast<btGjkPairDetector*>(best);
}

// AUTO-GENERATED IMPLEMENTATIONS


