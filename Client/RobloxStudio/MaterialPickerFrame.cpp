#include "MaterialPickerFrame.h"

#include "decomp.h"



__declspec(dllimport) void qt_assert(const char *assertion, const char *file, int line);

namespace Ui
{
struct MaterialPickerFrame
{
	char _pad[0x18];
	void *widgetAt18;
};
}

template <class T>
class QScopedPointer
{
public:
	T *d;

	T *operator->() const
	{
		if (!d)
		{
			qt_assert(
				"d",
				"d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore/../../src/corelib/tools/qscopedpointer.h",
				90);
		}
		return d;
	}
};

// FUNCTION: ROBLOXSTUDIO 0x00586e10
void *MaterialPickerFrame::getMaterialWidget()
{
	QScopedPointer<Ui::MaterialPickerFrame> *ui =
		(QScopedPointer<Ui::MaterialPickerFrame> *)((char *)this + 4);

	if ((*ui)->widgetAt18)
		return (*ui)->widgetAt18;

	return (void *)0x00F1E360;
}

// AUTO-GENERATED IMPLEMENTATIONS


