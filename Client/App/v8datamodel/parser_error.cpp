#include "v8datamodel/parser_error.h"

#include "decomp.h"

namespace std {

// FUNCTION: ROBLOXSTUDIO 0x00788400
int parser_error::getConst15005704() const
{
	return 15005704;
}

// FUNCTION: ROBLOXSTUDIO 0x0078a110
void parser_error::destroyInstance(parser_error* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

struct ParserErrorCopyHelper
{
	void copy9(const parser_error* src);
};

parser_error* resolveParserError(void* token);

// FUNCTION: ROBLOXSTUDIO 0x007899b0
parser_error* __cdecl parser_error::init(void* token)
{
	parser_error* src = resolveParserError(token);
	((ParserErrorCopyHelper*)this)->copy9(src);
	*(int*)((char*)this + 0x24) = *(int*)((char*)src + 0x24);
	*(int*)((char*)this + 0x28) = *(int*)((char*)src + 0x28);
	*(int*)((char*)this + 0x2c) = *(int*)((char*)src + 0x2c);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
