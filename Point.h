#ifndef POINT_H
#define POINT_H
class Point {
private:
	    double x, y;
public:
		Point(double x=0, double y=0); 
		Point(Point const& p); 
		double GetX();
		double GetY();
		void SetX(double x);
		void SetY(double y);
		Point& operator = (Point p);  
		friend std::ostream& operator << (std::ostream& out, const Point& p);
		double distance(const Point& p);
		double distance2(const Point& p);
		static Point EnterPoint( const char* cord1, const char* cord2);
		~Point();
};
#endif

