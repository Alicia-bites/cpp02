#include "Fixed.hpp"

int main(void)
{
	// Fixed a;
	// Fixed b(a);
	// Fixed c;
	// c = b;
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	float floatNb = 5.5;

	Fixed a(5);
	Fixed b(floatNb);
	// a.toFloat();
	a.toInt();

	return 0;
}