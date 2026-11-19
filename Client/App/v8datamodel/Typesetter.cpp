#include "v8datamodel/Typesetter.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x006a9cb0
void* __cdecl func_0x006E0800();
void __cdecl func_0x006A9B30(Typesetter* _this, int arg2, int arg3, int arg4, int arg5, void* arg6, void* arg7, int arg8);

void __cdecl Typesetter::draw(int arg2, int arg3, int arg4, int arg5, int arg6)
{
    *(unsigned char*)((char*)this + 0x14) = 1;
    func_0x006A9B30(this, arg2, arg3, arg4, arg5, func_0x006E0800(), func_0x006E0800(), arg6);
    *(unsigned char*)((char*)this + 0x14) = 0;
}

struct TypesetterRange
{
	const char* data;
	int length;
	int x;
	int y;
};

struct TypesetterDrawHelper
{
	void __thiscall drawRange(TypesetterRange* range);
};

// FUNCTION: ROBLOXSTUDIO 0x006a9da0
void __cdecl Typesetter::draw(const void* arg2, int arg3, int arg4, int arg5, int arg6)
{
	if (this)
	{
		TypesetterRange range;
		const char* p = (const char*)arg2;

		if (*(const unsigned int*)(p + 0x14) >= 0x10)
			p = *(const char* const*)p;

		range.data = p + arg3;
		range.length = arg4 - arg3;
		range.x = arg5;
		range.y = arg6;

		((TypesetterDrawHelper*)this)->drawRange(&range);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
