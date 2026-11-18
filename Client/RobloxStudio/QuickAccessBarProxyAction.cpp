#include "QuickAccessBarProxyAction.h"

#include "decomp.h"



__declspec(dllimport) void qt_assert(const char *assertion, const char *file, int line);

inline void qt_noop()
{
}

#define Q_ASSERT(cond) ((!(cond)) ? qt_assert(#cond, "d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h", 90) : qt_noop())

template <class T>
class QScopedPointer
{
public:
	T *d;

	T *operator->() const
	{
		Q_ASSERT(d);
		return d;
	}
};

struct QuickAccessBarProxyActionPrivate
{
	char _pad[0x18];
	void *action; // 0x18
};

// FUNCTION: ROBLOXSTUDIO 0x00454e60
void *QuickAccessBarProxyAction::getAction()
{
	QScopedPointer<QuickAccessBarProxyActionPrivate> &d =
		*reinterpret_cast<QScopedPointer<QuickAccessBarProxyActionPrivate> *>((char *)this + 4);

	if (d->action)
		return d->action;

	return (void *)0x012BFDC0;
}

// AUTO-GENERATED IMPLEMENTATIONS


