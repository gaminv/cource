#ifndef SHAPE_H
#define SHAPE_H
#include "base-types.h"
#include <iostream>

class Shape
{
public:
	virtual ~Shape()
	{
		
	}
	virtual double getArea() const = 0;

};


#endif