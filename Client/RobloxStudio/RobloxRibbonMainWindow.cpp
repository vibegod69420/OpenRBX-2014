#include "RobloxRibbonMainWindow.h"

#include "decomp.h"



extern "C" __declspec(dllimport) void qt_assert(const char *assertion, const char *file, int line);

struct QListDataLayout
{
	int ref;
	int alloc;
	int begin;
	int end;
	int reserved;
	void *array[1];
};

struct QListDetachHelper
{
	void __thiscall detachGrow(int alloc);
};

// FUNCTION: ROBLOXSTUDIO 0x0050e930
void *RobloxRibbonMainWindow::first()
{
	QListDataLayout *d = (QListDataLayout *)*(void *volatile *)this;
	if (d->end == d->begin)
	{
		qt_assert("!isEmpty()", "d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qlist.h", 260);
	}

	d = (QListDataLayout *)*(void *volatile *)this;
	if (d->ref != 1)
	{
		d = (QListDataLayout *)*(void *volatile *)this;
		((QListDetachHelper *)this)->detachGrow(d->alloc);
	}

	d = (QListDataLayout *)*(void *volatile *)this;
	return d->array[d->begin];
}

// AUTO-GENERATED IMPLEMENTATIONS


