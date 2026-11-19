#include "QToolButton.h"

#include "decomp.h"



class QAction
{
public:
	__declspec(dllimport) int menuRole(int);
};

class QToolButtonAccess
{
public:
	__declspec(dllimport) int actionsCount();
	__declspec(dllimport) QAction *actionAt(int);
};

// FUNCTION: ROBLOXSTUDIO 0x004446a0
bool QToolButton::hasSpecialAction()
{
	QToolButtonAccess *self = reinterpret_cast<QToolButtonAccess *>(this);
	int count = self->actionsCount();
	int i = 0;

	if (count > 0)
	{
		do
		{
			QAction *action = self->actionAt(i);
			if (action)
			{
				if (action->menuRole(0) == 2)
					return true;
			}
			++i;
		}
		while (i < count);
	}

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS


