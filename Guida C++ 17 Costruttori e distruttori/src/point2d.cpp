#include "point2d.h"
#include <cmath>

Geometry::Point2D::Point2D(){
	x = 0;
	y = 0;
}

Geometry::Point2D::Point2D(double xVal, double yVal){
	setX(xVal);
	setY(yVal);
}
void Geometry::Point2D::setX(double value) {
	if (!std::isnan(value) && !std::isinf(value))
		x = value;
	else
		x = 0;
}
void Geometry::Point2D::setY(double value) {
	if (!std::isnan(value) && !std::isinf(value))
		y = value;
	else
		y = 0;
}
