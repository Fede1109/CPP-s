#include "./Ice.hpp"

Ice::Ice(void) : AMateria()
{
	std::cout << "Default Ice constructor" << std::endl;
	this->type =  "ice";
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice& c)
{
	this->type = c.type;
	return *this;
}

Ice::Ice(const Ice& c)
{
	*this = c;
	std::cout << "Ice copy constructor called" << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* heals" << target.getName() << std::endl;
}
