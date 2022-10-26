# include "Fixed.hpp"

// CONSTRUCTIONS -----------------------------------------------------------------------

// default constructor
Fixed::Fixed()
: fixedPoint_(0)
{
	std::cout << DARKVIOLET1 << "Default constructor called" << RESET << std::endl;
}

// constructor
// converts an integer to its
// corresponding fixed-point value.
Fixed::Fixed(const int intNb)
{
	std::cout << DARKVIOLET2 << "Int constructor called" << RESET << std::endl;
	fixedPoint_ = intNb << (1 * fracBits_);
}

// other constructor
// converts a floating point number to its
// corresponding fixed-point value.
Fixed::Fixed(const float floatNb)
{
	std::cout << DEEPPINK1 << "Float constructor called" << RESET << std::endl;
	fixedPoint_ = roundf(floatNb * (1 << fracBits_));
}

// copy constructor
Fixed::Fixed(const Fixed& ori)
{
	std::cout
		<< DEEPSKYBLUE1
		<< "Copy constructor called"
		<< RESET
		<< std::endl;
	fixedPoint_ = ori.fixedPoint_;

}

// If a and b are of type "Fixed", = will give to a the fixed-point value of b. 
Fixed &Fixed::operator=(const Fixed& rhs)
{
	std::cout << DEEPSKYBLUE3 << "Copy assignment operator called" << RESET << std::endl;
	setRawBits(rhs.getRawBits());
	return (*this);
}

// << will print floating point representation of a if a is of type "Fixed"
std::ostream &operator<<(std::ostream& o, const Fixed& rhs)
{
	o << rhs.toFloat();
	return (o);
}

// destructor
Fixed::~Fixed()
{
	std::cout << DEEPPINK8 << "Destructor called" << RESET << std::endl;
}



// FUNCTIONS ------------------------------------------------------------------------------

int Fixed::getRawBits(void) const
{
	return fixedPoint_;
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint_ = raw;
}

float Fixed::toFloat() const
{
	float floatNb;
	floatNb = (float)fixedPoint_ / (1 << 8);
	return floatNb;
}

int	Fixed::toInt() const
{
	int intNb;
	intNb = fixedPoint_ >> fracBits_;
	return intNb;
}