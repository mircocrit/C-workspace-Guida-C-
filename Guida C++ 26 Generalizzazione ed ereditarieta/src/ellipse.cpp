#include "ellipse.h"

namespace Geometry {
	Ellipse::Ellipse(Point2D p1, Point2D p2, double axis1, double axis2, std::string lab) : Shape(lab) {
			f1 = p1;
			f2 = p2;
			minorAxis = axis1;
			majorAxis = axis2;
	}
} // namespace Geometry

