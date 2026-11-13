#pragma once

class RobloxPluginHost
{
public:
	void setField04(int value);

private:
	char _pad[0x04];
	int field04;
};
