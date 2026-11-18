#include "CallStackWidget.h"

#include "decomp.h"



class QMetaObject;

__declspec(dllimport) void qt_assert(const char *assertion, const char *file, int line);

template <typename T>
class QScopedPointer
{
public:
	T *d;

	T *operator->() const
	{
		if (!d)
			qt_assert("d", "d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h", 90);
		return d;
	}
};

struct CallStackWidgetPrivate
{
	char pad[0x18];
	const QMetaObject *metaObject;
};

// FUNCTION: ROBLOXSTUDIO 0x00469b10
const QMetaObject *CallStackWidget::metaObject() const
{
	QScopedPointer<CallStackWidgetPrivate> &d_ptr =
		*(QScopedPointer<CallStackWidgetPrivate> *)((char *)this + 4);

	if (d_ptr->metaObject)
		return d_ptr->metaObject;

	return (const QMetaObject *)0x012BFE38;
}

// AUTO-GENERATED IMPLEMENTATIONS


