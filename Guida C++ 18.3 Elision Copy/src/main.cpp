#include <iostream>
#include "point2d.h"

using Geometry::Point2D;

Point2D middlePoint(Point2D a, Point2D b){
	Point2D result;
	result.setX((a.X() + b.X()) / 2.0);
	result.setY((a.Y() + b.Y()) / 2.0);
	return result;
}


void middlePoint(Point2D a, Point2D b, Point2D& result){
	result.setX((a.X() + b.X()) / 2.0);
	result.setY((a.Y() + b.Y()) / 2.0);

}

int main() {
	Point2D p1(10, 10); // chiama il costruttore Point2D(double, double)
	Point2D p2(p1); // ok, chiama il costruttore di copia
	Point2D p3(Point2D(10, 10)); // ok solo se il costruttore di copia accetta un valore temporaneo, cioè una const reference.

	Point2D c = middlePoint(Point2D(1, 1), Point2D(1, 2));

	Point2D d;
	middlePoint(Point2D(1, 1), Point2D(1, 2), d);

	// codice equivalente a seguito dell'ottimizzazione RVO operata dal compilatore
	system("pause");
	return 0;
}
