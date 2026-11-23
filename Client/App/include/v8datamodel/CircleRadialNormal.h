#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CIRCLERADIALNORMAL_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CIRCLERADIALNORMAL_H

#include "decomp.h"

namespace RBX {

class Vector3;
class v;
// AUTO-GENERATED HELPERS

class CircleRadialNormal
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	const Vector3&getNormal();
	const Vector3&getUpNormal();
	const Vector3&getCrossNormal();
	const Vector3&getRadialNormal();
	const Vector3&getUpRadialNormal();
	const Vector3&getCrossUpNormal();
	const Vector3&getCrossUpHalfNormal();
	const Vector3&getZeroNormal();
	const Vector3&getFullNormal();
	const Vector3&getOneNormal();
	const Vector3&getOriginNormal();
	const Vector3&getPositiveNormal();
	const Vector3&getHalfCrossUpNormal();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CIRCLERADIALNORMAL_H
