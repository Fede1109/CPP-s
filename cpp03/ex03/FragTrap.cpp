#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default Fragtrap constructor called" << std::endl;
	this->_name = "FT";
	this->_health = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;

	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed" << std::endl;
}
FragTrap::FragTrap(const FragTrap& ft)
{
	*this = ft;
	std::cout << "FragTrap copy constructor called" << std::endl;
	return ;
}
FragTrap& FragTrap::operator=(const FragTrap &ft)
{
	this->_name = ft._name;
	this->_health = ft._health;
	this->_energy_points = ft._energy_points;
	this->_attack_dmg = ft._attack_dmg;
	return *this;
}
void FragTrap::attack(const std::string &target)
{
	if (this->_energy_points < 1)
	{
		std::cout << "FragTrap " << this->_name << " is exhausted!" << std::endl;
		return;
	}
	if (this->_health < 1)
	{
		std::cout << "FragTrap " << this->_name << " is dead!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " destroyed"  << target << " after dealing " << this->_attack_dmg << " of damage!" << std::endl;
	return;
}
void FragTrap::highFivesGuys(void)
{
	if (this->_energy_points < 1)
	{
		std::cout << "FragTrap " << this->_name << " is exhausted!" << std::endl;
		return;
	}
	if (this->_health < 1)
	{
		std::cout << "FragTrap " << this->_name << " is dead!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " wants to high five!" << std::endl;
}