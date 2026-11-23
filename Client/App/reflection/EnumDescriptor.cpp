#include "reflection/EnumDescriptor.h"

#include "decomp.h"

namespace RBX {
namespace Reflection {

struct AllEnumsStorage
{
	EnumDescriptor** _Myfirst;
	EnumDescriptor** _Mylast;
	EnumDescriptor** _Myend;

	AllEnumsStorage()
	{
		_Myfirst = 0;
		_Mylast = 0;
		_Myend = 0;
	}

	~AllEnumsStorage() {}
};

// FUNCTION: ROBLOXSTUDIO 0x007944b0
void* EnumDescriptor::allEnums()
{
	static AllEnumsStorage s_allEnums;
	return &s_allEnums;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Reflection
} // namespace RBX
