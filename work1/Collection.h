#pragma once
#include "Circle.h"
#include "Point.h"
class Collection
{
public:
	Collection(int radius, int width, int height, int color);
	Circle& getCircleAt(const Point &p);

	void print() const;
	~Collection();
private:
	int count;
	Circle **circle;
};

