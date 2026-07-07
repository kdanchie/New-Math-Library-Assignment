#include "Quaternion.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>


Quaternion::Quaternion() {
	w = 1.0f;
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
};

Quaternion::Quaternion(float w_, Vec3 v_) {
	w = w_;
	x = v_.x;
	y = v_.y;
	z = v_.z;
	
};

Quaternion::Quaternion(float w_, float x_, float y_, float z_) {
	w = w_;
	x = x_;
	y = y_;
	z = z_;
};

Quaternion::Quaternion(Vec3 axis, float angleInDegrees) {
	float radians = angleInDegrees * M_PI / 180;
	axis = axis.Normalize();
	w = cos(radians / 2);
	Vec3 v = axis * (sin(radians / 2));
	set(v);
	
}
Quaternion Quaternion::operator*(Quaternion otherQuat){
	Vec3 v1 = Vec3(x, y, z);
	Vec3 v2 = Vec3(otherQuat.x, otherQuat.y, otherQuat.z);
	return Quaternion(
		w * otherQuat.w - Vec3::dot(v1, v2),
		w * v2.x + x * otherQuat.w + y * v2.z - z * v2.y,
		w * v2.y + y * otherQuat.w + z * v2.x - x * v2.z,
		w * v2.z + z * otherQuat.w + x * v2.y - y * v2.x
	);
}
const Quaternion& Quaternion::operator+(const Quaternion& q) const{
	return Quaternion(w + q.w, x + q.x, y + q.y, z + q.z);
}
float Quaternion::Mag(){
	return sqrt(w * w + x * x + y * y + z * z);
}
void Quaternion::Normalize(){
	float mag = Mag();
	w = w / mag;
	x = x / mag;
	y = y / mag;
	z = z / mag;
}
 float Quaternion::dot(Quaternion q1, Quaternion q2){
	return q1.w * q2.w + q1.x * q2.x + q1.y * q2.y + q1.z * q2.z;
}
 Quaternion Quaternion::Conjugate(){
	 Vec3 v = Vec3(x, y, z) * -1;
	 return Quaternion(w, v);
 }
;
/*in main
Vec3  v(0, 3, 4);
float angle = 60.0f;
Quaternion q(v, angle);
cout<<q.w<<"  "<<q.x......*/

void Quaternion::set(Vec3 v) {
	x = v.x;
	y = v.y;
	z = v.z;
}

Quaternion Quaternion::Inverse(){
	float mag = Mag();
	Quaternion conj = Conjugate();
	return Quaternion(
	conj.w = conj.w / (mag * mag),
	conj.x = conj.x / (mag * mag),
	conj.y = conj.y / (mag * mag),
	conj.z = conj.z / (mag * mag));
}

Vec3 Quaternion::Rotate(Vec3 vec, Quaternion q){
	Quaternion convert = Quaternion(0, vec);
	Quaternion result = q * convert * q.Inverse();
	return Vec3(result.x, result.y, result.z);
}



const Quaternion& Quaternion::operator-(const Quaternion& q) const{
	return Quaternion(w - q.w, x - q.x, y - q.y, z - q.z);
};


//this is in case if you use v and each time you  initilize v
//you must initilize x,,y and z and vis versa
//Quaternion Quaternion::operator = (const Quaternion& q) {
//	w = q.w;
//	v = q.v;	
//	return *this;
//};







//EulerAngles Quaternion::ConvertEuler() {
//	
//};