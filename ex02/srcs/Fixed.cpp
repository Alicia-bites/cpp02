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
	fixedPoint_ = intNb << fracBits_;
}

// other constructor
// converts a floating point number to its
// corresponding fixed-point value.
Fixed::Fixed(const float floatNb)
{
	std::cout << DEEPPINK1 << "Float constructor called" << RESET << std::endl;
	fixedPoint_ = (int)roundf(floatNb * (1 << fracBits_));
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

// OPERATOR OVERLOADS -------------------------------------------------------------------------

// If a and b are of type "Fixed", = will give to lhs the fixed-point value of rhs. 
Fixed &Fixed::operator=(const Fixed& rhs)
{
	std::cout << DEEPSKYBLUE3 << "Copy assignment operator called" << RESET << std::endl;
	this->fixedPoint_ = rhs.fixedPoint_;
	return *this;
}

// << will print floating point representation of rhs if rhs is of type "Fixed"
std::ostream &operator<<(std::ostream& o, const Fixed& rhs)
{
	o << rhs.toFloat();
	return o;
}

// < will return 1 if fixed-point value of lhs is smaller than rhs's.
int Fixed::operator<(const Fixed& rhs) const
{
	if (this->fixedPoint_ < rhs.fixedPoint_)
		return 1;
	return 0;
}

// < will return 1 if fixed-point value of lhs is smaller or equal than rhs's.
int Fixed::operator<=(const Fixed& rhs) const 
{
	if (this->fixedPoint_ <= rhs.fixedPoint_)
		return 1;
	return 0;
}

// < will return 1 if fixed-point value of lhs is bigger than rhs's.
int Fixed::operator>(const Fixed& rhs) const
{
	if (this->fixedPoint_ > rhs.fixedPoint_)
		return 1;
	return 0;
}

// < will return 1 if fixed-point value of lhs is bigger or equal than rhs's.
int Fixed::operator>=(const Fixed& rhs) const
{
	if (this->fixedPoint_ >= rhs.fixedPoint_)
		return 1;
	return 0;
}

int Fixed::operator==( Fixed const & rhs) const
{
	if (this->fixedPoint_ == rhs.fixedPoint_)
		return (1);
	return (0);
}

int Fixed::operator!=( Fixed const & rhs) const
{
	if (this->fixedPoint_ != rhs.fixedPoint_)
		return 1;
	return 0;
}

//------- +*-/

// + will return the result of lhs' fixed-point value + rhs's fixed-point value.
Fixed	Fixed::operator+(const Fixed& rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed& rhs) const
{
	return Fixed(this->toFloat()- rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed& rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed& rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

//-------- ++--

Fixed	&Fixed::operator++(void) // ++i
{
	this->fixedPoint_ += 1;
	return *this;
}

Fixed	Fixed::operator++(int) // i++
{
	Fixed plusOne = *this;
	fixedPoint_ += 1;
	return plusOne;
}

Fixed	&Fixed::operator--(void) // --i
{
	this->fixedPoint_ -= 1;
	return *this;
}

Fixed	Fixed::operator--(int) // i++
{
	Fixed minusOne = *this;

	fixedPoint_ =- 1;
	return minusOne;
}

// ---------------------------------------------------------------------------------------
Fixed	&Fixed::min(Fixed &bacon, Fixed &omelet)
{
	if (bacon.fixedPoint_ < omelet.fixedPoint_)
		return bacon;
	return omelet;
}

Fixed	&Fixed::max(Fixed &bacon, Fixed &omelet)
{
	if (bacon.fixedPoint_ > omelet.fixedPoint_)
		return bacon;
	return omelet;
}

Fixed	const &Fixed::min(Fixed const &bacon, Fixed const &omelet)
{
	if (bacon.fixedPoint_ < omelet.fixedPoint_)
		return bacon;
	return omelet;
}

Fixed	const &Fixed::max(Fixed const &bacon, Fixed const &omelet)
{
	if (bacon.fixedPoint_ > omelet.fixedPoint_)
		return bacon;
	return omelet;
}


// ---------------------------------------------------------------------------------------

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
	floatNb = (float)fixedPoint_ / (1 << fracBits_);
	return floatNb;
}

int	Fixed::toInt() const
{
	int intNb;
	intNb = fixedPoint_ >> fracBits_;
	return intNb;
}