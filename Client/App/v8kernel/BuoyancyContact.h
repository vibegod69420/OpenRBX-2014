#pragma once

namespace RBX {

// Slot 10 of both buoyancy contacts reads the int at +0x4c (they share the body).
class BuoyancyBallContact
{
public:
	int getField4C() const;

private:
	char _pad[0x4c];
	int field4C;
};

} // namespace RBX
