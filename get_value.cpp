#include <iostream>
double getValue(const char* str)
{
	while (true) 
	{
		std::cout << str;
		double a;
		std:: cin >> a;
		if (std:: cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "That input is invalid.  Please try again.\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return a;
		}
	}
}