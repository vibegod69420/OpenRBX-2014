#include "QDockWidget.h"

#include "decomp.h"



void __cdecl QDockWidget_dtor(QDockWidget* self);

// FUNCTION: ROBLOXSTUDIO 0x0043f9f0
QDockWidget::~QDockWidget()
{
	QDockWidget_dtor(this);
}

// AUTO-GENERATED IMPLEMENTATIONS


