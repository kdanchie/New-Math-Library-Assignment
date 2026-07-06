#include "Ray.h"

Ray::Ray(Vec3 start_, Vec3 dir_){
	start = start_;
	dir = dir_;
}
Vec3 Ray::currentPosition(float t){
	return start + (dir * t);
}
