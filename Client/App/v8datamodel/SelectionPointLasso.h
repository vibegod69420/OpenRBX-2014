#pragma once

struct G3DVector3
{
	float x;
	float y;
	float z;
};

// The lasso keeps its point as three floats at +0x94; the Mac donor names this
// accessor SelectionPointLasso::getPoint.
class SelectionPointLasso
{
public:
	bool getPoint(G3DVector3* point) const;

private:
	char _pad[0x94];
	G3DVector3 m_point;
};
