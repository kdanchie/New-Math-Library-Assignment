// MathLibrary__new.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"
#include "Quaternion.h"
int main(){

	Vec3 v(2.0, 2.0, 1.0);
	Vec3 u(4.0, 2.0, 1.0);

	float magnitude = Vec3::Mag(v);
	std::cout << "magnitude = " << magnitude << "\n\n";

	Vec3 normalVec = Vec3::Normalize(v);
	std::cout << "normalized vector " << normalVec.x << " " << normalVec.y << " " << normalVec.z << "\n\n";

	float dotResult = Vec3::dot(v, u);
	std::cout << "dot result  " << dotResult << "\n\n";

	Vec3 result = Vec3::cross(v, u);
	std::cout << "cross result " << result.x << " " << result.y << " " << result.z << "\n\n";

	Vec4 i, j;
	i.set(1.0, 2.0, 3.0, 1.0);
	j.set(3.0, 2.0, 3.0, 1.0);

	magnitude = i.Mag();
	std::cout << "magnitude = " << magnitude << "\n\n";

	float dot4 = Vec4::dot(i, j);
	std::cout << "dot 4 result  " << dot4 << "\n\n";

	std::cout << " ASSIGNMENT 2 \n\n\n";

	//assignment 2
	Quaternion q1 = Quaternion(3, Vec3(1, 2, 2));
	Quaternion q2 = Quaternion(5, 2, 1, 2);
	float mag = q1.Mag();

	std::cout << "q1 magnitide  " << mag << "\n\n";

	Quaternion q12 = q1+q2;

	std::cout << "q1 q2 add result " << q12.w << " " << q12.x << " " << q12.y << " " << q12.z << "\n\n";

	float qdot = Quaternion::dot(q1, q2);

	std::cout << "dot result  " << qdot << "\n\n";

	Quaternion conj = q1.Conjugate();

	std::cout << "conjugate result " << conj.w << " " << conj.x << " " << conj.y << " " << conj.z << "\n\n";

	Quaternion inverse = q1.Inverse();

	std::cout << "inverse result " << inverse.w << " " << inverse.x << " " << inverse.y << " " << inverse.z << "\n\n";

	Quaternion mult = q1 * q2;

	std::cout << "multiply result " << mult.w << " " << mult.x << " " << mult.y << " " << mult.z << "\n\n";

	Quaternion rotate = Quaternion(Vec3(0, 0, 1), 90);
	Vec3 Vector = Vec3(1, 0, 0);

	Vector = Quaternion::Rotate(Vector, rotate);

	std::cout << "roatated vector: " << Vector.x << " " << Vector.y << " " << Vector.z << "\n\n";

}
