#ifndef POINT_2D_H
#define POINT_2D_H


namespace Geometry { class Point2D; }

class Geometry::Point2D{
	public:

		Point2D(); // costruttore di default
		Point2D(double xValue, double yValue); // costruttore sovraccaricato

		double X();
		double Y();

		void setX(double value);
		void setY(double value);

		double distanceFrom(Point2D other);
		Point2D& operator=(const Point2D& other); // operatore di assegnamento di copia definito nella sezione pubblica

		Point2D(const Point2D& other); // costruttore di copia (dentro la sezione pubblica della classe) ...
	private:
		double x;
		double y;
};

#endif // POINT_2D_H
