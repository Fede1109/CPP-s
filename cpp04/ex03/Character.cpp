#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character(void)
{
	std::cout << "Default Character constructor called" << std::endl;
	this->_name = "Default Character";
}

Character::Character(std::string name)
{
	this->_name = name;
}

Character::~Character(void)
{
	int i = 0;
	std::cout << "Character destructor called" << std::endl;
	while (_addresses[i])
	{
		delete[] _addresses[i];
		i++;
	}
	delete[] _addresses;
}
//TODO: Checkear deepcopies 
Character &Character::operator=(const Character &c)
{
	this->_name = c._name;
	return *this;
}
Character::Character(const Character &c)
{
	*this = c;
}

std::string const &Character::getName(void) const
{
	return this->_name;
}
void Character::equip(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx > 4)
		return ;
	saveAdress(materias[idx]);
	materias[idx] = NULL;
	// delete materias[idx];
}
void Character::use(int idx, ICharacter &target)
{
	Cure *c;
	Ice *i;
	if (this->materias[idx]->getType() == "Ice")
		c->use(target);
	else if (this->materias[idx]->getType() == "Cure")
		i->use(target);
}

void Character::saveAdress(AMateria *adress)
{
	for (size_t i = 0; i < 50; i++)
	{
		_addresses[i] = adress;
	}
	
}