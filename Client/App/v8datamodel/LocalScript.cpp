#include "v8datamodel/LocalScript.h"

#include "decomp.h"

namespace RBX {

struct LocalScript_v7C9B10 : LocalScript
{
	void unk_7C9B10(void* out, void* a2, void* a3);
};

// FUNCTION: ROBLOXSTUDIO 0x007c8c20
void LocalScript::unk_7C8C20()
{
	void* local;
	void* p = *(void**)this;
	static_cast<LocalScript_v7C9B10*>(this)->unk_7C9B10(&local, *(void**)p, p);
	::operator delete(*(void**)this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
