#include "v8datamodel/CharacterAppearance.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b02c30
}
void operator delete(void*);
namespace RBX {

struct CharacterAppearanceStringData
{
	union
	{
		char* ptr;
		char buf[16];
	} bx;
	unsigned int mysize;
	unsigned int myres;
};

struct CharacterAppearanceListData
{
	void tidy();
};

CharacterAppearance::~CharacterAppearance()
{
	CharacterAppearanceStringData* str;

	str = *(CharacterAppearanceStringData**)((char*)this + 0x38);
	if (str)
	{
		if (str->myres >= 0x10)
			::operator delete(str->bx.ptr);
		str->myres = 0x0F;
		str->mysize = 0;
		str->bx.buf[0] = 0;
		::operator delete(str);
	}

	::operator delete(*(void**)((char*)this + 0x34));

	str = *(CharacterAppearanceStringData**)((char*)this + 0x30);
	if (str)
	{
		if (str->myres >= 0x10)
			::operator delete(str->bx.ptr);
		str->myres = 0x0F;
		str->mysize = 0;
		str->bx.buf[0] = 0;
		::operator delete(str);
	}

	((CharacterAppearanceListData*)((char*)this + 0x20))->tidy();
	::operator delete(*(void**)((char*)this + 0x20));

	*(unsigned int*)this = 0x00E33A28;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
