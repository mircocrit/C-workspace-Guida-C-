#include "point2d.h"
using Geometry::Point2D;
int main() {
	Point2D a(1, 1);// invoca il costruttore Point2D(double, double)
	Point2D b(2, 2);
	Point2D c = a; // costruttore di copia
	a = b; // operatore di assegnamento di copia
	Point2D d = std::move(Point2D(3, 3)); // costruttore di spostamento
	a = Point2D(4, 4);// operatore di assegnamento di spostamento


	Point2D *p1 = new Point2D(1, 2);
	Point2D *p2 = new Point2D(); // invoca il costruttore di default
	Point2D *p3 = new Point2D; // niente parentesi Point2D

	Point2D p4(3, 4);

	p1->setX(5); // ->
	p4.setX(6); // .

	delete p1; // deallocazione di p1

	system("pause");
	return 0;
}
