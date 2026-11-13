#pragma once

namespace RBX {
namespace Graphics {

class ShaderProgramGL
{
public:
	int getField60() const;
	int getField64() const;

private:
	char _pad[0x60];
	int field60;
	int field64;
};

} // namespace Graphics
} // namespace RBX
