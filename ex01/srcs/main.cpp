#include "Fixed.hpp"

// int main(void)
// {

// 	Fixed a(5);
// 	Fixed b(floatNb);
// 	// a.toFloat();
// 	a.toInt();

// 	return 0;
// }

int main()
{
	Fixed a;
	Fixed const b(10); // constructing instance from integer
	Fixed const c(42.42f); // constructing instance from floating-point
	Fixed const d(b); // constructing instance from integer

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl; //using << operator overload to print variable of type "Fixed"
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Additionnal tests :" << std::endl;
	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;

	return 0;
}

// // // Output should be :

// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Copy assignment operator called
// Float constructor called
// Copy assignment operator called
// Destructor called
// a is 1234.43
// b is 10
// c is 42.4219
// d is 10
// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer
// Destructor called
// Destructor called
// Destructor called
// Destructor called