// MathLibrary__new.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"
int main()
{
	int x = 4;
	x += 2;
	Vec3 v(2, 4, 5);
	// vec3 Normalize();
	Vec3 N = v.Normalize();
	

	Vec3 u(1, 2, 1);
	Vec3 w = u + v;
	w += u;// w=w+u;
	std::cout << w.x << " " << w.y << " " << w.z << std:: endl;
   
}

