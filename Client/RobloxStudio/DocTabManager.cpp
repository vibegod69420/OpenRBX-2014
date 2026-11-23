#include "DocTabManager.h"

#include "decomp.h"



struct DocTabManager_TabWidget
{
	__declspec(dllimport) int currentIndex();
};

struct DocTabManager_DocWidget
{
	__declspec(dllimport) bool isModified();
};

extern "C" __declspec(dllimport) void qt_assert_x(const char *file, const char *what, const char *where, int line);

// FUNCTION: ROBLOXSTUDIO 0x004500c0
void* DocTabManager::getCurrentDoc()
{
	int index = ((DocTabManager_TabWidget*)*(void**)((char*)this + 0x38))->currentIndex();
	if (index == -1)
		return 0;

	if (((DocTabManager_DocWidget*)*(void**)((char*)this + 0x34))->isModified())
		return 0;

	if (index < 0 || index >= *(int*)((char*)*(void**)((char*)this + 8) + 8))
	{
		qt_assert_x(
			"d:\\roblox\\p4\\build_sm-util24\\contrib2\\qt\\4.8.5\\win_vs2012\\include\\qtcore\\../../src/corelib/tools/qvector.h",
			"index out of range",
			"QVector<T>::operator[]",
			333);
	}

	void* data = *(void**)((char*)this + 8);
	return *(void**)((char*)data + index * 4 + 0x10);
}

// AUTO-GENERATED IMPLEMENTATIONS


