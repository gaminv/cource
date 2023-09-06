#include "circle.h"
#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle(double r, double x, double y)
{
	radius_ = r;
	pos.x = x;
	pos.y = y;
}

double Circle::getArea() const
{
	return 3,14 * radius_ * radius_;
}