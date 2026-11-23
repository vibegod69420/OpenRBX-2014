#include "QTreeView.h"

#include "decomp.h"



class QTreeViewHelper : public QTreeView
{
public:
	void sub_4D6BA0();
};

// FUNCTION: ROBLOXSTUDIO 0x004d63f0
QTreeView* QTreeView::sub_4D63F0()
{
	volatile int state = 0;
	reinterpret_cast<QTreeViewHelper*>(this)->sub_4D6BA0();
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


