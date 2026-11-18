#include "ScreenshotVerb.h"

#include "decomp.h"



extern int dword_1318FB4;

// FUNCTION: ROBLOXSTUDIO 0x00524af0
int ScreenshotVerb::isEnabled()
{
	return dword_1318FB4 <= 0;
}

struct ScreenshotVerbData
{
	char pad[0x18];
	void* target;
};

extern "C" __declspec(dllimport) void qt_assert(const char* assertion, const char* file, int line);

template <class T>
class QScopedPointer
{
public:
	T* d;

	T* operator->() const
	{
		if (!d)
			qt_assert("d", "d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qscopedpointer.h", 90);
		return d;
	}
};

// FUNCTION: ROBLOXSTUDIO 0x00588b60
void* ScreenshotVerb::getTarget()
{
	QScopedPointer<ScreenshotVerbData>& data = *(QScopedPointer<ScreenshotVerbData>*)((char*)this + 4);

	if (data->target)
		return data->target;

	return (void*)0x012C0AC8;
}

// AUTO-GENERATED IMPLEMENTATIONS


