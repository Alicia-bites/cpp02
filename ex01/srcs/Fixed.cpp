# include "Fixed.hpp"

// default constructor
Fixed::Fixed()
: binaryPoint_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// constructor
Fix::Fix(const int int_nb)
{

}

// other constructor
Fix::Fix(const float float_nb)
{

}

// copy constructor
Fixed::Fixed(const Fixed& ori)
{
	std::cout << "Copy constructor called" << std::endl;
	binaryPoint_ = ori.binaryPoint_;

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
	return binaryPoint_;
}

// define binary point?
void Fixed::setRawBits(int const raw)
{
	binaryPoint_ = raw;
}

float Fixed::tofloat() const
{

}

int	Fixed::toInt() const
{
	
}