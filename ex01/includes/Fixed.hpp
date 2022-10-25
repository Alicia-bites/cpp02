#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					binaryPoint_;
		static const int	fracBits_;
		int					int_nb_;
		float				float_nb_;
	public:
		Fixed();
		Fix(const int nb);
		Fix(const float nb);
		Fixed(const Fixed& f);
		Fixed &operator=(const Fixed& rhs);
		~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int 	toInt( void ) const;
};

#endif