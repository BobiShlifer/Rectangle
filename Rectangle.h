#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"
class Rectangle {
private:
		Point cord[4];
		bool side_length();
public:
		Rectangle(); 
		Rectangle(Rectangle const& P); 
		Rectangle(Point& point1, Point& point2, Point& point3, Point& point4);
		Point GetPoint(int index);
		void SetPoint(Point P, int index);
		Rectangle& operator = (Rectangle P);
		friend std:: ostream& operator << (std::ostream& out, const Rectangle& P);
		void square();	
		~Rectangle();
};
#endif
