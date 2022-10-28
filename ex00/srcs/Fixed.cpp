# include "Fixed.hpp"

// default constructor
Fixed::Fixed()
: fixedPoint_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed& ori)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedPoint_ = ori.fixedPoint_;

}

// If a and b are of type "Fixed", = will give to a the fixed-point value of b. 
Fixed &Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPoint_ = rhs.fixedPoint_;
	return (*this);
}

// destructor
Fixed::~Fixed()
{}

// get object's fixed-point value
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPoint_;
}

// set object's fixed-point value
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fixedPoint_ = raw;
}