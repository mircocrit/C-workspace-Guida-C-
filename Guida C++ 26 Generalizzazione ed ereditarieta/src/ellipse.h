#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"
#include "point2D.h"

namespace Geometry {
	class Ellipse;
}

class Geometry::Ellipse : public Shape {
	public: Ellipse(Point2D p1, Point2D p2, double axis1, double axis2, std::string lab="");
	// ... metodi getter / setter
	protected: Point2D f1;
	Point2D f2;
	double minorAxis;
	double majorAxis;
};

#endif
