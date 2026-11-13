#include "RobloxTreeWidget.h"

// FUNCTION: ROBLOXSTUDIO 0x00539120
void* RobloxTreeWidget::getFieldECPtr() const
{
	return (void*)((char*)this - 0x14);
}

extern "C++" struct BasePart
{
	int call() const;
};

// FUNCTION: ROBLOXSTUDIO 0x0053dbe0
bool RobloxTreeWidget::isBaseNonZero() const
{
	return ((BasePart*)((char*)this - 0x50))->call() != 0;
}
