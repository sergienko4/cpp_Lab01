#include "Collection.h"



Collection::Collection(int radius, int width, int height, int color)
{
	count = width * height;
	int x = 0;
	int y = 0;
	Circle **circle = new Circle*[count];
	int index = 0;
	for (int i = 0; i < count; i++) {
		circle[i] = new Circle(x+2*radius, y, radius, color);
		if (i > 0 && i%height == 0) {
			x = 0;
			y = 2 * radius;
		}
	}
}
Circle Collection::getCircleAt(const Point &p) {
	circle[0]->contains(p);
}


Collection::~Collection()
{
}
