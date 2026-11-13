#pragma once

namespace RBX {

struct FlyweightNode
{
	FlyweightNode* next;
};

// Owns the intrusive list of flyweight nodes; only the two proven helpers are
// declared. addAssign is a free-standing helper on an int accumulator.
class FlyweightService
{
public:
	void pushFrontNode(FlyweightNode* node);
	static void addAssign(int* accumulator, int value);

private:
	FlyweightNode* head;
};

} // namespace RBX
