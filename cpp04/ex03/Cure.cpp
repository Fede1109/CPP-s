#include "./Cure.hpp"

Cure::Cure(void) : AMateria()
{
	std::cout << "Default Cure constructor" << std::endl;
	this->type =  "cure";
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure& c)
{
	this->type = c.type;
	return *this;
}

Cure::Cure(const Cure& c)
{
	*this = c;
	std::cout << "Cure copy constructor called" << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals" << target.getName() << std::endl;
}
