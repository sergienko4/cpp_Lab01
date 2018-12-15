#include"Collection.h"

void main() {

	Collection g(4, 3, 2, 0);
	g.print();


	Point p(8, 5);
	g.getCircleAt(p).setColor(2);

	cout << " -- after set color (2)" << endl;
	g.print();

	// remove memory
	g.~Collection();

}