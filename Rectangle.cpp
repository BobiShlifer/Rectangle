#include <iostream>
#include "Point.h"
#include "Rectangle.h"
//Создайте класс Rectangle c координатами 4-х вершин. В конструкторе предусмотреть проверку, 
// что координаты описывают прямоугольник со сторонами не больше 50.0. 
//Предусмотреть элемент-функцию square, определяющую, является ли прямоугольник квадратом.
bool Rectangle::side_length()
{
	double d01 = cord[0].distance(cord[1]);
	double d12 = cord[1].distance(cord[2]);
	double d23 = cord[2].distance(cord[3]);
	double d30 = cord[3].distance(cord[0]);
	return  (d01 > 50.0 || d12 > 50.0 || d23 > 50.0 || d30 > 50.0);		
}
 Rectangle::Rectangle() {} 
 Rectangle::Rectangle(Rectangle const& P)
 {
	 	 for (int i = 0; i < 4; i++)
		 cord[i] = P.cord[i];
		 if (side_length())
			 std::cout << "The sides of the square > 50" << std::endl;
 }
 Rectangle::Rectangle(Point &point1, Point &point2, Point &point3, Point& point4)
	{
	 cord[0] = point1;
	 cord[1] = point2;
	 cord[2] = point3;
	 cord[3] = point4;
	 if (side_length())
		 std::cout << "The sides of the square > 50" << std::endl;			 
 }
	Point Rectangle::GetPoint(int index) {
		return cord[index];
	}
	void Rectangle::SetPoint(Point P, int index) {
		cord[index] = P;	
		if (side_length())
			std::cout << "The sides of the square > 50" << std::endl;
	}
	Rectangle& Rectangle::operator = (Rectangle P) {
		if (&P == this)
			return *this;
	 	for (int i = 0; i < 4; i++)
			cord[i] = P.cord[i];
			return *this;
	} 
	std:: ostream& operator << (std:: ostream& out, const Rectangle& P)
	{
		for (int i = 0; i < 4; i++)
			out << P.cord[i] << std::endl;
		return out;
	}
	void Rectangle::square()
	{
		double d01 = cord[0].distance(cord[1]);
		double d12 = cord[1].distance(cord[2]);
		double d23 = cord[2].distance(cord[3]);
		double d30 = cord[3].distance(cord[0]);
		if ((d01 == d12) && (d01 == d23) && (d01 == d30) && (d12 == d23) && (d12 == d30) && (d23 == d30))
			std::cout << "Rectangle is quadrate" << std::endl;
		else
			std::cout << "Rectangle is not quadrate" << std::endl;

	}	
	Rectangle::~Rectangle() {}