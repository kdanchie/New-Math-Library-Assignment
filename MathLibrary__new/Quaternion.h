#pragma once
#include "Vector.h"
class Quaternion
{

public:

	float x, y, z, w;

	//Mathematically: w+ix+jy+kz or w+v >> in coding (w,x, y, z)
	// you cannot write w+v in the coding , we just use vector of 4 component


	Quaternion();

	Quaternion(float w, float x, float y, float z);
	Quaternion(float w_, Vec3 v_);

	Quaternion(Vec3 axis, float angleInDegrees);
	// w1*w1 -v1.v2 +w1`*v2+ w2*v2 +v1XV2
	Quaternion operator * (Quaternion otherQuat);
	const Quaternion& operator + (const Quaternion& q) const;
	const Quaternion& operator - (const Quaternion& q) const;


	float Mag();

	void Normalize();

	static float dot(Quaternion q1, Quaternion q2);

	Quaternion Conjugate();

	void set(Vec3 v);

	Quaternion Inverse();

	static Vec3 Rotate(Vec3 vec, Quaternion q);

	//Mat3 ConvertToMatrix(); optional

	//EulerAngles ConvertEuler();
};

