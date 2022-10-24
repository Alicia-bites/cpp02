// Exemple d'operator overload
class Class
{
	Class(std::string s);
	Class &operator=(const Class rhs);
	private :
		std::string str;
};

Class::Class(std::string s)
{
	this->str = s;
}

Class	&Class::operator=(const Class &rhs)
{
	this->str = rhs.str;
	return (*this);
}


Class a("toto");
Class b;

b = a;