# include "Fixed.hpp"

// default constructor
Fixed::Fixed()
: fixedPoint_(0)
{
	std::cout << ROYALBLUE1 << "Default constructor called" << RESET << std::endl;
}

// constructor
// converts an integer to its
// corresponding fixed-point value.
Fixed::Fixed(const int intNb)
{
	std::cout << RED3 << "Converting integer " << intNb << " to its fixed-point value." << RESET << std::endl;
	fixedPoint_ = intNb << (1 * fracBits_);
	//intNb_ = intNb * 256;
	std::cout << fixedPoint_ << std::endl;
}

// other constructor
// converts a floating point number to its
// corresponding fixed-point value.
Fixed::Fixed(const float floatNb)
{
	std::cout << SLATEBLUE3 << "Converting floating point number "
	<< floatNb << " to its fixed-point value." << RESET << std::endl;
	fixedPoint_ = floatNb * (1 << fracBits_);
	std::cout << fixedPoint_ << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed& ori)
{
	std::cout
		<< ORANGERED1
		<< "Copy constructor called"
		<< RESET
		<< std::endl;
	fixedPoint_ = ori.fixedPoint_;

}

Fixed &Fixed::operator=(const Fixed& rhs)
{
	std::cout << ORANGE1 << "Copy assignment operator called" << RESET << std::endl;
	setRawBits(rhs.getRawBits());
	return (*this);
}

// destructor
Fixed::~Fixed()
{}


int Fixed::getRawBits(void) const
{
	std::cout << STEELBLUE1 << "getRawBits member function called" << RESET << std::endl;
	return fixedPoint_;
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint_ = raw;
}

float Fixed::toFloat() const
{
	std::cout << ORANGE1 << "Converting fixed-point number " << fixedPoint_ << " to float." << RESET << std::endl;
	float floatNb;
	floatNb = fixedPoint_ >> fracBits_;
	std::cout << floatNb << std::endl;
	return floatNb;
}

int	Fixed::toInt() const
{
	std::cout << STEELBLUE1 << "Converting fixed-point number " << fixedPoint_ << " to int." << RESET << std::endl;
	int intNb;
	intNb = fixedPoint_ >> fracBits_;
	std::cout << intNb << std::endl;
	return intNb;
}