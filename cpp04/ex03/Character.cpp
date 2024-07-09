#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character(void)
{
	std::cout << "Default Character constructor called" << std::endl;
	this->_name = "Default Character";
	for (size_t i = 0; i < 100; i++)
	{
		_addresses[i] = NULL;
	}
}

Character::Character(std::string name)
{
	this->_name = name;
	for (size_t i = 0; i < 100; i++)
	{
		_addresses[i] = NULL;
	}
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
	{
		if (_addresses[i])
		{
			delete _addresses[i];
			_addresses[i] = NULL;
		}
	}
}
Character &Character::operator=(const Character &c)
{
	if (this != &c)
	{
		for (size_t i = 0; i < 4; ++i)
		{
			delete _materias[i];
			_materias[i] = NULL;
		}
		for (size_t i = 0; i < 100; ++i)
		{
			delete _addresses[i];
			_addresses[i] = NULL;
		}

		for (size_t i = 0; i < 4; ++i)
		{
			if (c._materias[i])
			{
				_materias[i] = c._materias[i]->clone();
			}
		}

		for (size_t i = 0; i < 100; ++i)
		{
			if (c._addresses[i])
			{
				_addresses[i] = c._addresses[i]->clone();
			}
		}

		_name = c._name;
	}

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
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx > 4)
		return;
	saveAdress(_materias[idx]);
	_materias[idx] = NULL;
	// delete materias[idx];
}
void Character::use(int idx, ICharacter &target)
{
	Cure *c = NULL;
	Ice *i = NULL;

	if (this->_materias[idx]->getType() == "Ice")
		c->use(target);
	else if (this->_materias[idx]->getType() == "Cure")
		i->use(target);
}

void Character::saveAdress(AMateria *adress)
{
	for (size_t i = 0; i < 50; i++)
	{
		_addresses[i] = adress;
	}
}