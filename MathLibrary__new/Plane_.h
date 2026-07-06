#pragma once
#include "Vector.h"
#include "Ray.h"
class Plane {
	// Ax + By+Cz-D=0    [Ax+By+CZ=D]
public:
	Vec4 plane; //plane.x  plane.y plane.z  plane.w
public:
	Plane();
	// x_, y_, and z_ are not x , y and z in the equation
	// they represent the normal components: A, B and C
	Plane(float x_, float y_, float z_, float d_);
	Plane(Vec3 normal, Vec3 p);
	Plane(Vec3 v0, Vec3 v1, Vec3 v2);

	Vec3 intersectionPoint(Ray ray);

};
