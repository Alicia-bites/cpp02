#include "Fixed.hpp"

int main(void)
{
	Fixed a(2.678f);
	Fixed b(4);

	std::cout << "Is " << a << " smaller than " << b << "s ?" << std::endl;
	std::cout << "1 for yes, 0 for no." << std::endl; 
	std::cout << "a < b --> " << (a < b) << std::endl;
	std::cout << std::endl;

	std::cout << "Is " << a << " bigger than " << b << "s ?" << std::endl;
	std::cout << "1 for yes, 0 for no." << std::endl; 
	std::cout << "a > b --> " << (a > b) << std::endl;
	std::cout << std::endl;

	std::cout << "Are " << a << " and " << b << " equal?" << std::endl;
	std::cout << "1 for yes, 0 for no." << std::endl; 
	std::cout << "a == b --> " << (a == b) << std::endl;
	std::cout << std::endl;

	std::cout << "Are " << a << " and " << b << " different?" << std::endl;
	std::cout << "1 for yes, 0 for no." << std::endl; 
	std::cout << "a != b --> " << (a != b) << std::endl;
	std::cout << std::endl;

//	-----------------------------------------------------------------------------------------------

	Fixed c(2.5f);
	Fixed d(4);
	std::cout << c << " + " << d << " = " << a + b << std::endl;
	std::cout << std::endl;

	Fixed e(2.5f);
	Fixed f(4);
	std::cout << e << " - " << f << " = " << a - b << std::endl;
	std::cout << std::endl;

	Fixed g(2.5f);
	Fixed h(4);
	std::cout << g << " * " << h << " = " << a * b << std::endl;
	std::cout << std::endl;

	Fixed i(2.5f);
	Fixed j(4);
	std::cout << i << " / " << j << " = " << a / b << std::endl;
	std::cout << std::endl;


//	-----------------------------------------------------------------------------------------------

	Fixed k(2.678f);
	std::cout << "Let's pre-increment a" << std::endl;
	std::cout << "++" << k << " = " << ++k << std::endl;
	std::cout << std::endl;

	Fixed l(4);
	std::cout << "Let's post-increment b" << std::endl;
	std::cout << l << "++" << " = " << l++ << std::endl;
	std::cout << std::endl;

	Fixed m(2.678f);
	std::cout << "Let's pre-decrement a" << std::endl;
	std::cout << "--"<< m << " = " << --m << std::endl;
	std::cout << std::endl;

	Fixed n(4);
	std::cout << "Let's post-decrement b" << std::endl;
	std::cout << n << "--" << " = " << n-- << std::endl;
	std::cout << std::endl;

//	-----------------------------------------------------------------------------------------------

	return 0;
}

// int	main(void)
// {
// 	Fixed a;
// 	Fixed const b(Fixed(5.05f) * Fixed(2));
	
// 	std::cout << a << std::endl << std::endl;

// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl << std::endl;
// // 
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;	
// 	std::cout << Fixed::max(a, b) << std::endl;

// 	return 0;
// }

// // // Output should be :

// 0

// 0.00390625
// 0.00390625
// 0.00390625

// 0.0078125
// 10.1016
// 10.1016