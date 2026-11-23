#include "v8world/JointStage.h"

#include "decomp.h"

namespace RBX {

struct JointStageNode
{
	JointStageNode* left;
	JointStageNode* parent;
	JointStageNode* right;
	char color;
	char isNil;
	char pad[2];
};

struct JointStageTree
{
	JointStageNode* head;
	int size;

	void erase(JointStageNode* node);
};

// FUNCTION: ROBLOXSTUDIO 0x00c10260
void JointStage::removeAll()
{
	JointStageTree* self = (JointStageTree*)this;
	JointStageNode* node = self->head->parent;
	JointStageNode* cur = node;

	while (cur->isNil == 0)
	{
		self->erase(cur->right);
		cur = cur->left;
		operator delete(node);
		node = cur;
	}

	self->head->parent = self->head;
	self->head->left = self->head;
	self->head->right = self->head;
	self->size = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
