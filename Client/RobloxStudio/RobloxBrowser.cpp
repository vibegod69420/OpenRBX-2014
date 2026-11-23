#include "RobloxBrowser.h"

#include "decomp.h"



__declspec(dllimport) void qt_assert(const char *assertion, const char *file, int line);

struct RobloxBrowserPrivate
{
	char pad[0x18];
	void *field18;
};

struct RobloxBrowserScopedPtr
{
	RobloxBrowserPrivate *d;

	RobloxBrowserPrivate *operator->() const
	{
		if (!d)
			qt_assert("d", "d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h", 90);
		return d;
	}
};

// FUNCTION: ROBLOXSTUDIO 0x00586a20
void *RobloxBrowser::getPageData()
{
	RobloxBrowserScopedPtr *p = (RobloxBrowserScopedPtr *)((char *)this + 4);
	if (p->operator->()->field18)
		return p->operator->()->field18;
	return (void *)0x012C0988;
}

// AUTO-GENERATED IMPLEMENTATIONS


