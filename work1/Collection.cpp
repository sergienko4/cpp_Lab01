#include "Collection.h"



Collection::Collection(int radius, int width, int height, int color)
{
	// create araa of pointers Circles
	count = width * height;

	// init array with the sutble size 
	circle = new Circle*[count];
	int index = 0;

	for (int i = 0; i < height; i++)
	{
		int x = (2 * radius)*i;
		for (int j = 0; j < width; j++)
		{
			int y = (2 * radius)*j;

			// create Circle and add to the array
			circle[index] = new Circle(x, y, radius, color);
			index++;
		}
	}
}
Circle& Collection::getCircleAt(const Point &p) {

	Circle *temp = NULL;
	for (int i = 0; i < count; i++)
	{
		// check if in or not
		bool isContains = circle[i]->contains(p);
		if (isContains) return *circle[i]; // return the Circle
	}
	// not found
	return *temp;
}

void Collection::print() const {

	for (int i = 0; i < count; i++)
	{
		// print list of Circle
		Circle c = *circle[i];
		c.print();
	}
}


Collection::~Collection()
{
	// remove from mempory the array
	delete[] circle;
	
}
