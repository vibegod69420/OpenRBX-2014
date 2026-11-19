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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
