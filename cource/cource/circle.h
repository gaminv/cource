#ifndef CIRCLE_H
#define CIRCLE_H

#include "base-types.h"
#include "shape.h"

class Circle : public Shape
{
public:
	Circle(double r, double x, double y);
	double getArea() const override;
private:
	double radius_;
	point_t pos;
};

#endif // !CIRCLE_H
