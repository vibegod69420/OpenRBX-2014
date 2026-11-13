#include "../boost_errors.h"

namespace boost {
namespace io {

// FUNCTION: ROBLOXSTUDIO 0x00860c10
const char* bad_format_string::what() const
{
	return "boost::bad_format_string: format-string is ill-formed";
}

} // namespace io
} // namespace boost
