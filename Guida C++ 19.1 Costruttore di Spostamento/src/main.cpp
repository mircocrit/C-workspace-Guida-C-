#include <iostream>
#include "point2d.h"

using Geometry::Point2D;

int main() {
	Point2D p1(10, 10); // chiama il costruttore Point2D(double, double)
	Point2D p2(p1); // ok, chiama il costruttore di copia
	Point2D p3(Point2D(10, 10)); // ok solo se il costruttore di copia accetta un valore temporaneo, cioè una const reference.

	Point2D a(1, 1); // invoca il costruttore Point2D(double,double)
	a = Point2D(3, 3); // invoca l'operatore di assegnamento di spostamento

	system("pause");
	return 0;
}
