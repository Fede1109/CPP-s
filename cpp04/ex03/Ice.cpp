#include "./Ice.hpp"
#include "./ICharacter.hpp"

Ice::Ice(void) : AMateria()
{
	// std::cout << "Default Ice constructor" << std::endl;
	this->_type =  "ice";
}

Ice::~Ice(void)
{
	// std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice& c)
{
	this->_type = c._type;
	return *this;
}

Ice::Ice(const Ice& c)
{
	*this = c;
	// std::cout << "Ice copy constructor called" << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*"<< std::endl;
}
AMateria* Ice::clone (void) const
{
	return (new Ice);
}