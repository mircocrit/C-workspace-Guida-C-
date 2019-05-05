#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <iostream>

namespace Geometry{
	class Shape;
}

class Geometry::Shape{
	public:
		Shape(std::string lab="");
		void setLabel(std::string lab);
		std::string getLabel() const;
	protected:
		std::string label;
};
#endif
