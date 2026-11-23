#include "QDockWidget.h"

#include "decomp.h"



void __cdecl QDockWidget_dtor(QDockWidget* self);

// FUNCTION: ROBLOXSTUDIO 0x0043f9f0
QDockWidget::~QDockWidget()
{
	QDockWidget_dtor(this);
}

// FUNCTION: ROBLOXSTUDIO 0x0044d110
void __cdecl QDockWidget::getLocation(int* out) const
{
	if (out)
	{
		const int* src = reinterpret_cast<const int*>(this);
		out[0] = src[0];
		out[1] = src[1];
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


