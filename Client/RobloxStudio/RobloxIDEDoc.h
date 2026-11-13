#pragma once

class RobloxIDEDoc
{
public:
	int getField80() const;

private:
	char _pad[0x80];
	int field80;
};
