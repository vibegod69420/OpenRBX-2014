#include "RobloxScriptReview.h"

#include "decomp.h"



struct RobloxScriptReview_Node
{
	RobloxScriptReview_Node* next;
	RobloxScriptReview_Node* prev;
};

struct RobloxScriptReview_Impl
{
	RobloxScriptReview_Node* head;
	void sub_513980(void** out, RobloxScriptReview_Node* first, RobloxScriptReview_Node* last);
};

extern "C" __declspec(dllimport) void __cdecl free(void*);

// FUNCTION: ROBLOXSTUDIO 0x00512ab0
void RobloxScriptReview::clear()
{
	void* it;
	RobloxScriptReview_Impl* self = (RobloxScriptReview_Impl*)this;
	self->sub_513980(&it, self->head->next, self->head);
	free(self->head);
}

// AUTO-GENERATED IMPLEMENTATIONS


