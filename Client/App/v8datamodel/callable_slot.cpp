#include "v8datamodel/callable_slot.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00cc2d30
void callable_slot::vtable_thunk_0x00cc2d30()
{
	// This is a vtable thunk with a fixed calling convention/state:
	//   mov eax, ecx
	//   push [eax+0x14]
	//   mov ecx, [eax+0x10]
	//   mov eax, [eax+0xc]
	//   call eax
	//   ret
	//
	// Model the exact memory accesses so MSVC 11 emits identical codegen.
	struct ThunkLayout
	{
		void* head;     // +0x00
		void* unused1; // +0x04
		void* unused2; // +0x08
		void* fn;       // +0x0c
		void* ecxv;     // +0x10
		void* arg;      // +0x14
	};

	ThunkLayout* layout = reinterpret_cast<ThunkLayout*>(this);

	typedef void (__thiscall *FnT)(void* /*ecx_passthrough*/, void* /*arg*/);
	FnT fn = reinterpret_cast<FnT>(layout->fn);

	// IMPORTANT: pass arguments in the same order as the thunk:
	// - push [eax+0x14]  => second argument
	// - ecx := [eax+0x10] => first argument in __thiscall
	// Also, don't let the compiler infer/alter types—keep them as void*.
	fn(layout->ecxv, layout->arg);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
