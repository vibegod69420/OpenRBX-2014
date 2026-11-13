#pragma once

namespace RBX {
namespace Detail {

// Mirrors std::numpunct<char>, whose decimal point and thousands separator live
// at +0x0c and +0x0d in this build.
class NumpunctChar
{
public:
	char doDecimalPoint() const;
	char doThousandsSep() const;

private:
	char _pad[0x0c];
	char decimalPoint;
	char thousandsSep;
};

} // namespace Detail
} // namespace RBX
