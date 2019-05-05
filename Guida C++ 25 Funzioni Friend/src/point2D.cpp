#include "point2d.h"
#include <cmath>

Geometry::Point2D::Point2D(){
	x = 0;
	y = 0;
}

double Geometry::Point2D::X() {
	return x;
}

double Geometry::Point2D::Y() {
	return y;
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

double Geometry::Point2D::distanceFrom(Point2D other) {
	return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}

Geometry::Point2D::Point2D(const Point2D& other) {
	x = other.x;
	y = other.y;
}
/*
Geometry::Point2D& Geometry::Point2D::operator=(const Point2D& other){
	x = other.x;
	y = other.y;
	return *this;
}*/

Geometry::Point2D::Point2D(Point2D&& other) : x(other.x), y(other.y), label(std::move(other.label)){
	// ripristino di other
	other.x = 0;
	other.y = 0;
	other.label = "";
}
/*
Geometry::Point2D& Geometry::Point2D::operator=(Point2D&& other){
	// se necessario, clean-up delle risorse dell'oggetto cui si sta assegnando (this) spostamento
	x = other.x;
	y = other.y;
	label = std::move(other.label);
	// ripristino di other
	other.x = 0;
	other.y = 0;
	other.label = "";
	return *this;
}
*/

