#ifndef POINT_2D_H
#define POINT_2D_H

#include <string>
#include <iostream>

namespace Geometry {
	class Point2D;
}

class Geometry::Point2D{
	public:
		Point2D(); // costruttore di default
		Point2D(double xValue, double yValue); // costruttore sovraccaricato

		Point2D(const Point2D& other); // costruttore di copia
		Point2D(Point2D&& other); // costruttore di spostamento

		double X();
		double Y();

		void setX(double value);
		void setY(double value);

		//Point2D& operator=(Point2D&& other); // operatore di assegnamento di spostamento definito nella sezione pubblica

		std::string Label();
		void setLabel(std::string value);
		double distanceFrom(Point2D other);

		friend std::ostream& operator<<(std::ostream& out, const Point2D& o){
			//return out << o.x << ", " << o.y;
			std::cout << o.x << ", " << o.y;
		}

 // public, protected effetto sui metodi friend

	private:
		double x;
		double y;
		std::string label;
};

#endif // POINT_2D_H

