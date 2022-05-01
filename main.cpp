#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "get_value.h"
int main() {
	Point cord[4] = {Point:: EnterPoint("Enter x1: ","Enter y1: "), Point::EnterPoint("Enter x2: ","Enter y2: "), Point::EnterPoint("Enter x3: ","Enter y3: "), Point::EnterPoint("Enter x4: ","Enter y4: ") };
	Rectangle P1(cord[0], cord[1], cord[2], cord[3]);	
	std:: cout << "Rectangle: " << std::endl;
	std::cout << P1 << std::endl;
	P1.square();	
	return 0;
}

