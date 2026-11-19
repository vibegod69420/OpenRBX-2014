#include "RobloxFindWidget.h"

#include "decomp.h"



extern "C" long __cdecl _InterlockedDecrement(long volatile *Addend);
#pragma intrinsic(_InterlockedDecrement)

struct RbxControlBlock
{
	virtual void vfunc0();
	virtual void dispose();
	virtual void destroy();
	volatile long useCount;
	volatile long weakCount;
};

// FUNCTION: ROBLOXSTUDIO 0x00456350
void RobloxFindWidget::releaseControlBlock()
{
	RbxControlBlock *pn = *(RbxControlBlock **)((char *)this + 8);
	if (!pn)
		return;

	if (_InterlockedDecrement(&pn->useCount) != 0)
		return;

	pn->dispose();

	if (_InterlockedDecrement(&pn->weakCount) != 0)
		return;

	pn->destroy();
}

// AUTO-GENERATED IMPLEMENTATIONS


