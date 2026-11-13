#include "boost_errors.h"

namespace boost {

// FUNCTION: ROBLOXSTUDIO 0x00860c20
const char* bad_lexical_cast::what() const
{
	return "bad lexical cast: source type value could not be interpreted as target";
}

} // namespace boost
