#include "rectangle.h"

Rectangle::Rectangle(double w, double h, double x, double y)
{
	rect_.width = w;
	rect_.height = h;
	rect_.pos.x = x;
	rect_.pos.y = y;
}

double Rectangle::getArea() const 
{
	return rect_.width * rect_.height;
}