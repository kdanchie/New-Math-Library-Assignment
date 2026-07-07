// MathLibrary__new.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"
#include "Quaternion.h"
#include "Plane_.h"
int main(){

	Vec3 v(2.0, 2.0, 1.0);
	Vec3 u(4.0, 2.0, 1.0);

	float magnitude = v.Mag();
	std::cout << "magnitude = " << magnitude << "\n\n";

	Vec3 normalVec = v.Normalize();
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
	Quaternion q1 = Quaternion(2, Vec3(3, 1, 7));
	Quaternion q2 = Quaternion(1, 3, 1, 2);
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


	std::cout << " ASSIGNMENT 3 \n\n\n";


		//ray
	Vec3 S(1, 0, 1);
	Vec3 V(3, 2, 1);
		// normalize V (not now)
	Ray ray(S, V);

	//plane
	Vec3 N(1, 2, 3);
	Vec3 p(1, 1, 0);
	//Vec3 NN = N.Normalize();
	Plane plane = Plane(2, 1, 0, -4);

	Vec3 inetrsect = plane.intersectionPoint(ray);

	std::cout << "plane eqtn " << plane.plane.x << " " << plane.plane.y << " " << plane.plane.z << " " << plane.plane.w << "\n\n";

	std::cout << "inetrsect: " << inetrsect.x << " " << inetrsect.y << " " << inetrsect.z << "\n\n";
}
