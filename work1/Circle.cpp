#include "Circle.h"



Circle::Circle(int x, int y, int r, int color) :center(Point(x, y)) {
	radius = r; this->color = color;

}
int Circle::getColor() const {
	return this->color;

}
void Circle::setColor(int color) {
	this->color = color;

}
bool Circle::contains(const Point &p) const {

	// משוואת המגעל
	int pointX = (center.getX() - p.getX());
	int pointY = (center.getY() - p.getY());

	return  ((pointX*pointX) + (pointY*pointY)) <= (radius * radius);

}
void Circle::print() const {
	center.print();
	cout << "Radius=" << radius <<  " color=" << color << endl;
}