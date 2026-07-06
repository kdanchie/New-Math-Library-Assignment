#include "Vector.h"

void Vec3::set(float x_, float y_, float z_)
{
	x = x_;
	y = y_;
	z = z_;
}
Vec3::Vec3(){
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

void Vec3::Normalize_2(){
	float mag = magnitude();
	x = x / mag;
	y = y / mag;
	z = z / mag;
}

float Vec3::magnitude(){
	return sqrt(x * x + y * y + z * z);
}

Vec3 Vec3::cross(const Vec3& vecA, const Vec3& vecB) {
	Vec3 result;
	result.x = (vecA.y * vecB.z) - (vecA.z * vecB.y);
	result.y = (vecA.z * vecB.x) - (vecA.x * vecB.z);
	result.z = (vecA.x * vecB.y) - (vecA.y * vecB.x);

	return result;
}
float Vec3::dot(const Vec3& vecA, const Vec3& vecB){

	return (vecA.x * vecB.x) + (vecA.y * vecB.y) + (vecA.z * vecB.z);
}
const Vec3& Vec3::operator+(const Vec3& v) const{
	return Vec3(x + v.x, y + v.y, z + v.z);
}

const Vec3& Vec3::operator-(const Vec3& v) const{
	return Vec3(x - v.x, y - v.y, z - v.z);
}

Vec3& Vec3::operator+=(const Vec3& v){
	x += v.x;//x=x+v.x
	y += v.y;// y=y+v.y;
	z += v.z;// z=z+v.z;
	return *this;
}

Vec3& Vec3::operator-=(const Vec3& v){
	x -= v.x;//x=x+v.x
	y -= v.y;// y=y+v.y;
	z -= v.z;// z=z+v.z;
	return *this;
}

const Vec3& Vec3::operator*(const float s) const{
	return Vec3(x * s, y * s, z * s);
}

Vec3& Vec3::operator=(const Vec3& v)
{
	set(v.x, v.y, v.z);
	return *this;
}

float Vec3::Mag(const Vec3& vec){
	return sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
}

Vec3 Vec3::Normalize(const Vec3& vec){
	float mag = sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
	return Vec3(vec.x / mag, vec.y / mag, vec.z / mag);
}

const Vec4& Vec4::operator+(const Vec4& v) const{
	return Vec4(x + v.x, y + v.y, z + v.z, w + v.w);
}

const Vec4& Vec4::operator-(const Vec4& v) const{
	return Vec4(x - v.x, y - v.y, z - v.z, w - v.w);
}

Vec4& Vec4::operator+=(const Vec4& v)
{
	x += v.x;//x=x+v.x
	y += v.y;// y=y+v.y;
	z += v.z;// z=z+v.z;
	w += v.w;
	return *this;
}

Vec4& Vec4::operator-=(const Vec4& v){
	x -= v.x;//x=x+v.x
	y -= v.y;// y=y+v.y;
	z -= v.z;// z=z+v.z;
	w -= v.w;
	return *this;
}

Vec4& Vec4::operator=(const Vec4& v)
{
	set(v.x, v.y, v.z, v.w);
	return *this;
}

const Vec4& Vec4::operator*(const float s) const{
	return Vec4(x * s, y * s, z * s, w * s);
}

float Vec4::Mag(){
	return sqrt(x * x + y * y + z * z + w * w);
	
}

float Vec4::dot(const Vec4& vecA, const Vec4& vecB){

	return (vecA.x * vecB.x) + (vecA.y * vecB.y) + (vecA.z * vecB.z) + (vecA.w * vecB.w);
}

Vec4 Vec4::Normalize(Vec4& vec){
	float mag = vec.Mag();
	return Vec4(vec.x / mag, vec.y / mag, vec.z / mag, vec.w / mag);
}

void Vec4::set(float x_, float y_, float z_, float w_){
	x = x_;
	y = y_;
	z = z_;
	w = w_;
}

Vec4::Vec4(float x, float y, float z, float w){
	set(x, y, z, w);
}

Vec4::Vec4(Vec3 vec_, float w_){
	set(vec_.x, vec_.y, vec_.z, w_);
}

Vec4::Vec4(const Vec4& v){
	set(v.x, v.y, v.z, v.w);

}

Vec4::Vec4(){
	set(1.0, 1.0, 1.0, 1.0);
}

