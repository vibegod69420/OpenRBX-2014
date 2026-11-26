#include "FindAllDialog.h"

#include "decomp.h"



extern "C" __declspec(dllimport) void qt_assert(const char *assertion, const char *file, int line);

struct FindAllDialogPrivate
{
	char _pad[0x18];
	void *target; // 0x18
};

template <typename T>
struct QScopedPointer
{
	T *d;

	T *operator->() const
	{
		if (!d)
			qt_assert("d", "d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h", 90);
		return d;
	}
};

struct FindAllDialogLayout
{
	void *_vftable;
	QScopedPointer<FindAllDialogPrivate> d_ptr;
};

// FUNCTION: ROBLOXSTUDIO 0x00585720
void *FindAllDialog::getTarget()
{
	FindAllDialogLayout *self = reinterpret_cast<FindAllDialogLayout*>(this);
	if (self->d_ptr->target)
		return self->d_ptr->target;
	return (void*)0x00F1D6E8;
}

// AUTO-GENERATED IMPLEMENTATIONS


