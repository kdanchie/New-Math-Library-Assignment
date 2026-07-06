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
	const Vec3& operator - (const Vec3& v) const;
	Vec3& operator += (const Vec3& v);
	Vec3& operator -= (const Vec3& v);
	const Vec3& operator * (const float s) const;
	Vec3& operator = (const Vec3& v);
	static float Mag(const Vec3& vec);
	static Vec3 Normalize(const Vec3& vec);
	void Normalize_2();
	float magnitude();
	static Vec3 cross(const Vec3& vecA, const Vec3& vecB);
	static float dot(const Vec3& vecA, const Vec3& vecB);


};


// Vec4
class Vec4 {
public:
	float x, y, z, w;
	void set(float x_, float y_, float z_, float w_);
	// constructors
	Vec4();
	Vec4(float x, float y, float z, float w);
	Vec4(Vec3 vec_, float w_);
	Vec4(const Vec4& v);
	// operators + - * 
	const Vec4& operator + (const Vec4& v) const;
	const Vec4& operator - (const Vec4& v) const;
	Vec4& operator += (const Vec4& v);
	Vec4& operator -= (const Vec4& v);
	Vec4& operator = (const Vec4& v);
	const Vec4& operator * (const float s) const;

	float Mag();
	static float dot(const Vec4& vecA, const Vec4& vecB);
	Vec4 Normalize(Vec4& vec);

};

