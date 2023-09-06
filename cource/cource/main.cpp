#include <iostream>

#include "rectangle.h"
#include "circle.h"

int main()
{
	Rectangle rect(10, 5, 0, 0);

	std::cout << rect.getArea() << '\n';

	Circle circle(10, 0, 0);

	std::cout << circle.getArea() << '\n';

	Shape* shape;

	shape = new Rectangle(3, 4, 0, 0);

	std::cout << shape->getArea() << '\n';

	delete shape;

	shape = new Circle(3, 0, 0);

	std::cout << shape->getArea() << '\n';

	delete shape;

	Shape* shapes[] =
	{
		new Rectangle(25, 4, 0, 0),
		new Circle(33, 0, 0),
		new Rectangle(12, 5, 0, 0)
	};

	std::size_t len = sizeof(shapes) / sizeof(Shape*);

	for (std::size_t i = 0; i < len; ++i)
	{
		std::cout << shapes[i]->getArea() << '\n';
	}

	for (std::size_t i = 0; i < len; ++i)
	{
		delete shapes[i];
	}

	return 0;
}