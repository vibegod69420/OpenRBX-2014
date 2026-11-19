#include "v8datamodel/thread_specific_ptr.h"

#include "decomp.h"

namespace RBX {

class thread_specific_ptr_object
{
public:
	~thread_specific_ptr_object();
};

// FUNCTION: ROBLOXSTUDIO 0x00848ef0
thread_specific_ptr::~thread_specific_ptr()
{
	delete reinterpret_cast<thread_specific_ptr_object*>(_vtable_or_head);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
