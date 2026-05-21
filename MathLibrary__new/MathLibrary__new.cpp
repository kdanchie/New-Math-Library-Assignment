// MathLibrary__new.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"
int main()
{
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
	
	Vec4 i;
	i.set(1.0, 2.0, 3.0, 1.0);

	//int x = 4;
	//x += 2;
	//Vec3 v(2, 4, 5);
	//// vec3 Normalize();
	//Vec3 N = v.Normalize();
	//

	//Vec3 u(1, 2, 1);
	//Vec3 w = u + v;
	//w += u;// w=w+u;
	//std::cout << w.x << " " << w.y << " " << w.z << std:: endl;


	
	
}

