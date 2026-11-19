#include "v8datamodel/MD5HasherImpl.h"

#include "decomp.h"

namespace RBX {

struct MD5HasherFinalizer
{
	void finalize();
};

// FUNCTION: ROBLOXSTUDIO 0x00a104c0
const char* MD5HasherImpl::c_str()
{
	reinterpret_cast<MD5HasherFinalizer*>(this)->finalize();

	const char* result = reinterpret_cast<const char*>(this) + 0xAC;
	if (*reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(this) + 0xC0) >= 0x10)
		result = *reinterpret_cast<const char* const*>(result);

	return result;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
