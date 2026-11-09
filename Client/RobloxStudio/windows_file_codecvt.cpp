#include "windows_file_codecvt.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x006b5cd0
int windows_file_codecvt::evalZero(int a0, int a1, int a2, int a3) const
{
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x006b6fa0
void windows_file_codecvt::destroyInstance(windows_file_codecvt* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


