#include "polygon.h"

namespace Geometry {
	Polygon::Polygon(std::string lab): Shape(lab){ // <== invocazione del costruttoredella classe base
		vertexCount = 0;
	}
	int Polygon::getVertexCount() const{
		return vertexCount;
	}
} // namespace Geometry
