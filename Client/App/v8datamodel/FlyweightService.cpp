#include "FlyweightService.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0048b5d0
void FlyweightService::pushFrontNode(FlyweightNode* node)
{
	node->next = head;
	head = node;
}

// FUNCTION: ROBLOXSTUDIO 0x0048b5e0
void FlyweightService::addAssign(int* accumulator, int value)
{
	*accumulator += value;
}

} // namespace RBX
