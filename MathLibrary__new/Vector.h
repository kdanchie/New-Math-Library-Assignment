#pragma once
#include <math.h>
class Vec3 {
public:
	float x, y, z;
	void set(float x_, float y_, float z_);
	// constructors
	Vec3();
	Vec3(float x, float y, float z);
	Vec3(const Vec3& v);
	// operators + - * 
	const Vec3& operator + (const Vec3& v) const;
	Vec3& operator += (const Vec3& v);
	Vec3& operator = (const Vec3& v);
	float Mag();
	Vec3 Normalize();
	void Normalize_2();


};


// Vec4
class Vec4 {
public:
	float x, y, z, w;
	void set(float x_, float y_, float z_, float w_);
	// constructors
	Vec4();
	Vec4(float x, float y, float z, float w);
	

	


};