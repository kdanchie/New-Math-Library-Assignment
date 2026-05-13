#include "Vector.h"

void Vec3::set(float x_, float y_, float z_)
{
	x = x_;
	y = y_;
	z = z_;
}
Vec3::Vec3()
{
	set(1.0f, 1.0f, 1.0f);
}
Vec3::Vec3(const Vec3& v)
{
   set(v.x, v.y, v.z);
}
Vec3::Vec3(float x, float y, float z)
{
	set(x, y, z);
}
Vec3 Vec3::Normalize(){
	float mag = sqrt(x * x + y * y + z * z);
	return Vec3(x/mag, y/mag, z/mag);
}
void Vec3::Normalize_2(){
}
const Vec3& Vec3::operator+(const Vec3& v) const
{
	return Vec3(x + v.x, y + v.y, z + v.z);
}

Vec3& Vec3::operator+=(const Vec3& v)
{
	x += v.x;//x=x+v.x
	y += v.y;// y=y+v.y;
	z += v.z;// z=z+v.z;
	return *this;
}

Vec3& Vec3::operator=(const Vec3& v)
{
	set(v.x, v.y, v.z);
	return *this;
}

float Vec3::Mag() {
	return sqrt(x * x + y * y + z * z);
}


