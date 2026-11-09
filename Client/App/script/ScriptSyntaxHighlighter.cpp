#include "script/ScriptSyntaxHighlighter.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0054a430
void* ScriptSyntaxHighlighter::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


