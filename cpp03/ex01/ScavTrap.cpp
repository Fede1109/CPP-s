#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Defaut ScavTrap constructor called" << std::endl;
	this->_name = "ST";
	this->_health = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;

	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st)
{
	*this = st;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &st)
{
	this->_name = st._name;
	this->_health = st._health;
	this->_energy_points = st._energy_points;
	this->_attack_dmg = st._attack_dmg;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points < 1)
	{
		std::cout << "ScavTrap " << this->_name << " is exhausted!" << std::endl;
		return;
	}
	if (this->_health < 1)
	{
		std::cout << "ScavTrap " << this->_name << " was defeated and can not move!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " destroyed"  << target << " after dealing " << this->_attack_dmg << " of damage!" << std::endl;
	return;
}

void ScavTrap::guardGate(void)
{
	if (this->_energy_points < 1)
	{
		std::cout << "ScavTrap " << this->_name << " is exhausted!" << std::endl;
		return;
	}
	if (this->_health < 1)
	{
		std::cout << "ScavTrap " << this->_name << " was defeated and can not move!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " has adopted Guard keeper mode!" << std::endl;
	return;
}