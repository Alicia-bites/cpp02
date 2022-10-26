# include "Fixed.hpp"

// default constructor
Fixed::Fixed()
: fixedPoint_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// constructor
// Fix::Fix()
// {}

// copy constructor
Fixed::Fixed(const Fixed& ori)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedPoint_ = ori.fixedPoint_;

}

Fixed &Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return (*this);
}

// destructor
Fixed::~Fixed()
{}


int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPoint_;
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint_ = raw;
}