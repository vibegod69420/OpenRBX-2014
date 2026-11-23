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

struct RobloxTaskScheduler_sub_533DE0
{
	void __thiscall call(void* arg1, void* arg2, void* arg3);
};

extern void (__cdecl *g_unknown_E10508)(void*);

// FUNCTION: ROBLOXSTUDIO 0x00533210
void RobloxTaskScheduler::sub_533210()
{
	void* local;
	RobloxTaskScheduler* self = this;
	void* head = *(void**)self;
	((RobloxTaskScheduler_sub_533DE0*)this)->call(&local, *(void**)head, head);
	g_unknown_E10508(*(void**)self);
}

// AUTO-GENERATED IMPLEMENTATIONS


