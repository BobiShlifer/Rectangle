#include <iostream>
#include <math.h>
#include "Point.h"
#include "get_value.h"
Point::Point(double x, double y) : x(x), y(y) {} 
Point::Point(Point const& p) : x(p.x), y(p.y) {} 
	 double Point:: GetX()
	{
		return x;
	}
	double Point::GetY()
	{
		return y;
	}
	void Point::SetX(double x)
	{
		this->x = x; 
	}
	void Point::SetY(double y)
	{
		this->y = y;
	}
	Point& Point::operator = (Point p) {
		if (&p == this)
			return *this;
		x = p.x;
		y = p.y;
		return *this;
	}  
	std::ostream& operator << (std::ostream& out, const Point& p)
	{
		out << "[" << p.x << "," << p.y << "]";
		return out;
	}
	double Point::distance(const Point& p)
	{
		double dx = x - p.x;
		double dy = y - p.y;
		return sqrt(dx * dx + dy * dy);
	}
	double Point::distance2(const Point& p)
	{
		double dx = x - p.x;
		double dy = y - p.y;
		return dx * dx + dy * dy;
	}
	 Point Point::EnterPoint(const char* cord1, const char* cord2) {
		 double x = getValue(cord1);
		 double y = getValue(cord2);
		 return Point(x, y);
	 }	 
	Point::~Point() {}


