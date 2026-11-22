#include "RobloxMainWindow.h"

#include "decomp.h"



extern "C" __declspec(dllimport) void qt_assert(const char* assertion, const char* file, int line);

template <class T>
class QScopedPointer
{
public:
	T* d;

	T* operator->() const
	{
		if (!d)
		{
			qt_assert(
				"d",
				"d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h",
				90);
		}
		return d;
	}
};

struct RobloxMainWindowUi
{
	char _pad[0x18];
	void* embeddedWidget; // 0x18
};

// FUNCTION: ROBLOXSTUDIO 0x005878f0
void* RobloxMainWindow::getEmbeddedWidget()
{
	QScopedPointer<RobloxMainWindowUi>& ui =
		*reinterpret_cast<QScopedPointer<RobloxMainWindowUi>*>(reinterpret_cast<char*>(this) + 4);

	if (ui->embeddedWidget)
		return ui->embeddedWidget;

	return reinterpret_cast<void*>(0x00F1E42C);
}

// AUTO-GENERATED IMPLEMENTATIONS


