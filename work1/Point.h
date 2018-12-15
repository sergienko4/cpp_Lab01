#pragma once
#include<iostream>
using namespace std;
class Point
{

public:
	Point(int x=0, int y=0);
	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);
	void print() const;
	
private:
	int x, y;
};


