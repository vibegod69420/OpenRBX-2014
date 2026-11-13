#pragma once

class PathInterpolatedCFrame
{
public:
	bool getField40() const;
	bool getField41() const;

private:
	char _pad[0x40];
	bool field40;
	bool field41;
};
