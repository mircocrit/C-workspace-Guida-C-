#include <iostream>
#include "point2d.h"

using Geometry::Point2D;

int main() {
	Point2D p1(10, 10); // chiama il costruttore Point2D(double, double)
	Point2D p2(p1); // ok, chiama il costruttore di copia
	Point2D p3(Point2D(10, 10)); // ok solo se il costruttore di copia accetta un valore temporaneo, cioè una const reference.
	system("pause");
	return 0;
}
