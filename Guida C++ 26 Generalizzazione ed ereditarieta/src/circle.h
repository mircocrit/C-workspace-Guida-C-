#ifndef CIRCLE_H
#define CIRCLE_H

#include "ellipse.h"

namespace Geometry { class Circle; }

class Geometry::Circle : private Ellipse {
	public: Circle(Point2D c, float r, std::string lab="") : Ellipse(c, c, 2*r, 2*r, lab) { };
	Point2D getCenter() const;
	void setCenter(Point2D f);
	double getRadius() const;
	void setRadius(double axis); };
#endif



