#include "Fixed.hpp"

// int main(void)
// {

// 	Fixed a(2);
// 	Fixed b(4);

// 	Fixed res = a + b;
// 	std::cout << "res = " << res << std::endl;

// 	return 0;
// }

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl << std::endl;

	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl << std::endl;
// 
	std::cout << a << std::endl;
	std::cout << b << std::endl;	
	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}

// // // Output should be :

// 0

// 0.00390625
// 0.00390625
// 0.00390625

// 0.0078125
// 10.1016
// 10.1016