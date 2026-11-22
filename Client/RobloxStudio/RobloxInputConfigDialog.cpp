#include "RobloxInputConfigDialog.h"

#include "decomp.h"



__declspec(dllimport) void __cdecl qt_assert(const char *assertion, const char *file, int line);

struct RobloxInputConfigDialog_Ui
{
	char _pad0[0x18];
	void *m_field18;
};

struct RobloxInputConfigDialog_QScopedUi
{
	RobloxInputConfigDialog_Ui *d;

	RobloxInputConfigDialog_Ui *operator->() const
	{
		if (!d)
			qt_assert("d", "d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h", 90);
		return d;
	}
};

// FUNCTION: ROBLOXSTUDIO 0x0046b9d0
void *RobloxInputConfigDialog::getUiField18()
{
	RobloxInputConfigDialog_QScopedUi &ui = *(RobloxInputConfigDialog_QScopedUi *)((char *)this + 4);
	if (ui->m_field18)
		return ui->m_field18;
	return (void *)0x012BFF38;
}

// AUTO-GENERATED IMPLEMENTATIONS


