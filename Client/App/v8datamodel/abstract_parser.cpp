#include "v8datamodel/abstract_parser.h"

#include "decomp.h"

namespace std {

// FUNCTION: ROBLOXSTUDIO 0x00783910
void abstract_parser::_Tidy()
{
	if (*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x30) >= 0x10)
	{
		::operator delete(*reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x1c));
	}

	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x30) = 0x0F;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x2c) = 0;
	*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x1c) = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00783940
void abstract_parser::_Tidy2()
{
	if (*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x18) >= 0x10)
	{
		::operator delete(*reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x04));
	}

	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x18) = 0x0F;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x14) = 0;
	*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x04) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
