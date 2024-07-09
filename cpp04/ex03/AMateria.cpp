#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void)
{
	// std::cout << "AMateria default constructor" << std::endl;
}

AMateria::~AMateria(void)
{
	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const  AMateria& am)
{
	this->_type = am._type;
	return *this;
}
AMateria::AMateria(const AMateria& am)
{
	*this = am;
}
void	AMateria::use(ICharacter& target) 
{
	std::cout << target.getName() << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

std::string const& AMateria::getType(void) const 
{
	return  this->_type;
}