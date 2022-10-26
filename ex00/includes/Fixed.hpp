#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixedPoint_;
		static const int	fracBits_ = 8;
	public:
		Fixed();
		Fixed(const Fixed& f);
		Fixed &operator=(const Fixed& rhs);
		~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif