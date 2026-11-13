#pragma once

// 0x004956b0 is shared (ICF) by btHashedSimplePairCache slot 3 and
// btDefaultCollisionConfiguration slot 2; both read the int at +0x10.
class btHashedSimplePairCache
{
public:
	int getField10() const;

private:
	char _pad[0x10];
	int field10;
};
