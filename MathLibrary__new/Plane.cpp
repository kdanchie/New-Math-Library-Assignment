#include "Plane_.h"

Plane::Plane(){
}
//Ax +By +Cz=D >>>>> 1,2,3,1
Plane::Plane(float x_, float y_, float z_, float d_)
{
	plane.x = x_; // A
	plane.y = y_; // B
	plane.z = z_;// C
	plane.w = d_;// -D
	
}

Plane::Plane(Vec3 normal, Vec3 p)
{
	plane.x = normal.x;//A
	plane.y = normal.y;//B
	plane.z = normal.z;//C
	plane.w = -Vec3::dot(normal, p);
	//plane.w = -normal.Dot(p);// D=N.P
}

Plane::Plane(Vec3 v0, Vec3 v1, Vec3 v2){
	Vec3 e1 = v1 - v0;
	Vec3 e2 = v2 - v1;
	Vec3 Normal = (Vec3::cross(e1, e2));
	float D = Vec3::dot(Normal, v0);

	plane.x = Normal.x;
	plane.y = Normal.y;
	plane.z = Normal.z;
	plane.w = -D;
}

Vec3 Plane::intersectionPoint(Ray ray) {
	float t = 0;

	Vec3 V = ray.dir;
	Vec3 S = ray.start;
	Vec3 N = Vec3(plane.x, plane.y, plane.z); // Ax+By+Cz=D, N(A,B,C)
	float D = plane.w;//
	// before the implementation check the slides , 
	// you must understand the theoritical part, then start the implementation 
	// 

	// if N.V equals or close to zero for example 0.000000000001; 
	// then the condition N.V == 0 is true
	// In programming use Abs() as described below


//	if (abs(Vec3::dot(N, V) <= 0.0000001)) { // mathematically :if (N.V == 0) 
//		// Mathematically if (D-N.S == 0) >>>distance is zero and S lies in the plane
//		//In programming:
//		if (abs(D - Vec3::dot(N, S)) <= 0.0000001)
//			//infinity of intersesion point because the line lies in  the plane
//			return (INFINITY)
//		else //else means D-N.S == 0 is FALSE >>>>> line is parallel >>>no intersection
//			return (NULL
//	else //N.V is not equal to zero
//	{
//		/* 1. Find t using the equation : ?? = (?????.??) / (??.??)
//		   2. Call the function "currentPosition(t)to return the intersection point:
//			p= ray.currentPosition(t), this function is implemented in Ray class
//		   3. return p
//		 */
//
//
//	}

	//Vec4 N4 = Vec4(N, -D);

	t = -(Vec4::dot(Vec4(N, D), Vec4(S, 1))) /
		 (Vec3::dot(N, V));

	return S + (V * t);

}



//in main 
////ray
//Vec3 S(1,1,2)
//Vec3 V(1,1,1)
//// normalize V
//Ray ray(S,v)
////plane
//Vec3 N(1,2,3)
//Vec3 p(1,1,0)
//Vec3 NN= N.normalize()
//Plane plane(NN,p)
//Vec3 inetrsect= plane.intersectionPoint(ray);

