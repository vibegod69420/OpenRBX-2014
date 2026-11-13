#include "QOgreWidget.h"

extern "C" int __stdcall targetOgre(void*, const void*, int);

// FUNCTION: ROBLOXSTUDIO 0x0046eb60
void QOgreWidget::invokeWith0(int value) const
{
	targetOgre((void*)value, this, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x0046eb80
void QOgreWidget::invokeWith2(int value) const
{
	targetOgre((void*)value, this, 2);
}
