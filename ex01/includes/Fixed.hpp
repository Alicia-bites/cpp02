#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
# define ORANGERED1 "\033[38;5;202m"
# define RESET "\033[0m"
# define STEELBLUE1 "\033[38;5;67m"
# define ROYALBLUE1 "\033[38;5;63m"
# define ORANGE1 "\033[38;5;214m"
# define RED3 "\033[38;5;160m"
# define RESET "\033[0m"
# define SLATEBLUE3 "\033[38;5;62m"

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
		Fixed &operator=(const Fixed& rhs);
		~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int 	toInt( void ) const;
};

#endif