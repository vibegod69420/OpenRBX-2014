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

struct ScriptDebuggerSession
{
	virtual void scalarDeletingDestructor(unsigned int flags);
};

struct ScriptDebuggerStringField
{
	~ScriptDebuggerStringField();
};

// FUNCTION: ROBLOXSTUDIO 0x007a85f0
void ScriptDebugger::reset()
{
	ScriptDebuggerSession* session = *reinterpret_cast<ScriptDebuggerSession**>(reinterpret_cast<char*>(this) + 0x88);
	*reinterpret_cast<ScriptDebuggerSession**>(reinterpret_cast<char*>(this) + 0x88) = 0;
	if (session)
		session->scalarDeletingDestructor(1);

	reinterpret_cast<ScriptDebuggerStringField*>(reinterpret_cast<char*>(this) + 0xA0)->~ScriptDebuggerStringField();
	reinterpret_cast<ScriptDebuggerStringField*>(reinterpret_cast<char*>(this) + 0xE0)->~ScriptDebuggerStringField();
	reinterpret_cast<ScriptDebuggerStringField*>(reinterpret_cast<char*>(this) + 0xFC)->~ScriptDebuggerStringField();

	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x128) = 0;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x118) = 0;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x11C) = 0;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x120) = 0;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x124) = 0;
	*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x14C) = 0;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x130) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Scripting
} // namespace RBX
