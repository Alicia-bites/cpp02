#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fix
{
	private:
		int	fixePoint;
		static const int fracBits;
	public:
		Fix();
		Fix(const Fix& f);
		Fix &operator=(const Fix rhs);
		~Fix();
}

#endif