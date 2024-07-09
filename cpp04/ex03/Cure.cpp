#include "./Cure.hpp"
#include "./ICharacter.hpp"

Cure::Cure(void) : AMateria()
{
	// std::cout << "Default Cure constructor" << std::endl;
	this->_type =  "cure";
}

Cure::~Cure(void)
{
	// std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure& c)
{
	this->_type = c._type;
	return *this;
}

Cure::Cure(const Cure& c)
{
	*this = c;
	std::cout << "Cure copy constructor called" << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<"'s wounds *" << std::endl;
}

AMateria* Cure::clone(void) const
{
	return (new Cure);
}
