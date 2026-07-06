#pragma once
#include "Vector.h"

class Ray {
public:
	Vec3 start;
	Vec3 dir;
	//constructor
	Ray(Vec3 start_, Vec3 dir_);

	Vec3 currentPosition(float t);
};