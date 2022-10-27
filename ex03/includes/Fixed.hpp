#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

# define DARKVIOLET1 "\033[38;5;128m"
# define DARKVIOLET2 "\033[38;5;92m"
# define DEEPPINK1 "\033[38;5;198m"
# define DEEPPINK2 "\033[38;5;199m"
# define DEEPPINK3 "\033[38;5;197m"
# define DEEPPINK4 "\033[38;5;161m"
# define DEEPPINK5 "\033[38;5;162m"
# define DEEPPINK6 "\033[38;5;125m"
# define DEEPPINK7 "\033[38;5;53m"
# define DEEPPINK8 "\033[38;5;89m"
# define DEEPSKYBLUE1 "\033[38;5;39m"
# define DEEPSKYBLUE2 "\033[38;5;38m"
# define DEEPSKYBLUE3 "\033[38;5;31m"
# define DEEPSKYBLUE4 "\033[38;5;32m"
# define DEEPSKYBLUE5 "\033[38;5;23m"
# define DEEPSKYBLUE6 "\033[38;5;24m"
# define DEEPSKYBLUE7 "\033[38;5;25m"
# define DODGERBLUE1 "\033[38;5;33m"
# define DODGERBLUE2 "\033[38;5;27m"
# define DODGERBLUE3 "\033[38;5;26m"
# define RESET "\033[0m"

class Fixed
{
	private:
		int					fixedPoint_;
		static const int	fracBits_ = 8;
		int					intNb_;
		float				floatNB_;

	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed& f);
		~Fixed();

		Fixed 	&operator=(const Fixed& rhs);

		int		operator<(const Fixed& rhs) const;
		int		operator<=(const Fixed& rhs) const;
		int		operator>(const Fixed& rhs) const;
		int		operator>=(const Fixed& rhs) const;
		int		operator==(const Fixed& rhs) const;
		int		operator!=(const Fixed& rhs) const;

		Fixed	operator+(const Fixed& rhs) const;
		Fixed	operator-(const Fixed& rhs) const;
		Fixed	operator*(const Fixed& rhs) const;
		Fixed	operator/(const Fixed& rhs) const;

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed 	&operator--(void);
		Fixed 	operator--(int);

		static	Fixed	&min(Fixed &bacon, Fixed &omelet);
		static	Fixed	&max(Fixed &bacon, Fixed &omelet);
		static	const Fixed	&min(Fixed const &bacon, Fixed const &omelet);
		static	const Fixed	&max(Fixed const &bacon, Fixed const &omelet);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int 	toInt( void ) const;

};

std::ostream &operator<<(std::ostream& o, const Fixed& rhs);


#endif