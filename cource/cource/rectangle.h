#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "base-types.h"
#include "shape.h"

class Rectangle: public Shape
{
public:
	Rectangle(double w, double h, double x, double y);
	
	double getArea() const override;

private:
	rectangle_t rect_;
};

#endif
