#ifndef CLIENT_APP_INCLUDE_REFLECTION_CLASSDESCRIPTOR_H
#define CLIENT_APP_INCLUDE_REFLECTION_CLASSDESCRIPTOR_H

#include "decomp.h"

namespace RBX {
namespace Reflection {

// AUTO-GENERATED HELPERS

class ClassDescriptor
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	int __cdecl is(const ClassDescriptor* target) const;
	void* __cdecl ensureOnceEvent(unsigned long value);
	void clear();
	void* __cdecl createOnceEvent(unsigned long value);
	ClassDescriptor* __cdecl addDescriptor(void* descriptor);
	// AUTO-GENERATED METHODS
};

} // namespace Reflection
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_REFLECTION_CLASSDESCRIPTOR_H
