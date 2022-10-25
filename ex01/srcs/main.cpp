#include "Fixed.hpp"

int main(void)
{
	Fixed a;

	// b is a copy of a
	Fixed b(a);
	
	Fixed c;

	// we want c to have the same binary point as b
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}