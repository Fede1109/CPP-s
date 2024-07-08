#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

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
	for (size_t i = 0; i < 4; i++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	
}
void	Character::use(int idx, ICharacter& target)
{
	Cure	*c;
	Ice		*i;
	if (this->materias[idx]->getType() == "Ice")
		c->use(target);
		// std::cout << "* shoots an ice bolt at" << target.getName() << std::endl;
	else if (this->materias[idx]->getType() == "Cure")
		i->use(target);
		// std::cout << "* heals " << target.getName() <<"'s wounds *" << target.getName() << std::endl;

}