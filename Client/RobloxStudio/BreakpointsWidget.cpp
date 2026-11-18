#include "BreakpointsWidget.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00469d00
struct QMetaObject;

struct BreakpointsWidgetPrivate
{
	char pad[0x18];
	const QMetaObject *metaObject;
};

extern "C" __declspec(dllimport) void qt_assert(const char *assertion, const char *file, int line);

struct QScopedPointer
{
	BreakpointsWidgetPrivate *d;

	BreakpointsWidgetPrivate *operator->() const
	{
		if (!d)
			qt_assert("d", "d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h", 90);
		return d;
	}
};

extern const QMetaObject staticMetaObject;

const QMetaObject *BreakpointsWidget::metaObject() const
{
	QScopedPointer &d_ptr = *(QScopedPointer *)((char *)this + 4);
	return d_ptr->metaObject ? d_ptr->metaObject : &staticMetaObject;
}

// AUTO-GENERATED IMPLEMENTATIONS


