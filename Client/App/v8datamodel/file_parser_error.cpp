#include "v8datamodel/file_parser_error.h"

#include "decomp.h"

namespace boost {
namespace property_tree {

// FUNCTION: ROBLOXSTUDIO 0x007857b0
void* file_parser_error::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace property_tree
} // namespace boost
