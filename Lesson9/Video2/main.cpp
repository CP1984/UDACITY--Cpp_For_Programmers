/*Goal: look at a program, and see if we can make it more versatile*/

#include "main.hpp"


int main()
{
	Compare c;
	int a = 5;
	int b = 4;
	float f1 = 5.43;
	float f2 = 6.32;
	char c1 = 'c';
	char c2 = 'z';
	std::cout << c.findSmaller(a, b) << " is the smaller of " << a << " and " << b << "\n";
	std::cout << c.findSmaller(f1, f2) << " is the smaller of " << f1 << " and " << f2 << "\n";
	std::cout << c.findSmaller(c1, c2) << " is the smaller of " << c1 << " and " << c2 << "\n";

	return 0;
}


