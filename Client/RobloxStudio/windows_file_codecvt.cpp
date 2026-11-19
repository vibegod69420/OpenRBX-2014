#include "windows_file_codecvt.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x006b6fa0
void windows_file_codecvt::destroyInstance(windows_file_codecvt* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


