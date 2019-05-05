#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

namespace Geometry{
	class Polygon;
}

class Geometry::Polygon : public Shape{
	public:
		Polygon(std::string lab="");
		int getVertexCount() const;
	protected:
		int vertexCount;
};

#endif
