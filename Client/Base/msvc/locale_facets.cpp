#include "locale_facets.h"

namespace RBX {
namespace Detail {

// FUNCTION: ROBLOXSTUDIO 0x00851020
char NumpunctChar::doDecimalPoint() const
{
	return decimalPoint;
}

// FUNCTION: ROBLOXSTUDIO 0x008510f0
char NumpunctChar::doThousandsSep() const
{
	return thousandsSep;
}

} // namespace Detail
} // namespace RBX
