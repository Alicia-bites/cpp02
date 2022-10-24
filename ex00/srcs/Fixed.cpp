# include "Fixed.hpp"

// default constructor
Fix::Fix()
{}

// constructor
// Fix::Fix()
// {}

// copy constructor
Fix::Fix(const Fix& f)
{}

Fix	&Fix::operator=(const Fix &rhs)
{
	this->str = rhs.str;
	return (*this);
}

// destructor
Fix::~Fix()
{}