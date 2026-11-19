#include "G3D/TokenException.h"

#include "decomp.h"

namespace G3D {
namespace TextInput {

double numberValue(const TokenException*);

// FUNCTION: ROBLOXSTUDIO 0x00717520
double TokenException::number() const
{
	if (reinterpret_cast<const int*>(this)[12] == 3)
	{
		return numberValue(this);
	}
	return 0.0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace TextInput
} // namespace G3D
