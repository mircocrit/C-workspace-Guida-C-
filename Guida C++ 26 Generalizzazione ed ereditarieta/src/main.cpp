#include "polygon.h"
#include <iostream>

using namespace Geometry;
using namespace std;

int main(){
	Polygon p("This is a polygon");
	cout << p.getLabel() << endl;
	system("pause");
	return 0;
}
