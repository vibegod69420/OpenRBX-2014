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

// AUTO-GENERATED IMPLEMENTATIONS


