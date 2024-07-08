#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Default Character constructor called" << std::endl;
	this->_name = "Default Character";
}

Character::~Character (void)
{
	std::cout << "Character destructor called" << std::endl;
}

Character& Character::operator=(const Character& c)
{
	this->_name = c._name;
	return *this;
}
Character::Character(const Character& c)
{
	*this = c;
}
std::string const&  Character::getName(void) const
{
	return this->_name;
}
void Character::equip(AMateria* m)
{

}