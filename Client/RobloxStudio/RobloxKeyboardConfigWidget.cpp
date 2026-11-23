#include "RobloxKeyboardConfigWidget.h"

#include "decomp.h"



class QMetaObject;

struct QObjectData
{
	char pad[0x18];
	const QMetaObject *metaObject;
};

extern "C" __declspec(dllimport) void qt_assert(const char *assertion, const char *file, int line);

struct QScopedPointerQObjectData
{
	QObjectData *d;

	QObjectData *operator->() const
	{
		if (!d)
			qt_assert("d", "d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h", 90);
		return d;
	}
};

extern const QMetaObject staticMetaObject;

// FUNCTION: ROBLOXSTUDIO 0x0046bee0
const QMetaObject *RobloxKeyboardConfigWidget::metaObject() const
{
	QScopedPointerQObjectData *d_ptr = (QScopedPointerQObjectData *)((char *)this + 4);
	if (d_ptr->operator->()->metaObject)
		return d_ptr->operator->()->metaObject;
	return &staticMetaObject;
}

__declspec(dllimport) void __cdecl QMetaObject_activate(void *sender, const QMetaObject *meta, int local_signal_index, void **argv);

// FUNCTION: ROBLOXSTUDIO 0x0046bfe0
void RobloxKeyboardConfigWidget::qt_signal_0()
{
	QMetaObject_activate(this, &staticMetaObject, 0, 0);
}

// AUTO-GENERATED IMPLEMENTATIONS


