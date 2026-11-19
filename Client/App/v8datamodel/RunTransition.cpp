#include "v8datamodel/RunTransition.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0041e9a0
int RunTransition::isConnected() const
{
	return *(reinterpret_cast<const int*>(this) + 4) != 0;
}

struct RunTransitionNode
{
	RunTransitionNode* next;
	RunTransitionNode* prev;
};

// FUNCTION: ROBLOXSTUDIO 0x0078dc70
void RunTransition::disconnect()
{
	RunTransitionNode* head = *reinterpret_cast<RunTransitionNode**>(this);
	RunTransitionNode* node = head->next;
	head->next = head;
	head = *reinterpret_cast<RunTransitionNode**>(this);
	head->prev = head;
	reinterpret_cast<int*>(this)[1] = 0;

	if (node != *reinterpret_cast<RunTransitionNode**>(this))
	{
		do
		{
			RunTransitionNode* nextNode = node->next;
			delete node;
			node = nextNode;
		} while (node != *reinterpret_cast<RunTransitionNode**>(this));
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
