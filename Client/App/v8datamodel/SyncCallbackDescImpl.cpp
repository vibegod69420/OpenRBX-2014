#include "v8datamodel/SyncCallbackDescImpl.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008f1eb0
void __cdecl sub_4115F0(void*, void*);
int __cdecl sub_6BC950(void*);

extern int dword_12FD638;
extern char unk_12FD634;
extern char unk_12FD63C;

SyncCallbackDescImpl::SyncCallbackDescImpl()
{
	sub_4115F0(&unk_12FD63C, (void*)0x008F2210);
	_vtable_or_head = dword_12FD638;
	*(int*)((char*)this + 4) = sub_6BC950(&unk_12FD634);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
