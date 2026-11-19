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
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CIRCLERADIALNORMAL_H
