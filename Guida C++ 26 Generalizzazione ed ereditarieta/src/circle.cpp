
#include "circle.h"

namespace Geometry {
	//Circle::Circle(Point2D c, double r, std::string lab)// <== invocazione del costruttore della classe base

	Point2D Circle::getCenter() const { return f1;} // o f2, indifferentemente
	void Circle::setCenter(Point2D f) {
		f1 = f; f2 = f;
	}

	double Circle::getRadius() const {
		return majorAxis / 2.0;
	} // o minorAxis / 2.0
	void Circle::setRadius(double axis) {
		minorAxis = axis;
		majorAxis = axis;
	}

} // namespace Geometry
