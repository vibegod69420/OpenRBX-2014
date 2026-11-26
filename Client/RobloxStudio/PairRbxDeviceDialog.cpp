#include "PairRbxDeviceDialog.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0046aed0
struct QMetaObject
{
	__declspec(dllimport) void *cast(void *_obj) const;
	__declspec(dllimport) static void activate(void *sender, const QMetaObject *m, int local_signal_index, void **argv);
};

class RobloxContextualHelp
{
public:
	static const QMetaObject staticMetaObject;
};

extern "C" __declspec(dllimport) void qt_assert(const char *assertion, const char *file, int line);

struct PairRbxDeviceDialog_Slot1
{
	void slot(void *arg);
};

void __cdecl PairRbxDeviceDialog::qt_metacall(int _c, int _id, void **_a)
{
	if (_c != 0)
		return;

	PairRbxDeviceDialog *_o = this;
	if (!RobloxContextualHelp::staticMetaObject.cast(_o))
		qt_assert("staticMetaObject.cast(_o)", "D:\\BuildAgent\\work\\Trunk2012\\Client\\RobloxStudio\\moc_RobloxContextualHelp.cpp", 51);

	switch (_id)
	{
	case 0:
		{
			void *args[2];
			args[0] = 0;
			args[1] = _a[1];
			QMetaObject::activate(this, &RobloxContextualHelp::staticMetaObject, 0, args);
		}
		break;
	case 1:
		((PairRbxDeviceDialog_Slot1 *)this)->slot(_a[1]);
		break;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


