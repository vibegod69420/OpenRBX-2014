#include "script/ScriptDebugger.h"

#include "decomp.h"

namespace RBX {
namespace Scripting {

class ScriptDebuggerCallback
{
public:
	virtual void onNotify(int);
};

// FUNCTION: ROBLOXSTUDIO 0x00436ac0
void ScriptDebugger::close()
{
	ScriptDebuggerCallback* callback = reinterpret_cast<ScriptDebuggerCallback*>(_vtable_or_head);
	if (callback)
		callback->onNotify(1);
}

struct ScriptDebuggerListCallback
{
	virtual void unk0();
	virtual void onNotify(int);
};

struct ScriptDebuggerListNode
{
	ScriptDebuggerListNode* next;
	ScriptDebuggerListNode* prev;
	ScriptDebuggerListCallback callback;
};

// FUNCTION: ROBLOXSTUDIO 0x007a2070
void ScriptDebugger::clear()
{
	ScriptDebuggerListNode* head = reinterpret_cast<ScriptDebuggerListNode*>(_vtable_or_head);
	ScriptDebuggerListNode* node = head->next;

	head->next = head;
	head = reinterpret_cast<ScriptDebuggerListNode*>(_vtable_or_head);
	head->prev = head;
	*(reinterpret_cast<int*>(this) + 1) = 0;

	if (node != reinterpret_cast<ScriptDebuggerListNode*>(_vtable_or_head))
	{
		do
		{
			ScriptDebuggerListNode* next = node->next;
			node->callback.onNotify(0);
			::operator delete(node);
			node = next;
		}
		while (node != reinterpret_cast<ScriptDebuggerListNode*>(_vtable_or_head));
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Scripting
} // namespace RBX
