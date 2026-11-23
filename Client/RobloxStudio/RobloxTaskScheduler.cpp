#include "RobloxTaskScheduler.h"

#include "decomp.h"



extern int g_unknown_012C0AE8;
extern void (__thiscall *g_unknown_E11038)(void*, RobloxTaskScheduler*, void*, int);

// FUNCTION: ROBLOXSTUDIO 0x00534470
RobloxTaskScheduler* __fastcall RobloxTaskScheduler::initialize(void* arg)
{
	volatile int local = 0;
	g_unknown_E11038(&g_unknown_012C0AE8, this, arg, 0);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


