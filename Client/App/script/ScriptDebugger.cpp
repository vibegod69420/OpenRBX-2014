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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Scripting
} // namespace RBX
