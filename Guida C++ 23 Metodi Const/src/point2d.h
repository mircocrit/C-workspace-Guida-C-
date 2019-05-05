namespace Geometry { class Point2D; }

class Geometry::Point2D {
	public:
		double X() const;
		double Y() const;
	private:
		double x;
		double y;
};
